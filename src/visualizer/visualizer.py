import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.time import Time

import math
import tf2_ros

from drive_msgs.msg import VehicleState, NavigationData, DetectionData
from visualization_msgs.msg import Marker, MarkerArray

from libs.rviz_utils import *

def quaternion_from_euler(roll, pitch, yaw):
    """
    Convert Euler angles to quaternion.

    :param roll: rotation around x-axis in radians (float)
    :param pitch: rotation around y-axis in radians (float)
    :param yaw: rotation around z-axis in radians (float)
    :return: quaternion as a tuple (x, y, z, w)
    """
    qx = math.sin(roll / 2) * math.cos(pitch / 2) * math.cos(yaw / 2) - math.cos(roll / 2) * math.sin(pitch / 2) * math.sin(yaw / 2)
    qy = math.cos(roll / 2) * math.sin(pitch / 2) * math.cos(yaw / 2) + math.sin(roll / 2) * math.cos(pitch / 2) * math.sin(yaw / 2)
    qz = math.cos(roll / 2) * math.cos(pitch / 2) * math.sin(yaw / 2) - math.sin(roll / 2) * math.sin(pitch / 2) * math.cos(yaw / 2)
    qw = math.cos(roll / 2) * math.cos(pitch / 2) * math.cos(yaw / 2) + math.sin(roll / 2) * math.sin(pitch / 2) * math.sin(yaw / 2)
    return (qx, qy, qz, qw)

class Visualizer(Node):
    def __init__(self):
        super().__init__('visualizer')

        self.ego_car = CarViz('ego_car', 'ego_car_info', [0, 0, 0], [241, 76, 152, 1])
        self.ego_car_info = CarInfoViz('ego_car', 'ego_car', '', [0, 0, 0])
        self.br = tf2_ros.TransformBroadcaster(self)

        # calibration
        self.static_br = tf2_ros.StaticTransformBroadcaster(self)
        static_transforms = [
            ((1.3025, 0.0, 0.0), (0, 0, 0, 1), 'ego_car', 'gps'),   # center
            ((1.1, 0.0, 1.5), (0, 0, 0, 1), 'os_sensor', 'gps'),    # lidar
            ((1.8, 0.0, 1.0), (0, 0, 0, 1), 'front', 'gps'),        # front camera
            #((1.7, 0.7, 1.0), (0, 0, 0, 1), 'left_front', 'gps'),   # left 
            #((1.4, 0.7, 1.0), (0, 0, 0, 1), 'left_rear', 'gps'),    # left
            #((1.7, -0.7, 1.0), (0, 0, 0, 1), 'right_front', 'gps'), # right
            #((1.4, -0.7, 1.0), (0, 0, 0, 1), 'right_rear', 'gps')   # right
        ]
        self.publish_static_tfs(static_transforms)

        self.ego_pos = [0.0, 0.0]
        self.ego_time = Time()

        qos_profile = QoSProfile(depth=10)

        self.pub_viz_car = self.create_publisher(Marker, '/visualizer/car', qos_profile)
        self.pub_viz_car_info = self.create_publisher(Marker, '/visualizer/car_info', qos_profile)
        self.pub_path_viz = self.create_publisher(Marker, '/visualizer/local_path', qos_profile)
        self.pub_kappa_viz = self.create_publisher(Marker, '/visualizer/kappa_viz', qos_profile)
        self.pub_objects_viz = self.create_publisher(MarkerArray, '/visualizer/objects', qos_profile)
        
        ######################################## Topic Message 수정 #########################################
        self.create_subscription(VehicleState, '/VehicleState', self.vehicle_state_cb, qos_profile)
        self.create_subscription(NavigationData, '/NavigationData', self.navigation_data_cb, qos_profile)
        self.create_subscription(DetectionData, '/DetectionData', self.detection_data_cb, qos_profile)
        ####################################################################################################

    def vehicle_state_cb(self, msg):
        yaw = msg.heading.data
        v = msg.velocity.data
        info = f"{(v*3.6):.2f}km/h {yaw:.2f}deg"
        self.ego_car_info.text = info
        quaternion = quaternion_from_euler(math.radians(0), math.radians(0), math.radians(yaw))  # RPY
        
        if self.ego_time != msg.header.stamp:
            self.br.sendTransform(
                (self.ego_pos[0], self.ego_pos[1], 0),
                (quaternion[0], quaternion[1], quaternion[2], quaternion[3]),
                self.ego_time,
                'gps',
                'world'
            )
            self.ego_time = msg.header.stamp
        
        self.pub_viz_car.publish(self.ego_car)
        self.pub_viz_car_info.publish(self.ego_car_info)
    
    def navigation_data_cb(self, msg):
        self.ego_pos = [msg.current_location.x, msg.current_location.y]
        path = []
        for pts in msg.planned_route:
            path.append([pts.x, pts.y])
        viz_path = path_viz(path)
        self.pub_path_viz.publish(viz_path)
    
    def detection_data_cb(self, msg):
        objs = []
        for obj in msg.objects:
            objs.append([obj.position.x, obj.position.y, obj.heading.data])
        viz_objects = ObjectsViz(objs)
        self.pub_objects_viz.publish(viz_objects)
    
    # calibration
    def publish_static_tfs(self, transforms):
        static_transform_stamped_vec = []
        for translation, rotation, child_frame, parent_frame in transforms:
            static_transform_stamped = tf2_ros.StaticTransformBroadcaster()
            static_transform_stamped.header.frame_id = parent_frame
            static_transform_stamped.child_frame_id = child_frame
            static_transform_stamped.transform.translation.x = translation[0]
            static_transform_stamped.transform.translation.y = translation[1]
            static_transform_stamped.transform.translation.z = translation[2]
            static_transform_stamped.transform.rotation.x = rotation[0]
            static_transform_stamped.transform.rotation.y = rotation[1]
            static_transform_stamped.transform.rotation.z = rotation[2]
            static_transform_stamped.transform.rotation.w = rotation[3]
            static_transform_stamped_vec.append(static_transform_stamped)
        
        self.static_br.sendTransform(static_transform_stamped_vec)
        

def main(args=None):
    rclpy.init(args=args)
    visualizer = Visualizer()
    rclpy.spin(visualizer)
    visualizer.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

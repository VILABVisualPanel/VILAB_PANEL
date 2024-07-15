import rclpy
from rclpy.node import Node

from drive_msgs.msg import UserInput, CANOutput, VehicleState, Actuator, NavigationData, SystemStatus, LaneData
from std_msgs.msg import Float32MultiArray, Int32

STEER_RATIO = 12.9
MPS_TO_KPH = 3.6

class ROSHandler(Node):
    def __init__(self):
        super().__init__('ui')
        self.set_values()
        self.set_publisher_protocol()
        self.set_subscriber_protocol()

    def set_values(self):
        self.ego_value = {'velocity': 0, 'steer': 0, 'accel': 0, 'brake': 0, 'gear': 'P'}
        self.target_value = {'velocity': 0, 'steer': 0, 'accel': 0, 'brake': 0}
        self.can_inform = {'eps_status': 'Off', 'acc_status': 'off'}
        self.system_status = {'mode': 0, 'signal': 0, 'lap_count': 0}
        # self.user_input = UserInput()
        self.user_value = {'user_mode': 0, 'user_signal': 0}
        self.lane_number = 0

    def set_publisher_protocol(self):
        ######################################## Topic Message 수정 #########################################
        self.pub_user_input = self.create_publisher(UserInput, '/UserInput', 1)
        ####################################################################################################
        
    def set_subscriber_protocol(self):
        ######################################## Topic Message 수정 #########################################
        self.create_subscription(CANOutput, '/CANOutput', self.can_output_cb, 10)
        self.create_subscription(VehicleState, '/VehicleState', self.vehicle_state_cb, 10)
        self.create_subscription(Actuator, '/control/target_actuator', self.target_actuator_cb, 10)
        self.create_subscription(NavigationData, '/NavigationData', self.navigation_data_cb, 10)
        self.create_subscription(SystemStatus, '/SystemStatus', self.system_status_cb, 10)
        self.create_subscription(LaneData, '/LaneData', self.lane_data_cb, 10)
        ####################################################################################################

    def can_output_cb(self, msg):
        self.ego_value['steer'] = -1 * float(msg.str_ang)
        self.ego_value['accel'] = float(msg.long_accel)
        self.ego_value['brake'] = float(msg.brk_cylinder)
        self.can_inform['eps_status'] = str(msg.eps_en_status)
        self.can_inform['acc_status'] = str(msg.acc_en_status)

    def vehicle_state_cb(self, msg):
        self.ego_value['velocity'] = int(msg.velocity * MPS_TO_KPH)
        self.ego_value['gear'] = str(msg.gear)

    def target_actuator_cb(self, msg):
        self.target_value['steer'] = -1 * msg.steer
        self.target_value['accel'] = msg.accel
        self.target_value['brake'] = msg.brake
    
    def navigation_data_cb(self, msg):
        self.target_value['velocity'] = int(msg.planned_velocity * MPS_TO_KPH)
    
    def system_status_cb(self, msg):
        self.system_status['mode'] = int(msg.system_mode)
        self.system_status['signal'] = int(msg.system_signal)
        self.system_status['lap_count'] = msg.lap_count

    def lane_data_cb(self, msg):
        if msg.current_lane != 0:
            self.lane_number = msg.current_lane
    
    def publish(self):
        self.user_input.user_mode = self.user_value['user_mode']
        self.user_input.user_signal = self.user_value['user_signal']
        self.pub_user_input.publish(self.user_input)
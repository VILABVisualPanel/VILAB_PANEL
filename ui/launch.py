import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mapviz',
            executable='mapviz',
            name='mapviz',
            output='screen',
            parameters=[{'local_xy_frame': '/map'}]
        ),
        Node(
            package='swri_transform_util',
            executable='initialize_origin.py',
            name='initialize_origin',
            output='screen',
            parameters=[
                {'local_xy_frame': '/map'},
                {'local_xy_origin': 'static_origin'},
                {'local_xy_origins': [
                    {'name': 'static_origin',
                     'latitude': 37.383863,
                     'longitude': 126.6556737,
                     'altitude': 7,
                     'heading': 0.0}
                ]}
            ],
            remappings=[('fix', '/navsat/fix')]
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='swri_transform',
            output='screen',
            arguments=['0', '0', '0', '0', '0', '0', '/map', '/origin', '100']
        )
    ])

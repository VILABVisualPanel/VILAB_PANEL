import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QVBoxLayout, QHBoxLayout, QLabel, QLineEdit
from PyQt5.QtCore import QTimer

from libs.VelocityGraph import VelocityGraph

from functools import partial

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32, Int8
# from drive_msgs.msg import Actuator, VehicleState

class MainWindow(QWidget):
    def __init__(self):
        super().__init__()
        
        self.current_velocity = 0.0
        self.target_velocity = 0.0

        self.ego_actuator = [0, 0, 0]
        self.target_actuator = [0, 0, 0]
        
        self.time = 0
        self.velocity_graph = VelocityGraph(self)

        rclpy.init(args=None)
        self.node = rclpy.create_node('long_control_ui')
        
        self.initUI()
        
        ######################################## Topic Message 수정 #########################################
        # self.ego_actuator_sub = self.node.create_subscription(Actuator, '/EgoActuator', self.ego_actuator_cb, 10)
        # self.vehicle_state_sub = self.node.create_subscription(VehicleState, '/VehicleState', self.vehicle_state_cb, 10)
        # self.target_actuator_sub = self.node.create_subscription(Actuator, '/control/target_actuator', self.target_actuator_cb, 10)
        ####################################################################################################
        
        self.pub_user_target_velocity = self.node.create_publisher(Float32, '/test/target_velocity', 10)
        self.pub_system_mode = self.node.create_publisher(Int8, '/state_machine/system_state', 10)

        self.initTimer()

    def ego_actuator_cb(self, msg):
        self.current_steer_label.setText(f'Current Steer: {round(msg.steer, 2)}')
        self.current_accel_label.setText(f'Current Accel: {round(msg.accel, 2)}') 
        self.current_brake_label.setText(f'Current Brake: {round(msg.brake, 2)}')
    
    def target_actuator_cb(self, msg):
        self.target_steer_label.setText(f'Target Steer: {round(msg.steer, 2)}')
        self.target_accel_label.setText(f'Target Accel: {round(msg.accel, 2)}') 
        self.target_brake_label.setText(f'Target Brake: {round(msg.brake, 2)}')
    
    def vehicle_state_cb(self, msg):
        self.current_velocity = round(msg.velocity * 3.6, 2)
        self.current_velocity_label.setText(f'Current Velocity: {self.current_velocity}')
    
    def initUI(self):
        # 전체 수직 레이아웃
        main_layout = QVBoxLayout()

        # 상단의 네 개의 버튼
        top_buttons_layout = QHBoxLayout()
        b_labels = ['Off', 'On', 'EPS Only', 'ACC Only']
        for i in range(4):
            button = QPushButton(b_labels[i], self)
            top_buttons_layout.addWidget(button)
            button.clicked.connect(partial(self.mode_publish, int(i)))
        main_layout.addLayout(top_buttons_layout)

        # 현재 Velocity와 Target Velocity 입력
        velocity_layout = QHBoxLayout()
        self.current_velocity_label = QLabel(f'Current Velocity: {self.current_velocity}', self)
        self.target_velocity_input = QLineEdit(self)
        self.send_velocity_button = QPushButton("Set Target Velocity", self)
        self.send_velocity_button.clicked.connect(self.update_velocity)

        velocity_layout.addWidget(self.current_velocity_label)
        velocity_layout.addWidget(self.target_velocity_input)
        velocity_layout.addWidget(self.send_velocity_button)
        main_layout.addLayout(velocity_layout)

        # 현재 Steer, Accel, Brake 값
        current_values_layout = QHBoxLayout()
        self.current_steer_label = QLabel(f'Current Steer: {self.ego_actuator[0]}', self)
        self.current_accel_label = QLabel(f'Current Accel: {self.ego_actuator[1]}', self)
        self.current_brake_label = QLabel(f'Current Brake: {self.ego_actuator[2]}', self)

        current_values_layout.addWidget(self.current_steer_label)
        current_values_layout.addWidget(self.current_accel_label)
        current_values_layout.addWidget(self.current_brake_label)
        main_layout.addLayout(current_values_layout)

        # 목표 Steer, Accel, Brake 값
        target_values_layout = QHBoxLayout()
        self.target_steer_label = QLabel(f'Target Steer: {self.target_actuator[0]}', self)
        self.target_accel_label = QLabel(f'Target Accel: {self.target_actuator[1]}', self)
        self.target_brake_label = QLabel(f'Target Brake: {self.target_actuator[2]}', self)

        target_values_layout.addWidget(self.target_steer_label)
        target_values_layout.addWidget(self.target_accel_label)
        target_values_layout.addWidget(self.target_brake_label)
        main_layout.addLayout(target_values_layout)

        main_layout.addWidget(self.velocity_graph)

        # 메인 윈도우 설정
        self.setLayout(main_layout)
        self.setWindowTitle('Control Panel')
        self.setGeometry(300, 300, 600, 400)

    def mode_publish(self, mode):
        self.pub_system_mode.publish(Int8(data=mode))
   
    def initTimer(self):
        self.timer = QTimer(self)
        self.timer.setInterval(100)  # Update every second
        self.timer.timeout.connect(self.update_graph)
        self.timer.start()

    def update_velocity(self):
        target_velocity = self.target_velocity_input.text()
        try:
            self.target_velocity = float(target_velocity)
            self.pub_user_target_velocity.publish(Float32(data=self.target_velocity/3.6))
        except ValueError:
            pass
    
    def update_graph(self):
        self.velocity_graph.set_speed(self.target_velocity, self.current_velocity)

def main():
    rclpy.init(args=sys.argv)
    app = QApplication(sys.argv)
    ex = MainWindow()
    ex.show()
    
    # Spin in a separate thread
    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(ex.node)

    try:
        app.exec_()
    finally:
        executor.shutdown()
        ex.node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

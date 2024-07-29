import sys
from PyQt5.QtWidgets import *
from PyQt5 import uic
from PyQt5.QtGui import QPixmap
from PyQt5.QtCore import Qt
import os
import rclpy
from rclpy.node import Node
from std_msgs.msg import String

####김호준 추가한 부분 ◎ 표시 하겠습니다###

# 현재 스크립트의 디렉토리를 기준으로 경로 설정
current_directory = os.path.dirname(os.path.abspath(__file__))
ui_path = os.path.join(current_directory, '../vilab_window.ui')
form_class = uic.loadUiType(ui_path)[0]

class MainWindow(QMainWindow, form_class):
    def __init__(self):
        super().__init__()
        self.setupUi(self)
        
        # logo setting
        self.kmuLabel = self.findChild(QLabel, 'kmuLabel')
        self.vilabLabel = self.findChild(QLabel, 'vilabLabel')
        
        self.set_image(self.kmuLabel, os.path.join(current_directory, '../pic', 'Signature_KMU4.jpg'))
        self.set_image(self.vilabLabel, os.path.join(current_directory, '../pic', 'vilab.png'))

        #####################################전체 버튼 및 센서 활성화 영역◎###########################################################
        # ros2 초기화
        rclpy.init()
        self.node = Node('sensor_status_checker')
        self.subscription = self.node_create_subscription(
            String, # 메시지 타입
            'sensor_status', # 토픽 이름
            self.sensor_status_checker, # 콜백 함수\
            10 # 큐 사이즈
        )
        self.subscription # 사용되지 않는 변수 경고 방지용



        # 버튼 상태 변수 초기화
        self.is_active = False

        # startbutton 
        self.startButton = self.findChild(QPushButton, 'startButton')

        # 버튼 클릭 이벤트 연결
        self.startButton.clicked.connect(self.toggle_activation)

        # 센서 상태 객체들 가져오기
        self.camfrontLabel = self.findChild(QLabel, 'camfrontLabel')
        self.camleftLabel = self.findChild(QLabel, 'camleftLabel')
        self.camrearLabel = self.findChild(QLabel, 'camrearLabel')
        self.camrightLabel = self.findChild(QLabel, 'camrightLabel')

        self.lidarLabel = self.findChild(QLabel, 'lidarLabel')
        self.ladar4dLabel = self.findChild(QLabel, 'ladar4dLabel')

        self.gpslocLabel = self.findChild(QLabel, 'gpslocLabel')
        self.gpshdgLabel = self.findChild(QLabel, 'gpshdgLabel')

        self.recog1Label = self.findChild(QLabel, 'recog1Label')
        self.recog2Label = self.findChild(QLabel, 'recog2Label')

        self.localLabel = self.findChild(QLabel, 'localLabel')
        self.decisionLabel = self.findChild(QLabel, 'decisionLabel')
        self.canLabel = self.findChild(QLabel, 'canLabel')
        self.ctrlLabel = self.findChild(QLabel, 'ctrlLabel')

        # 센서 상태 -> 배경색 업데이트 예시, 진짜 상태 바꿔오는 부분에서 이 코드 실행해주면 끝 (여기서 사용하는건 아님, sensor_status_checker 부분에서 업데이트 함)
        #self.update_label_background(self.camfrontLabel, 'lightblue')

        #########################################################################################################################


    def set_image(self, label, image_path):
        """_summary_

        Args:
            label (QLabel): 이미지를 추가할 QLabel 객체
            image_path (string): 이미지 경로
        """
        pixmap = QPixmap(image_path)
        
        # QLabel의 크기에 맞게 이미지 크기 조정
        scaled_pixmap = pixmap.scaled(label.size(), Qt.KeepAspectRatio, Qt.SmoothTransformation)
        
        label.setPixmap(scaled_pixmap)
        label.setScaledContents(False)  # QLabel의 크기 변경을 방지

    ###########################################전체 버튼 및 센서 활성화 영역◎#########################################################################
    def sensor_status_checker(self, msg): # ◎
        """센서 상태 업데이트 콜백 메서드

        Args:
            msg (String): 수신한 메시지
        """
        # 여기서 msg.data를 기반으로 QLabel의 배경색 등을 업데이트
        sensor_status = msg.data # 여기 메시지에 정보를 어떻게 담아오는지 결정하고 수정해야함 ★★★
        if sensor_status == 'active':
            self.update_label_background(self.camfrontLabel, 'green')
        else:
            self.update_label_background(self.camfrontLabel, 'red')

    def toggle_activation(self): 
        """버튼 클릭 시 전체 활성화/비활성화 토글"""
        self.is_active = not self.is_active  # 상태 반전

        # 전체 활성화 또는 비활성화 처리
        if self.is_active:
            self.set_all_enabled(True)  # 모든 요소 활성화
            self.startButton.setText("Stop(CTRL)")  # 버튼 텍스트 변경
        else:
            self.set_all_enabled(False)  # 모든 요소 비활성화
            self.startButton.setText("Start(CTRL)")  # 버튼 텍스트 변경
    
    def update_label_background(self, label, color): # ◎
        """QLabel의 배경색을 변경하는 메서드

        Args:
            label (QLabel): 배경색을 변경할 QLabel 객체
            color (str): 변경할 색상 (예: 'red', '#FF0000' 등)
        """
        label.setStyleSheet(f"background-color: {color};")

    def set_all_enabled(self, enabled): 
        """모든 위젯의 활성화 상태를 설정하는 메서드"""
        # 모든 QLabel 활성화/비활성화
        self.camfrontLabel.setEnabled(enabled)
        # 다른 위젯들도 활성화 비활성화 추가
        # 사실상 버튼보다는 아래 그래프쪽 비활성화 추가하면 될듯함

    def closeEvent(self, event): 
        """창을 닫을 때 ROS 노드를 종료"""
        self.node.destroy_node()
        rclpy.shutdown()
        event.accept()

    ##################################################################################################################################################

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())

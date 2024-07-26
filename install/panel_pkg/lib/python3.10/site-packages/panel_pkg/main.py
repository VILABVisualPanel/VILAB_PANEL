import sys
from PyQt5.QtWidgets import *
from PyQt5 import uic
from PyQt5.QtGui import QPixmap
from PyQt5.QtCore import Qt
import os

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

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())

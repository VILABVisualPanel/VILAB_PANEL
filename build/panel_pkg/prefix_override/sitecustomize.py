import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hankyeolyu/vilab/VILAB_PANEL/install/panel_pkg'

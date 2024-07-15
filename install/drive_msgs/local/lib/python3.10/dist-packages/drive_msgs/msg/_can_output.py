# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_msgs:msg/CANOutput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CANOutput(type):
    """Metaclass of message 'CANOutput'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('drive_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'drive_msgs.msg.CANOutput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__can_output
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__can_output
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__can_output
            cls._TYPE_SUPPORT = module.type_support_msg__msg__can_output
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__can_output

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CANOutput(metaclass=Metaclass_CANOutput):
    """Message class 'CANOutput'."""

    __slots__ = [
        '_eps_en_status',
        '_eps_control_board_status',
        '_eps_control_status',
        '_eps_user_can_err',
        '_eps_err',
        '_eps_veh_can_err',
        '_eps_sas_err',
        '_override_ignore_status',
        '_override_status',
        '_strang',
        '_str_drv_tq',
        '_str_out_tq',
        '_eps_alive_cnt',
        '_acc_en_status',
        '_acc_control_board_status',
        '_acc_control_status',
        '_acc_user_can_err',
        '_acc_err',
        '_vs',
        '_long_accel1',
        '_hazard_en',
        '_turn_left_en',
        '_turn_right_en',
        '_acc_veh_err',
        '_g_sel_disp',
        '_acc_alive_cnt',
        '_wheel_spd_fr',
        '_wheel_spd_fl',
        '_wheel_spd_rr',
        '_wheel_spd_rl',
        '_lat_accel',
        '_yaw_rate',
        '_brk_cylinder',
        '_long_accel2',
    ]

    _fields_and_field_types = {
        'eps_en_status': 'std_msgs/String',
        'eps_control_board_status': 'std_msgs/String',
        'eps_control_status': 'std_msgs/String',
        'eps_user_can_err': 'std_msgs/String',
        'eps_err': 'std_msgs/String',
        'eps_veh_can_err': 'std_msgs/String',
        'eps_sas_err': 'std_msgs/String',
        'override_ignore_status': 'std_msgs/String',
        'override_status': 'std_msgs/String',
        'strang': 'std_msgs/String',
        'str_drv_tq': 'std_msgs/String',
        'str_out_tq': 'std_msgs/String',
        'eps_alive_cnt': 'std_msgs/String',
        'acc_en_status': 'std_msgs/String',
        'acc_control_board_status': 'std_msgs/String',
        'acc_control_status': 'std_msgs/String',
        'acc_user_can_err': 'std_msgs/String',
        'acc_err': 'std_msgs/String',
        'vs': 'std_msgs/String',
        'long_accel1': 'std_msgs/String',
        'hazard_en': 'std_msgs/String',
        'turn_left_en': 'std_msgs/String',
        'turn_right_en': 'std_msgs/String',
        'acc_veh_err': 'std_msgs/String',
        'g_sel_disp': 'std_msgs/String',
        'acc_alive_cnt': 'std_msgs/String',
        'wheel_spd_fr': 'std_msgs/String',
        'wheel_spd_fl': 'std_msgs/String',
        'wheel_spd_rr': 'std_msgs/String',
        'wheel_spd_rl': 'std_msgs/String',
        'lat_accel': 'std_msgs/String',
        'yaw_rate': 'std_msgs/String',
        'brk_cylinder': 'std_msgs/String',
        'long_accel2': 'std_msgs/String',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import String
        self.eps_en_status = kwargs.get('eps_en_status', String())
        from std_msgs.msg import String
        self.eps_control_board_status = kwargs.get('eps_control_board_status', String())
        from std_msgs.msg import String
        self.eps_control_status = kwargs.get('eps_control_status', String())
        from std_msgs.msg import String
        self.eps_user_can_err = kwargs.get('eps_user_can_err', String())
        from std_msgs.msg import String
        self.eps_err = kwargs.get('eps_err', String())
        from std_msgs.msg import String
        self.eps_veh_can_err = kwargs.get('eps_veh_can_err', String())
        from std_msgs.msg import String
        self.eps_sas_err = kwargs.get('eps_sas_err', String())
        from std_msgs.msg import String
        self.override_ignore_status = kwargs.get('override_ignore_status', String())
        from std_msgs.msg import String
        self.override_status = kwargs.get('override_status', String())
        from std_msgs.msg import String
        self.strang = kwargs.get('strang', String())
        from std_msgs.msg import String
        self.str_drv_tq = kwargs.get('str_drv_tq', String())
        from std_msgs.msg import String
        self.str_out_tq = kwargs.get('str_out_tq', String())
        from std_msgs.msg import String
        self.eps_alive_cnt = kwargs.get('eps_alive_cnt', String())
        from std_msgs.msg import String
        self.acc_en_status = kwargs.get('acc_en_status', String())
        from std_msgs.msg import String
        self.acc_control_board_status = kwargs.get('acc_control_board_status', String())
        from std_msgs.msg import String
        self.acc_control_status = kwargs.get('acc_control_status', String())
        from std_msgs.msg import String
        self.acc_user_can_err = kwargs.get('acc_user_can_err', String())
        from std_msgs.msg import String
        self.acc_err = kwargs.get('acc_err', String())
        from std_msgs.msg import String
        self.vs = kwargs.get('vs', String())
        from std_msgs.msg import String
        self.long_accel1 = kwargs.get('long_accel1', String())
        from std_msgs.msg import String
        self.hazard_en = kwargs.get('hazard_en', String())
        from std_msgs.msg import String
        self.turn_left_en = kwargs.get('turn_left_en', String())
        from std_msgs.msg import String
        self.turn_right_en = kwargs.get('turn_right_en', String())
        from std_msgs.msg import String
        self.acc_veh_err = kwargs.get('acc_veh_err', String())
        from std_msgs.msg import String
        self.g_sel_disp = kwargs.get('g_sel_disp', String())
        from std_msgs.msg import String
        self.acc_alive_cnt = kwargs.get('acc_alive_cnt', String())
        from std_msgs.msg import String
        self.wheel_spd_fr = kwargs.get('wheel_spd_fr', String())
        from std_msgs.msg import String
        self.wheel_spd_fl = kwargs.get('wheel_spd_fl', String())
        from std_msgs.msg import String
        self.wheel_spd_rr = kwargs.get('wheel_spd_rr', String())
        from std_msgs.msg import String
        self.wheel_spd_rl = kwargs.get('wheel_spd_rl', String())
        from std_msgs.msg import String
        self.lat_accel = kwargs.get('lat_accel', String())
        from std_msgs.msg import String
        self.yaw_rate = kwargs.get('yaw_rate', String())
        from std_msgs.msg import String
        self.brk_cylinder = kwargs.get('brk_cylinder', String())
        from std_msgs.msg import String
        self.long_accel2 = kwargs.get('long_accel2', String())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.eps_en_status != other.eps_en_status:
            return False
        if self.eps_control_board_status != other.eps_control_board_status:
            return False
        if self.eps_control_status != other.eps_control_status:
            return False
        if self.eps_user_can_err != other.eps_user_can_err:
            return False
        if self.eps_err != other.eps_err:
            return False
        if self.eps_veh_can_err != other.eps_veh_can_err:
            return False
        if self.eps_sas_err != other.eps_sas_err:
            return False
        if self.override_ignore_status != other.override_ignore_status:
            return False
        if self.override_status != other.override_status:
            return False
        if self.strang != other.strang:
            return False
        if self.str_drv_tq != other.str_drv_tq:
            return False
        if self.str_out_tq != other.str_out_tq:
            return False
        if self.eps_alive_cnt != other.eps_alive_cnt:
            return False
        if self.acc_en_status != other.acc_en_status:
            return False
        if self.acc_control_board_status != other.acc_control_board_status:
            return False
        if self.acc_control_status != other.acc_control_status:
            return False
        if self.acc_user_can_err != other.acc_user_can_err:
            return False
        if self.acc_err != other.acc_err:
            return False
        if self.vs != other.vs:
            return False
        if self.long_accel1 != other.long_accel1:
            return False
        if self.hazard_en != other.hazard_en:
            return False
        if self.turn_left_en != other.turn_left_en:
            return False
        if self.turn_right_en != other.turn_right_en:
            return False
        if self.acc_veh_err != other.acc_veh_err:
            return False
        if self.g_sel_disp != other.g_sel_disp:
            return False
        if self.acc_alive_cnt != other.acc_alive_cnt:
            return False
        if self.wheel_spd_fr != other.wheel_spd_fr:
            return False
        if self.wheel_spd_fl != other.wheel_spd_fl:
            return False
        if self.wheel_spd_rr != other.wheel_spd_rr:
            return False
        if self.wheel_spd_rl != other.wheel_spd_rl:
            return False
        if self.lat_accel != other.lat_accel:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.brk_cylinder != other.brk_cylinder:
            return False
        if self.long_accel2 != other.long_accel2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def eps_en_status(self):
        """Message field 'eps_en_status'."""
        return self._eps_en_status

    @eps_en_status.setter
    def eps_en_status(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'eps_en_status' field must be a sub message of type 'String'"
        self._eps_en_status = value

    @builtins.property
    def eps_control_board_status(self):
        """Message field 'eps_control_board_status'."""
        return self._eps_control_board_status

    @eps_control_board_status.setter
    def eps_control_board_status(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'eps_control_board_status' field must be a sub message of type 'String'"
        self._eps_control_board_status = value

    @builtins.property
    def eps_control_status(self):
        """Message field 'eps_control_status'."""
        return self._eps_control_status

    @eps_control_status.setter
    def eps_control_status(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'eps_control_status' field must be a sub message of type 'String'"
        self._eps_control_status = value

    @builtins.property
    def eps_user_can_err(self):
        """Message field 'eps_user_can_err'."""
        return self._eps_user_can_err

    @eps_user_can_err.setter
    def eps_user_can_err(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'eps_user_can_err' field must be a sub message of type 'String'"
        self._eps_user_can_err = value

    @builtins.property
    def eps_err(self):
        """Message field 'eps_err'."""
        return self._eps_err

    @eps_err.setter
    def eps_err(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'eps_err' field must be a sub message of type 'String'"
        self._eps_err = value

    @builtins.property
    def eps_veh_can_err(self):
        """Message field 'eps_veh_can_err'."""
        return self._eps_veh_can_err

    @eps_veh_can_err.setter
    def eps_veh_can_err(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'eps_veh_can_err' field must be a sub message of type 'String'"
        self._eps_veh_can_err = value

    @builtins.property
    def eps_sas_err(self):
        """Message field 'eps_sas_err'."""
        return self._eps_sas_err

    @eps_sas_err.setter
    def eps_sas_err(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'eps_sas_err' field must be a sub message of type 'String'"
        self._eps_sas_err = value

    @builtins.property
    def override_ignore_status(self):
        """Message field 'override_ignore_status'."""
        return self._override_ignore_status

    @override_ignore_status.setter
    def override_ignore_status(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'override_ignore_status' field must be a sub message of type 'String'"
        self._override_ignore_status = value

    @builtins.property
    def override_status(self):
        """Message field 'override_status'."""
        return self._override_status

    @override_status.setter
    def override_status(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'override_status' field must be a sub message of type 'String'"
        self._override_status = value

    @builtins.property
    def strang(self):
        """Message field 'strang'."""
        return self._strang

    @strang.setter
    def strang(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'strang' field must be a sub message of type 'String'"
        self._strang = value

    @builtins.property
    def str_drv_tq(self):
        """Message field 'str_drv_tq'."""
        return self._str_drv_tq

    @str_drv_tq.setter
    def str_drv_tq(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'str_drv_tq' field must be a sub message of type 'String'"
        self._str_drv_tq = value

    @builtins.property
    def str_out_tq(self):
        """Message field 'str_out_tq'."""
        return self._str_out_tq

    @str_out_tq.setter
    def str_out_tq(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'str_out_tq' field must be a sub message of type 'String'"
        self._str_out_tq = value

    @builtins.property
    def eps_alive_cnt(self):
        """Message field 'eps_alive_cnt'."""
        return self._eps_alive_cnt

    @eps_alive_cnt.setter
    def eps_alive_cnt(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'eps_alive_cnt' field must be a sub message of type 'String'"
        self._eps_alive_cnt = value

    @builtins.property
    def acc_en_status(self):
        """Message field 'acc_en_status'."""
        return self._acc_en_status

    @acc_en_status.setter
    def acc_en_status(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'acc_en_status' field must be a sub message of type 'String'"
        self._acc_en_status = value

    @builtins.property
    def acc_control_board_status(self):
        """Message field 'acc_control_board_status'."""
        return self._acc_control_board_status

    @acc_control_board_status.setter
    def acc_control_board_status(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'acc_control_board_status' field must be a sub message of type 'String'"
        self._acc_control_board_status = value

    @builtins.property
    def acc_control_status(self):
        """Message field 'acc_control_status'."""
        return self._acc_control_status

    @acc_control_status.setter
    def acc_control_status(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'acc_control_status' field must be a sub message of type 'String'"
        self._acc_control_status = value

    @builtins.property
    def acc_user_can_err(self):
        """Message field 'acc_user_can_err'."""
        return self._acc_user_can_err

    @acc_user_can_err.setter
    def acc_user_can_err(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'acc_user_can_err' field must be a sub message of type 'String'"
        self._acc_user_can_err = value

    @builtins.property
    def acc_err(self):
        """Message field 'acc_err'."""
        return self._acc_err

    @acc_err.setter
    def acc_err(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'acc_err' field must be a sub message of type 'String'"
        self._acc_err = value

    @builtins.property
    def vs(self):
        """Message field 'vs'."""
        return self._vs

    @vs.setter
    def vs(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'vs' field must be a sub message of type 'String'"
        self._vs = value

    @builtins.property
    def long_accel1(self):
        """Message field 'long_accel1'."""
        return self._long_accel1

    @long_accel1.setter
    def long_accel1(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'long_accel1' field must be a sub message of type 'String'"
        self._long_accel1 = value

    @builtins.property
    def hazard_en(self):
        """Message field 'hazard_en'."""
        return self._hazard_en

    @hazard_en.setter
    def hazard_en(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'hazard_en' field must be a sub message of type 'String'"
        self._hazard_en = value

    @builtins.property
    def turn_left_en(self):
        """Message field 'turn_left_en'."""
        return self._turn_left_en

    @turn_left_en.setter
    def turn_left_en(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'turn_left_en' field must be a sub message of type 'String'"
        self._turn_left_en = value

    @builtins.property
    def turn_right_en(self):
        """Message field 'turn_right_en'."""
        return self._turn_right_en

    @turn_right_en.setter
    def turn_right_en(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'turn_right_en' field must be a sub message of type 'String'"
        self._turn_right_en = value

    @builtins.property
    def acc_veh_err(self):
        """Message field 'acc_veh_err'."""
        return self._acc_veh_err

    @acc_veh_err.setter
    def acc_veh_err(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'acc_veh_err' field must be a sub message of type 'String'"
        self._acc_veh_err = value

    @builtins.property
    def g_sel_disp(self):
        """Message field 'g_sel_disp'."""
        return self._g_sel_disp

    @g_sel_disp.setter
    def g_sel_disp(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'g_sel_disp' field must be a sub message of type 'String'"
        self._g_sel_disp = value

    @builtins.property
    def acc_alive_cnt(self):
        """Message field 'acc_alive_cnt'."""
        return self._acc_alive_cnt

    @acc_alive_cnt.setter
    def acc_alive_cnt(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'acc_alive_cnt' field must be a sub message of type 'String'"
        self._acc_alive_cnt = value

    @builtins.property
    def wheel_spd_fr(self):
        """Message field 'wheel_spd_fr'."""
        return self._wheel_spd_fr

    @wheel_spd_fr.setter
    def wheel_spd_fr(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'wheel_spd_fr' field must be a sub message of type 'String'"
        self._wheel_spd_fr = value

    @builtins.property
    def wheel_spd_fl(self):
        """Message field 'wheel_spd_fl'."""
        return self._wheel_spd_fl

    @wheel_spd_fl.setter
    def wheel_spd_fl(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'wheel_spd_fl' field must be a sub message of type 'String'"
        self._wheel_spd_fl = value

    @builtins.property
    def wheel_spd_rr(self):
        """Message field 'wheel_spd_rr'."""
        return self._wheel_spd_rr

    @wheel_spd_rr.setter
    def wheel_spd_rr(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'wheel_spd_rr' field must be a sub message of type 'String'"
        self._wheel_spd_rr = value

    @builtins.property
    def wheel_spd_rl(self):
        """Message field 'wheel_spd_rl'."""
        return self._wheel_spd_rl

    @wheel_spd_rl.setter
    def wheel_spd_rl(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'wheel_spd_rl' field must be a sub message of type 'String'"
        self._wheel_spd_rl = value

    @builtins.property
    def lat_accel(self):
        """Message field 'lat_accel'."""
        return self._lat_accel

    @lat_accel.setter
    def lat_accel(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'lat_accel' field must be a sub message of type 'String'"
        self._lat_accel = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'yaw_rate' field must be a sub message of type 'String'"
        self._yaw_rate = value

    @builtins.property
    def brk_cylinder(self):
        """Message field 'brk_cylinder'."""
        return self._brk_cylinder

    @brk_cylinder.setter
    def brk_cylinder(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'brk_cylinder' field must be a sub message of type 'String'"
        self._brk_cylinder = value

    @builtins.property
    def long_accel2(self):
        """Message field 'long_accel2'."""
        return self._long_accel2

    @long_accel2.setter
    def long_accel2(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'long_accel2' field must be a sub message of type 'String'"
        self._long_accel2 = value

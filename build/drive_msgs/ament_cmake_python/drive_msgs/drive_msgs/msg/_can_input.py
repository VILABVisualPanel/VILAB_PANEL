# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_msgs:msg/CANInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CANInput(type):
    """Metaclass of message 'CANInput'."""

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
                'drive_msgs.msg.CANInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__can_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__can_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__can_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__can_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__can_input

            from std_msgs.msg import Float32
            if Float32.__class__._TYPE_SUPPORT is None:
                Float32.__class__.__import_type_support__()

            from std_msgs.msg import Int8
            if Int8.__class__._TYPE_SUPPORT is None:
                Int8.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CANInput(metaclass=Metaclass_CANInput):
    """Message class 'CANInput'."""

    __slots__ = [
        '_eps_en',
        '_eps_override_ignore',
        '_eps_speed',
        '_acc_en',
        '_aeb_en',
        '_turn_signal',
        '_aeb_decel_value',
        '_aliv_cnt',
        '_eps_cmd',
        '_acc_cmd',
    ]

    _fields_and_field_types = {
        'eps_en': 'std_msgs/Int8',
        'eps_override_ignore': 'std_msgs/Int8',
        'eps_speed': 'std_msgs/Float32',
        'acc_en': 'std_msgs/Int8',
        'aeb_en': 'std_msgs/Int8',
        'turn_signal': 'std_msgs/Int8',
        'aeb_decel_value': 'std_msgs/Float32',
        'aliv_cnt': 'std_msgs/Int8',
        'eps_cmd': 'std_msgs/Float32',
        'acc_cmd': 'std_msgs/Float32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Int8
        self.eps_en = kwargs.get('eps_en', Int8())
        from std_msgs.msg import Int8
        self.eps_override_ignore = kwargs.get('eps_override_ignore', Int8())
        from std_msgs.msg import Float32
        self.eps_speed = kwargs.get('eps_speed', Float32())
        from std_msgs.msg import Int8
        self.acc_en = kwargs.get('acc_en', Int8())
        from std_msgs.msg import Int8
        self.aeb_en = kwargs.get('aeb_en', Int8())
        from std_msgs.msg import Int8
        self.turn_signal = kwargs.get('turn_signal', Int8())
        from std_msgs.msg import Float32
        self.aeb_decel_value = kwargs.get('aeb_decel_value', Float32())
        from std_msgs.msg import Int8
        self.aliv_cnt = kwargs.get('aliv_cnt', Int8())
        from std_msgs.msg import Float32
        self.eps_cmd = kwargs.get('eps_cmd', Float32())
        from std_msgs.msg import Float32
        self.acc_cmd = kwargs.get('acc_cmd', Float32())

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
        if self.eps_en != other.eps_en:
            return False
        if self.eps_override_ignore != other.eps_override_ignore:
            return False
        if self.eps_speed != other.eps_speed:
            return False
        if self.acc_en != other.acc_en:
            return False
        if self.aeb_en != other.aeb_en:
            return False
        if self.turn_signal != other.turn_signal:
            return False
        if self.aeb_decel_value != other.aeb_decel_value:
            return False
        if self.aliv_cnt != other.aliv_cnt:
            return False
        if self.eps_cmd != other.eps_cmd:
            return False
        if self.acc_cmd != other.acc_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def eps_en(self):
        """Message field 'eps_en'."""
        return self._eps_en

    @eps_en.setter
    def eps_en(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'eps_en' field must be a sub message of type 'Int8'"
        self._eps_en = value

    @builtins.property
    def eps_override_ignore(self):
        """Message field 'eps_override_ignore'."""
        return self._eps_override_ignore

    @eps_override_ignore.setter
    def eps_override_ignore(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'eps_override_ignore' field must be a sub message of type 'Int8'"
        self._eps_override_ignore = value

    @builtins.property
    def eps_speed(self):
        """Message field 'eps_speed'."""
        return self._eps_speed

    @eps_speed.setter
    def eps_speed(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'eps_speed' field must be a sub message of type 'Float32'"
        self._eps_speed = value

    @builtins.property
    def acc_en(self):
        """Message field 'acc_en'."""
        return self._acc_en

    @acc_en.setter
    def acc_en(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'acc_en' field must be a sub message of type 'Int8'"
        self._acc_en = value

    @builtins.property
    def aeb_en(self):
        """Message field 'aeb_en'."""
        return self._aeb_en

    @aeb_en.setter
    def aeb_en(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'aeb_en' field must be a sub message of type 'Int8'"
        self._aeb_en = value

    @builtins.property
    def turn_signal(self):
        """Message field 'turn_signal'."""
        return self._turn_signal

    @turn_signal.setter
    def turn_signal(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'turn_signal' field must be a sub message of type 'Int8'"
        self._turn_signal = value

    @builtins.property
    def aeb_decel_value(self):
        """Message field 'aeb_decel_value'."""
        return self._aeb_decel_value

    @aeb_decel_value.setter
    def aeb_decel_value(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'aeb_decel_value' field must be a sub message of type 'Float32'"
        self._aeb_decel_value = value

    @builtins.property
    def aliv_cnt(self):
        """Message field 'aliv_cnt'."""
        return self._aliv_cnt

    @aliv_cnt.setter
    def aliv_cnt(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'aliv_cnt' field must be a sub message of type 'Int8'"
        self._aliv_cnt = value

    @builtins.property
    def eps_cmd(self):
        """Message field 'eps_cmd'."""
        return self._eps_cmd

    @eps_cmd.setter
    def eps_cmd(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'eps_cmd' field must be a sub message of type 'Float32'"
        self._eps_cmd = value

    @builtins.property
    def acc_cmd(self):
        """Message field 'acc_cmd'."""
        return self._acc_cmd

    @acc_cmd.setter
    def acc_cmd(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'acc_cmd' field must be a sub message of type 'Float32'"
        self._acc_cmd = value

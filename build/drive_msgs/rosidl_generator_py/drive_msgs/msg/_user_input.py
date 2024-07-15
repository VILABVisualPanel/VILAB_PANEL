# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_msgs:msg/UserInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UserInput(type):
    """Metaclass of message 'UserInput'."""

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
                'drive_msgs.msg.UserInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__user_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__user_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__user_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__user_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__user_input

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


class UserInput(metaclass=Metaclass_UserInput):
    """Message class 'UserInput'."""

    __slots__ = [
        '_user_mode',
        '_user_signal',
    ]

    _fields_and_field_types = {
        'user_mode': 'std_msgs/Int8',
        'user_signal': 'std_msgs/Int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Int8
        self.user_mode = kwargs.get('user_mode', Int8())
        from std_msgs.msg import Int8
        self.user_signal = kwargs.get('user_signal', Int8())

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
        if self.user_mode != other.user_mode:
            return False
        if self.user_signal != other.user_signal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def user_mode(self):
        """Message field 'user_mode'."""
        return self._user_mode

    @user_mode.setter
    def user_mode(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'user_mode' field must be a sub message of type 'Int8'"
        self._user_mode = value

    @builtins.property
    def user_signal(self):
        """Message field 'user_signal'."""
        return self._user_signal

    @user_signal.setter
    def user_signal(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'user_signal' field must be a sub message of type 'Int8'"
        self._user_signal = value

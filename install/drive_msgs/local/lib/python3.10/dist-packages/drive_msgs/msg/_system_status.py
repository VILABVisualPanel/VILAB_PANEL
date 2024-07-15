# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_msgs:msg/SystemStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'basella'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemStatus(type):
    """Metaclass of message 'SystemStatus'."""

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
                'drive_msgs.msg.SystemStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_status

            from std_msgs.msg import Int8
            if Int8.__class__._TYPE_SUPPORT is None:
                Int8.__class__.__import_type_support__()

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


class SystemStatus(metaclass=Metaclass_SystemStatus):
    """Message class 'SystemStatus'."""

    __slots__ = [
        '_mapname',
        '_basella',
        '_systemmode',
        '_systemsignal',
        '_systemstate',
        '_systemhealth',
        '_lapcount',
    ]

    _fields_and_field_types = {
        'mapname': 'std_msgs/String',
        'basella': 'sequence<float>',
        'systemmode': 'std_msgs/Int8',
        'systemsignal': 'std_msgs/Int8',
        'systemstate': 'std_msgs/Int8',
        'systemhealth': 'std_msgs/Int8',
        'lapcount': 'std_msgs/Int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import String
        self.mapname = kwargs.get('mapname', String())
        self.basella = array.array('f', kwargs.get('basella', []))
        from std_msgs.msg import Int8
        self.systemmode = kwargs.get('systemmode', Int8())
        from std_msgs.msg import Int8
        self.systemsignal = kwargs.get('systemsignal', Int8())
        from std_msgs.msg import Int8
        self.systemstate = kwargs.get('systemstate', Int8())
        from std_msgs.msg import Int8
        self.systemhealth = kwargs.get('systemhealth', Int8())
        from std_msgs.msg import Int8
        self.lapcount = kwargs.get('lapcount', Int8())

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
        if self.mapname != other.mapname:
            return False
        if self.basella != other.basella:
            return False
        if self.systemmode != other.systemmode:
            return False
        if self.systemsignal != other.systemsignal:
            return False
        if self.systemstate != other.systemstate:
            return False
        if self.systemhealth != other.systemhealth:
            return False
        if self.lapcount != other.lapcount:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mapname(self):
        """Message field 'mapname'."""
        return self._mapname

    @mapname.setter
    def mapname(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'mapname' field must be a sub message of type 'String'"
        self._mapname = value

    @builtins.property
    def basella(self):
        """Message field 'basella'."""
        return self._basella

    @basella.setter
    def basella(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'basella' array.array() must have the type code of 'f'"
            self._basella = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'basella' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._basella = array.array('f', value)

    @builtins.property
    def systemmode(self):
        """Message field 'systemmode'."""
        return self._systemmode

    @systemmode.setter
    def systemmode(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'systemmode' field must be a sub message of type 'Int8'"
        self._systemmode = value

    @builtins.property
    def systemsignal(self):
        """Message field 'systemsignal'."""
        return self._systemsignal

    @systemsignal.setter
    def systemsignal(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'systemsignal' field must be a sub message of type 'Int8'"
        self._systemsignal = value

    @builtins.property
    def systemstate(self):
        """Message field 'systemstate'."""
        return self._systemstate

    @systemstate.setter
    def systemstate(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'systemstate' field must be a sub message of type 'Int8'"
        self._systemstate = value

    @builtins.property
    def systemhealth(self):
        """Message field 'systemhealth'."""
        return self._systemhealth

    @systemhealth.setter
    def systemhealth(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'systemhealth' field must be a sub message of type 'Int8'"
        self._systemhealth = value

    @builtins.property
    def lapcount(self):
        """Message field 'lapcount'."""
        return self._lapcount

    @lapcount.setter
    def lapcount(self, value):
        if __debug__:
            from std_msgs.msg import Int8
            assert \
                isinstance(value, Int8), \
                "The 'lapcount' field must be a sub message of type 'Int8'"
        self._lapcount = value

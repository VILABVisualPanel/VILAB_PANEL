# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_msgs:msg/LaneData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneData(type):
    """Metaclass of message 'LaneData'."""

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
                'drive_msgs.msg.LaneData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_data

            from drive_msgs.msg import LaneLet
            if LaneLet.__class__._TYPE_SUPPORT is None:
                LaneLet.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LaneData(metaclass=Metaclass_LaneData):
    """Message class 'LaneData'."""

    __slots__ = [
        '_currentlane',
        '_neighborlane',
    ]

    _fields_and_field_types = {
        'currentlane': 'drive_msgs/LaneLet',
        'neighborlane': 'drive_msgs/LaneLet',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['drive_msgs', 'msg'], 'LaneLet'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['drive_msgs', 'msg'], 'LaneLet'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from drive_msgs.msg import LaneLet
        self.currentlane = kwargs.get('currentlane', LaneLet())
        from drive_msgs.msg import LaneLet
        self.neighborlane = kwargs.get('neighborlane', LaneLet())

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
        if self.currentlane != other.currentlane:
            return False
        if self.neighborlane != other.neighborlane:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def currentlane(self):
        """Message field 'currentlane'."""
        return self._currentlane

    @currentlane.setter
    def currentlane(self, value):
        if __debug__:
            from drive_msgs.msg import LaneLet
            assert \
                isinstance(value, LaneLet), \
                "The 'currentlane' field must be a sub message of type 'LaneLet'"
        self._currentlane = value

    @builtins.property
    def neighborlane(self):
        """Message field 'neighborlane'."""
        return self._neighborlane

    @neighborlane.setter
    def neighborlane(self, value):
        if __debug__:
            from drive_msgs.msg import LaneLet
            assert \
                isinstance(value, LaneLet), \
                "The 'neighborlane' field must be a sub message of type 'LaneLet'"
        self._neighborlane = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_msgs:msg/DetectionData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectionData(type):
    """Metaclass of message 'DetectionData'."""

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
                'drive_msgs.msg.DetectionData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detection_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detection_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detection_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detection_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detection_data

            from drive_msgs.msg import ObjectInfo
            if ObjectInfo.__class__._TYPE_SUPPORT is None:
                ObjectInfo.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectionData(metaclass=Metaclass_DetectionData):
    """Message class 'DetectionData'."""

    __slots__ = [
        '_objects',
        '_laneposition0',
        '_laneposition1',
        '_laneposition2',
        '_laneposition3',
    ]

    _fields_and_field_types = {
        'objects': 'sequence<drive_msgs/ObjectInfo>',
        'laneposition0': 'sequence<geometry_msgs/Point>',
        'laneposition1': 'sequence<geometry_msgs/Point>',
        'laneposition2': 'sequence<geometry_msgs/Point>',
        'laneposition3': 'sequence<geometry_msgs/Point>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['drive_msgs', 'msg'], 'ObjectInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.objects = kwargs.get('objects', [])
        self.laneposition0 = kwargs.get('laneposition0', [])
        self.laneposition1 = kwargs.get('laneposition1', [])
        self.laneposition2 = kwargs.get('laneposition2', [])
        self.laneposition3 = kwargs.get('laneposition3', [])

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
        if self.objects != other.objects:
            return False
        if self.laneposition0 != other.laneposition0:
            return False
        if self.laneposition1 != other.laneposition1:
            return False
        if self.laneposition2 != other.laneposition2:
            return False
        if self.laneposition3 != other.laneposition3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def objects(self):
        """Message field 'objects'."""
        return self._objects

    @objects.setter
    def objects(self, value):
        if __debug__:
            from drive_msgs.msg import ObjectInfo
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
                 all(isinstance(v, ObjectInfo) for v in value) and
                 True), \
                "The 'objects' field must be a set or sequence and each value of type 'ObjectInfo'"
        self._objects = value

    @builtins.property
    def laneposition0(self):
        """Message field 'laneposition0'."""
        return self._laneposition0

    @laneposition0.setter
    def laneposition0(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'laneposition0' field must be a set or sequence and each value of type 'Point'"
        self._laneposition0 = value

    @builtins.property
    def laneposition1(self):
        """Message field 'laneposition1'."""
        return self._laneposition1

    @laneposition1.setter
    def laneposition1(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'laneposition1' field must be a set or sequence and each value of type 'Point'"
        self._laneposition1 = value

    @builtins.property
    def laneposition2(self):
        """Message field 'laneposition2'."""
        return self._laneposition2

    @laneposition2.setter
    def laneposition2(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'laneposition2' field must be a set or sequence and each value of type 'Point'"
        self._laneposition2 = value

    @builtins.property
    def laneposition3(self):
        """Message field 'laneposition3'."""
        return self._laneposition3

    @laneposition3.setter
    def laneposition3(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'laneposition3' field must be a set or sequence and each value of type 'Point'"
        self._laneposition3 = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from drive_msgs:msg/LaneLet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneLet(type):
    """Metaclass of message 'LaneLet'."""

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
                'drive_msgs.msg.LaneLet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_let
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_let
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_let
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_let
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_let

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


class LaneLet(metaclass=Metaclass_LaneLet):
    """Message class 'LaneLet'."""

    __slots__ = [
        '_id',
        '_leftneighbor',
        '_rightneighbor',
        '_predecessor',
        '_successor',
        '_currentlane',
    ]

    _fields_and_field_types = {
        'id': 'std_msgs/String',
        'leftneighbor': 'std_msgs/String',
        'rightneighbor': 'std_msgs/String',
        'predecessor': 'std_msgs/String',
        'successor': 'std_msgs/String',
        'currentlane': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import String
        self.id = kwargs.get('id', String())
        from std_msgs.msg import String
        self.leftneighbor = kwargs.get('leftneighbor', String())
        from std_msgs.msg import String
        self.rightneighbor = kwargs.get('rightneighbor', String())
        from std_msgs.msg import String
        self.predecessor = kwargs.get('predecessor', String())
        from std_msgs.msg import String
        self.successor = kwargs.get('successor', String())
        self.currentlane = kwargs.get('currentlane', int())

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
        if self.id != other.id:
            return False
        if self.leftneighbor != other.leftneighbor:
            return False
        if self.rightneighbor != other.rightneighbor:
            return False
        if self.predecessor != other.predecessor:
            return False
        if self.successor != other.successor:
            return False
        if self.currentlane != other.currentlane:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'id' field must be a sub message of type 'String'"
        self._id = value

    @builtins.property
    def leftneighbor(self):
        """Message field 'leftneighbor'."""
        return self._leftneighbor

    @leftneighbor.setter
    def leftneighbor(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'leftneighbor' field must be a sub message of type 'String'"
        self._leftneighbor = value

    @builtins.property
    def rightneighbor(self):
        """Message field 'rightneighbor'."""
        return self._rightneighbor

    @rightneighbor.setter
    def rightneighbor(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'rightneighbor' field must be a sub message of type 'String'"
        self._rightneighbor = value

    @builtins.property
    def predecessor(self):
        """Message field 'predecessor'."""
        return self._predecessor

    @predecessor.setter
    def predecessor(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'predecessor' field must be a sub message of type 'String'"
        self._predecessor = value

    @builtins.property
    def successor(self):
        """Message field 'successor'."""
        return self._successor

    @successor.setter
    def successor(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'successor' field must be a sub message of type 'String'"
        self._successor = value

    @builtins.property
    def currentlane(self):
        """Message field 'currentlane'."""
        return self._currentlane

    @currentlane.setter
    def currentlane(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'currentlane' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'currentlane' field must be an integer in [-128, 127]"
        self._currentlane = value

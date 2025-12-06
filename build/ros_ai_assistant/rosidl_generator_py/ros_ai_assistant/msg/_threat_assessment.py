# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_ai_assistant:msg/ThreatAssessment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ThreatAssessment(type):
    """Metaclass of message 'ThreatAssessment'."""

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
            module = import_type_support('ros_ai_assistant')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_ai_assistant.msg.ThreatAssessment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__threat_assessment
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__threat_assessment
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__threat_assessment
            cls._TYPE_SUPPORT = module.type_support_msg__msg__threat_assessment
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__threat_assessment

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ThreatAssessment(metaclass=Metaclass_ThreatAssessment):
    """Message class 'ThreatAssessment'."""

    __slots__ = [
        '_header',
        '_threat_id',
        '_threat_level',
        '_category',
        '_description',
        '_recommended_action',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'threat_id': 'string',
        'threat_level': 'float',
        'category': 'string',
        'description': 'string',
        'recommended_action': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.threat_id = kwargs.get('threat_id', str())
        self.threat_level = kwargs.get('threat_level', float())
        self.category = kwargs.get('category', str())
        self.description = kwargs.get('description', str())
        self.recommended_action = kwargs.get('recommended_action', str())

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
        if self.header != other.header:
            return False
        if self.threat_id != other.threat_id:
            return False
        if self.threat_level != other.threat_level:
            return False
        if self.category != other.category:
            return False
        if self.description != other.description:
            return False
        if self.recommended_action != other.recommended_action:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def threat_id(self):
        """Message field 'threat_id'."""
        return self._threat_id

    @threat_id.setter
    def threat_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'threat_id' field must be of type 'str'"
        self._threat_id = value

    @builtins.property
    def threat_level(self):
        """Message field 'threat_level'."""
        return self._threat_level

    @threat_level.setter
    def threat_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'threat_level' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'threat_level' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._threat_level = value

    @builtins.property
    def category(self):
        """Message field 'category'."""
        return self._category

    @category.setter
    def category(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'category' field must be of type 'str'"
        self._category = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value

    @builtins.property
    def recommended_action(self):
        """Message field 'recommended_action'."""
        return self._recommended_action

    @recommended_action.setter
    def recommended_action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'recommended_action' field must be of type 'str'"
        self._recommended_action = value

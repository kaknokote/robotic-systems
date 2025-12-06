# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_ai_assistant:msg/SecurityAlert.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SecurityAlert(type):
    """Metaclass of message 'SecurityAlert'."""

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
                'ros_ai_assistant.msg.SecurityAlert')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__security_alert
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__security_alert
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__security_alert
            cls._TYPE_SUPPORT = module.type_support_msg__msg__security_alert
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__security_alert

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


class SecurityAlert(metaclass=Metaclass_SecurityAlert):
    """Message class 'SecurityAlert'."""

    __slots__ = [
        '_header',
        '_alert_id',
        '_level',
        '_description',
        '_source',
        '_requires_action',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'alert_id': 'string',
        'level': 'string',
        'description': 'string',
        'source': 'string',
        'requires_action': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.alert_id = kwargs.get('alert_id', str())
        self.level = kwargs.get('level', str())
        self.description = kwargs.get('description', str())
        self.source = kwargs.get('source', str())
        self.requires_action = kwargs.get('requires_action', bool())

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
        if self.alert_id != other.alert_id:
            return False
        if self.level != other.level:
            return False
        if self.description != other.description:
            return False
        if self.source != other.source:
            return False
        if self.requires_action != other.requires_action:
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
    def alert_id(self):
        """Message field 'alert_id'."""
        return self._alert_id

    @alert_id.setter
    def alert_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'alert_id' field must be of type 'str'"
        self._alert_id = value

    @builtins.property
    def level(self):
        """Message field 'level'."""
        return self._level

    @level.setter
    def level(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'level' field must be of type 'str'"
        self._level = value

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
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'source' field must be of type 'str'"
        self._source = value

    @builtins.property
    def requires_action(self):
        """Message field 'requires_action'."""
        return self._requires_action

    @requires_action.setter
    def requires_action(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'requires_action' field must be of type 'bool'"
        self._requires_action = value

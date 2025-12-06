# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_ai_assistant:srv/ThreatAssessment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ThreatAssessment_Request(type):
    """Metaclass of message 'ThreatAssessment_Request'."""

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
                'ros_ai_assistant.srv.ThreatAssessment_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__threat_assessment__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__threat_assessment__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__threat_assessment__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__threat_assessment__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__threat_assessment__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ThreatAssessment_Request(metaclass=Metaclass_ThreatAssessment_Request):
    """Message class 'ThreatAssessment_Request'."""

    __slots__ = [
        '_scenario_description',
    ]

    _fields_and_field_types = {
        'scenario_description': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.scenario_description = kwargs.get('scenario_description', str())

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
        if self.scenario_description != other.scenario_description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def scenario_description(self):
        """Message field 'scenario_description'."""
        return self._scenario_description

    @scenario_description.setter
    def scenario_description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'scenario_description' field must be of type 'str'"
        self._scenario_description = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ThreatAssessment_Response(type):
    """Metaclass of message 'ThreatAssessment_Response'."""

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
                'ros_ai_assistant.srv.ThreatAssessment_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__threat_assessment__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__threat_assessment__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__threat_assessment__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__threat_assessment__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__threat_assessment__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ThreatAssessment_Response(metaclass=Metaclass_ThreatAssessment_Response):
    """Message class 'ThreatAssessment_Response'."""

    __slots__ = [
        '_threat_level',
        '_category',
        '_recommendation',
    ]

    _fields_and_field_types = {
        'threat_level': 'float',
        'category': 'string',
        'recommendation': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.threat_level = kwargs.get('threat_level', float())
        self.category = kwargs.get('category', str())
        self.recommendation = kwargs.get('recommendation', str())

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
        if self.threat_level != other.threat_level:
            return False
        if self.category != other.category:
            return False
        if self.recommendation != other.recommendation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def recommendation(self):
        """Message field 'recommendation'."""
        return self._recommendation

    @recommendation.setter
    def recommendation(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'recommendation' field must be of type 'str'"
        self._recommendation = value


class Metaclass_ThreatAssessment(type):
    """Metaclass of service 'ThreatAssessment'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros_ai_assistant')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_ai_assistant.srv.ThreatAssessment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__threat_assessment

            from ros_ai_assistant.srv import _threat_assessment
            if _threat_assessment.Metaclass_ThreatAssessment_Request._TYPE_SUPPORT is None:
                _threat_assessment.Metaclass_ThreatAssessment_Request.__import_type_support__()
            if _threat_assessment.Metaclass_ThreatAssessment_Response._TYPE_SUPPORT is None:
                _threat_assessment.Metaclass_ThreatAssessment_Response.__import_type_support__()


class ThreatAssessment(metaclass=Metaclass_ThreatAssessment):
    from ros_ai_assistant.srv._threat_assessment import ThreatAssessment_Request as Request
    from ros_ai_assistant.srv._threat_assessment import ThreatAssessment_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

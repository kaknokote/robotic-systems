# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_ai_assistant:srv/OpenAIRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpenAIRequest_Request(type):
    """Metaclass of message 'OpenAIRequest_Request'."""

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
                'ros_ai_assistant.srv.OpenAIRequest_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__open_ai_request__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__open_ai_request__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__open_ai_request__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__open_ai_request__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__open_ai_request__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpenAIRequest_Request(metaclass=Metaclass_OpenAIRequest_Request):
    """Message class 'OpenAIRequest_Request'."""

    __slots__ = [
        '_prompt',
        '_context',
        '_model',
    ]

    _fields_and_field_types = {
        'prompt': 'string',
        'context': 'string',
        'model': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.prompt = kwargs.get('prompt', str())
        self.context = kwargs.get('context', str())
        self.model = kwargs.get('model', str())

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
        if self.prompt != other.prompt:
            return False
        if self.context != other.context:
            return False
        if self.model != other.model:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def prompt(self):
        """Message field 'prompt'."""
        return self._prompt

    @prompt.setter
    def prompt(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'prompt' field must be of type 'str'"
        self._prompt = value

    @builtins.property
    def context(self):
        """Message field 'context'."""
        return self._context

    @context.setter
    def context(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'context' field must be of type 'str'"
        self._context = value

    @builtins.property
    def model(self):
        """Message field 'model'."""
        return self._model

    @model.setter
    def model(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model' field must be of type 'str'"
        self._model = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_OpenAIRequest_Response(type):
    """Metaclass of message 'OpenAIRequest_Response'."""

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
                'ros_ai_assistant.srv.OpenAIRequest_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__open_ai_request__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__open_ai_request__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__open_ai_request__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__open_ai_request__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__open_ai_request__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpenAIRequest_Response(metaclass=Metaclass_OpenAIRequest_Response):
    """Message class 'OpenAIRequest_Response'."""

    __slots__ = [
        '_response',
        '_success',
        '_confidence',
    ]

    _fields_and_field_types = {
        'response': 'string',
        'success': 'boolean',
        'confidence': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.response = kwargs.get('response', str())
        self.success = kwargs.get('success', bool())
        self.confidence = kwargs.get('confidence', float())

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
        if self.response != other.response:
            return False
        if self.success != other.success:
            return False
        if self.confidence != other.confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'response' field must be of type 'str'"
        self._response = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value


class Metaclass_OpenAIRequest(type):
    """Metaclass of service 'OpenAIRequest'."""

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
                'ros_ai_assistant.srv.OpenAIRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__open_ai_request

            from ros_ai_assistant.srv import _open_ai_request
            if _open_ai_request.Metaclass_OpenAIRequest_Request._TYPE_SUPPORT is None:
                _open_ai_request.Metaclass_OpenAIRequest_Request.__import_type_support__()
            if _open_ai_request.Metaclass_OpenAIRequest_Response._TYPE_SUPPORT is None:
                _open_ai_request.Metaclass_OpenAIRequest_Response.__import_type_support__()


class OpenAIRequest(metaclass=Metaclass_OpenAIRequest):
    from ros_ai_assistant.srv._open_ai_request import OpenAIRequest_Request as Request
    from ros_ai_assistant.srv._open_ai_request import OpenAIRequest_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

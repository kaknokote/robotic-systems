# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_ai_assistant:srv/UserAuthentication.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UserAuthentication_Request(type):
    """Metaclass of message 'UserAuthentication_Request'."""

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
                'ros_ai_assistant.srv.UserAuthentication_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__user_authentication__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__user_authentication__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__user_authentication__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__user_authentication__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__user_authentication__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UserAuthentication_Request(metaclass=Metaclass_UserAuthentication_Request):
    """Message class 'UserAuthentication_Request'."""

    __slots__ = [
        '_user_id',
        '_token',
    ]

    _fields_and_field_types = {
        'user_id': 'string',
        'token': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.user_id = kwargs.get('user_id', str())
        self.token = kwargs.get('token', str())

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
        if self.user_id != other.user_id:
            return False
        if self.token != other.token:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def user_id(self):
        """Message field 'user_id'."""
        return self._user_id

    @user_id.setter
    def user_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'user_id' field must be of type 'str'"
        self._user_id = value

    @builtins.property
    def token(self):
        """Message field 'token'."""
        return self._token

    @token.setter
    def token(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'token' field must be of type 'str'"
        self._token = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UserAuthentication_Response(type):
    """Metaclass of message 'UserAuthentication_Response'."""

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
                'ros_ai_assistant.srv.UserAuthentication_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__user_authentication__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__user_authentication__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__user_authentication__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__user_authentication__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__user_authentication__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UserAuthentication_Response(metaclass=Metaclass_UserAuthentication_Response):
    """Message class 'UserAuthentication_Response'."""

    __slots__ = [
        '_authorized',
        '_role',
        '_message',
    ]

    _fields_and_field_types = {
        'authorized': 'boolean',
        'role': 'string',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.authorized = kwargs.get('authorized', bool())
        self.role = kwargs.get('role', str())
        self.message = kwargs.get('message', str())

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
        if self.authorized != other.authorized:
            return False
        if self.role != other.role:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def authorized(self):
        """Message field 'authorized'."""
        return self._authorized

    @authorized.setter
    def authorized(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'authorized' field must be of type 'bool'"
        self._authorized = value

    @builtins.property
    def role(self):
        """Message field 'role'."""
        return self._role

    @role.setter
    def role(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'role' field must be of type 'str'"
        self._role = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_UserAuthentication(type):
    """Metaclass of service 'UserAuthentication'."""

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
                'ros_ai_assistant.srv.UserAuthentication')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__user_authentication

            from ros_ai_assistant.srv import _user_authentication
            if _user_authentication.Metaclass_UserAuthentication_Request._TYPE_SUPPORT is None:
                _user_authentication.Metaclass_UserAuthentication_Request.__import_type_support__()
            if _user_authentication.Metaclass_UserAuthentication_Response._TYPE_SUPPORT is None:
                _user_authentication.Metaclass_UserAuthentication_Response.__import_type_support__()


class UserAuthentication(metaclass=Metaclass_UserAuthentication):
    from ros_ai_assistant.srv._user_authentication import UserAuthentication_Request as Request
    from ros_ai_assistant.srv._user_authentication import UserAuthentication_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')

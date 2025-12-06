// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_ai_assistant:msg/AIResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_ai_assistant/msg/detail/ai_response__rosidl_typesupport_introspection_c.h"
#include "ros_ai_assistant/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_ai_assistant/msg/detail/ai_response__functions.h"
#include "ros_ai_assistant/msg/detail/ai_response__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `command_id`
// Member `response_text`
// Member `finish_reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_ai_assistant__msg__AIResponse__init(message_memory);
}

void ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_fini_function(void * message_memory)
{
  ros_ai_assistant__msg__AIResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__AIResponse, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__AIResponse, command_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "response_text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__AIResponse, response_text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__AIResponse, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tokens_used",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__AIResponse, tokens_used),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "finish_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__AIResponse, finish_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_message_members = {
  "ros_ai_assistant__msg",  // message namespace
  "AIResponse",  // message name
  6,  // number of fields
  sizeof(ros_ai_assistant__msg__AIResponse),
  ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_message_member_array,  // message members
  ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_message_type_support_handle = {
  0,
  &ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_ai_assistant
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ai_assistant, msg, AIResponse)() {
  ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_message_type_support_handle.typesupport_identifier) {
    ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_ai_assistant__msg__AIResponse__rosidl_typesupport_introspection_c__AIResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

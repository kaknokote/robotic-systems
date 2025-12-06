// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ai_assistant:srv/ContextSwitch.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__STRUCT_H_
#define ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'new_context'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ContextSwitch in the package ros_ai_assistant.
typedef struct ros_ai_assistant__srv__ContextSwitch_Request
{
  rosidl_runtime_c__String new_context;
  bool save_previous;
} ros_ai_assistant__srv__ContextSwitch_Request;

// Struct for a sequence of ros_ai_assistant__srv__ContextSwitch_Request.
typedef struct ros_ai_assistant__srv__ContextSwitch_Request__Sequence
{
  ros_ai_assistant__srv__ContextSwitch_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__srv__ContextSwitch_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ContextSwitch in the package ros_ai_assistant.
typedef struct ros_ai_assistant__srv__ContextSwitch_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ros_ai_assistant__srv__ContextSwitch_Response;

// Struct for a sequence of ros_ai_assistant__srv__ContextSwitch_Response.
typedef struct ros_ai_assistant__srv__ContextSwitch_Response__Sequence
{
  ros_ai_assistant__srv__ContextSwitch_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__srv__ContextSwitch_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__CONTEXT_SWITCH__STRUCT_H_

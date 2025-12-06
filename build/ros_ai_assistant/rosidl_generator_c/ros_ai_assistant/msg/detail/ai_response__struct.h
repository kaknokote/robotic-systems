// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ai_assistant:msg/AIResponse.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__STRUCT_H_
#define ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'command_id'
// Member 'response_text'
// Member 'finish_reason'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AIResponse in the package ros_ai_assistant.
typedef struct ros_ai_assistant__msg__AIResponse
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String command_id;
  rosidl_runtime_c__String response_text;
  float confidence;
  int32_t tokens_used;
  rosidl_runtime_c__String finish_reason;
} ros_ai_assistant__msg__AIResponse;

// Struct for a sequence of ros_ai_assistant__msg__AIResponse.
typedef struct ros_ai_assistant__msg__AIResponse__Sequence
{
  ros_ai_assistant__msg__AIResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__msg__AIResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__AI_RESPONSE__STRUCT_H_

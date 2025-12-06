// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ai_assistant:msg/SecurityAlert.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__STRUCT_H_
#define ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__STRUCT_H_

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
// Member 'alert_id'
// Member 'level'
// Member 'description'
// Member 'source'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SecurityAlert in the package ros_ai_assistant.
typedef struct ros_ai_assistant__msg__SecurityAlert
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String alert_id;
  /// low/medium/high/critical
  rosidl_runtime_c__String level;
  rosidl_runtime_c__String description;
  rosidl_runtime_c__String source;
  bool requires_action;
} ros_ai_assistant__msg__SecurityAlert;

// Struct for a sequence of ros_ai_assistant__msg__SecurityAlert.
typedef struct ros_ai_assistant__msg__SecurityAlert__Sequence
{
  ros_ai_assistant__msg__SecurityAlert * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__msg__SecurityAlert__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__SECURITY_ALERT__STRUCT_H_

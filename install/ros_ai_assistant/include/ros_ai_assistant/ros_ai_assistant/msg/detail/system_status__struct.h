// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ai_assistant:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define ROS_AI_ASSISTANT__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

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
// Member 'status'
// Member 'component'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemStatus in the package ros_ai_assistant.
typedef struct ros_ai_assistant__msg__SystemStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String status;
  bool is_operational;
  rosidl_runtime_c__String component;
} ros_ai_assistant__msg__SystemStatus;

// Struct for a sequence of ros_ai_assistant__msg__SystemStatus.
typedef struct ros_ai_assistant__msg__SystemStatus__Sequence
{
  ros_ai_assistant__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

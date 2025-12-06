// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ai_assistant:msg/ThreatAssessment.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__STRUCT_H_
#define ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__STRUCT_H_

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
// Member 'threat_id'
// Member 'category'
// Member 'description'
// Member 'recommended_action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ThreatAssessment in the package ros_ai_assistant.
typedef struct ros_ai_assistant__msg__ThreatAssessment
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String threat_id;
  /// 0.0–1.0
  float threat_level;
  /// например, "person", "vehicle"
  rosidl_runtime_c__String category;
  rosidl_runtime_c__String description;
  rosidl_runtime_c__String recommended_action;
} ros_ai_assistant__msg__ThreatAssessment;

// Struct for a sequence of ros_ai_assistant__msg__ThreatAssessment.
typedef struct ros_ai_assistant__msg__ThreatAssessment__Sequence
{
  ros_ai_assistant__msg__ThreatAssessment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__msg__ThreatAssessment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__THREAT_ASSESSMENT__STRUCT_H_

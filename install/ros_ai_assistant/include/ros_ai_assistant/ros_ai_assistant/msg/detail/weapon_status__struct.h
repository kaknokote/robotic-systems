// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ai_assistant:msg/WeaponStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__MSG__DETAIL__WEAPON_STATUS__STRUCT_H_
#define ROS_AI_ASSISTANT__MSG__DETAIL__WEAPON_STATUS__STRUCT_H_

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
// Member 'mode'
// Member 'status_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WeaponStatus in the package ros_ai_assistant.
typedef struct ros_ai_assistant__msg__WeaponStatus
{
  std_msgs__msg__Header header;
  bool armed;
  /// safe/standby/active
  rosidl_runtime_c__String mode;
  /// 0.0–1.0
  float ammo_level;
  rosidl_runtime_c__String status_message;
} ros_ai_assistant__msg__WeaponStatus;

// Struct for a sequence of ros_ai_assistant__msg__WeaponStatus.
typedef struct ros_ai_assistant__msg__WeaponStatus__Sequence
{
  ros_ai_assistant__msg__WeaponStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__msg__WeaponStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AI_ASSISTANT__MSG__DETAIL__WEAPON_STATUS__STRUCT_H_

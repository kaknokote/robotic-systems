// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ai_assistant:srv/ThreatAssessment.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__STRUCT_H_
#define ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'scenario_description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ThreatAssessment in the package ros_ai_assistant.
typedef struct ros_ai_assistant__srv__ThreatAssessment_Request
{
  rosidl_runtime_c__String scenario_description;
} ros_ai_assistant__srv__ThreatAssessment_Request;

// Struct for a sequence of ros_ai_assistant__srv__ThreatAssessment_Request.
typedef struct ros_ai_assistant__srv__ThreatAssessment_Request__Sequence
{
  ros_ai_assistant__srv__ThreatAssessment_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__srv__ThreatAssessment_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'category'
// Member 'recommendation'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ThreatAssessment in the package ros_ai_assistant.
typedef struct ros_ai_assistant__srv__ThreatAssessment_Response
{
  float threat_level;
  rosidl_runtime_c__String category;
  rosidl_runtime_c__String recommendation;
} ros_ai_assistant__srv__ThreatAssessment_Response;

// Struct for a sequence of ros_ai_assistant__srv__ThreatAssessment_Response.
typedef struct ros_ai_assistant__srv__ThreatAssessment_Response__Sequence
{
  ros_ai_assistant__srv__ThreatAssessment_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__srv__ThreatAssessment_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__THREAT_ASSESSMENT__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ai_assistant:srv/OpenAIRequest.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__STRUCT_H_
#define ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prompt'
// Member 'context'
// Member 'model'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/OpenAIRequest in the package ros_ai_assistant.
typedef struct ros_ai_assistant__srv__OpenAIRequest_Request
{
  rosidl_runtime_c__String prompt;
  rosidl_runtime_c__String context;
  rosidl_runtime_c__String model;
} ros_ai_assistant__srv__OpenAIRequest_Request;

// Struct for a sequence of ros_ai_assistant__srv__OpenAIRequest_Request.
typedef struct ros_ai_assistant__srv__OpenAIRequest_Request__Sequence
{
  ros_ai_assistant__srv__OpenAIRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__srv__OpenAIRequest_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/OpenAIRequest in the package ros_ai_assistant.
typedef struct ros_ai_assistant__srv__OpenAIRequest_Response
{
  rosidl_runtime_c__String response;
  bool success;
  float confidence;
} ros_ai_assistant__srv__OpenAIRequest_Response;

// Struct for a sequence of ros_ai_assistant__srv__OpenAIRequest_Response.
typedef struct ros_ai_assistant__srv__OpenAIRequest_Response__Sequence
{
  ros_ai_assistant__srv__OpenAIRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__srv__OpenAIRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__OPEN_AI_REQUEST__STRUCT_H_

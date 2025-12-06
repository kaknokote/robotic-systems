// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_ai_assistant:srv/UserAuthentication.idl
// generated code does not contain a copyright notice

#ifndef ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__STRUCT_H_
#define ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'user_id'
// Member 'token'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UserAuthentication in the package ros_ai_assistant.
typedef struct ros_ai_assistant__srv__UserAuthentication_Request
{
  rosidl_runtime_c__String user_id;
  rosidl_runtime_c__String token;
} ros_ai_assistant__srv__UserAuthentication_Request;

// Struct for a sequence of ros_ai_assistant__srv__UserAuthentication_Request.
typedef struct ros_ai_assistant__srv__UserAuthentication_Request__Sequence
{
  ros_ai_assistant__srv__UserAuthentication_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__srv__UserAuthentication_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'role'
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/UserAuthentication in the package ros_ai_assistant.
typedef struct ros_ai_assistant__srv__UserAuthentication_Response
{
  bool authorized;
  rosidl_runtime_c__String role;
  rosidl_runtime_c__String message;
} ros_ai_assistant__srv__UserAuthentication_Response;

// Struct for a sequence of ros_ai_assistant__srv__UserAuthentication_Response.
typedef struct ros_ai_assistant__srv__UserAuthentication_Response__Sequence
{
  ros_ai_assistant__srv__UserAuthentication_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_ai_assistant__srv__UserAuthentication_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_AI_ASSISTANT__SRV__DETAIL__USER_AUTHENTICATION__STRUCT_H_

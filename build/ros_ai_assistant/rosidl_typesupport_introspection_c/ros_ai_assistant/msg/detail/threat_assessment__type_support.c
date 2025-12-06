// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_ai_assistant:msg/ThreatAssessment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_ai_assistant/msg/detail/threat_assessment__rosidl_typesupport_introspection_c.h"
#include "ros_ai_assistant/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_ai_assistant/msg/detail/threat_assessment__functions.h"
#include "ros_ai_assistant/msg/detail/threat_assessment__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `threat_id`
// Member `category`
// Member `description`
// Member `recommended_action`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_ai_assistant__msg__ThreatAssessment__init(message_memory);
}

void ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_fini_function(void * message_memory)
{
  ros_ai_assistant__msg__ThreatAssessment__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__ThreatAssessment, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "threat_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__ThreatAssessment, threat_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "threat_level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__ThreatAssessment, threat_level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "category",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__ThreatAssessment, category),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__ThreatAssessment, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recommended_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_ai_assistant__msg__ThreatAssessment, recommended_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_message_members = {
  "ros_ai_assistant__msg",  // message namespace
  "ThreatAssessment",  // message name
  6,  // number of fields
  sizeof(ros_ai_assistant__msg__ThreatAssessment),
  ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_message_member_array,  // message members
  ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_message_type_support_handle = {
  0,
  &ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_ai_assistant
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_ai_assistant, msg, ThreatAssessment)() {
  ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_message_type_support_handle.typesupport_identifier) {
    ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_ai_assistant__msg__ThreatAssessment__rosidl_typesupport_introspection_c__ThreatAssessment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

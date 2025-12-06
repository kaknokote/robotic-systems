// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_ai_assistant:srv/ThreatAssessment.idl
// generated code does not contain a copyright notice
#include "ros_ai_assistant/srv/detail/threat_assessment__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_ai_assistant/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_ai_assistant/srv/detail/threat_assessment__struct.h"
#include "ros_ai_assistant/srv/detail/threat_assessment__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // scenario_description
#include "rosidl_runtime_c/string_functions.h"  // scenario_description

// forward declare type support functions


using _ThreatAssessment_Request__ros_msg_type = ros_ai_assistant__srv__ThreatAssessment_Request;

static bool _ThreatAssessment_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ThreatAssessment_Request__ros_msg_type * ros_message = static_cast<const _ThreatAssessment_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: scenario_description
  {
    const rosidl_runtime_c__String * str = &ros_message->scenario_description;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ThreatAssessment_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ThreatAssessment_Request__ros_msg_type * ros_message = static_cast<_ThreatAssessment_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: scenario_description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->scenario_description.data) {
      rosidl_runtime_c__String__init(&ros_message->scenario_description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->scenario_description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'scenario_description'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_ai_assistant
size_t get_serialized_size_ros_ai_assistant__srv__ThreatAssessment_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ThreatAssessment_Request__ros_msg_type * ros_message = static_cast<const _ThreatAssessment_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name scenario_description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->scenario_description.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ThreatAssessment_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_ai_assistant__srv__ThreatAssessment_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_ai_assistant
size_t max_serialized_size_ros_ai_assistant__srv__ThreatAssessment_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: scenario_description
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_ai_assistant__srv__ThreatAssessment_Request;
    is_plain =
      (
      offsetof(DataType, scenario_description) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ThreatAssessment_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_ai_assistant__srv__ThreatAssessment_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ThreatAssessment_Request = {
  "ros_ai_assistant::srv",
  "ThreatAssessment_Request",
  _ThreatAssessment_Request__cdr_serialize,
  _ThreatAssessment_Request__cdr_deserialize,
  _ThreatAssessment_Request__get_serialized_size,
  _ThreatAssessment_Request__max_serialized_size
};

static rosidl_message_type_support_t _ThreatAssessment_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ThreatAssessment_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_ai_assistant, srv, ThreatAssessment_Request)() {
  return &_ThreatAssessment_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ros_ai_assistant/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ros_ai_assistant/srv/detail/threat_assessment__struct.h"
// already included above
// #include "ros_ai_assistant/srv/detail/threat_assessment__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // category, recommendation
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // category, recommendation

// forward declare type support functions


using _ThreatAssessment_Response__ros_msg_type = ros_ai_assistant__srv__ThreatAssessment_Response;

static bool _ThreatAssessment_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ThreatAssessment_Response__ros_msg_type * ros_message = static_cast<const _ThreatAssessment_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: threat_level
  {
    cdr << ros_message->threat_level;
  }

  // Field name: category
  {
    const rosidl_runtime_c__String * str = &ros_message->category;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: recommendation
  {
    const rosidl_runtime_c__String * str = &ros_message->recommendation;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ThreatAssessment_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ThreatAssessment_Response__ros_msg_type * ros_message = static_cast<_ThreatAssessment_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: threat_level
  {
    cdr >> ros_message->threat_level;
  }

  // Field name: category
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->category.data) {
      rosidl_runtime_c__String__init(&ros_message->category);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->category,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'category'\n");
      return false;
    }
  }

  // Field name: recommendation
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->recommendation.data) {
      rosidl_runtime_c__String__init(&ros_message->recommendation);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->recommendation,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'recommendation'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_ai_assistant
size_t get_serialized_size_ros_ai_assistant__srv__ThreatAssessment_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ThreatAssessment_Response__ros_msg_type * ros_message = static_cast<const _ThreatAssessment_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name threat_level
  {
    size_t item_size = sizeof(ros_message->threat_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name category
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->category.size + 1);
  // field.name recommendation
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->recommendation.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ThreatAssessment_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_ai_assistant__srv__ThreatAssessment_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_ai_assistant
size_t max_serialized_size_ros_ai_assistant__srv__ThreatAssessment_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: threat_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: category
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: recommendation
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_ai_assistant__srv__ThreatAssessment_Response;
    is_plain =
      (
      offsetof(DataType, recommendation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ThreatAssessment_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_ai_assistant__srv__ThreatAssessment_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ThreatAssessment_Response = {
  "ros_ai_assistant::srv",
  "ThreatAssessment_Response",
  _ThreatAssessment_Response__cdr_serialize,
  _ThreatAssessment_Response__cdr_deserialize,
  _ThreatAssessment_Response__get_serialized_size,
  _ThreatAssessment_Response__max_serialized_size
};

static rosidl_message_type_support_t _ThreatAssessment_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ThreatAssessment_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_ai_assistant, srv, ThreatAssessment_Response)() {
  return &_ThreatAssessment_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ros_ai_assistant/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_ai_assistant/srv/threat_assessment.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ThreatAssessment__callbacks = {
  "ros_ai_assistant::srv",
  "ThreatAssessment",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_ai_assistant, srv, ThreatAssessment_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_ai_assistant, srv, ThreatAssessment_Response)(),
};

static rosidl_service_type_support_t ThreatAssessment__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ThreatAssessment__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_ai_assistant, srv, ThreatAssessment)() {
  return &ThreatAssessment__handle;
}

#if defined(__cplusplus)
}
#endif

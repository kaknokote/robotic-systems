// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ai_assistant:msg/AIResponse.idl
// generated code does not contain a copyright notice
#include "ros_ai_assistant/msg/detail/ai_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `command_id`
// Member `response_text`
// Member `finish_reason`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_ai_assistant__msg__AIResponse__init(ros_ai_assistant__msg__AIResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_ai_assistant__msg__AIResponse__fini(msg);
    return false;
  }
  // command_id
  if (!rosidl_runtime_c__String__init(&msg->command_id)) {
    ros_ai_assistant__msg__AIResponse__fini(msg);
    return false;
  }
  // response_text
  if (!rosidl_runtime_c__String__init(&msg->response_text)) {
    ros_ai_assistant__msg__AIResponse__fini(msg);
    return false;
  }
  // confidence
  // tokens_used
  // finish_reason
  if (!rosidl_runtime_c__String__init(&msg->finish_reason)) {
    ros_ai_assistant__msg__AIResponse__fini(msg);
    return false;
  }
  return true;
}

void
ros_ai_assistant__msg__AIResponse__fini(ros_ai_assistant__msg__AIResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // command_id
  rosidl_runtime_c__String__fini(&msg->command_id);
  // response_text
  rosidl_runtime_c__String__fini(&msg->response_text);
  // confidence
  // tokens_used
  // finish_reason
  rosidl_runtime_c__String__fini(&msg->finish_reason);
}

bool
ros_ai_assistant__msg__AIResponse__are_equal(const ros_ai_assistant__msg__AIResponse * lhs, const ros_ai_assistant__msg__AIResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // command_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command_id), &(rhs->command_id)))
  {
    return false;
  }
  // response_text
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response_text), &(rhs->response_text)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // tokens_used
  if (lhs->tokens_used != rhs->tokens_used) {
    return false;
  }
  // finish_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->finish_reason), &(rhs->finish_reason)))
  {
    return false;
  }
  return true;
}

bool
ros_ai_assistant__msg__AIResponse__copy(
  const ros_ai_assistant__msg__AIResponse * input,
  ros_ai_assistant__msg__AIResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // command_id
  if (!rosidl_runtime_c__String__copy(
      &(input->command_id), &(output->command_id)))
  {
    return false;
  }
  // response_text
  if (!rosidl_runtime_c__String__copy(
      &(input->response_text), &(output->response_text)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // tokens_used
  output->tokens_used = input->tokens_used;
  // finish_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->finish_reason), &(output->finish_reason)))
  {
    return false;
  }
  return true;
}

ros_ai_assistant__msg__AIResponse *
ros_ai_assistant__msg__AIResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__msg__AIResponse * msg = (ros_ai_assistant__msg__AIResponse *)allocator.allocate(sizeof(ros_ai_assistant__msg__AIResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ai_assistant__msg__AIResponse));
  bool success = ros_ai_assistant__msg__AIResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_ai_assistant__msg__AIResponse__destroy(ros_ai_assistant__msg__AIResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_ai_assistant__msg__AIResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_ai_assistant__msg__AIResponse__Sequence__init(ros_ai_assistant__msg__AIResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__msg__AIResponse * data = NULL;

  if (size) {
    data = (ros_ai_assistant__msg__AIResponse *)allocator.zero_allocate(size, sizeof(ros_ai_assistant__msg__AIResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ai_assistant__msg__AIResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ai_assistant__msg__AIResponse__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_ai_assistant__msg__AIResponse__Sequence__fini(ros_ai_assistant__msg__AIResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_ai_assistant__msg__AIResponse__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_ai_assistant__msg__AIResponse__Sequence *
ros_ai_assistant__msg__AIResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__msg__AIResponse__Sequence * array = (ros_ai_assistant__msg__AIResponse__Sequence *)allocator.allocate(sizeof(ros_ai_assistant__msg__AIResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_ai_assistant__msg__AIResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_ai_assistant__msg__AIResponse__Sequence__destroy(ros_ai_assistant__msg__AIResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_ai_assistant__msg__AIResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_ai_assistant__msg__AIResponse__Sequence__are_equal(const ros_ai_assistant__msg__AIResponse__Sequence * lhs, const ros_ai_assistant__msg__AIResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ai_assistant__msg__AIResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ai_assistant__msg__AIResponse__Sequence__copy(
  const ros_ai_assistant__msg__AIResponse__Sequence * input,
  ros_ai_assistant__msg__AIResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ai_assistant__msg__AIResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_ai_assistant__msg__AIResponse * data =
      (ros_ai_assistant__msg__AIResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ai_assistant__msg__AIResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_ai_assistant__msg__AIResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_ai_assistant__msg__AIResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

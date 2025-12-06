// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ai_assistant:msg/SecurityAlert.idl
// generated code does not contain a copyright notice
#include "ros_ai_assistant/msg/detail/security_alert__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `alert_id`
// Member `level`
// Member `description`
// Member `source`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_ai_assistant__msg__SecurityAlert__init(ros_ai_assistant__msg__SecurityAlert * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_ai_assistant__msg__SecurityAlert__fini(msg);
    return false;
  }
  // alert_id
  if (!rosidl_runtime_c__String__init(&msg->alert_id)) {
    ros_ai_assistant__msg__SecurityAlert__fini(msg);
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__init(&msg->level)) {
    ros_ai_assistant__msg__SecurityAlert__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    ros_ai_assistant__msg__SecurityAlert__fini(msg);
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__init(&msg->source)) {
    ros_ai_assistant__msg__SecurityAlert__fini(msg);
    return false;
  }
  // requires_action
  return true;
}

void
ros_ai_assistant__msg__SecurityAlert__fini(ros_ai_assistant__msg__SecurityAlert * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // alert_id
  rosidl_runtime_c__String__fini(&msg->alert_id);
  // level
  rosidl_runtime_c__String__fini(&msg->level);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // source
  rosidl_runtime_c__String__fini(&msg->source);
  // requires_action
}

bool
ros_ai_assistant__msg__SecurityAlert__are_equal(const ros_ai_assistant__msg__SecurityAlert * lhs, const ros_ai_assistant__msg__SecurityAlert * rhs)
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
  // alert_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->alert_id), &(rhs->alert_id)))
  {
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->level), &(rhs->level)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // requires_action
  if (lhs->requires_action != rhs->requires_action) {
    return false;
  }
  return true;
}

bool
ros_ai_assistant__msg__SecurityAlert__copy(
  const ros_ai_assistant__msg__SecurityAlert * input,
  ros_ai_assistant__msg__SecurityAlert * output)
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
  // alert_id
  if (!rosidl_runtime_c__String__copy(
      &(input->alert_id), &(output->alert_id)))
  {
    return false;
  }
  // level
  if (!rosidl_runtime_c__String__copy(
      &(input->level), &(output->level)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // source
  if (!rosidl_runtime_c__String__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // requires_action
  output->requires_action = input->requires_action;
  return true;
}

ros_ai_assistant__msg__SecurityAlert *
ros_ai_assistant__msg__SecurityAlert__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__msg__SecurityAlert * msg = (ros_ai_assistant__msg__SecurityAlert *)allocator.allocate(sizeof(ros_ai_assistant__msg__SecurityAlert), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ai_assistant__msg__SecurityAlert));
  bool success = ros_ai_assistant__msg__SecurityAlert__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_ai_assistant__msg__SecurityAlert__destroy(ros_ai_assistant__msg__SecurityAlert * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_ai_assistant__msg__SecurityAlert__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_ai_assistant__msg__SecurityAlert__Sequence__init(ros_ai_assistant__msg__SecurityAlert__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__msg__SecurityAlert * data = NULL;

  if (size) {
    data = (ros_ai_assistant__msg__SecurityAlert *)allocator.zero_allocate(size, sizeof(ros_ai_assistant__msg__SecurityAlert), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ai_assistant__msg__SecurityAlert__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ai_assistant__msg__SecurityAlert__fini(&data[i - 1]);
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
ros_ai_assistant__msg__SecurityAlert__Sequence__fini(ros_ai_assistant__msg__SecurityAlert__Sequence * array)
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
      ros_ai_assistant__msg__SecurityAlert__fini(&array->data[i]);
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

ros_ai_assistant__msg__SecurityAlert__Sequence *
ros_ai_assistant__msg__SecurityAlert__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__msg__SecurityAlert__Sequence * array = (ros_ai_assistant__msg__SecurityAlert__Sequence *)allocator.allocate(sizeof(ros_ai_assistant__msg__SecurityAlert__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_ai_assistant__msg__SecurityAlert__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_ai_assistant__msg__SecurityAlert__Sequence__destroy(ros_ai_assistant__msg__SecurityAlert__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_ai_assistant__msg__SecurityAlert__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_ai_assistant__msg__SecurityAlert__Sequence__are_equal(const ros_ai_assistant__msg__SecurityAlert__Sequence * lhs, const ros_ai_assistant__msg__SecurityAlert__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ai_assistant__msg__SecurityAlert__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ai_assistant__msg__SecurityAlert__Sequence__copy(
  const ros_ai_assistant__msg__SecurityAlert__Sequence * input,
  ros_ai_assistant__msg__SecurityAlert__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ai_assistant__msg__SecurityAlert);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_ai_assistant__msg__SecurityAlert * data =
      (ros_ai_assistant__msg__SecurityAlert *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ai_assistant__msg__SecurityAlert__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_ai_assistant__msg__SecurityAlert__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_ai_assistant__msg__SecurityAlert__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ai_assistant:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#include "ros_ai_assistant/msg/detail/system_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `status`
// Member `component`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_ai_assistant__msg__SystemStatus__init(ros_ai_assistant__msg__SystemStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_ai_assistant__msg__SystemStatus__fini(msg);
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    ros_ai_assistant__msg__SystemStatus__fini(msg);
    return false;
  }
  // is_operational
  // component
  if (!rosidl_runtime_c__String__init(&msg->component)) {
    ros_ai_assistant__msg__SystemStatus__fini(msg);
    return false;
  }
  return true;
}

void
ros_ai_assistant__msg__SystemStatus__fini(ros_ai_assistant__msg__SystemStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // is_operational
  // component
  rosidl_runtime_c__String__fini(&msg->component);
}

bool
ros_ai_assistant__msg__SystemStatus__are_equal(const ros_ai_assistant__msg__SystemStatus * lhs, const ros_ai_assistant__msg__SystemStatus * rhs)
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
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // is_operational
  if (lhs->is_operational != rhs->is_operational) {
    return false;
  }
  // component
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->component), &(rhs->component)))
  {
    return false;
  }
  return true;
}

bool
ros_ai_assistant__msg__SystemStatus__copy(
  const ros_ai_assistant__msg__SystemStatus * input,
  ros_ai_assistant__msg__SystemStatus * output)
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
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // is_operational
  output->is_operational = input->is_operational;
  // component
  if (!rosidl_runtime_c__String__copy(
      &(input->component), &(output->component)))
  {
    return false;
  }
  return true;
}

ros_ai_assistant__msg__SystemStatus *
ros_ai_assistant__msg__SystemStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__msg__SystemStatus * msg = (ros_ai_assistant__msg__SystemStatus *)allocator.allocate(sizeof(ros_ai_assistant__msg__SystemStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ai_assistant__msg__SystemStatus));
  bool success = ros_ai_assistant__msg__SystemStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_ai_assistant__msg__SystemStatus__destroy(ros_ai_assistant__msg__SystemStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_ai_assistant__msg__SystemStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_ai_assistant__msg__SystemStatus__Sequence__init(ros_ai_assistant__msg__SystemStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__msg__SystemStatus * data = NULL;

  if (size) {
    data = (ros_ai_assistant__msg__SystemStatus *)allocator.zero_allocate(size, sizeof(ros_ai_assistant__msg__SystemStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ai_assistant__msg__SystemStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ai_assistant__msg__SystemStatus__fini(&data[i - 1]);
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
ros_ai_assistant__msg__SystemStatus__Sequence__fini(ros_ai_assistant__msg__SystemStatus__Sequence * array)
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
      ros_ai_assistant__msg__SystemStatus__fini(&array->data[i]);
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

ros_ai_assistant__msg__SystemStatus__Sequence *
ros_ai_assistant__msg__SystemStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__msg__SystemStatus__Sequence * array = (ros_ai_assistant__msg__SystemStatus__Sequence *)allocator.allocate(sizeof(ros_ai_assistant__msg__SystemStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_ai_assistant__msg__SystemStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_ai_assistant__msg__SystemStatus__Sequence__destroy(ros_ai_assistant__msg__SystemStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_ai_assistant__msg__SystemStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_ai_assistant__msg__SystemStatus__Sequence__are_equal(const ros_ai_assistant__msg__SystemStatus__Sequence * lhs, const ros_ai_assistant__msg__SystemStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ai_assistant__msg__SystemStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ai_assistant__msg__SystemStatus__Sequence__copy(
  const ros_ai_assistant__msg__SystemStatus__Sequence * input,
  ros_ai_assistant__msg__SystemStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ai_assistant__msg__SystemStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_ai_assistant__msg__SystemStatus * data =
      (ros_ai_assistant__msg__SystemStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ai_assistant__msg__SystemStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_ai_assistant__msg__SystemStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_ai_assistant__msg__SystemStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

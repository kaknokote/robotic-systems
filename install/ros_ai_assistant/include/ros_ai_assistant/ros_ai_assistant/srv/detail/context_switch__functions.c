// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ai_assistant:srv/ContextSwitch.idl
// generated code does not contain a copyright notice
#include "ros_ai_assistant/srv/detail/context_switch__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `new_context`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_ai_assistant__srv__ContextSwitch_Request__init(ros_ai_assistant__srv__ContextSwitch_Request * msg)
{
  if (!msg) {
    return false;
  }
  // new_context
  if (!rosidl_runtime_c__String__init(&msg->new_context)) {
    ros_ai_assistant__srv__ContextSwitch_Request__fini(msg);
    return false;
  }
  // save_previous
  return true;
}

void
ros_ai_assistant__srv__ContextSwitch_Request__fini(ros_ai_assistant__srv__ContextSwitch_Request * msg)
{
  if (!msg) {
    return;
  }
  // new_context
  rosidl_runtime_c__String__fini(&msg->new_context);
  // save_previous
}

bool
ros_ai_assistant__srv__ContextSwitch_Request__are_equal(const ros_ai_assistant__srv__ContextSwitch_Request * lhs, const ros_ai_assistant__srv__ContextSwitch_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // new_context
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->new_context), &(rhs->new_context)))
  {
    return false;
  }
  // save_previous
  if (lhs->save_previous != rhs->save_previous) {
    return false;
  }
  return true;
}

bool
ros_ai_assistant__srv__ContextSwitch_Request__copy(
  const ros_ai_assistant__srv__ContextSwitch_Request * input,
  ros_ai_assistant__srv__ContextSwitch_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // new_context
  if (!rosidl_runtime_c__String__copy(
      &(input->new_context), &(output->new_context)))
  {
    return false;
  }
  // save_previous
  output->save_previous = input->save_previous;
  return true;
}

ros_ai_assistant__srv__ContextSwitch_Request *
ros_ai_assistant__srv__ContextSwitch_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__ContextSwitch_Request * msg = (ros_ai_assistant__srv__ContextSwitch_Request *)allocator.allocate(sizeof(ros_ai_assistant__srv__ContextSwitch_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ai_assistant__srv__ContextSwitch_Request));
  bool success = ros_ai_assistant__srv__ContextSwitch_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_ai_assistant__srv__ContextSwitch_Request__destroy(ros_ai_assistant__srv__ContextSwitch_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_ai_assistant__srv__ContextSwitch_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_ai_assistant__srv__ContextSwitch_Request__Sequence__init(ros_ai_assistant__srv__ContextSwitch_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__ContextSwitch_Request * data = NULL;

  if (size) {
    data = (ros_ai_assistant__srv__ContextSwitch_Request *)allocator.zero_allocate(size, sizeof(ros_ai_assistant__srv__ContextSwitch_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ai_assistant__srv__ContextSwitch_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ai_assistant__srv__ContextSwitch_Request__fini(&data[i - 1]);
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
ros_ai_assistant__srv__ContextSwitch_Request__Sequence__fini(ros_ai_assistant__srv__ContextSwitch_Request__Sequence * array)
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
      ros_ai_assistant__srv__ContextSwitch_Request__fini(&array->data[i]);
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

ros_ai_assistant__srv__ContextSwitch_Request__Sequence *
ros_ai_assistant__srv__ContextSwitch_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__ContextSwitch_Request__Sequence * array = (ros_ai_assistant__srv__ContextSwitch_Request__Sequence *)allocator.allocate(sizeof(ros_ai_assistant__srv__ContextSwitch_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_ai_assistant__srv__ContextSwitch_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_ai_assistant__srv__ContextSwitch_Request__Sequence__destroy(ros_ai_assistant__srv__ContextSwitch_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_ai_assistant__srv__ContextSwitch_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_ai_assistant__srv__ContextSwitch_Request__Sequence__are_equal(const ros_ai_assistant__srv__ContextSwitch_Request__Sequence * lhs, const ros_ai_assistant__srv__ContextSwitch_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ai_assistant__srv__ContextSwitch_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ai_assistant__srv__ContextSwitch_Request__Sequence__copy(
  const ros_ai_assistant__srv__ContextSwitch_Request__Sequence * input,
  ros_ai_assistant__srv__ContextSwitch_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ai_assistant__srv__ContextSwitch_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_ai_assistant__srv__ContextSwitch_Request * data =
      (ros_ai_assistant__srv__ContextSwitch_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ai_assistant__srv__ContextSwitch_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_ai_assistant__srv__ContextSwitch_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_ai_assistant__srv__ContextSwitch_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ros_ai_assistant__srv__ContextSwitch_Response__init(ros_ai_assistant__srv__ContextSwitch_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ros_ai_assistant__srv__ContextSwitch_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros_ai_assistant__srv__ContextSwitch_Response__fini(ros_ai_assistant__srv__ContextSwitch_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
ros_ai_assistant__srv__ContextSwitch_Response__are_equal(const ros_ai_assistant__srv__ContextSwitch_Response * lhs, const ros_ai_assistant__srv__ContextSwitch_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
ros_ai_assistant__srv__ContextSwitch_Response__copy(
  const ros_ai_assistant__srv__ContextSwitch_Response * input,
  ros_ai_assistant__srv__ContextSwitch_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

ros_ai_assistant__srv__ContextSwitch_Response *
ros_ai_assistant__srv__ContextSwitch_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__ContextSwitch_Response * msg = (ros_ai_assistant__srv__ContextSwitch_Response *)allocator.allocate(sizeof(ros_ai_assistant__srv__ContextSwitch_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ai_assistant__srv__ContextSwitch_Response));
  bool success = ros_ai_assistant__srv__ContextSwitch_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_ai_assistant__srv__ContextSwitch_Response__destroy(ros_ai_assistant__srv__ContextSwitch_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_ai_assistant__srv__ContextSwitch_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_ai_assistant__srv__ContextSwitch_Response__Sequence__init(ros_ai_assistant__srv__ContextSwitch_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__ContextSwitch_Response * data = NULL;

  if (size) {
    data = (ros_ai_assistant__srv__ContextSwitch_Response *)allocator.zero_allocate(size, sizeof(ros_ai_assistant__srv__ContextSwitch_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ai_assistant__srv__ContextSwitch_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ai_assistant__srv__ContextSwitch_Response__fini(&data[i - 1]);
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
ros_ai_assistant__srv__ContextSwitch_Response__Sequence__fini(ros_ai_assistant__srv__ContextSwitch_Response__Sequence * array)
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
      ros_ai_assistant__srv__ContextSwitch_Response__fini(&array->data[i]);
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

ros_ai_assistant__srv__ContextSwitch_Response__Sequence *
ros_ai_assistant__srv__ContextSwitch_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__ContextSwitch_Response__Sequence * array = (ros_ai_assistant__srv__ContextSwitch_Response__Sequence *)allocator.allocate(sizeof(ros_ai_assistant__srv__ContextSwitch_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_ai_assistant__srv__ContextSwitch_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_ai_assistant__srv__ContextSwitch_Response__Sequence__destroy(ros_ai_assistant__srv__ContextSwitch_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_ai_assistant__srv__ContextSwitch_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_ai_assistant__srv__ContextSwitch_Response__Sequence__are_equal(const ros_ai_assistant__srv__ContextSwitch_Response__Sequence * lhs, const ros_ai_assistant__srv__ContextSwitch_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ai_assistant__srv__ContextSwitch_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ai_assistant__srv__ContextSwitch_Response__Sequence__copy(
  const ros_ai_assistant__srv__ContextSwitch_Response__Sequence * input,
  ros_ai_assistant__srv__ContextSwitch_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ai_assistant__srv__ContextSwitch_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_ai_assistant__srv__ContextSwitch_Response * data =
      (ros_ai_assistant__srv__ContextSwitch_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ai_assistant__srv__ContextSwitch_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_ai_assistant__srv__ContextSwitch_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_ai_assistant__srv__ContextSwitch_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_ai_assistant:srv/OpenAIRequest.idl
// generated code does not contain a copyright notice
#include "ros_ai_assistant/srv/detail/open_ai_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `prompt`
// Member `context`
// Member `model`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_ai_assistant__srv__OpenAIRequest_Request__init(ros_ai_assistant__srv__OpenAIRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__init(&msg->prompt)) {
    ros_ai_assistant__srv__OpenAIRequest_Request__fini(msg);
    return false;
  }
  // context
  if (!rosidl_runtime_c__String__init(&msg->context)) {
    ros_ai_assistant__srv__OpenAIRequest_Request__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    ros_ai_assistant__srv__OpenAIRequest_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros_ai_assistant__srv__OpenAIRequest_Request__fini(ros_ai_assistant__srv__OpenAIRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // prompt
  rosidl_runtime_c__String__fini(&msg->prompt);
  // context
  rosidl_runtime_c__String__fini(&msg->context);
  // model
  rosidl_runtime_c__String__fini(&msg->model);
}

bool
ros_ai_assistant__srv__OpenAIRequest_Request__are_equal(const ros_ai_assistant__srv__OpenAIRequest_Request * lhs, const ros_ai_assistant__srv__OpenAIRequest_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->prompt), &(rhs->prompt)))
  {
    return false;
  }
  // context
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->context), &(rhs->context)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  return true;
}

bool
ros_ai_assistant__srv__OpenAIRequest_Request__copy(
  const ros_ai_assistant__srv__OpenAIRequest_Request * input,
  ros_ai_assistant__srv__OpenAIRequest_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // prompt
  if (!rosidl_runtime_c__String__copy(
      &(input->prompt), &(output->prompt)))
  {
    return false;
  }
  // context
  if (!rosidl_runtime_c__String__copy(
      &(input->context), &(output->context)))
  {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  return true;
}

ros_ai_assistant__srv__OpenAIRequest_Request *
ros_ai_assistant__srv__OpenAIRequest_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__OpenAIRequest_Request * msg = (ros_ai_assistant__srv__OpenAIRequest_Request *)allocator.allocate(sizeof(ros_ai_assistant__srv__OpenAIRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ai_assistant__srv__OpenAIRequest_Request));
  bool success = ros_ai_assistant__srv__OpenAIRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_ai_assistant__srv__OpenAIRequest_Request__destroy(ros_ai_assistant__srv__OpenAIRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_ai_assistant__srv__OpenAIRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_ai_assistant__srv__OpenAIRequest_Request__Sequence__init(ros_ai_assistant__srv__OpenAIRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__OpenAIRequest_Request * data = NULL;

  if (size) {
    data = (ros_ai_assistant__srv__OpenAIRequest_Request *)allocator.zero_allocate(size, sizeof(ros_ai_assistant__srv__OpenAIRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ai_assistant__srv__OpenAIRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ai_assistant__srv__OpenAIRequest_Request__fini(&data[i - 1]);
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
ros_ai_assistant__srv__OpenAIRequest_Request__Sequence__fini(ros_ai_assistant__srv__OpenAIRequest_Request__Sequence * array)
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
      ros_ai_assistant__srv__OpenAIRequest_Request__fini(&array->data[i]);
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

ros_ai_assistant__srv__OpenAIRequest_Request__Sequence *
ros_ai_assistant__srv__OpenAIRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__OpenAIRequest_Request__Sequence * array = (ros_ai_assistant__srv__OpenAIRequest_Request__Sequence *)allocator.allocate(sizeof(ros_ai_assistant__srv__OpenAIRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_ai_assistant__srv__OpenAIRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_ai_assistant__srv__OpenAIRequest_Request__Sequence__destroy(ros_ai_assistant__srv__OpenAIRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_ai_assistant__srv__OpenAIRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_ai_assistant__srv__OpenAIRequest_Request__Sequence__are_equal(const ros_ai_assistant__srv__OpenAIRequest_Request__Sequence * lhs, const ros_ai_assistant__srv__OpenAIRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ai_assistant__srv__OpenAIRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ai_assistant__srv__OpenAIRequest_Request__Sequence__copy(
  const ros_ai_assistant__srv__OpenAIRequest_Request__Sequence * input,
  ros_ai_assistant__srv__OpenAIRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ai_assistant__srv__OpenAIRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_ai_assistant__srv__OpenAIRequest_Request * data =
      (ros_ai_assistant__srv__OpenAIRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ai_assistant__srv__OpenAIRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_ai_assistant__srv__OpenAIRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_ai_assistant__srv__OpenAIRequest_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ros_ai_assistant__srv__OpenAIRequest_Response__init(ros_ai_assistant__srv__OpenAIRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    ros_ai_assistant__srv__OpenAIRequest_Response__fini(msg);
    return false;
  }
  // success
  // confidence
  return true;
}

void
ros_ai_assistant__srv__OpenAIRequest_Response__fini(ros_ai_assistant__srv__OpenAIRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  rosidl_runtime_c__String__fini(&msg->response);
  // success
  // confidence
}

bool
ros_ai_assistant__srv__OpenAIRequest_Response__are_equal(const ros_ai_assistant__srv__OpenAIRequest_Response * lhs, const ros_ai_assistant__srv__OpenAIRequest_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
ros_ai_assistant__srv__OpenAIRequest_Response__copy(
  const ros_ai_assistant__srv__OpenAIRequest_Response * input,
  ros_ai_assistant__srv__OpenAIRequest_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // confidence
  output->confidence = input->confidence;
  return true;
}

ros_ai_assistant__srv__OpenAIRequest_Response *
ros_ai_assistant__srv__OpenAIRequest_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__OpenAIRequest_Response * msg = (ros_ai_assistant__srv__OpenAIRequest_Response *)allocator.allocate(sizeof(ros_ai_assistant__srv__OpenAIRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_ai_assistant__srv__OpenAIRequest_Response));
  bool success = ros_ai_assistant__srv__OpenAIRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_ai_assistant__srv__OpenAIRequest_Response__destroy(ros_ai_assistant__srv__OpenAIRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_ai_assistant__srv__OpenAIRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_ai_assistant__srv__OpenAIRequest_Response__Sequence__init(ros_ai_assistant__srv__OpenAIRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__OpenAIRequest_Response * data = NULL;

  if (size) {
    data = (ros_ai_assistant__srv__OpenAIRequest_Response *)allocator.zero_allocate(size, sizeof(ros_ai_assistant__srv__OpenAIRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_ai_assistant__srv__OpenAIRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_ai_assistant__srv__OpenAIRequest_Response__fini(&data[i - 1]);
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
ros_ai_assistant__srv__OpenAIRequest_Response__Sequence__fini(ros_ai_assistant__srv__OpenAIRequest_Response__Sequence * array)
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
      ros_ai_assistant__srv__OpenAIRequest_Response__fini(&array->data[i]);
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

ros_ai_assistant__srv__OpenAIRequest_Response__Sequence *
ros_ai_assistant__srv__OpenAIRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_ai_assistant__srv__OpenAIRequest_Response__Sequence * array = (ros_ai_assistant__srv__OpenAIRequest_Response__Sequence *)allocator.allocate(sizeof(ros_ai_assistant__srv__OpenAIRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_ai_assistant__srv__OpenAIRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_ai_assistant__srv__OpenAIRequest_Response__Sequence__destroy(ros_ai_assistant__srv__OpenAIRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_ai_assistant__srv__OpenAIRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_ai_assistant__srv__OpenAIRequest_Response__Sequence__are_equal(const ros_ai_assistant__srv__OpenAIRequest_Response__Sequence * lhs, const ros_ai_assistant__srv__OpenAIRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_ai_assistant__srv__OpenAIRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_ai_assistant__srv__OpenAIRequest_Response__Sequence__copy(
  const ros_ai_assistant__srv__OpenAIRequest_Response__Sequence * input,
  ros_ai_assistant__srv__OpenAIRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_ai_assistant__srv__OpenAIRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_ai_assistant__srv__OpenAIRequest_Response * data =
      (ros_ai_assistant__srv__OpenAIRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_ai_assistant__srv__OpenAIRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_ai_assistant__srv__OpenAIRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_ai_assistant__srv__OpenAIRequest_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

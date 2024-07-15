// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/UserInput.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/user_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `user_mode`
// Member `user_signal`
#include "std_msgs/msg/detail/int8__functions.h"

bool
drive_msgs__msg__UserInput__init(drive_msgs__msg__UserInput * msg)
{
  if (!msg) {
    return false;
  }
  // user_mode
  if (!std_msgs__msg__Int8__init(&msg->user_mode)) {
    drive_msgs__msg__UserInput__fini(msg);
    return false;
  }
  // user_signal
  if (!std_msgs__msg__Int8__init(&msg->user_signal)) {
    drive_msgs__msg__UserInput__fini(msg);
    return false;
  }
  return true;
}

void
drive_msgs__msg__UserInput__fini(drive_msgs__msg__UserInput * msg)
{
  if (!msg) {
    return;
  }
  // user_mode
  std_msgs__msg__Int8__fini(&msg->user_mode);
  // user_signal
  std_msgs__msg__Int8__fini(&msg->user_signal);
}

bool
drive_msgs__msg__UserInput__are_equal(const drive_msgs__msg__UserInput * lhs, const drive_msgs__msg__UserInput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // user_mode
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->user_mode), &(rhs->user_mode)))
  {
    return false;
  }
  // user_signal
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->user_signal), &(rhs->user_signal)))
  {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__UserInput__copy(
  const drive_msgs__msg__UserInput * input,
  drive_msgs__msg__UserInput * output)
{
  if (!input || !output) {
    return false;
  }
  // user_mode
  if (!std_msgs__msg__Int8__copy(
      &(input->user_mode), &(output->user_mode)))
  {
    return false;
  }
  // user_signal
  if (!std_msgs__msg__Int8__copy(
      &(input->user_signal), &(output->user_signal)))
  {
    return false;
  }
  return true;
}

drive_msgs__msg__UserInput *
drive_msgs__msg__UserInput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__UserInput * msg = (drive_msgs__msg__UserInput *)allocator.allocate(sizeof(drive_msgs__msg__UserInput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__UserInput));
  bool success = drive_msgs__msg__UserInput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__UserInput__destroy(drive_msgs__msg__UserInput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__UserInput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__UserInput__Sequence__init(drive_msgs__msg__UserInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__UserInput * data = NULL;

  if (size) {
    data = (drive_msgs__msg__UserInput *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__UserInput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__UserInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__UserInput__fini(&data[i - 1]);
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
drive_msgs__msg__UserInput__Sequence__fini(drive_msgs__msg__UserInput__Sequence * array)
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
      drive_msgs__msg__UserInput__fini(&array->data[i]);
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

drive_msgs__msg__UserInput__Sequence *
drive_msgs__msg__UserInput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__UserInput__Sequence * array = (drive_msgs__msg__UserInput__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__UserInput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__UserInput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__UserInput__Sequence__destroy(drive_msgs__msg__UserInput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__UserInput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__UserInput__Sequence__are_equal(const drive_msgs__msg__UserInput__Sequence * lhs, const drive_msgs__msg__UserInput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__UserInput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__UserInput__Sequence__copy(
  const drive_msgs__msg__UserInput__Sequence * input,
  drive_msgs__msg__UserInput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__UserInput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__UserInput * data =
      (drive_msgs__msg__UserInput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__UserInput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__UserInput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__UserInput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

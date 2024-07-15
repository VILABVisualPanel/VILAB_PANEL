// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/Actuator.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/actuator__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `steer`
// Member `accel`
// Member `brake`
#include "std_msgs/msg/detail/float32__functions.h"

bool
drive_msgs__msg__Actuator__init(drive_msgs__msg__Actuator * msg)
{
  if (!msg) {
    return false;
  }
  // steer
  if (!std_msgs__msg__Float32__init(&msg->steer)) {
    drive_msgs__msg__Actuator__fini(msg);
    return false;
  }
  // accel
  if (!std_msgs__msg__Float32__init(&msg->accel)) {
    drive_msgs__msg__Actuator__fini(msg);
    return false;
  }
  // brake
  if (!std_msgs__msg__Float32__init(&msg->brake)) {
    drive_msgs__msg__Actuator__fini(msg);
    return false;
  }
  return true;
}

void
drive_msgs__msg__Actuator__fini(drive_msgs__msg__Actuator * msg)
{
  if (!msg) {
    return;
  }
  // steer
  std_msgs__msg__Float32__fini(&msg->steer);
  // accel
  std_msgs__msg__Float32__fini(&msg->accel);
  // brake
  std_msgs__msg__Float32__fini(&msg->brake);
}

bool
drive_msgs__msg__Actuator__are_equal(const drive_msgs__msg__Actuator * lhs, const drive_msgs__msg__Actuator * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // steer
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->steer), &(rhs->steer)))
  {
    return false;
  }
  // accel
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->accel), &(rhs->accel)))
  {
    return false;
  }
  // brake
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->brake), &(rhs->brake)))
  {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__Actuator__copy(
  const drive_msgs__msg__Actuator * input,
  drive_msgs__msg__Actuator * output)
{
  if (!input || !output) {
    return false;
  }
  // steer
  if (!std_msgs__msg__Float32__copy(
      &(input->steer), &(output->steer)))
  {
    return false;
  }
  // accel
  if (!std_msgs__msg__Float32__copy(
      &(input->accel), &(output->accel)))
  {
    return false;
  }
  // brake
  if (!std_msgs__msg__Float32__copy(
      &(input->brake), &(output->brake)))
  {
    return false;
  }
  return true;
}

drive_msgs__msg__Actuator *
drive_msgs__msg__Actuator__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__Actuator * msg = (drive_msgs__msg__Actuator *)allocator.allocate(sizeof(drive_msgs__msg__Actuator), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__Actuator));
  bool success = drive_msgs__msg__Actuator__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__Actuator__destroy(drive_msgs__msg__Actuator * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__Actuator__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__Actuator__Sequence__init(drive_msgs__msg__Actuator__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__Actuator * data = NULL;

  if (size) {
    data = (drive_msgs__msg__Actuator *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__Actuator), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__Actuator__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__Actuator__fini(&data[i - 1]);
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
drive_msgs__msg__Actuator__Sequence__fini(drive_msgs__msg__Actuator__Sequence * array)
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
      drive_msgs__msg__Actuator__fini(&array->data[i]);
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

drive_msgs__msg__Actuator__Sequence *
drive_msgs__msg__Actuator__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__Actuator__Sequence * array = (drive_msgs__msg__Actuator__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__Actuator__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__Actuator__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__Actuator__Sequence__destroy(drive_msgs__msg__Actuator__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__Actuator__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__Actuator__Sequence__are_equal(const drive_msgs__msg__Actuator__Sequence * lhs, const drive_msgs__msg__Actuator__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__Actuator__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__Actuator__Sequence__copy(
  const drive_msgs__msg__Actuator__Sequence * input,
  drive_msgs__msg__Actuator__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__Actuator);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__Actuator * data =
      (drive_msgs__msg__Actuator *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__Actuator__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__Actuator__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__Actuator__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

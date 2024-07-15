// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mode`
// Member `signal`
#include "std_msgs/msg/detail/int8__functions.h"
// Member `gear`
#include "std_msgs/msg/detail/string__functions.h"
// Member `velocity`
// Member `heading`
#include "std_msgs/msg/detail/float32__functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
drive_msgs__msg__VehicleState__init(drive_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    drive_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // mode
  if (!std_msgs__msg__Int8__init(&msg->mode)) {
    drive_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // gear
  if (!std_msgs__msg__String__init(&msg->gear)) {
    drive_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // signal
  if (!std_msgs__msg__Int8__init(&msg->signal)) {
    drive_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // velocity
  if (!std_msgs__msg__Float32__init(&msg->velocity)) {
    drive_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // heading
  if (!std_msgs__msg__Float32__init(&msg->heading)) {
    drive_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    drive_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  return true;
}

void
drive_msgs__msg__VehicleState__fini(drive_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mode
  std_msgs__msg__Int8__fini(&msg->mode);
  // gear
  std_msgs__msg__String__fini(&msg->gear);
  // signal
  std_msgs__msg__Int8__fini(&msg->signal);
  // velocity
  std_msgs__msg__Float32__fini(&msg->velocity);
  // heading
  std_msgs__msg__Float32__fini(&msg->heading);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

bool
drive_msgs__msg__VehicleState__are_equal(const drive_msgs__msg__VehicleState * lhs, const drive_msgs__msg__VehicleState * rhs)
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
  // mode
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // gear
  if (!std_msgs__msg__String__are_equal(
      &(lhs->gear), &(rhs->gear)))
  {
    return false;
  }
  // signal
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->signal), &(rhs->signal)))
  {
    return false;
  }
  // velocity
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // heading
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__VehicleState__copy(
  const drive_msgs__msg__VehicleState * input,
  drive_msgs__msg__VehicleState * output)
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
  // mode
  if (!std_msgs__msg__Int8__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // gear
  if (!std_msgs__msg__String__copy(
      &(input->gear), &(output->gear)))
  {
    return false;
  }
  // signal
  if (!std_msgs__msg__Int8__copy(
      &(input->signal), &(output->signal)))
  {
    return false;
  }
  // velocity
  if (!std_msgs__msg__Float32__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // heading
  if (!std_msgs__msg__Float32__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

drive_msgs__msg__VehicleState *
drive_msgs__msg__VehicleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__VehicleState * msg = (drive_msgs__msg__VehicleState *)allocator.allocate(sizeof(drive_msgs__msg__VehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__VehicleState));
  bool success = drive_msgs__msg__VehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__VehicleState__destroy(drive_msgs__msg__VehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__VehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__VehicleState__Sequence__init(drive_msgs__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__VehicleState * data = NULL;

  if (size) {
    data = (drive_msgs__msg__VehicleState *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__VehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__VehicleState__fini(&data[i - 1]);
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
drive_msgs__msg__VehicleState__Sequence__fini(drive_msgs__msg__VehicleState__Sequence * array)
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
      drive_msgs__msg__VehicleState__fini(&array->data[i]);
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

drive_msgs__msg__VehicleState__Sequence *
drive_msgs__msg__VehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__VehicleState__Sequence * array = (drive_msgs__msg__VehicleState__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__VehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__VehicleState__Sequence__destroy(drive_msgs__msg__VehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__VehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__VehicleState__Sequence__are_equal(const drive_msgs__msg__VehicleState__Sequence * lhs, const drive_msgs__msg__VehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__VehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__VehicleState__Sequence__copy(
  const drive_msgs__msg__VehicleState__Sequence * input,
  drive_msgs__msg__VehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__VehicleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__VehicleState * data =
      (drive_msgs__msg__VehicleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__VehicleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__VehicleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__VehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

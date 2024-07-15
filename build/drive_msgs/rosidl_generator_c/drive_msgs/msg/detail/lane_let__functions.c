// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/LaneLet.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/lane_let__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `leftneighbor`
// Member `rightneighbor`
// Member `predecessor`
// Member `successor`
#include "std_msgs/msg/detail/string__functions.h"

bool
drive_msgs__msg__LaneLet__init(drive_msgs__msg__LaneLet * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!std_msgs__msg__String__init(&msg->id)) {
    drive_msgs__msg__LaneLet__fini(msg);
    return false;
  }
  // leftneighbor
  if (!std_msgs__msg__String__init(&msg->leftneighbor)) {
    drive_msgs__msg__LaneLet__fini(msg);
    return false;
  }
  // rightneighbor
  if (!std_msgs__msg__String__init(&msg->rightneighbor)) {
    drive_msgs__msg__LaneLet__fini(msg);
    return false;
  }
  // predecessor
  if (!std_msgs__msg__String__init(&msg->predecessor)) {
    drive_msgs__msg__LaneLet__fini(msg);
    return false;
  }
  // successor
  if (!std_msgs__msg__String__init(&msg->successor)) {
    drive_msgs__msg__LaneLet__fini(msg);
    return false;
  }
  // currentlane
  return true;
}

void
drive_msgs__msg__LaneLet__fini(drive_msgs__msg__LaneLet * msg)
{
  if (!msg) {
    return;
  }
  // id
  std_msgs__msg__String__fini(&msg->id);
  // leftneighbor
  std_msgs__msg__String__fini(&msg->leftneighbor);
  // rightneighbor
  std_msgs__msg__String__fini(&msg->rightneighbor);
  // predecessor
  std_msgs__msg__String__fini(&msg->predecessor);
  // successor
  std_msgs__msg__String__fini(&msg->successor);
  // currentlane
}

bool
drive_msgs__msg__LaneLet__are_equal(const drive_msgs__msg__LaneLet * lhs, const drive_msgs__msg__LaneLet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!std_msgs__msg__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // leftneighbor
  if (!std_msgs__msg__String__are_equal(
      &(lhs->leftneighbor), &(rhs->leftneighbor)))
  {
    return false;
  }
  // rightneighbor
  if (!std_msgs__msg__String__are_equal(
      &(lhs->rightneighbor), &(rhs->rightneighbor)))
  {
    return false;
  }
  // predecessor
  if (!std_msgs__msg__String__are_equal(
      &(lhs->predecessor), &(rhs->predecessor)))
  {
    return false;
  }
  // successor
  if (!std_msgs__msg__String__are_equal(
      &(lhs->successor), &(rhs->successor)))
  {
    return false;
  }
  // currentlane
  if (lhs->currentlane != rhs->currentlane) {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__LaneLet__copy(
  const drive_msgs__msg__LaneLet * input,
  drive_msgs__msg__LaneLet * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!std_msgs__msg__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // leftneighbor
  if (!std_msgs__msg__String__copy(
      &(input->leftneighbor), &(output->leftneighbor)))
  {
    return false;
  }
  // rightneighbor
  if (!std_msgs__msg__String__copy(
      &(input->rightneighbor), &(output->rightneighbor)))
  {
    return false;
  }
  // predecessor
  if (!std_msgs__msg__String__copy(
      &(input->predecessor), &(output->predecessor)))
  {
    return false;
  }
  // successor
  if (!std_msgs__msg__String__copy(
      &(input->successor), &(output->successor)))
  {
    return false;
  }
  // currentlane
  output->currentlane = input->currentlane;
  return true;
}

drive_msgs__msg__LaneLet *
drive_msgs__msg__LaneLet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__LaneLet * msg = (drive_msgs__msg__LaneLet *)allocator.allocate(sizeof(drive_msgs__msg__LaneLet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__LaneLet));
  bool success = drive_msgs__msg__LaneLet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__LaneLet__destroy(drive_msgs__msg__LaneLet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__LaneLet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__LaneLet__Sequence__init(drive_msgs__msg__LaneLet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__LaneLet * data = NULL;

  if (size) {
    data = (drive_msgs__msg__LaneLet *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__LaneLet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__LaneLet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__LaneLet__fini(&data[i - 1]);
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
drive_msgs__msg__LaneLet__Sequence__fini(drive_msgs__msg__LaneLet__Sequence * array)
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
      drive_msgs__msg__LaneLet__fini(&array->data[i]);
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

drive_msgs__msg__LaneLet__Sequence *
drive_msgs__msg__LaneLet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__LaneLet__Sequence * array = (drive_msgs__msg__LaneLet__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__LaneLet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__LaneLet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__LaneLet__Sequence__destroy(drive_msgs__msg__LaneLet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__LaneLet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__LaneLet__Sequence__are_equal(const drive_msgs__msg__LaneLet__Sequence * lhs, const drive_msgs__msg__LaneLet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__LaneLet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__LaneLet__Sequence__copy(
  const drive_msgs__msg__LaneLet__Sequence * input,
  drive_msgs__msg__LaneLet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__LaneLet);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__LaneLet * data =
      (drive_msgs__msg__LaneLet *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__LaneLet__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__LaneLet__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__LaneLet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

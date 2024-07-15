// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/LaneData.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/lane_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `currentlane`
// Member `neighborlane`
#include "drive_msgs/msg/detail/lane_let__functions.h"

bool
drive_msgs__msg__LaneData__init(drive_msgs__msg__LaneData * msg)
{
  if (!msg) {
    return false;
  }
  // currentlane
  if (!drive_msgs__msg__LaneLet__init(&msg->currentlane)) {
    drive_msgs__msg__LaneData__fini(msg);
    return false;
  }
  // neighborlane
  if (!drive_msgs__msg__LaneLet__init(&msg->neighborlane)) {
    drive_msgs__msg__LaneData__fini(msg);
    return false;
  }
  return true;
}

void
drive_msgs__msg__LaneData__fini(drive_msgs__msg__LaneData * msg)
{
  if (!msg) {
    return;
  }
  // currentlane
  drive_msgs__msg__LaneLet__fini(&msg->currentlane);
  // neighborlane
  drive_msgs__msg__LaneLet__fini(&msg->neighborlane);
}

bool
drive_msgs__msg__LaneData__are_equal(const drive_msgs__msg__LaneData * lhs, const drive_msgs__msg__LaneData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // currentlane
  if (!drive_msgs__msg__LaneLet__are_equal(
      &(lhs->currentlane), &(rhs->currentlane)))
  {
    return false;
  }
  // neighborlane
  if (!drive_msgs__msg__LaneLet__are_equal(
      &(lhs->neighborlane), &(rhs->neighborlane)))
  {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__LaneData__copy(
  const drive_msgs__msg__LaneData * input,
  drive_msgs__msg__LaneData * output)
{
  if (!input || !output) {
    return false;
  }
  // currentlane
  if (!drive_msgs__msg__LaneLet__copy(
      &(input->currentlane), &(output->currentlane)))
  {
    return false;
  }
  // neighborlane
  if (!drive_msgs__msg__LaneLet__copy(
      &(input->neighborlane), &(output->neighborlane)))
  {
    return false;
  }
  return true;
}

drive_msgs__msg__LaneData *
drive_msgs__msg__LaneData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__LaneData * msg = (drive_msgs__msg__LaneData *)allocator.allocate(sizeof(drive_msgs__msg__LaneData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__LaneData));
  bool success = drive_msgs__msg__LaneData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__LaneData__destroy(drive_msgs__msg__LaneData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__LaneData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__LaneData__Sequence__init(drive_msgs__msg__LaneData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__LaneData * data = NULL;

  if (size) {
    data = (drive_msgs__msg__LaneData *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__LaneData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__LaneData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__LaneData__fini(&data[i - 1]);
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
drive_msgs__msg__LaneData__Sequence__fini(drive_msgs__msg__LaneData__Sequence * array)
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
      drive_msgs__msg__LaneData__fini(&array->data[i]);
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

drive_msgs__msg__LaneData__Sequence *
drive_msgs__msg__LaneData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__LaneData__Sequence * array = (drive_msgs__msg__LaneData__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__LaneData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__LaneData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__LaneData__Sequence__destroy(drive_msgs__msg__LaneData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__LaneData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__LaneData__Sequence__are_equal(const drive_msgs__msg__LaneData__Sequence * lhs, const drive_msgs__msg__LaneData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__LaneData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__LaneData__Sequence__copy(
  const drive_msgs__msg__LaneData__Sequence * input,
  drive_msgs__msg__LaneData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__LaneData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__LaneData * data =
      (drive_msgs__msg__LaneData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__LaneData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__LaneData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__LaneData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/DetectionData.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/detection_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `objects`
#include "drive_msgs/msg/detail/object_info__functions.h"
// Member `laneposition0`
// Member `laneposition1`
// Member `laneposition2`
// Member `laneposition3`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
drive_msgs__msg__DetectionData__init(drive_msgs__msg__DetectionData * msg)
{
  if (!msg) {
    return false;
  }
  // objects
  if (!drive_msgs__msg__ObjectInfo__Sequence__init(&msg->objects, 0)) {
    drive_msgs__msg__DetectionData__fini(msg);
    return false;
  }
  // laneposition0
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->laneposition0, 0)) {
    drive_msgs__msg__DetectionData__fini(msg);
    return false;
  }
  // laneposition1
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->laneposition1, 0)) {
    drive_msgs__msg__DetectionData__fini(msg);
    return false;
  }
  // laneposition2
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->laneposition2, 0)) {
    drive_msgs__msg__DetectionData__fini(msg);
    return false;
  }
  // laneposition3
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->laneposition3, 0)) {
    drive_msgs__msg__DetectionData__fini(msg);
    return false;
  }
  return true;
}

void
drive_msgs__msg__DetectionData__fini(drive_msgs__msg__DetectionData * msg)
{
  if (!msg) {
    return;
  }
  // objects
  drive_msgs__msg__ObjectInfo__Sequence__fini(&msg->objects);
  // laneposition0
  geometry_msgs__msg__Point__Sequence__fini(&msg->laneposition0);
  // laneposition1
  geometry_msgs__msg__Point__Sequence__fini(&msg->laneposition1);
  // laneposition2
  geometry_msgs__msg__Point__Sequence__fini(&msg->laneposition2);
  // laneposition3
  geometry_msgs__msg__Point__Sequence__fini(&msg->laneposition3);
}

bool
drive_msgs__msg__DetectionData__are_equal(const drive_msgs__msg__DetectionData * lhs, const drive_msgs__msg__DetectionData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // objects
  if (!drive_msgs__msg__ObjectInfo__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  // laneposition0
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->laneposition0), &(rhs->laneposition0)))
  {
    return false;
  }
  // laneposition1
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->laneposition1), &(rhs->laneposition1)))
  {
    return false;
  }
  // laneposition2
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->laneposition2), &(rhs->laneposition2)))
  {
    return false;
  }
  // laneposition3
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->laneposition3), &(rhs->laneposition3)))
  {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__DetectionData__copy(
  const drive_msgs__msg__DetectionData * input,
  drive_msgs__msg__DetectionData * output)
{
  if (!input || !output) {
    return false;
  }
  // objects
  if (!drive_msgs__msg__ObjectInfo__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  // laneposition0
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->laneposition0), &(output->laneposition0)))
  {
    return false;
  }
  // laneposition1
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->laneposition1), &(output->laneposition1)))
  {
    return false;
  }
  // laneposition2
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->laneposition2), &(output->laneposition2)))
  {
    return false;
  }
  // laneposition3
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->laneposition3), &(output->laneposition3)))
  {
    return false;
  }
  return true;
}

drive_msgs__msg__DetectionData *
drive_msgs__msg__DetectionData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__DetectionData * msg = (drive_msgs__msg__DetectionData *)allocator.allocate(sizeof(drive_msgs__msg__DetectionData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__DetectionData));
  bool success = drive_msgs__msg__DetectionData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__DetectionData__destroy(drive_msgs__msg__DetectionData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__DetectionData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__DetectionData__Sequence__init(drive_msgs__msg__DetectionData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__DetectionData * data = NULL;

  if (size) {
    data = (drive_msgs__msg__DetectionData *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__DetectionData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__DetectionData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__DetectionData__fini(&data[i - 1]);
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
drive_msgs__msg__DetectionData__Sequence__fini(drive_msgs__msg__DetectionData__Sequence * array)
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
      drive_msgs__msg__DetectionData__fini(&array->data[i]);
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

drive_msgs__msg__DetectionData__Sequence *
drive_msgs__msg__DetectionData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__DetectionData__Sequence * array = (drive_msgs__msg__DetectionData__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__DetectionData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__DetectionData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__DetectionData__Sequence__destroy(drive_msgs__msg__DetectionData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__DetectionData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__DetectionData__Sequence__are_equal(const drive_msgs__msg__DetectionData__Sequence * lhs, const drive_msgs__msg__DetectionData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__DetectionData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__DetectionData__Sequence__copy(
  const drive_msgs__msg__DetectionData__Sequence * input,
  drive_msgs__msg__DetectionData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__DetectionData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__DetectionData * data =
      (drive_msgs__msg__DetectionData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__DetectionData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__DetectionData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__DetectionData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

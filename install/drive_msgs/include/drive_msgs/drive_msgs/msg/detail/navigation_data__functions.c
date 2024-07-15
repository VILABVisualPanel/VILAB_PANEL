// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/NavigationData.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/navigation_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `currentlocation`
// Member `plannedroute`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `plannedkappa`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `plannedvelocity`
#include "std_msgs/msg/detail/float32__functions.h"

bool
drive_msgs__msg__NavigationData__init(drive_msgs__msg__NavigationData * msg)
{
  if (!msg) {
    return false;
  }
  // currentlocation
  if (!geometry_msgs__msg__Point__init(&msg->currentlocation)) {
    drive_msgs__msg__NavigationData__fini(msg);
    return false;
  }
  // plannedroute
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->plannedroute, 0)) {
    drive_msgs__msg__NavigationData__fini(msg);
    return false;
  }
  // plannedkappa
  if (!rosidl_runtime_c__float__Sequence__init(&msg->plannedkappa, 0)) {
    drive_msgs__msg__NavigationData__fini(msg);
    return false;
  }
  // plannedvelocity
  if (!std_msgs__msg__Float32__init(&msg->plannedvelocity)) {
    drive_msgs__msg__NavigationData__fini(msg);
    return false;
  }
  return true;
}

void
drive_msgs__msg__NavigationData__fini(drive_msgs__msg__NavigationData * msg)
{
  if (!msg) {
    return;
  }
  // currentlocation
  geometry_msgs__msg__Point__fini(&msg->currentlocation);
  // plannedroute
  geometry_msgs__msg__Point__Sequence__fini(&msg->plannedroute);
  // plannedkappa
  rosidl_runtime_c__float__Sequence__fini(&msg->plannedkappa);
  // plannedvelocity
  std_msgs__msg__Float32__fini(&msg->plannedvelocity);
}

bool
drive_msgs__msg__NavigationData__are_equal(const drive_msgs__msg__NavigationData * lhs, const drive_msgs__msg__NavigationData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // currentlocation
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->currentlocation), &(rhs->currentlocation)))
  {
    return false;
  }
  // plannedroute
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->plannedroute), &(rhs->plannedroute)))
  {
    return false;
  }
  // plannedkappa
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->plannedkappa), &(rhs->plannedkappa)))
  {
    return false;
  }
  // plannedvelocity
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->plannedvelocity), &(rhs->plannedvelocity)))
  {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__NavigationData__copy(
  const drive_msgs__msg__NavigationData * input,
  drive_msgs__msg__NavigationData * output)
{
  if (!input || !output) {
    return false;
  }
  // currentlocation
  if (!geometry_msgs__msg__Point__copy(
      &(input->currentlocation), &(output->currentlocation)))
  {
    return false;
  }
  // plannedroute
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->plannedroute), &(output->plannedroute)))
  {
    return false;
  }
  // plannedkappa
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->plannedkappa), &(output->plannedkappa)))
  {
    return false;
  }
  // plannedvelocity
  if (!std_msgs__msg__Float32__copy(
      &(input->plannedvelocity), &(output->plannedvelocity)))
  {
    return false;
  }
  return true;
}

drive_msgs__msg__NavigationData *
drive_msgs__msg__NavigationData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__NavigationData * msg = (drive_msgs__msg__NavigationData *)allocator.allocate(sizeof(drive_msgs__msg__NavigationData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__NavigationData));
  bool success = drive_msgs__msg__NavigationData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__NavigationData__destroy(drive_msgs__msg__NavigationData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__NavigationData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__NavigationData__Sequence__init(drive_msgs__msg__NavigationData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__NavigationData * data = NULL;

  if (size) {
    data = (drive_msgs__msg__NavigationData *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__NavigationData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__NavigationData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__NavigationData__fini(&data[i - 1]);
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
drive_msgs__msg__NavigationData__Sequence__fini(drive_msgs__msg__NavigationData__Sequence * array)
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
      drive_msgs__msg__NavigationData__fini(&array->data[i]);
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

drive_msgs__msg__NavigationData__Sequence *
drive_msgs__msg__NavigationData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__NavigationData__Sequence * array = (drive_msgs__msg__NavigationData__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__NavigationData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__NavigationData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__NavigationData__Sequence__destroy(drive_msgs__msg__NavigationData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__NavigationData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__NavigationData__Sequence__are_equal(const drive_msgs__msg__NavigationData__Sequence * lhs, const drive_msgs__msg__NavigationData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__NavigationData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__NavigationData__Sequence__copy(
  const drive_msgs__msg__NavigationData__Sequence * input,
  drive_msgs__msg__NavigationData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__NavigationData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__NavigationData * data =
      (drive_msgs__msg__NavigationData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__NavigationData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__NavigationData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__NavigationData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

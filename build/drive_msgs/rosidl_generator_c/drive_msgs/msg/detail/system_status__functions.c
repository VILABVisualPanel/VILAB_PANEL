// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/system_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mapname`
#include "std_msgs/msg/detail/string__functions.h"
// Member `basella`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `systemmode`
// Member `systemsignal`
// Member `systemstate`
// Member `systemhealth`
// Member `lapcount`
#include "std_msgs/msg/detail/int8__functions.h"

bool
drive_msgs__msg__SystemStatus__init(drive_msgs__msg__SystemStatus * msg)
{
  if (!msg) {
    return false;
  }
  // mapname
  if (!std_msgs__msg__String__init(&msg->mapname)) {
    drive_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  // basella
  if (!rosidl_runtime_c__float__Sequence__init(&msg->basella, 0)) {
    drive_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  // systemmode
  if (!std_msgs__msg__Int8__init(&msg->systemmode)) {
    drive_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  // systemsignal
  if (!std_msgs__msg__Int8__init(&msg->systemsignal)) {
    drive_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  // systemstate
  if (!std_msgs__msg__Int8__init(&msg->systemstate)) {
    drive_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  // systemhealth
  if (!std_msgs__msg__Int8__init(&msg->systemhealth)) {
    drive_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  // lapcount
  if (!std_msgs__msg__Int8__init(&msg->lapcount)) {
    drive_msgs__msg__SystemStatus__fini(msg);
    return false;
  }
  return true;
}

void
drive_msgs__msg__SystemStatus__fini(drive_msgs__msg__SystemStatus * msg)
{
  if (!msg) {
    return;
  }
  // mapname
  std_msgs__msg__String__fini(&msg->mapname);
  // basella
  rosidl_runtime_c__float__Sequence__fini(&msg->basella);
  // systemmode
  std_msgs__msg__Int8__fini(&msg->systemmode);
  // systemsignal
  std_msgs__msg__Int8__fini(&msg->systemsignal);
  // systemstate
  std_msgs__msg__Int8__fini(&msg->systemstate);
  // systemhealth
  std_msgs__msg__Int8__fini(&msg->systemhealth);
  // lapcount
  std_msgs__msg__Int8__fini(&msg->lapcount);
}

bool
drive_msgs__msg__SystemStatus__are_equal(const drive_msgs__msg__SystemStatus * lhs, const drive_msgs__msg__SystemStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mapname
  if (!std_msgs__msg__String__are_equal(
      &(lhs->mapname), &(rhs->mapname)))
  {
    return false;
  }
  // basella
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->basella), &(rhs->basella)))
  {
    return false;
  }
  // systemmode
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->systemmode), &(rhs->systemmode)))
  {
    return false;
  }
  // systemsignal
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->systemsignal), &(rhs->systemsignal)))
  {
    return false;
  }
  // systemstate
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->systemstate), &(rhs->systemstate)))
  {
    return false;
  }
  // systemhealth
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->systemhealth), &(rhs->systemhealth)))
  {
    return false;
  }
  // lapcount
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->lapcount), &(rhs->lapcount)))
  {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__SystemStatus__copy(
  const drive_msgs__msg__SystemStatus * input,
  drive_msgs__msg__SystemStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // mapname
  if (!std_msgs__msg__String__copy(
      &(input->mapname), &(output->mapname)))
  {
    return false;
  }
  // basella
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->basella), &(output->basella)))
  {
    return false;
  }
  // systemmode
  if (!std_msgs__msg__Int8__copy(
      &(input->systemmode), &(output->systemmode)))
  {
    return false;
  }
  // systemsignal
  if (!std_msgs__msg__Int8__copy(
      &(input->systemsignal), &(output->systemsignal)))
  {
    return false;
  }
  // systemstate
  if (!std_msgs__msg__Int8__copy(
      &(input->systemstate), &(output->systemstate)))
  {
    return false;
  }
  // systemhealth
  if (!std_msgs__msg__Int8__copy(
      &(input->systemhealth), &(output->systemhealth)))
  {
    return false;
  }
  // lapcount
  if (!std_msgs__msg__Int8__copy(
      &(input->lapcount), &(output->lapcount)))
  {
    return false;
  }
  return true;
}

drive_msgs__msg__SystemStatus *
drive_msgs__msg__SystemStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__SystemStatus * msg = (drive_msgs__msg__SystemStatus *)allocator.allocate(sizeof(drive_msgs__msg__SystemStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__SystemStatus));
  bool success = drive_msgs__msg__SystemStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__SystemStatus__destroy(drive_msgs__msg__SystemStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__SystemStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__SystemStatus__Sequence__init(drive_msgs__msg__SystemStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__SystemStatus * data = NULL;

  if (size) {
    data = (drive_msgs__msg__SystemStatus *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__SystemStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__SystemStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__SystemStatus__fini(&data[i - 1]);
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
drive_msgs__msg__SystemStatus__Sequence__fini(drive_msgs__msg__SystemStatus__Sequence * array)
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
      drive_msgs__msg__SystemStatus__fini(&array->data[i]);
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

drive_msgs__msg__SystemStatus__Sequence *
drive_msgs__msg__SystemStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__SystemStatus__Sequence * array = (drive_msgs__msg__SystemStatus__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__SystemStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__SystemStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__SystemStatus__Sequence__destroy(drive_msgs__msg__SystemStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__SystemStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__SystemStatus__Sequence__are_equal(const drive_msgs__msg__SystemStatus__Sequence * lhs, const drive_msgs__msg__SystemStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__SystemStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__SystemStatus__Sequence__copy(
  const drive_msgs__msg__SystemStatus__Sequence * input,
  drive_msgs__msg__SystemStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__SystemStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__SystemStatus * data =
      (drive_msgs__msg__SystemStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__SystemStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__SystemStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__SystemStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

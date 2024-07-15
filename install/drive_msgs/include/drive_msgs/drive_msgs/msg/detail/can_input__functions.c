// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drive_msgs:msg/CANInput.idl
// generated code does not contain a copyright notice
#include "drive_msgs/msg/detail/can_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `eps_en`
// Member `eps_override_ignore`
// Member `acc_en`
// Member `aeb_en`
// Member `turn_signal`
// Member `aliv_cnt`
#include "std_msgs/msg/detail/int8__functions.h"
// Member `eps_speed`
// Member `aeb_decel_value`
// Member `eps_cmd`
// Member `acc_cmd`
#include "std_msgs/msg/detail/float32__functions.h"

bool
drive_msgs__msg__CANInput__init(drive_msgs__msg__CANInput * msg)
{
  if (!msg) {
    return false;
  }
  // eps_en
  if (!std_msgs__msg__Int8__init(&msg->eps_en)) {
    drive_msgs__msg__CANInput__fini(msg);
    return false;
  }
  // eps_override_ignore
  if (!std_msgs__msg__Int8__init(&msg->eps_override_ignore)) {
    drive_msgs__msg__CANInput__fini(msg);
    return false;
  }
  // eps_speed
  if (!std_msgs__msg__Float32__init(&msg->eps_speed)) {
    drive_msgs__msg__CANInput__fini(msg);
    return false;
  }
  // acc_en
  if (!std_msgs__msg__Int8__init(&msg->acc_en)) {
    drive_msgs__msg__CANInput__fini(msg);
    return false;
  }
  // aeb_en
  if (!std_msgs__msg__Int8__init(&msg->aeb_en)) {
    drive_msgs__msg__CANInput__fini(msg);
    return false;
  }
  // turn_signal
  if (!std_msgs__msg__Int8__init(&msg->turn_signal)) {
    drive_msgs__msg__CANInput__fini(msg);
    return false;
  }
  // aeb_decel_value
  if (!std_msgs__msg__Float32__init(&msg->aeb_decel_value)) {
    drive_msgs__msg__CANInput__fini(msg);
    return false;
  }
  // aliv_cnt
  if (!std_msgs__msg__Int8__init(&msg->aliv_cnt)) {
    drive_msgs__msg__CANInput__fini(msg);
    return false;
  }
  // eps_cmd
  if (!std_msgs__msg__Float32__init(&msg->eps_cmd)) {
    drive_msgs__msg__CANInput__fini(msg);
    return false;
  }
  // acc_cmd
  if (!std_msgs__msg__Float32__init(&msg->acc_cmd)) {
    drive_msgs__msg__CANInput__fini(msg);
    return false;
  }
  return true;
}

void
drive_msgs__msg__CANInput__fini(drive_msgs__msg__CANInput * msg)
{
  if (!msg) {
    return;
  }
  // eps_en
  std_msgs__msg__Int8__fini(&msg->eps_en);
  // eps_override_ignore
  std_msgs__msg__Int8__fini(&msg->eps_override_ignore);
  // eps_speed
  std_msgs__msg__Float32__fini(&msg->eps_speed);
  // acc_en
  std_msgs__msg__Int8__fini(&msg->acc_en);
  // aeb_en
  std_msgs__msg__Int8__fini(&msg->aeb_en);
  // turn_signal
  std_msgs__msg__Int8__fini(&msg->turn_signal);
  // aeb_decel_value
  std_msgs__msg__Float32__fini(&msg->aeb_decel_value);
  // aliv_cnt
  std_msgs__msg__Int8__fini(&msg->aliv_cnt);
  // eps_cmd
  std_msgs__msg__Float32__fini(&msg->eps_cmd);
  // acc_cmd
  std_msgs__msg__Float32__fini(&msg->acc_cmd);
}

bool
drive_msgs__msg__CANInput__are_equal(const drive_msgs__msg__CANInput * lhs, const drive_msgs__msg__CANInput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // eps_en
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->eps_en), &(rhs->eps_en)))
  {
    return false;
  }
  // eps_override_ignore
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->eps_override_ignore), &(rhs->eps_override_ignore)))
  {
    return false;
  }
  // eps_speed
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->eps_speed), &(rhs->eps_speed)))
  {
    return false;
  }
  // acc_en
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->acc_en), &(rhs->acc_en)))
  {
    return false;
  }
  // aeb_en
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->aeb_en), &(rhs->aeb_en)))
  {
    return false;
  }
  // turn_signal
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->turn_signal), &(rhs->turn_signal)))
  {
    return false;
  }
  // aeb_decel_value
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->aeb_decel_value), &(rhs->aeb_decel_value)))
  {
    return false;
  }
  // aliv_cnt
  if (!std_msgs__msg__Int8__are_equal(
      &(lhs->aliv_cnt), &(rhs->aliv_cnt)))
  {
    return false;
  }
  // eps_cmd
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->eps_cmd), &(rhs->eps_cmd)))
  {
    return false;
  }
  // acc_cmd
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->acc_cmd), &(rhs->acc_cmd)))
  {
    return false;
  }
  return true;
}

bool
drive_msgs__msg__CANInput__copy(
  const drive_msgs__msg__CANInput * input,
  drive_msgs__msg__CANInput * output)
{
  if (!input || !output) {
    return false;
  }
  // eps_en
  if (!std_msgs__msg__Int8__copy(
      &(input->eps_en), &(output->eps_en)))
  {
    return false;
  }
  // eps_override_ignore
  if (!std_msgs__msg__Int8__copy(
      &(input->eps_override_ignore), &(output->eps_override_ignore)))
  {
    return false;
  }
  // eps_speed
  if (!std_msgs__msg__Float32__copy(
      &(input->eps_speed), &(output->eps_speed)))
  {
    return false;
  }
  // acc_en
  if (!std_msgs__msg__Int8__copy(
      &(input->acc_en), &(output->acc_en)))
  {
    return false;
  }
  // aeb_en
  if (!std_msgs__msg__Int8__copy(
      &(input->aeb_en), &(output->aeb_en)))
  {
    return false;
  }
  // turn_signal
  if (!std_msgs__msg__Int8__copy(
      &(input->turn_signal), &(output->turn_signal)))
  {
    return false;
  }
  // aeb_decel_value
  if (!std_msgs__msg__Float32__copy(
      &(input->aeb_decel_value), &(output->aeb_decel_value)))
  {
    return false;
  }
  // aliv_cnt
  if (!std_msgs__msg__Int8__copy(
      &(input->aliv_cnt), &(output->aliv_cnt)))
  {
    return false;
  }
  // eps_cmd
  if (!std_msgs__msg__Float32__copy(
      &(input->eps_cmd), &(output->eps_cmd)))
  {
    return false;
  }
  // acc_cmd
  if (!std_msgs__msg__Float32__copy(
      &(input->acc_cmd), &(output->acc_cmd)))
  {
    return false;
  }
  return true;
}

drive_msgs__msg__CANInput *
drive_msgs__msg__CANInput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__CANInput * msg = (drive_msgs__msg__CANInput *)allocator.allocate(sizeof(drive_msgs__msg__CANInput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drive_msgs__msg__CANInput));
  bool success = drive_msgs__msg__CANInput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drive_msgs__msg__CANInput__destroy(drive_msgs__msg__CANInput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drive_msgs__msg__CANInput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drive_msgs__msg__CANInput__Sequence__init(drive_msgs__msg__CANInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__CANInput * data = NULL;

  if (size) {
    data = (drive_msgs__msg__CANInput *)allocator.zero_allocate(size, sizeof(drive_msgs__msg__CANInput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drive_msgs__msg__CANInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drive_msgs__msg__CANInput__fini(&data[i - 1]);
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
drive_msgs__msg__CANInput__Sequence__fini(drive_msgs__msg__CANInput__Sequence * array)
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
      drive_msgs__msg__CANInput__fini(&array->data[i]);
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

drive_msgs__msg__CANInput__Sequence *
drive_msgs__msg__CANInput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drive_msgs__msg__CANInput__Sequence * array = (drive_msgs__msg__CANInput__Sequence *)allocator.allocate(sizeof(drive_msgs__msg__CANInput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drive_msgs__msg__CANInput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drive_msgs__msg__CANInput__Sequence__destroy(drive_msgs__msg__CANInput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drive_msgs__msg__CANInput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drive_msgs__msg__CANInput__Sequence__are_equal(const drive_msgs__msg__CANInput__Sequence * lhs, const drive_msgs__msg__CANInput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drive_msgs__msg__CANInput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drive_msgs__msg__CANInput__Sequence__copy(
  const drive_msgs__msg__CANInput__Sequence * input,
  drive_msgs__msg__CANInput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drive_msgs__msg__CANInput);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drive_msgs__msg__CANInput * data =
      (drive_msgs__msg__CANInput *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drive_msgs__msg__CANInput__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drive_msgs__msg__CANInput__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drive_msgs__msg__CANInput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

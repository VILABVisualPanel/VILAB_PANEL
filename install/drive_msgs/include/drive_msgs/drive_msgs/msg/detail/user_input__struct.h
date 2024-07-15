// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/UserInput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__USER_INPUT__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__USER_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'user_mode'
// Member 'user_signal'
#include "std_msgs/msg/detail/int8__struct.h"

/// Struct defined in msg/UserInput in the package drive_msgs.
typedef struct drive_msgs__msg__UserInput
{
  std_msgs__msg__Int8 user_mode;
  std_msgs__msg__Int8 user_signal;
} drive_msgs__msg__UserInput;

// Struct for a sequence of drive_msgs__msg__UserInput.
typedef struct drive_msgs__msg__UserInput__Sequence
{
  drive_msgs__msg__UserInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__UserInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__USER_INPUT__STRUCT_H_

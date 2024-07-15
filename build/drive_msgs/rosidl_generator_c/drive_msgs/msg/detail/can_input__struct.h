// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/CANInput.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'eps_en'
// Member 'eps_override_ignore'
// Member 'acc_en'
// Member 'aeb_en'
// Member 'turn_signal'
// Member 'aliv_cnt'
#include "std_msgs/msg/detail/int8__struct.h"
// Member 'eps_speed'
// Member 'aeb_decel_value'
// Member 'eps_cmd'
// Member 'acc_cmd'
#include "std_msgs/msg/detail/float32__struct.h"

/// Struct defined in msg/CANInput in the package drive_msgs.
typedef struct drive_msgs__msg__CANInput
{
  std_msgs__msg__Int8 eps_en;
  std_msgs__msg__Int8 eps_override_ignore;
  std_msgs__msg__Float32 eps_speed;
  std_msgs__msg__Int8 acc_en;
  std_msgs__msg__Int8 aeb_en;
  std_msgs__msg__Int8 turn_signal;
  /// UInt8 is used, considering the range and scaling factor
  std_msgs__msg__Float32 aeb_decel_value;
  std_msgs__msg__Int8 aliv_cnt;
  std_msgs__msg__Float32 eps_cmd;
  std_msgs__msg__Float32 acc_cmd;
} drive_msgs__msg__CANInput;

// Struct for a sequence of drive_msgs__msg__CANInput.
typedef struct drive_msgs__msg__CANInput__Sequence
{
  drive_msgs__msg__CANInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__CANInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__CAN_INPUT__STRUCT_H_

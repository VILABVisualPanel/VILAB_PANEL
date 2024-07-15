// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/Actuator.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__ACTUATOR__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__ACTUATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'steer'
// Member 'accel'
// Member 'brake'
#include "std_msgs/msg/detail/float32__struct.h"

/// Struct defined in msg/Actuator in the package drive_msgs.
typedef struct drive_msgs__msg__Actuator
{
  std_msgs__msg__Float32 steer;
  std_msgs__msg__Float32 accel;
  std_msgs__msg__Float32 brake;
} drive_msgs__msg__Actuator;

// Struct for a sequence of drive_msgs__msg__Actuator.
typedef struct drive_msgs__msg__Actuator__Sequence
{
  drive_msgs__msg__Actuator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__Actuator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__ACTUATOR__STRUCT_H_

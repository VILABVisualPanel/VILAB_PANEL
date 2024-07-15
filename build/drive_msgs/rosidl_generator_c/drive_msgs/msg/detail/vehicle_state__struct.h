// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'mode'
// Member 'signal'
#include "std_msgs/msg/detail/int8__struct.h"
// Member 'gear'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'velocity'
// Member 'heading'
#include "std_msgs/msg/detail/float32__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/VehicleState in the package drive_msgs.
typedef struct drive_msgs__msg__VehicleState
{
  std_msgs__msg__Header header;
  std_msgs__msg__Int8 mode;
  std_msgs__msg__String gear;
  std_msgs__msg__Int8 signal;
  std_msgs__msg__Float32 velocity;
  std_msgs__msg__Float32 heading;
  geometry_msgs__msg__Point position;
} drive_msgs__msg__VehicleState;

// Struct for a sequence of drive_msgs__msg__VehicleState.
typedef struct drive_msgs__msg__VehicleState__Sequence
{
  drive_msgs__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

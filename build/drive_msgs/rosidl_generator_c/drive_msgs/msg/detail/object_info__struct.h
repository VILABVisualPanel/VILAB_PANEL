// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/ObjectInfo.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__OBJECT_INFO__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__OBJECT_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "std_msgs/msg/detail/int8__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'heading'
// Member 'velocity'
#include "std_msgs/msg/detail/float32__struct.h"

/// Struct defined in msg/ObjectInfo in the package drive_msgs.
typedef struct drive_msgs__msg__ObjectInfo
{
  std_msgs__msg__Int8 type;
  geometry_msgs__msg__Point position;
  std_msgs__msg__Float32 heading;
  std_msgs__msg__Float32 velocity;
} drive_msgs__msg__ObjectInfo;

// Struct for a sequence of drive_msgs__msg__ObjectInfo.
typedef struct drive_msgs__msg__ObjectInfo__Sequence
{
  drive_msgs__msg__ObjectInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__ObjectInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__OBJECT_INFO__STRUCT_H_

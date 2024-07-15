// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/NavigationData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'currentlocation'
// Member 'plannedroute'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'plannedkappa'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'plannedvelocity'
#include "std_msgs/msg/detail/float32__struct.h"

/// Struct defined in msg/NavigationData in the package drive_msgs.
typedef struct drive_msgs__msg__NavigationData
{
  geometry_msgs__msg__Point currentlocation;
  geometry_msgs__msg__Point__Sequence plannedroute;
  rosidl_runtime_c__float__Sequence plannedkappa;
  std_msgs__msg__Float32 plannedvelocity;
} drive_msgs__msg__NavigationData;

// Struct for a sequence of drive_msgs__msg__NavigationData.
typedef struct drive_msgs__msg__NavigationData__Sequence
{
  drive_msgs__msg__NavigationData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__NavigationData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__NAVIGATION_DATA__STRUCT_H_

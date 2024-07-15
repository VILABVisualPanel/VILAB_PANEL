// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/LaneLet.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__LANE_LET__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__LANE_LET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'leftneighbor'
// Member 'rightneighbor'
// Member 'predecessor'
// Member 'successor'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/LaneLet in the package drive_msgs.
typedef struct drive_msgs__msg__LaneLet
{
  std_msgs__msg__String id;
  std_msgs__msg__String leftneighbor;
  std_msgs__msg__String rightneighbor;
  std_msgs__msg__String predecessor;
  std_msgs__msg__String successor;
  int8_t currentlane;
} drive_msgs__msg__LaneLet;

// Struct for a sequence of drive_msgs__msg__LaneLet.
typedef struct drive_msgs__msg__LaneLet__Sequence
{
  drive_msgs__msg__LaneLet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__LaneLet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__LANE_LET__STRUCT_H_

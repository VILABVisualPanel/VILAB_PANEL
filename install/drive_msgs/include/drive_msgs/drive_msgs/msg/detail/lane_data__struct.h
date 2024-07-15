// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/LaneData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__LANE_DATA__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__LANE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'currentlane'
// Member 'neighborlane'
#include "drive_msgs/msg/detail/lane_let__struct.h"

/// Struct defined in msg/LaneData in the package drive_msgs.
typedef struct drive_msgs__msg__LaneData
{
  drive_msgs__msg__LaneLet currentlane;
  drive_msgs__msg__LaneLet neighborlane;
} drive_msgs__msg__LaneData;

// Struct for a sequence of drive_msgs__msg__LaneData.
typedef struct drive_msgs__msg__LaneData__Sequence
{
  drive_msgs__msg__LaneData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__LaneData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__LANE_DATA__STRUCT_H_

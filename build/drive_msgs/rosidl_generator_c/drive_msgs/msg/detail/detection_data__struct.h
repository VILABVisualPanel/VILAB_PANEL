// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/DetectionData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "drive_msgs/msg/detail/object_info__struct.h"
// Member 'laneposition0'
// Member 'laneposition1'
// Member 'laneposition2'
// Member 'laneposition3'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/DetectionData in the package drive_msgs.
typedef struct drive_msgs__msg__DetectionData
{
  drive_msgs__msg__ObjectInfo__Sequence objects;
  geometry_msgs__msg__Point__Sequence laneposition0;
  geometry_msgs__msg__Point__Sequence laneposition1;
  geometry_msgs__msg__Point__Sequence laneposition2;
  geometry_msgs__msg__Point__Sequence laneposition3;
} drive_msgs__msg__DetectionData;

// Struct for a sequence of drive_msgs__msg__DetectionData.
typedef struct drive_msgs__msg__DetectionData__Sequence
{
  drive_msgs__msg__DetectionData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__DetectionData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__DETECTION_DATA__STRUCT_H_

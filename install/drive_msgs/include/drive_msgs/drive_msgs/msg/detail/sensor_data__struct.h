// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'heading'
#include "std_msgs/msg/detail/float32__struct.h"

/// Struct defined in msg/SensorData in the package drive_msgs.
typedef struct drive_msgs__msg__SensorData
{
  sensor_msgs__msg__Image image;
  geometry_msgs__msg__Point position;
  std_msgs__msg__Float32 heading;
} drive_msgs__msg__SensorData;

// Struct for a sequence of drive_msgs__msg__SensorData.
typedef struct drive_msgs__msg__SensorData__Sequence
{
  drive_msgs__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

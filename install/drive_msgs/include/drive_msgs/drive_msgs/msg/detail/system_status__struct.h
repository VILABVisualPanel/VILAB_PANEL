// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drive_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#ifndef DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_
#define DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mapname'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'basella'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'systemmode'
// Member 'systemsignal'
// Member 'systemstate'
// Member 'systemhealth'
// Member 'lapcount'
#include "std_msgs/msg/detail/int8__struct.h"

/// Struct defined in msg/SystemStatus in the package drive_msgs.
typedef struct drive_msgs__msg__SystemStatus
{
  std_msgs__msg__String mapname;
  rosidl_runtime_c__float__Sequence basella;
  std_msgs__msg__Int8 systemmode;
  std_msgs__msg__Int8 systemsignal;
  std_msgs__msg__Int8 systemstate;
  std_msgs__msg__Int8 systemhealth;
  std_msgs__msg__Int8 lapcount;
} drive_msgs__msg__SystemStatus;

// Struct for a sequence of drive_msgs__msg__SystemStatus.
typedef struct drive_msgs__msg__SystemStatus__Sequence
{
  drive_msgs__msg__SystemStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drive_msgs__msg__SystemStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRIVE_MSGS__MSG__DETAIL__SYSTEM_STATUS__STRUCT_H_

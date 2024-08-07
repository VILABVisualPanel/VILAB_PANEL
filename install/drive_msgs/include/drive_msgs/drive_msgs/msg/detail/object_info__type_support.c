// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drive_msgs:msg/ObjectInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drive_msgs/msg/detail/object_info__rosidl_typesupport_introspection_c.h"
#include "drive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drive_msgs/msg/detail/object_info__functions.h"
#include "drive_msgs/msg/detail/object_info__struct.h"


// Include directives for member types
// Member `type`
#include "std_msgs/msg/int8.h"
// Member `type`
#include "std_msgs/msg/detail/int8__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `heading`
// Member `velocity`
#include "std_msgs/msg/float32.h"
// Member `heading`
// Member `velocity`
#include "std_msgs/msg/detail/float32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drive_msgs__msg__ObjectInfo__init(message_memory);
}

void drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_fini_function(void * message_memory)
{
  drive_msgs__msg__ObjectInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_member_array[4] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__ObjectInfo, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__ObjectInfo, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__ObjectInfo, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__ObjectInfo, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_members = {
  "drive_msgs__msg",  // message namespace
  "ObjectInfo",  // message name
  4,  // number of fields
  sizeof(drive_msgs__msg__ObjectInfo),
  drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_member_array,  // message members
  drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_type_support_handle = {
  0,
  &drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drive_msgs, msg, ObjectInfo)() {
  drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int8)();
  drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  if (!drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_type_support_handle.typesupport_identifier) {
    drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drive_msgs__msg__ObjectInfo__rosidl_typesupport_introspection_c__ObjectInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

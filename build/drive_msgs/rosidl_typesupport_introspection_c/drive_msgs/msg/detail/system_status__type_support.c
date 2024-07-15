// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drive_msgs:msg/SystemStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drive_msgs/msg/detail/system_status__rosidl_typesupport_introspection_c.h"
#include "drive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drive_msgs/msg/detail/system_status__functions.h"
#include "drive_msgs/msg/detail/system_status__struct.h"


// Include directives for member types
// Member `mapname`
#include "std_msgs/msg/string.h"
// Member `mapname`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"
// Member `basella`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `systemmode`
// Member `systemsignal`
// Member `systemstate`
// Member `systemhealth`
// Member `lapcount`
#include "std_msgs/msg/int8.h"
// Member `systemmode`
// Member `systemsignal`
// Member `systemstate`
// Member `systemhealth`
// Member `lapcount`
#include "std_msgs/msg/detail/int8__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drive_msgs__msg__SystemStatus__init(message_memory);
}

void drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_fini_function(void * message_memory)
{
  drive_msgs__msg__SystemStatus__fini(message_memory);
}

size_t drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__basella(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__basella(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__basella(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__basella(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__basella(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__basella(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__basella(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__resize_function__SystemStatus__basella(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[7] = {
  {
    "mapname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__SystemStatus, mapname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "basella",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__SystemStatus, basella),  // bytes offset in struct
    NULL,  // default value
    drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__size_function__SystemStatus__basella,  // size() function pointer
    drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_const_function__SystemStatus__basella,  // get_const(index) function pointer
    drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__get_function__SystemStatus__basella,  // get(index) function pointer
    drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__fetch_function__SystemStatus__basella,  // fetch(index, &value) function pointer
    drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__assign_function__SystemStatus__basella,  // assign(index, value) function pointer
    drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__resize_function__SystemStatus__basella  // resize(index) function pointer
  },
  {
    "systemmode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__SystemStatus, systemmode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "systemsignal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__SystemStatus, systemsignal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "systemstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__SystemStatus, systemstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "systemhealth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__SystemStatus, systemhealth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lapcount",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__SystemStatus, lapcount),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_members = {
  "drive_msgs__msg",  // message namespace
  "SystemStatus",  // message name
  7,  // number of fields
  sizeof(drive_msgs__msg__SystemStatus),
  drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array,  // message members
  drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle = {
  0,
  &drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drive_msgs, msg, SystemStatus)() {
  drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int8)();
  drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int8)();
  drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int8)();
  drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int8)();
  drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int8)();
  if (!drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle.typesupport_identifier) {
    drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drive_msgs__msg__SystemStatus__rosidl_typesupport_introspection_c__SystemStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

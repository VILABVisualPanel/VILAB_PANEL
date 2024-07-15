// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drive_msgs:msg/NavigationData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drive_msgs/msg/detail/navigation_data__rosidl_typesupport_introspection_c.h"
#include "drive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drive_msgs/msg/detail/navigation_data__functions.h"
#include "drive_msgs/msg/detail/navigation_data__struct.h"


// Include directives for member types
// Member `currentlocation`
// Member `plannedroute`
#include "geometry_msgs/msg/point.h"
// Member `currentlocation`
// Member `plannedroute`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `plannedkappa`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `plannedvelocity`
#include "std_msgs/msg/float32.h"
// Member `plannedvelocity`
#include "std_msgs/msg/detail/float32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drive_msgs__msg__NavigationData__init(message_memory);
}

void drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_fini_function(void * message_memory)
{
  drive_msgs__msg__NavigationData__fini(message_memory);
}

size_t drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__size_function__NavigationData__plannedroute(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_const_function__NavigationData__plannedroute(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_function__NavigationData__plannedroute(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__fetch_function__NavigationData__plannedroute(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_const_function__NavigationData__plannedroute(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__assign_function__NavigationData__plannedroute(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_function__NavigationData__plannedroute(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__resize_function__NavigationData__plannedroute(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__size_function__NavigationData__plannedkappa(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_const_function__NavigationData__plannedkappa(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_function__NavigationData__plannedkappa(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__fetch_function__NavigationData__plannedkappa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_const_function__NavigationData__plannedkappa(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__assign_function__NavigationData__plannedkappa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_function__NavigationData__plannedkappa(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__resize_function__NavigationData__plannedkappa(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_member_array[4] = {
  {
    "currentlocation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__NavigationData, currentlocation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plannedroute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__NavigationData, plannedroute),  // bytes offset in struct
    NULL,  // default value
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__size_function__NavigationData__plannedroute,  // size() function pointer
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_const_function__NavigationData__plannedroute,  // get_const(index) function pointer
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_function__NavigationData__plannedroute,  // get(index) function pointer
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__fetch_function__NavigationData__plannedroute,  // fetch(index, &value) function pointer
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__assign_function__NavigationData__plannedroute,  // assign(index, value) function pointer
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__resize_function__NavigationData__plannedroute  // resize(index) function pointer
  },
  {
    "plannedkappa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__NavigationData, plannedkappa),  // bytes offset in struct
    NULL,  // default value
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__size_function__NavigationData__plannedkappa,  // size() function pointer
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_const_function__NavigationData__plannedkappa,  // get_const(index) function pointer
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__get_function__NavigationData__plannedkappa,  // get(index) function pointer
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__fetch_function__NavigationData__plannedkappa,  // fetch(index, &value) function pointer
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__assign_function__NavigationData__plannedkappa,  // assign(index, value) function pointer
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__resize_function__NavigationData__plannedkappa  // resize(index) function pointer
  },
  {
    "plannedvelocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__NavigationData, plannedvelocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_members = {
  "drive_msgs__msg",  // message namespace
  "NavigationData",  // message name
  4,  // number of fields
  sizeof(drive_msgs__msg__NavigationData),
  drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_member_array,  // message members
  drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_init_function,  // function to initialize message memory (memory has to be allocated)
  drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_type_support_handle = {
  0,
  &drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drive_msgs, msg, NavigationData)() {
  drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  if (!drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_type_support_handle.typesupport_identifier) {
    drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drive_msgs__msg__NavigationData__rosidl_typesupport_introspection_c__NavigationData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

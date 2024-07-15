// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drive_msgs:msg/DetectionData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drive_msgs/msg/detail/detection_data__rosidl_typesupport_introspection_c.h"
#include "drive_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drive_msgs/msg/detail/detection_data__functions.h"
#include "drive_msgs/msg/detail/detection_data__struct.h"


// Include directives for member types
// Member `objects`
#include "drive_msgs/msg/object_info.h"
// Member `objects`
#include "drive_msgs/msg/detail/object_info__rosidl_typesupport_introspection_c.h"
// Member `laneposition0`
// Member `laneposition1`
// Member `laneposition2`
// Member `laneposition3`
#include "geometry_msgs/msg/point.h"
// Member `laneposition0`
// Member `laneposition1`
// Member `laneposition2`
// Member `laneposition3`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drive_msgs__msg__DetectionData__init(message_memory);
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_fini_function(void * message_memory)
{
  drive_msgs__msg__DetectionData__fini(message_memory);
}

size_t drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__size_function__DetectionData__objects(
  const void * untyped_member)
{
  const drive_msgs__msg__ObjectInfo__Sequence * member =
    (const drive_msgs__msg__ObjectInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__objects(
  const void * untyped_member, size_t index)
{
  const drive_msgs__msg__ObjectInfo__Sequence * member =
    (const drive_msgs__msg__ObjectInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__objects(
  void * untyped_member, size_t index)
{
  drive_msgs__msg__ObjectInfo__Sequence * member =
    (drive_msgs__msg__ObjectInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__fetch_function__DetectionData__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const drive_msgs__msg__ObjectInfo * item =
    ((const drive_msgs__msg__ObjectInfo *)
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__objects(untyped_member, index));
  drive_msgs__msg__ObjectInfo * value =
    (drive_msgs__msg__ObjectInfo *)(untyped_value);
  *value = *item;
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__assign_function__DetectionData__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  drive_msgs__msg__ObjectInfo * item =
    ((drive_msgs__msg__ObjectInfo *)
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__objects(untyped_member, index));
  const drive_msgs__msg__ObjectInfo * value =
    (const drive_msgs__msg__ObjectInfo *)(untyped_value);
  *item = *value;
}

bool drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__resize_function__DetectionData__objects(
  void * untyped_member, size_t size)
{
  drive_msgs__msg__ObjectInfo__Sequence * member =
    (drive_msgs__msg__ObjectInfo__Sequence *)(untyped_member);
  drive_msgs__msg__ObjectInfo__Sequence__fini(member);
  return drive_msgs__msg__ObjectInfo__Sequence__init(member, size);
}

size_t drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__size_function__DetectionData__laneposition0(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition0(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition0(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__fetch_function__DetectionData__laneposition0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition0(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__assign_function__DetectionData__laneposition0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition0(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__resize_function__DetectionData__laneposition0(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__size_function__DetectionData__laneposition1(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition1(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition1(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__fetch_function__DetectionData__laneposition1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition1(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__assign_function__DetectionData__laneposition1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition1(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__resize_function__DetectionData__laneposition1(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__size_function__DetectionData__laneposition2(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition2(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition2(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__fetch_function__DetectionData__laneposition2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition2(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__assign_function__DetectionData__laneposition2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition2(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__resize_function__DetectionData__laneposition2(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__size_function__DetectionData__laneposition3(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition3(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition3(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__fetch_function__DetectionData__laneposition3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition3(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__assign_function__DetectionData__laneposition3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition3(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__resize_function__DetectionData__laneposition3(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_member_array[5] = {
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__DetectionData, objects),  // bytes offset in struct
    NULL,  // default value
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__size_function__DetectionData__objects,  // size() function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__objects,  // get_const(index) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__objects,  // get(index) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__fetch_function__DetectionData__objects,  // fetch(index, &value) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__assign_function__DetectionData__objects,  // assign(index, value) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__resize_function__DetectionData__objects  // resize(index) function pointer
  },
  {
    "laneposition0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__DetectionData, laneposition0),  // bytes offset in struct
    NULL,  // default value
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__size_function__DetectionData__laneposition0,  // size() function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition0,  // get_const(index) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition0,  // get(index) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__fetch_function__DetectionData__laneposition0,  // fetch(index, &value) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__assign_function__DetectionData__laneposition0,  // assign(index, value) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__resize_function__DetectionData__laneposition0  // resize(index) function pointer
  },
  {
    "laneposition1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__DetectionData, laneposition1),  // bytes offset in struct
    NULL,  // default value
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__size_function__DetectionData__laneposition1,  // size() function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition1,  // get_const(index) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition1,  // get(index) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__fetch_function__DetectionData__laneposition1,  // fetch(index, &value) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__assign_function__DetectionData__laneposition1,  // assign(index, value) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__resize_function__DetectionData__laneposition1  // resize(index) function pointer
  },
  {
    "laneposition2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__DetectionData, laneposition2),  // bytes offset in struct
    NULL,  // default value
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__size_function__DetectionData__laneposition2,  // size() function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition2,  // get_const(index) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition2,  // get(index) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__fetch_function__DetectionData__laneposition2,  // fetch(index, &value) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__assign_function__DetectionData__laneposition2,  // assign(index, value) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__resize_function__DetectionData__laneposition2  // resize(index) function pointer
  },
  {
    "laneposition3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs__msg__DetectionData, laneposition3),  // bytes offset in struct
    NULL,  // default value
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__size_function__DetectionData__laneposition3,  // size() function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_const_function__DetectionData__laneposition3,  // get_const(index) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__get_function__DetectionData__laneposition3,  // get(index) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__fetch_function__DetectionData__laneposition3,  // fetch(index, &value) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__assign_function__DetectionData__laneposition3,  // assign(index, value) function pointer
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__resize_function__DetectionData__laneposition3  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_members = {
  "drive_msgs__msg",  // message namespace
  "DetectionData",  // message name
  5,  // number of fields
  sizeof(drive_msgs__msg__DetectionData),
  drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_member_array,  // message members
  drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_init_function,  // function to initialize message memory (memory has to be allocated)
  drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_type_support_handle = {
  0,
  &drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drive_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drive_msgs, msg, DetectionData)() {
  drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drive_msgs, msg, ObjectInfo)();
  drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_type_support_handle.typesupport_identifier) {
    drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drive_msgs__msg__DetectionData__rosidl_typesupport_introspection_c__DetectionData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

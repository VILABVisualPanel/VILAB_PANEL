// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from drive_msgs:msg/NavigationData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "drive_msgs/msg/detail/navigation_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace drive_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NavigationData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) drive_msgs::msg::NavigationData(_init);
}

void NavigationData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<drive_msgs::msg::NavigationData *>(message_memory);
  typed_message->~NavigationData();
}

size_t size_function__NavigationData__plannedroute(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavigationData__plannedroute(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__NavigationData__plannedroute(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavigationData__plannedroute(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__NavigationData__plannedroute(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__NavigationData__plannedroute(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__NavigationData__plannedroute(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__NavigationData__plannedroute(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NavigationData__plannedkappa(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavigationData__plannedkappa(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__NavigationData__plannedkappa(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavigationData__plannedkappa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__NavigationData__plannedkappa(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__NavigationData__plannedkappa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__NavigationData__plannedkappa(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__NavigationData__plannedkappa(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavigationData_message_member_array[4] = {
  {
    "currentlocation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs::msg::NavigationData, currentlocation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "plannedroute",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs::msg::NavigationData, plannedroute),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavigationData__plannedroute,  // size() function pointer
    get_const_function__NavigationData__plannedroute,  // get_const(index) function pointer
    get_function__NavigationData__plannedroute,  // get(index) function pointer
    fetch_function__NavigationData__plannedroute,  // fetch(index, &value) function pointer
    assign_function__NavigationData__plannedroute,  // assign(index, value) function pointer
    resize_function__NavigationData__plannedroute  // resize(index) function pointer
  },
  {
    "plannedkappa",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs::msg::NavigationData, plannedkappa),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavigationData__plannedkappa,  // size() function pointer
    get_const_function__NavigationData__plannedkappa,  // get_const(index) function pointer
    get_function__NavigationData__plannedkappa,  // get(index) function pointer
    fetch_function__NavigationData__plannedkappa,  // fetch(index, &value) function pointer
    assign_function__NavigationData__plannedkappa,  // assign(index, value) function pointer
    resize_function__NavigationData__plannedkappa  // resize(index) function pointer
  },
  {
    "plannedvelocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float32>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drive_msgs::msg::NavigationData, plannedvelocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavigationData_message_members = {
  "drive_msgs::msg",  // message namespace
  "NavigationData",  // message name
  4,  // number of fields
  sizeof(drive_msgs::msg::NavigationData),
  NavigationData_message_member_array,  // message members
  NavigationData_init_function,  // function to initialize message memory (memory has to be allocated)
  NavigationData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavigationData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavigationData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace drive_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<drive_msgs::msg::NavigationData>()
{
  return &::drive_msgs::msg::rosidl_typesupport_introspection_cpp::NavigationData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, drive_msgs, msg, NavigationData)() {
  return &::drive_msgs::msg::rosidl_typesupport_introspection_cpp::NavigationData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

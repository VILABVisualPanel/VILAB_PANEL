// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from drive_msgs:msg/CANInput.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "drive_msgs/msg/detail/can_input__struct.h"
#include "drive_msgs/msg/detail/can_input__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool drive_msgs__msg__can_input__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("drive_msgs.msg._can_input.CANInput", full_classname_dest, 34) == 0);
  }
  drive_msgs__msg__CANInput * ros_message = _ros_message;
  {  // eps_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_en");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int8__convert_from_py(field, &ros_message->eps_en)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eps_override_ignore
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_override_ignore");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int8__convert_from_py(field, &ros_message->eps_override_ignore)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eps_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_speed");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->eps_speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acc_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_en");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int8__convert_from_py(field, &ros_message->acc_en)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // aeb_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "aeb_en");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int8__convert_from_py(field, &ros_message->aeb_en)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // turn_signal
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_signal");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int8__convert_from_py(field, &ros_message->turn_signal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // aeb_decel_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "aeb_decel_value");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->aeb_decel_value)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // aliv_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "aliv_cnt");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int8__convert_from_py(field, &ros_message->aliv_cnt)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eps_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_cmd");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->eps_cmd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acc_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_cmd");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->acc_cmd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drive_msgs__msg__can_input__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CANInput */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drive_msgs.msg._can_input");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CANInput");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drive_msgs__msg__CANInput * ros_message = (drive_msgs__msg__CANInput *)raw_ros_message;
  {  // eps_en
    PyObject * field = NULL;
    field = std_msgs__msg__int8__convert_to_py(&ros_message->eps_en);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_override_ignore
    PyObject * field = NULL;
    field = std_msgs__msg__int8__convert_to_py(&ros_message->eps_override_ignore);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_override_ignore", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_speed
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->eps_speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_en
    PyObject * field = NULL;
    field = std_msgs__msg__int8__convert_to_py(&ros_message->acc_en);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aeb_en
    PyObject * field = NULL;
    field = std_msgs__msg__int8__convert_to_py(&ros_message->aeb_en);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "aeb_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_signal
    PyObject * field = NULL;
    field = std_msgs__msg__int8__convert_to_py(&ros_message->turn_signal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_signal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aeb_decel_value
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->aeb_decel_value);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "aeb_decel_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aliv_cnt
    PyObject * field = NULL;
    field = std_msgs__msg__int8__convert_to_py(&ros_message->aliv_cnt);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "aliv_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_cmd
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->eps_cmd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_cmd
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->acc_cmd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

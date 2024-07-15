// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from drive_msgs:msg/LaneData.idl
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
#include "drive_msgs/msg/detail/lane_data__struct.h"
#include "drive_msgs/msg/detail/lane_data__functions.h"

bool drive_msgs__msg__lane_let__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * drive_msgs__msg__lane_let__convert_to_py(void * raw_ros_message);
bool drive_msgs__msg__lane_let__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * drive_msgs__msg__lane_let__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool drive_msgs__msg__lane_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("drive_msgs.msg._lane_data.LaneData", full_classname_dest, 34) == 0);
  }
  drive_msgs__msg__LaneData * ros_message = _ros_message;
  {  // currentlane
    PyObject * field = PyObject_GetAttrString(_pymsg, "currentlane");
    if (!field) {
      return false;
    }
    if (!drive_msgs__msg__lane_let__convert_from_py(field, &ros_message->currentlane)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // neighborlane
    PyObject * field = PyObject_GetAttrString(_pymsg, "neighborlane");
    if (!field) {
      return false;
    }
    if (!drive_msgs__msg__lane_let__convert_from_py(field, &ros_message->neighborlane)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drive_msgs__msg__lane_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drive_msgs.msg._lane_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drive_msgs__msg__LaneData * ros_message = (drive_msgs__msg__LaneData *)raw_ros_message;
  {  // currentlane
    PyObject * field = NULL;
    field = drive_msgs__msg__lane_let__convert_to_py(&ros_message->currentlane);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "currentlane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // neighborlane
    PyObject * field = NULL;
    field = drive_msgs__msg__lane_let__convert_to_py(&ros_message->neighborlane);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "neighborlane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

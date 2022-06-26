// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_interfaces:srv/RandGoal.idl
// generated code does not contain a copyright notice
#include "turtlesim_interfaces/srv/detail/rand_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
turtlesim_interfaces__srv__RandGoal_Request__init(turtlesim_interfaces__srv__RandGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
turtlesim_interfaces__srv__RandGoal_Request__fini(turtlesim_interfaces__srv__RandGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

turtlesim_interfaces__srv__RandGoal_Request *
turtlesim_interfaces__srv__RandGoal_Request__create()
{
  turtlesim_interfaces__srv__RandGoal_Request * msg = (turtlesim_interfaces__srv__RandGoal_Request *)malloc(sizeof(turtlesim_interfaces__srv__RandGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_interfaces__srv__RandGoal_Request));
  bool success = turtlesim_interfaces__srv__RandGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim_interfaces__srv__RandGoal_Request__destroy(turtlesim_interfaces__srv__RandGoal_Request * msg)
{
  if (msg) {
    turtlesim_interfaces__srv__RandGoal_Request__fini(msg);
  }
  free(msg);
}


bool
turtlesim_interfaces__srv__RandGoal_Request__Sequence__init(turtlesim_interfaces__srv__RandGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim_interfaces__srv__RandGoal_Request * data = NULL;
  if (size) {
    data = (turtlesim_interfaces__srv__RandGoal_Request *)calloc(size, sizeof(turtlesim_interfaces__srv__RandGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_interfaces__srv__RandGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_interfaces__srv__RandGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlesim_interfaces__srv__RandGoal_Request__Sequence__fini(turtlesim_interfaces__srv__RandGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim_interfaces__srv__RandGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlesim_interfaces__srv__RandGoal_Request__Sequence *
turtlesim_interfaces__srv__RandGoal_Request__Sequence__create(size_t size)
{
  turtlesim_interfaces__srv__RandGoal_Request__Sequence * array = (turtlesim_interfaces__srv__RandGoal_Request__Sequence *)malloc(sizeof(turtlesim_interfaces__srv__RandGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_interfaces__srv__RandGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim_interfaces__srv__RandGoal_Request__Sequence__destroy(turtlesim_interfaces__srv__RandGoal_Request__Sequence * array)
{
  if (array) {
    turtlesim_interfaces__srv__RandGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
turtlesim_interfaces__srv__RandGoal_Response__init(turtlesim_interfaces__srv__RandGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    turtlesim_interfaces__srv__RandGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_interfaces__srv__RandGoal_Response__fini(turtlesim_interfaces__srv__RandGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
}

turtlesim_interfaces__srv__RandGoal_Response *
turtlesim_interfaces__srv__RandGoal_Response__create()
{
  turtlesim_interfaces__srv__RandGoal_Response * msg = (turtlesim_interfaces__srv__RandGoal_Response *)malloc(sizeof(turtlesim_interfaces__srv__RandGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_interfaces__srv__RandGoal_Response));
  bool success = turtlesim_interfaces__srv__RandGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
turtlesim_interfaces__srv__RandGoal_Response__destroy(turtlesim_interfaces__srv__RandGoal_Response * msg)
{
  if (msg) {
    turtlesim_interfaces__srv__RandGoal_Response__fini(msg);
  }
  free(msg);
}


bool
turtlesim_interfaces__srv__RandGoal_Response__Sequence__init(turtlesim_interfaces__srv__RandGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  turtlesim_interfaces__srv__RandGoal_Response * data = NULL;
  if (size) {
    data = (turtlesim_interfaces__srv__RandGoal_Response *)calloc(size, sizeof(turtlesim_interfaces__srv__RandGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_interfaces__srv__RandGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_interfaces__srv__RandGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlesim_interfaces__srv__RandGoal_Response__Sequence__fini(turtlesim_interfaces__srv__RandGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim_interfaces__srv__RandGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlesim_interfaces__srv__RandGoal_Response__Sequence *
turtlesim_interfaces__srv__RandGoal_Response__Sequence__create(size_t size)
{
  turtlesim_interfaces__srv__RandGoal_Response__Sequence * array = (turtlesim_interfaces__srv__RandGoal_Response__Sequence *)malloc(sizeof(turtlesim_interfaces__srv__RandGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_interfaces__srv__RandGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
turtlesim_interfaces__srv__RandGoal_Response__Sequence__destroy(turtlesim_interfaces__srv__RandGoal_Response__Sequence * array)
{
  if (array) {
    turtlesim_interfaces__srv__RandGoal_Response__Sequence__fini(array);
  }
  free(array);
}

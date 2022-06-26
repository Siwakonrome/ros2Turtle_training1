// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtlesim_interfaces:srv/RandGoal.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_INTERFACES__SRV__DETAIL__RAND_GOAL__FUNCTIONS_H_
#define TURTLESIM_INTERFACES__SRV__DETAIL__RAND_GOAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtlesim_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtlesim_interfaces/srv/detail/rand_goal__struct.h"

/// Initialize srv/RandGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim_interfaces__srv__RandGoal_Request
 * )) before or use
 * turtlesim_interfaces__srv__RandGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
bool
turtlesim_interfaces__srv__RandGoal_Request__init(turtlesim_interfaces__srv__RandGoal_Request * msg);

/// Finalize srv/RandGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
void
turtlesim_interfaces__srv__RandGoal_Request__fini(turtlesim_interfaces__srv__RandGoal_Request * msg);

/// Create srv/RandGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim_interfaces__srv__RandGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
turtlesim_interfaces__srv__RandGoal_Request *
turtlesim_interfaces__srv__RandGoal_Request__create();

/// Destroy srv/RandGoal message.
/**
 * It calls
 * turtlesim_interfaces__srv__RandGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
void
turtlesim_interfaces__srv__RandGoal_Request__destroy(turtlesim_interfaces__srv__RandGoal_Request * msg);


/// Initialize array of srv/RandGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim_interfaces__srv__RandGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
bool
turtlesim_interfaces__srv__RandGoal_Request__Sequence__init(turtlesim_interfaces__srv__RandGoal_Request__Sequence * array, size_t size);

/// Finalize array of srv/RandGoal messages.
/**
 * It calls
 * turtlesim_interfaces__srv__RandGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
void
turtlesim_interfaces__srv__RandGoal_Request__Sequence__fini(turtlesim_interfaces__srv__RandGoal_Request__Sequence * array);

/// Create array of srv/RandGoal messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim_interfaces__srv__RandGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
turtlesim_interfaces__srv__RandGoal_Request__Sequence *
turtlesim_interfaces__srv__RandGoal_Request__Sequence__create(size_t size);

/// Destroy array of srv/RandGoal messages.
/**
 * It calls
 * turtlesim_interfaces__srv__RandGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
void
turtlesim_interfaces__srv__RandGoal_Request__Sequence__destroy(turtlesim_interfaces__srv__RandGoal_Request__Sequence * array);

/// Initialize srv/RandGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim_interfaces__srv__RandGoal_Response
 * )) before or use
 * turtlesim_interfaces__srv__RandGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
bool
turtlesim_interfaces__srv__RandGoal_Response__init(turtlesim_interfaces__srv__RandGoal_Response * msg);

/// Finalize srv/RandGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
void
turtlesim_interfaces__srv__RandGoal_Response__fini(turtlesim_interfaces__srv__RandGoal_Response * msg);

/// Create srv/RandGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim_interfaces__srv__RandGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
turtlesim_interfaces__srv__RandGoal_Response *
turtlesim_interfaces__srv__RandGoal_Response__create();

/// Destroy srv/RandGoal message.
/**
 * It calls
 * turtlesim_interfaces__srv__RandGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
void
turtlesim_interfaces__srv__RandGoal_Response__destroy(turtlesim_interfaces__srv__RandGoal_Response * msg);


/// Initialize array of srv/RandGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim_interfaces__srv__RandGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
bool
turtlesim_interfaces__srv__RandGoal_Response__Sequence__init(turtlesim_interfaces__srv__RandGoal_Response__Sequence * array, size_t size);

/// Finalize array of srv/RandGoal messages.
/**
 * It calls
 * turtlesim_interfaces__srv__RandGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
void
turtlesim_interfaces__srv__RandGoal_Response__Sequence__fini(turtlesim_interfaces__srv__RandGoal_Response__Sequence * array);

/// Create array of srv/RandGoal messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim_interfaces__srv__RandGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
turtlesim_interfaces__srv__RandGoal_Response__Sequence *
turtlesim_interfaces__srv__RandGoal_Response__Sequence__create(size_t size);

/// Destroy array of srv/RandGoal messages.
/**
 * It calls
 * turtlesim_interfaces__srv__RandGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_interfaces
void
turtlesim_interfaces__srv__RandGoal_Response__Sequence__destroy(turtlesim_interfaces__srv__RandGoal_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_INTERFACES__SRV__DETAIL__RAND_GOAL__FUNCTIONS_H_

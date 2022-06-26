// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_interfaces:srv/RandGoal.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_INTERFACES__SRV__DETAIL__RAND_GOAL__TRAITS_HPP_
#define TURTLESIM_INTERFACES__SRV__DETAIL__RAND_GOAL__TRAITS_HPP_

#include "turtlesim_interfaces/srv/detail/rand_goal__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_interfaces::srv::RandGoal_Request>()
{
  return "turtlesim_interfaces::srv::RandGoal_Request";
}

template<>
inline const char * name<turtlesim_interfaces::srv::RandGoal_Request>()
{
  return "turtlesim_interfaces/srv/RandGoal_Request";
}

template<>
struct has_fixed_size<turtlesim_interfaces::srv::RandGoal_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_interfaces::srv::RandGoal_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_interfaces::srv::RandGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_interfaces::srv::RandGoal_Response>()
{
  return "turtlesim_interfaces::srv::RandGoal_Response";
}

template<>
inline const char * name<turtlesim_interfaces::srv::RandGoal_Response>()
{
  return "turtlesim_interfaces/srv/RandGoal_Response";
}

template<>
struct has_fixed_size<turtlesim_interfaces::srv::RandGoal_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<turtlesim_interfaces::srv::RandGoal_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<turtlesim_interfaces::srv::RandGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_interfaces::srv::RandGoal>()
{
  return "turtlesim_interfaces::srv::RandGoal";
}

template<>
inline const char * name<turtlesim_interfaces::srv::RandGoal>()
{
  return "turtlesim_interfaces/srv/RandGoal";
}

template<>
struct has_fixed_size<turtlesim_interfaces::srv::RandGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_interfaces::srv::RandGoal_Request>::value &&
    has_fixed_size<turtlesim_interfaces::srv::RandGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_interfaces::srv::RandGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_interfaces::srv::RandGoal_Request>::value &&
    has_bounded_size<turtlesim_interfaces::srv::RandGoal_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_interfaces::srv::RandGoal>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_interfaces::srv::RandGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_interfaces::srv::RandGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_INTERFACES__SRV__DETAIL__RAND_GOAL__TRAITS_HPP_

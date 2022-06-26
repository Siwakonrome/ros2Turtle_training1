// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_interfaces:srv/SetGoal.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_INTERFACES__SRV__DETAIL__SET_GOAL__BUILDER_HPP_
#define TURTLESIM_INTERFACES__SRV__DETAIL__SET_GOAL__BUILDER_HPP_

#include "turtlesim_interfaces/srv/detail/set_goal__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtlesim_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGoal_Request_position
{
public:
  Init_SetGoal_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_interfaces::srv::SetGoal_Request position(::turtlesim_interfaces::srv::SetGoal_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_interfaces::srv::SetGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::srv::SetGoal_Request>()
{
  return turtlesim_interfaces::srv::builder::Init_SetGoal_Request_position();
}

}  // namespace turtlesim_interfaces


namespace turtlesim_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_interfaces::srv::SetGoal_Response>()
{
  return ::turtlesim_interfaces::srv::SetGoal_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim_interfaces

#endif  // TURTLESIM_INTERFACES__SRV__DETAIL__SET_GOAL__BUILDER_HPP_

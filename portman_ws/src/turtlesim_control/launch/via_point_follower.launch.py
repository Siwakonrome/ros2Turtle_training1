#!/usr/bin/python3
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    turtlesim = Node(
        package='turtlesim',
        executable='turtlesim_node',
    )
    controller = Node(
        package='turtlesim_control',
        executable='controller.py',
    )
    scheduler = Node(
        package='turtlesim_control',
        executable='scheduler.py',
    )

    entity_to_run = [turtlesim, controller, scheduler]
    return LaunchDescription(entity_to_run)
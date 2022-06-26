#!/usr/bin/python3
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess
from launch_ros.actions import Node

def generate_launch_description():
    turtlesim = Node(
        package='turtlesim',
        executable='turtlesim_node',
        parameters=[
            {'background_b': 255},
            {'background_g': 255},
            {'background_r': 255},
        ],
    )
    controller = Node(
        package='turtlesim_control',
        executable='controller.py',
        parameters=[
            {'gain': 10.0},
            {'speed': 2.0},
        ],
        remappings=[
            ('/pose','turtle1/pose'),
            ('/cmd_vel','turtle1/cmd_vel'),
        ],
    )
    scheduler = Node(
        package='turtlesim_control',
        executable='scheduler.py',
    )
    spawn_turtle2 = ExecuteProcess(
        cmd=[['ros2 service call /spawn turtlesim/srv/Spawn "{x: 5.0, y: 5.0, theta: 0.0, name: \'ttt5\'}"']],
        shell=True,
    )


    entity_to_run = [turtlesim, controller, scheduler, spawn_turtle2]
    return LaunchDescription(entity_to_run)
import launch
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='2dof_robotarm',
            executable='arm_controller',
            name='arm_controller',
            output='screen',
        ),
        Node(
            package='gazebo_ros',
            executable='gazebo',
            name='gazebo',
            output='screen',
            arguments=['--verbose'],
        ),
    ])
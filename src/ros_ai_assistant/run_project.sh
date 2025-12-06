#!/bin/bash

# Активация ROS
source /opt/ros/noetic/setup.bash
source devel/setup.bash

# Запуск проекта
echo "Starting ROS AI Assistant..."
roslaunch ros_ai_assistant assistant.launch


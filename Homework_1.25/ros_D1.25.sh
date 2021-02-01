#! /bin/bash
gnome-terminal -x bash -c "roscore"
gnome-terminal -x bash -c "rosrun turtlesim turtlesim_node"
gnome-terminal -x bash -c "rosrun turtlesim turtle_teleop_key"

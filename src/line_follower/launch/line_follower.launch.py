from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
 return LaunchDescription([
 Node(
 package='line_follower',
 executable='line_follower',
 output='screen',
 parameters=[{'map_path': PathJoinSubstitution([FindPackageShare('line_follower'),'maps','line_map.yaml'])}]
 )
 ])

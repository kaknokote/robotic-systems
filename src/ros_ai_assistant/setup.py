from distutils.core import setup
from catkin_pkg.python_setup import generate_distutils_setup

setup_args = generate_distutils_setup(
    packages=[
        'ros_ai_assistant',
        'ros_ai_assistant.ai_core_nodes',
        'ros_ai_assistant.security_nodes', 
        'ros_ai_assistant.communication_nodes',
        'ros_ai_assistant.integration_nodes',
    ],
    package_dir={'': 'scripts'}
)

setup(**setup_args)


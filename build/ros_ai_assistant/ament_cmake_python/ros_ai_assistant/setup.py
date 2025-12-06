from setuptools import find_packages
from setuptools import setup

setup(
    name='ros_ai_assistant',
    version='0.1.0',
    packages=find_packages(
        include=('ros_ai_assistant', 'ros_ai_assistant.*')),
)

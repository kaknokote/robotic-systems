#!/usr/bin/env bash
set -e

PKG_NAME="ros_ai_assistant"

echo "Creating package structure: ${PKG_NAME}"

mkdir -p ${PKG_NAME}
cd ${PKG_NAME}

touch CMakeLists.txt
touch package.xml

mkdir -p launch
touch launch/assistant.launch
touch launch/security.launch
touch launch/simulation.launch

mkdir -p config
touch config/security_params.yaml
touch config/communication_params.yaml
touch config/ai_model_params.yaml

mkdir -p scripts/ai_core_nodes
mkdir -p scripts/security_nodes
mkdir -p scripts/communication_nodes
mkdir -p scripts/integration_nodes

mkdir -p src/include
mkdir -p src/security_system
mkdir -p src/communication_system
mkdir -p src/ai_processor

mkdir -p msg
touch msg/SecurityAlert.msg
touch msg/UserCommand.msg
touch msg/AIResponse.msg
touch msg/SystemStatus.msg

mkdir -p srv
touch srv/WeaponControl.srv
touch srv/UserAuthentication.srv
touch srv/ContextSwitch.srv
touch srv/EmergencyShutdown.srv

mkdir -p test
touch test/test_security.py
touch test/test_communication.py
touch test/test_integration.py

echo "Done. Package skeleton ${PKG_NAME} created."

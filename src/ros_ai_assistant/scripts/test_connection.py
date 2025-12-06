#!/usr/bin/env python3
import rospy
from ros_ai_assistant.srv import OpenAIRequest

def test_openai_connection():
    rospy.wait_for_service('/ai_assistant/openai_request')
    try:
        openai_proxy = rospy.ServiceProxy('/ai_assistant/openai_request', OpenAIRequest)
        response = openai_proxy("Test message", "test", "gpt-4")
        print(f"Response: {response.response}")
        print(f"Success: {response.success}")
    except rospy.ServiceException as e:
        print(f"Service call failed: {e}")

if __name__ == '__main__':
    test_openai_connection()


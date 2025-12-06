#!/usr/bin/env python3
import rospy
import threading
from flask import Flask, request, jsonify
from flask_restful import Api, Resource
import subprocess
import os

class APIGateway:
    def __init__(self):
        self.app = Flask(__name__)
        self.api = Api(self.app)
        self.setup_routes()
        
    def setup_routes(self):
        # Security endpoints
        self.api.add_resource(SecurityAPI, '/api/v1/security-system/<string:endpoint>')
        self.api.add_resource(CommunicationAPI, '/api/v1/communication/<string:endpoint>')
        
    def run(self):
        port = rospy.get_param('~api_port', 5000)
        self.app.run(host='0.0.0.0', port=port, debug=False, threaded=True)

class SecurityAPI(Resource):
    def post(self, endpoint):
        try:
            data = request.get_json()
            rospy.loginfo(f"Security API call: {endpoint}")
            
            # Здесь будет интеграция с ROS сервисами
            return {"status": "success", "endpoint": endpoint, "data": data}
        except Exception as e:
            return {"error": str(e)}, 500

class CommunicationAPI(Resource):
    def post(self, endpoint):
        try:
            data = request.get_json()
            rospy.loginfo(f"Communication API call: {endpoint}")
            
            # Здесь будет интеграция с ROS сервисами
            return {"status": "success", "endpoint": endpoint, "data": data}
        except Exception as e:
            return {"error": str(e)}, 500

def main():
    rospy.init_node('api_gateway', anonymous=True)
    gateway = APIGateway()
    
    # Запуск Flask в отдельном потоке
    flask_thread = threading.Thread(target=gateway.run)
    flask_thread.daemon = True
    flask_thread.start()
    
    rospy.loginfo("API Gateway started")
    rospy.spin()

if __name__ == '__main__':
    main()


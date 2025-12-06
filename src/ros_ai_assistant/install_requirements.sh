#!/bin/bash
echo "Installing Python dependencies..."
pip3 install aiohttp asyncio flask flask-restful pyyaml rospkg

echo "Setting up environment..."
export OPENAI_API_KEY="your_openai_api_key_here"
echo "export OPENAI_API_KEY=$OPENAI_API_KEY" >> ~/.bashrc

echo "Installation complete!"


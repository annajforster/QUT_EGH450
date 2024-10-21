# QUT EGH450 Drone Automation Project

This repository contains the resources and code for Group 2's **Drone Automation Project** for the QUT EGB349 and EGH450 Systems Engineering course. The focus is on creating automated systems for drones using ROS.

## Contents
- **src/**: Core source code for drone automation and control.
- **launch/**: ROS launch files to initialize simulations.
- **CMakeLists.txt**: Build configuration for the project.

## Requirements
- **Operating System**: Ubuntu 20.04 or later (recommended for ROS Noetic compatibility)
- **ROS Noetic**: Installed and configured for robotics middleware
- **Python 3.x**: Required for Python-based ROS nodes
- **CMake**: For building and managing the project
- **MAVROS**: To communicate with the drone’s autopilot
- **OpenCV**: For image processing tasks (e.g., vision-based navigation)

Install dependencies using the following commands:

```bash
sudo apt update
sudo apt install ros-noetic-desktop-full python3-opencv python3-pip cmake
pip3 install mavros
```

## How to Run - only for new Pi's
1. **Clone the repository**:
   ```bash
   git clone https://github.com/annajforster/QUT_EGH450.git
   cd QUT_EGH450
   ```
2. **Setup the ROS workspace**:
   ```bash
   catkin_make
   source devel/setup.bash
   ```

## Setting up SSH for VSCode:
If you are using VSCode to SSH into the Pi when it's active, you require a local SSH file to be added to the Pi so you can use your workspace to commit any changes made. 
These are the steps for this:

**Step 1: Generate SSH Key Pair**
Where: Your Local Machine (VSCode)
If you don’t already have an SSH key pair on your local machine, generate one:
bash
ssh-keygen -t ed25519 -C "yourname"

This command creates a public (id_ssh.pub) and private key (id_ssh) on your local machine.

**Step 2: Copy the Public Key to the Ubuntu Machine**
Do this manually as the Pi IP address regularly changes. 
Go to uavteam2 folder
press Ctrl+H to show .ssh folder
add your .pub and .txt files to the folder 

Please note: the group SSH key is under my username 'annajforster', do not remove this from the folder.

** Step 3. Configure VSCode for Remote SSH **
Where: Your Local Machine (VSCode)
Open the command palette in VSCode and select Remote-SSH: Connect to Host....

Host your-ubuntu-machine
    HostName <your-ubuntu-ip>
    User <your-username>
    IdentityFile ~/.ssh/your_ssh_filename

This tells VSCode how to connect to your Ubuntu machine via SSH.

Any problems, try and troubleshoot using Git and GPT as most instructions are pretty accurate.

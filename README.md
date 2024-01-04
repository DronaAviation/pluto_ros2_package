
# ROS2 Pluto

In this tutorial we understand how to control Pluto using ROS2. 
Caution: Please pay attention to the version of software. The dependencies change heavily. 


## Installation

1. Install ROS2 Foxy & setup the environment 


https://docs.ros.org/en/foxy/Installation/Alternatives/Ubuntu-Development-Setup.html

Install Ubuntu 20.04 or greater version

2. Make a new directory for your workspace:

```bash
  mkdir -p ~/ros2_ws/src
  cd ~/ros2_ws/src
```

3. Install git
```bash
    sudo apt-get install git
```
4. Install the Pluto package [Pluto ROS2 Package](https://github.com/DronaAviation/pluto_ros2_package.git)

  - Navigate to your src folder of your workspace using

        cd ~/ros2_ws/src
        

  - Clone the pluto package


        git clone https://github.com/DronaAviation/pluto-ros-package
          
- Build the package

        colcon build
          
- Source your new workspace also into the bashrc file using the following command

        echo "source ~/ros2_ws/install/setup.bash" >> ~/.bashrc
5. Test run the pluto package

    Open three terminals
    
    Make sure ros2 is enabled on every terminal

    Also make sure that Pluto Drone(without the camera) is on and your laptop is connected to the wifi 

    - On first terminal run :

            ros2 run plutodrone plutonode
        This should show a message "Pluto Connected"
    
    - On the second terminal start the node which enables the PlutoService :

            ros2 run plutoserver plutoserver

    - On the third terminal, we will attempt to provide input for control of the drone using keyboard
	```
	    ros2 launch plutoserver drone_comb.launch.py 
For the list of keyboard commands use the section 4.2 of the [ROS wiki tutorial](http://wiki.ros.org/pluto_drone#Keyboard)


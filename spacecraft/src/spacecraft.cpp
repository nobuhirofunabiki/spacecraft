#include <ros/ros.h>
#include <spacecraft/Spacecraft.h>

int main(int argc, char** argv)
{
    ros::init(argc, argv, "spacecraft_node");
    ros::NodeHandle nh;

    Spacecraft sc1;
    if (!sc1.Initialize(nh)) {
        ROS_ERROR("Failed to initialize spacecraft instance.");
        return EXIT_FAILURE;
    }

    ros::spin();

    return EXIT_SUCCESS;
}
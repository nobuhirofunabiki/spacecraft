#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <ros/ros.h>
#include <std_msgs/String.h>
// #include <Eigen/Core>


class Spacecraft
{
public:
    Spacecraft();
    ~Spacecraft();

    bool Initialize(const ros::NodeHandle& n);
    bool RegisterCallbacks(const ros::NodeHandle& n);

private:
    // Eigen::Vector3d sc_position_;
    // Eigen::Vector3d sc_velocity_;
    // Eigen::Vector4d sc_attitude_;
    // Eigen::Vector3d sc_angvel_;
    std_msgs::String sc_position_;

    ros::Publisher sc_position_pub_;
    // ros::Publisher sc_velocity_pub_;

    std::string name_;
};

#endif
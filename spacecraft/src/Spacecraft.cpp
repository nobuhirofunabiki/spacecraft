#include "spacecraft/Spacecraft.h"

Spacecraft::Spacecraft()
{
    // sc_position_ << 0, 0, 0;
    sc_position_.data = "hoge";
}

Spacecraft::~Spacecraft() {}

bool Spacecraft::Initialize(const ros::NodeHandle& n) {
    name_ = ros::names::append(n.getNamespace(), "Spacecraft");

    if(!RegisterCallbacks(n)) {
        ROS_ERROR("%s: Failed to register callbacks.", name_.c_str());
        return false;
    }
    
    return true;
}

bool Spacecraft::RegisterCallbacks(const ros::NodeHandle& n) {
    ros::NodeHandle nl(n);

    // sc_position_pub_ = nl.advertise<Eigen::Vector3d>("spacecraft_position", 10);
    sc_position_pub_ = nl.advertise<std_msgs::String>("spacecraft_position", 10);

    return true;
}
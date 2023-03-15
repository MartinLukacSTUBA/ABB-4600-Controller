#ifndef FORWARD_KINEMATICS_H
#define FORWARD_KINEMATICS_H

#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <sensor_msgs/JointState.h>
#include <ros/callback_queue.h>
#include <iostream>
#include <tf/transform_datatypes.h>
#include <visualization_msgs/Marker.h>
#include <std_srvs/Trigger.h>
#include "rrm_cv3_lukac/transform_matrix.h"

class ForwardKinematics {
public:
    ForwardKinematics();

    // tf broadcaster
    void broadcastTf();

    // Callbacks
    void jointCallback(const sensor_msgs::JointState::ConstPtr& msg);
    bool createWorkspace(std_srvs::Trigger::Request  &req, std_srvs::Trigger::Response &res);

private:

    // Const
    const double L1 = 0.203;
    const double L2 = 0.178;

    // ROS communication tools
    ros::Publisher marker_pub_;
    ros::Subscriber joint_sub_;
    ros::ServiceServer create_workspace_service_;

    // Tf broadcaster
    tf::TransformBroadcaster broadcaster_;

    // joint states
    sensor_msgs::JointState joint_state_;

    // current position of link2 and end efector
    tf::Vector3 position_;
    tf::Quaternion orientation_;
};

#endif //FORWARD_KINEMATICS_H

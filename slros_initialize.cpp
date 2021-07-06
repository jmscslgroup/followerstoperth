#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "followerstoperth";

// For Block followerstoperth/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_followerstoperth_std_msgs_Float64> Sub_followerstoperth_237;

// For Block followerstoperth/Subscribe2
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstoperth_geometry_msgs_Twist> Sub_followerstoperth_207;

// For Block followerstoperth/Subscribe3
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstoperth_geometry_msgs_Twist> Sub_followerstoperth_41;

// For Block followerstoperth/Follower Stopper Switch Control/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_followerstoperth_std_msgs_Float64> Pub_followerstoperth_234;

// For Block followerstoperth/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_followerstoperth_geometry_msgs_Twist> Pub_followerstoperth_37;

// For Block followerstoperth/Publish Region/Publish1
SimulinkPublisher<std_msgs::UInt8, SL_Bus_followerstoperth_std_msgs_UInt8> Pub_followerstoperth_165;

// For Block followerstoperth/Follower Stopper Switch Control/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoperth_228;

// For Block followerstoperth/Follower Stopper Switch Control/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoperth_226;

// For Block followerstoperth/Follower Stopper Switch Control/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoperth_230;

// For Block followerstoperth/Follower Stopper Switch Control/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoperth_235;

// For Block followerstoperth/Follower Stopper Switch Control/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoperth_240;

// For Block followerstoperth/Follower Stopper Switch Control/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoperth_242;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


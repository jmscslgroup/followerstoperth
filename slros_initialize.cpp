#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "followerstopperth";

// For Block followerstopperth/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_followerstopperth_std_msgs_Float64> Sub_followerstopperth_237;

// For Block followerstopperth/Subscribe2
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstopperth_geometry_msgs_Twist> Sub_followerstopperth_207;

// For Block followerstopperth/Subscribe3
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstopperth_geometry_msgs_Twist> Sub_followerstopperth_41;

// For Block followerstopperth/Follower Stopper Switch Control/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_followerstopperth_std_msgs_Float64> Pub_followerstopperth_234;

// For Block followerstopperth/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_followerstopperth_geometry_msgs_Twist> Pub_followerstopperth_37;

// For Block followerstopperth/Publish Region/Publish1
SimulinkPublisher<std_msgs::UInt8, SL_Bus_followerstopperth_std_msgs_UInt8> Pub_followerstopperth_165;

// For Block followerstopperth/Follower Stopper Switch Control/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_followerstopperth_228;

// For Block followerstopperth/Follower Stopper Switch Control/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_followerstopperth_226;

// For Block followerstopperth/Follower Stopper Switch Control/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_followerstopperth_230;

// For Block followerstopperth/Follower Stopper Switch Control/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_followerstopperth_235;

// For Block followerstopperth/Follower Stopper Switch Control/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_followerstopperth_240;

// For Block followerstopperth/Follower Stopper Switch Control/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_followerstopperth_242;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}


#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block followerstoperth/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_followerstoperth_std_msgs_Float64> Sub_followerstoperth_237;

// For Block followerstoperth/Subscribe2
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstoperth_geometry_msgs_Twist> Sub_followerstoperth_207;

// For Block followerstoperth/Subscribe3
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstoperth_geometry_msgs_Twist> Sub_followerstoperth_41;

// For Block followerstoperth/Follower Stopper Switch Control/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_followerstoperth_std_msgs_Float64> Pub_followerstoperth_234;

// For Block followerstoperth/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_followerstoperth_geometry_msgs_Twist> Pub_followerstoperth_37;

// For Block followerstoperth/Publish Region/Publish1
extern SimulinkPublisher<std_msgs::UInt8, SL_Bus_followerstoperth_std_msgs_UInt8> Pub_followerstoperth_165;

// For Block followerstoperth/Follower Stopper Switch Control/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_followerstoperth_228;

// For Block followerstoperth/Follower Stopper Switch Control/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_followerstoperth_226;

// For Block followerstoperth/Follower Stopper Switch Control/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_followerstoperth_230;

// For Block followerstoperth/Follower Stopper Switch Control/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_followerstoperth_235;

void slros_node_init(int argc, char** argv);

#endif

//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: followerstopperth.h
//
// Code generated for Simulink model 'followerstopperth'.
//
// Model version                  : 3.53
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Sun Jul 11 13:25:16 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_followerstopperth_h_
#define RTW_HEADER_followerstopperth_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "followerstopperth_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_followerstopperth_T {
  SL_Bus_followerstopperth_geometry_msgs_Twist In1;// '<S15>/In1'
  SL_Bus_followerstopperth_geometry_msgs_Twist In1_b;// '<S14>/In1'
  SL_Bus_followerstopperth_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment' 
  real_T x1;
  real_T x2;
  real_T x3;
  SL_Bus_followerstopperth_std_msgs_Float64 In1_m;// '<S13>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_followerstopperth_T {
  ros_slros_internal_block_GetP_T obj; // '<S2>/Get Parameter6'
  ros_slros_internal_block_GetP_T obj_c;// '<S2>/Get Parameter5'
  ros_slros_internal_block_GetP_T obj_b;// '<S2>/Get Parameter4'
  ros_slros_internal_block_GetP_T obj_n;// '<S2>/Get Parameter3'
  ros_slros_internal_block_GetP_T obj_k;// '<S2>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_ci;// '<S2>/Get Parameter1'
  ros_slroscpp_internal_block_P_T obj_d;// '<S12>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_o;// '<S3>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_kl;// '<S10>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_l;// '<S7>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_f;// '<S6>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_bg;// '<S5>/SourceBlock'
};

// Parameters (default storage)
struct P_followerstopperth_T_ {
  SL_Bus_followerstopperth_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                                 //  Referenced by: '<S1>/Constant'

  SL_Bus_followerstopperth_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                          //  Referenced by: '<S14>/Out1'

  SL_Bus_followerstopperth_geometry_msgs_Twist Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                   //  Referenced by: '<S6>/Constant'

  SL_Bus_followerstopperth_geometry_msgs_Twist Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                            //  Referenced by: '<S15>/Out1'

  SL_Bus_followerstopperth_geometry_msgs_Twist Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                   //  Referenced by: '<S7>/Constant'

  SL_Bus_followerstopperth_std_msgs_Float64 Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                                //  Referenced by: '<S8>/Constant'

  SL_Bus_followerstopperth_std_msgs_Float64 Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                         //  Referenced by: '<S13>/Out1'

  SL_Bus_followerstopperth_std_msgs_Float64 Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                //  Referenced by: '<S5>/Constant'

  SL_Bus_followerstopperth_std_msgs_UInt8 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                              //  Referenced by: '<S11>/Constant'

  real_T Constant_Value_b;             // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_followerstopperth_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_followerstopperth_T followerstopperth_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_followerstopperth_T followerstopperth_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_followerstopperth_T followerstopperth_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void followerstopperth_initialize(void);
  extern void followerstopperth_step(void);
  extern void followerstopperth_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_followerstopperth_T *const followerstopperth_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'followerstopperth'
//  '<S1>'   : 'followerstopperth/Blank Message'
//  '<S2>'   : 'followerstopperth/Follower Stopper Switch Control'
//  '<S3>'   : 'followerstopperth/Publish'
//  '<S4>'   : 'followerstopperth/Publish Region'
//  '<S5>'   : 'followerstopperth/Subscribe'
//  '<S6>'   : 'followerstopperth/Subscribe2'
//  '<S7>'   : 'followerstopperth/Subscribe3'
//  '<S8>'   : 'followerstopperth/Follower Stopper Switch Control/Blank Message1'
//  '<S9>'   : 'followerstopperth/Follower Stopper Switch Control/MATLAB Function1'
//  '<S10>'  : 'followerstopperth/Follower Stopper Switch Control/Publish1'
//  '<S11>'  : 'followerstopperth/Publish Region/Blank Message1'
//  '<S12>'  : 'followerstopperth/Publish Region/Publish1'
//  '<S13>'  : 'followerstopperth/Subscribe/Enabled Subsystem'
//  '<S14>'  : 'followerstopperth/Subscribe2/Enabled Subsystem'
//  '<S15>'  : 'followerstopperth/Subscribe3/Enabled Subsystem'

#endif                                 // RTW_HEADER_followerstopperth_h_

//
// File trailer for generated code.
//
// [EOF]
//

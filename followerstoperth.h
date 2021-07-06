//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: followerstoperth.h
//
// Code generated for Simulink model 'followerstoperth'.
//
// Model version                  : 3.42
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Tue Jul  6 01:19:05 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_followerstoperth_h_
#define RTW_HEADER_followerstoperth_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "followerstoperth_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_followerstoperth_T {
  SL_Bus_followerstoperth_geometry_msgs_Twist In1;// '<S15>/In1'
  SL_Bus_followerstoperth_geometry_msgs_Twist In1_b;// '<S14>/In1'
  SL_Bus_followerstoperth_geometry_msgs_Twist BusAssignment;// '<Root>/Bus Assignment' 
  real_T x1;
  real_T x2;
  real_T x3;
  SL_Bus_followerstoperth_std_msgs_Float64 In1_m;// '<S13>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_followerstoperth_T {
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
struct P_followerstoperth_T_ {
  SL_Bus_followerstoperth_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                                //  Referenced by: '<S1>/Constant'

  SL_Bus_followerstoperth_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                         //  Referenced by: '<S14>/Out1'

  SL_Bus_followerstoperth_geometry_msgs_Twist Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                  //  Referenced by: '<S6>/Constant'

  SL_Bus_followerstoperth_geometry_msgs_Twist Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                           //  Referenced by: '<S15>/Out1'

  SL_Bus_followerstoperth_geometry_msgs_Twist Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                  //  Referenced by: '<S7>/Constant'

  SL_Bus_followerstoperth_std_msgs_Float64 Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                               //  Referenced by: '<S8>/Constant'

  SL_Bus_followerstoperth_std_msgs_Float64 Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                        //  Referenced by: '<S13>/Out1'

  SL_Bus_followerstoperth_std_msgs_Float64 Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                               //  Referenced by: '<S5>/Constant'

  SL_Bus_followerstoperth_std_msgs_UInt8 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                             //  Referenced by: '<S11>/Constant'

  real_T Constant_Value_b;             // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_followerstoperth_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_followerstoperth_T followerstoperth_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_followerstoperth_T followerstoperth_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_followerstoperth_T followerstoperth_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void followerstoperth_initialize(void);
  extern void followerstoperth_step(void);
  extern void followerstoperth_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_followerstoperth_T *const followerstoperth_M;

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
//  '<Root>' : 'followerstoperth'
//  '<S1>'   : 'followerstoperth/Blank Message'
//  '<S2>'   : 'followerstoperth/Follower Stopper Switch Control'
//  '<S3>'   : 'followerstoperth/Publish'
//  '<S4>'   : 'followerstoperth/Publish Region'
//  '<S5>'   : 'followerstoperth/Subscribe'
//  '<S6>'   : 'followerstoperth/Subscribe2'
//  '<S7>'   : 'followerstoperth/Subscribe3'
//  '<S8>'   : 'followerstoperth/Follower Stopper Switch Control/Blank Message1'
//  '<S9>'   : 'followerstoperth/Follower Stopper Switch Control/MATLAB Function1'
//  '<S10>'  : 'followerstoperth/Follower Stopper Switch Control/Publish1'
//  '<S11>'  : 'followerstoperth/Publish Region/Blank Message1'
//  '<S12>'  : 'followerstoperth/Publish Region/Publish1'
//  '<S13>'  : 'followerstoperth/Subscribe/Enabled Subsystem'
//  '<S14>'  : 'followerstoperth/Subscribe2/Enabled Subsystem'
//  '<S15>'  : 'followerstoperth/Subscribe3/Enabled Subsystem'

#endif                                 // RTW_HEADER_followerstoperth_h_

//
// File trailer for generated code.
//
// [EOF]
//

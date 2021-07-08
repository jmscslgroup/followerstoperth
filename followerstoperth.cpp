//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: followerstoperth.cpp
//
// Code generated for Simulink model 'followerstoperth'.
//
// Model version                  : 3.50
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Wed Jul  7 19:44:06 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "followerstoperth.h"
#include "followerstoperth_private.h"

// Block signals (default storage)
B_followerstoperth_T followerstoperth_B;

// Block states (default storage)
DW_followerstoperth_T followerstoperth_DW;

// Real-time model
RT_MODEL_followerstoperth_T followerstoperth_M_ = RT_MODEL_followerstoperth_T();
RT_MODEL_followerstoperth_T *const followerstoperth_M = &followerstoperth_M_;

// Model step function
void followerstoperth_step(void)
{
  SL_Bus_followerstoperth_std_msgs_Float64 b_varargout_2;
  SL_Bus_followerstoperth_std_msgs_Float64 rtb_BusAssignment1_b;
  SL_Bus_followerstoperth_std_msgs_Float64 rtb_BusAssignment1_d;
  SL_Bus_followerstoperth_std_msgs_UInt8 rtb_BusAssignment1;
  real_T b_idx_0;
  real_T rtb_Subtract;
  real_T rtb_Subtract1;
  real_T value;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S17>/In1'

  b_varargout_1 = Sub_followerstoperth_207.getLatestMessage
    (&followerstoperth_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S17>/Enable'

  if (b_varargout_1) {
    followerstoperth_B.In1_b = followerstoperth_B.BusAssignment;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe3'
  // MATLABSystem: '<S8>/SourceBlock' incorporates:
  //   Inport: '<S18>/In1'

  b_varargout_1 = Sub_followerstoperth_41.getLatestMessage
    (&followerstoperth_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S8>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S18>/Enable'

  if (b_varargout_1) {
    followerstoperth_B.In1 = followerstoperth_B.BusAssignment;
  }

  // End of MATLABSystem: '<S8>/SourceBlock'
  // End of Outputs for SubSystem: '<S8>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe3'

  // Sum: '<Root>/Subtract'
  rtb_Subtract = followerstoperth_B.In1_b.Linear.Z +
    followerstoperth_B.In1.Linear.X;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S16>/In1'

  b_varargout_1 = Sub_followerstoperth_237.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S16>/Enable'

  if (b_varargout_1) {
    followerstoperth_B.In1_m = b_varargout_2;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLABSystem: '<Root>/Get Parameter'
  ParamGet_followerstoperth_244.get_parameter(&followerstoperth_B.value);

  // Sum: '<Root>/Subtract1' incorporates:
  //   MATLABSystem: '<Root>/Get Parameter'

  rtb_Subtract1 = followerstoperth_B.In1_m.Data - followerstoperth_B.value;

  // MATLABSystem: '<S2>/Get Parameter2'
  ParamGet_followerstoperth_226.get_parameter(&followerstoperth_B.value);

  // MATLABSystem: '<S2>/Get Parameter1'
  ParamGet_followerstoperth_228.get_parameter(&followerstoperth_B.x2);

  // MATLABSystem: '<S2>/Get Parameter3'
  ParamGet_followerstoperth_230.get_parameter(&followerstoperth_B.x3);

  // MATLABSystem: '<S2>/Get Parameter4'
  ParamGet_followerstoperth_235.get_parameter(&followerstoperth_B.x1);

  // MATLABSystem: '<S2>/Get Parameter5'
  ParamGet_followerstoperth_240.get_parameter(&followerstoperth_B.value_m);

  // MATLABSystem: '<S2>/Get Parameter6'
  ParamGet_followerstoperth_242.get_parameter(&value);

  // MATLAB Function: '<S2>/MATLAB Function1' incorporates:
  //   MATLABSystem: '<S2>/Get Parameter1'
  //   MATLABSystem: '<S2>/Get Parameter2'
  //   MATLABSystem: '<S2>/Get Parameter3'
  //   MATLABSystem: '<S2>/Get Parameter4'
  //   MATLABSystem: '<S2>/Get Parameter5'
  //   MATLABSystem: '<S2>/Get Parameter6'

  b_idx_0 = followerstoperth_B.In1_b.Linear.Z;
  if (followerstoperth_B.In1_b.Linear.Z >= 0.0) {
    b_idx_0 = 0.0;
  }

  b_idx_0 = b_idx_0 * b_idx_0 * 0.5;
  followerstoperth_B.x1 = (b_idx_0 / 1.5 + followerstoperth_B.x1) +
    followerstoperth_B.value * followerstoperth_B.In1.Linear.X;
  followerstoperth_B.x2 = (b_idx_0 + followerstoperth_B.value_m) +
    followerstoperth_B.x2 * followerstoperth_B.In1.Linear.X;
  followerstoperth_B.x3 = (b_idx_0 / 0.5 + value) + followerstoperth_B.x3 *
    followerstoperth_B.In1.Linear.X;
  value = rtb_Subtract;
  if (rtb_Subtract < 0.0) {
    value = 0.0;
  }

  followerstoperth_B.value_m = 0.0;
  if (rtb_Subtract1 > followerstoperth_B.x3) {
    followerstoperth_B.value_m = rtb_Subtract;
  }

  if ((rtb_Subtract1 > followerstoperth_B.x2) && (rtb_Subtract1 <=
       followerstoperth_B.x3)) {
    followerstoperth_B.value_m = (rtb_Subtract - value) * (rtb_Subtract1 -
      followerstoperth_B.x2) / (followerstoperth_B.x3 - followerstoperth_B.x2) +
      value;
  }

  if ((rtb_Subtract1 > followerstoperth_B.x1) && (rtb_Subtract1 <=
       followerstoperth_B.x2)) {
    followerstoperth_B.value_m = (rtb_Subtract1 - followerstoperth_B.x1) * value
      / (followerstoperth_B.x2 - followerstoperth_B.x1);
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<S1>/Constant'
  //   MATLAB Function: '<S2>/MATLAB Function1'

  followerstoperth_B.BusAssignment = followerstoperth_P.Constant_Value;
  followerstoperth_B.BusAssignment.Linear.X = followerstoperth_B.value_m;
  followerstoperth_B.BusAssignment.Angular.Z =
    followerstoperth_P.Constant_Value_be;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_followerstoperth_37.publish(&followerstoperth_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // MATLAB Function: '<S2>/MATLAB Function1'
  if (rtb_Subtract1 > followerstoperth_B.x3) {
    // BusAssignment: '<S5>/Bus Assignment1'
    rtb_BusAssignment1.Data = 0U;
  } else if ((rtb_Subtract1 > followerstoperth_B.x2) && (rtb_Subtract1 <=
              followerstoperth_B.x3)) {
    // BusAssignment: '<S5>/Bus Assignment1'
    rtb_BusAssignment1.Data = 1U;
  } else if ((rtb_Subtract1 > followerstoperth_B.x1) && (rtb_Subtract1 <=
              followerstoperth_B.x2)) {
    // BusAssignment: '<S5>/Bus Assignment1'
    rtb_BusAssignment1.Data = 2U;
  } else {
    // BusAssignment: '<S5>/Bus Assignment1'
    rtb_BusAssignment1.Data = 3U;
  }

  // Outputs for Atomic SubSystem: '<S5>/Publish1'
  // MATLABSystem: '<S15>/SinkBlock'
  Pub_followerstoperth_165.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<S5>/Publish1'

  // BusAssignment: '<S2>/Bus Assignment1' incorporates:
  //   MATLABSystem: '<S2>/Get Parameter2'

  rtb_BusAssignment1_d.Data = followerstoperth_B.value;

  // Outputs for Atomic SubSystem: '<S2>/Publish1'
  // MATLABSystem: '<S11>/SinkBlock'
  Pub_followerstoperth_234.publish(&rtb_BusAssignment1_d);

  // End of Outputs for SubSystem: '<S2>/Publish1'

  // BusAssignment: '<S4>/Bus Assignment1'
  rtb_BusAssignment1_b.Data = rtb_Subtract1;

  // Outputs for Atomic SubSystem: '<S4>/Publish1'
  // MATLABSystem: '<S13>/SinkBlock'
  Pub_followerstoperth_251.publish(&rtb_BusAssignment1_b);

  // End of Outputs for SubSystem: '<S4>/Publish1'
}

// Model initialize function
void followerstoperth_initialize(void)
{
  {
    int32_T i;
    char_T b_zeroDelimTopic_3[12];
    char_T b_zeroDelimTopic_1[10];
    char_T b_zeroDelimTopic[8];
    char_T b_zeroDelimTopic_2[7];
    char_T b_zeroDelimTopic_0[4];
    char_T b_zeroDelimName[3];
    static const char_T tmp[7] = { 'r', 'e', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_0[9] = { 'l', 'e', 'a', 'd', '_', 'd', 'i', 's', 't'
    };

    static const char_T tmp_1[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_2[6] = { 'r', 'e', 'g', 'i', 'o', 'n' };

    static const char_T tmp_3[11] = { 't', 'i', 'm', 'h', 'e', 'a', 'd', 'w',
      'a', 'y', '1' };

    static const char_T tmp_4[17] = { 'e', 'f', 'f', 'e', 'c', 't', 'i', 'v',
      'e', '_', 'h', 'e', 'a', 'd', 'w', 'a', 'y' };

    static const char_T tmp_5[6] = { 'm', 'a', 'r', 'g', 'i', 'n' };

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S17>/Out1' incorporates:
    //   Inport: '<S17>/In1'

    followerstoperth_B.In1_b = followerstoperth_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    followerstoperth_DW.obj_f.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Sub_followerstoperth_207.createSubscriber(&b_zeroDelimTopic[0], 1);
    followerstoperth_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3'
    // SystemInitialize for Enabled SubSystem: '<S8>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S18>/Out1' incorporates:
    //   Inport: '<S18>/In1'

    followerstoperth_B.In1 = followerstoperth_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S8>/Enabled Subsystem'

    // Start for MATLABSystem: '<S8>/SourceBlock'
    followerstoperth_DW.obj_l.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_l.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 'v';
    b_zeroDelimTopic_0[1] = 'e';
    b_zeroDelimTopic_0[2] = 'l';
    b_zeroDelimTopic_0[3] = '\x00';
    Sub_followerstoperth_41.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    followerstoperth_DW.obj_l.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Subscribe3'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S16>/Out1' incorporates:
    //   Inport: '<S16>/In1'

    followerstoperth_B.In1_m = followerstoperth_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    followerstoperth_DW.obj_bg.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_bg.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_1[i] = tmp_0[i];
    }

    b_zeroDelimTopic_1[9] = '\x00';
    Sub_followerstoperth_237.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    followerstoperth_DW.obj_bg.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    followerstoperth_DW.obj_o.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp_1[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Pub_followerstoperth_37.createPublisher(&b_zeroDelimTopic[0], 1);
    followerstoperth_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<S5>/Publish1'
    // Start for MATLABSystem: '<S15>/SinkBlock'
    followerstoperth_DW.obj_d.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic_2[i] = tmp_2[i];
    }

    b_zeroDelimTopic_2[6] = '\x00';
    Pub_followerstoperth_165.createPublisher(&b_zeroDelimTopic_2[0], 1);
    followerstoperth_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S15>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S5>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<S2>/Publish1'
    // Start for MATLABSystem: '<S11>/SinkBlock'
    followerstoperth_DW.obj_kl.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_kl.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_3[i] = tmp_3[i];
    }

    b_zeroDelimTopic_3[11] = '\x00';
    Pub_followerstoperth_234.createPublisher(&b_zeroDelimTopic_3[0], 1);
    followerstoperth_DW.obj_kl.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S2>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<S4>/Publish1'
    // Start for MATLABSystem: '<S13>/SinkBlock'
    followerstoperth_DW.obj_dr.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_dr.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      followerstoperth_B.b_zeroDelimTopic[i] = tmp_4[i];
    }

    followerstoperth_B.b_zeroDelimTopic[17] = '\x00';
    Pub_followerstoperth_251.createPublisher
      (&followerstoperth_B.b_zeroDelimTopic[0], 1);
    followerstoperth_DW.obj_dr.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S13>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Publish1'

    // Start for MATLABSystem: '<Root>/Get Parameter'
    followerstoperth_DW.obj.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic_2[i] = tmp_5[i];
    }

    b_zeroDelimTopic_2[6] = '\x00';
    ParamGet_followerstoperth_244.initialize(&b_zeroDelimTopic_2[0]);
    ParamGet_followerstoperth_244.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoperth_244.set_initial_value(30.0);
    followerstoperth_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter'

    // Start for MATLABSystem: '<S2>/Get Parameter2'
    followerstoperth_DW.obj_k.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_k.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '1';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstoperth_226.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstoperth_226.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoperth_226.set_initial_value(0.4);
    followerstoperth_DW.obj_k.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter1'
    followerstoperth_DW.obj_ci.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_ci.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '2';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstoperth_228.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstoperth_228.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoperth_228.set_initial_value(1.2);
    followerstoperth_DW.obj_ci.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter3'
    followerstoperth_DW.obj_n.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_n.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '3';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstoperth_230.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstoperth_230.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoperth_230.set_initial_value(1.8);
    followerstoperth_DW.obj_n.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter4'
    followerstoperth_DW.obj_b.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_b.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '1';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstoperth_235.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstoperth_235.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoperth_235.set_initial_value(4.5);
    followerstoperth_DW.obj_b.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter5'
    followerstoperth_DW.obj_c.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_c.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '2';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstoperth_240.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstoperth_240.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoperth_240.set_initial_value(5.25);
    followerstoperth_DW.obj_c.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter6'
    followerstoperth_DW.obj_g.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_g.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '3';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstoperth_242.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstoperth_242.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoperth_242.set_initial_value(6.0);
    followerstoperth_DW.obj_g.isSetupComplete = true;
  }
}

// Model terminate function
void followerstoperth_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!followerstoperth_DW.obj_f.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe3'
  // Terminate for MATLABSystem: '<S8>/SourceBlock'
  if (!followerstoperth_DW.obj_l.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe3'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!followerstoperth_DW.obj_bg.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_bg.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for MATLABSystem: '<Root>/Get Parameter'
  if (!followerstoperth_DW.obj.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter'

  // Terminate for MATLABSystem: '<S2>/Get Parameter2'
  if (!followerstoperth_DW.obj_k.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter2'

  // Terminate for MATLABSystem: '<S2>/Get Parameter1'
  if (!followerstoperth_DW.obj_ci.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_ci.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter1'

  // Terminate for MATLABSystem: '<S2>/Get Parameter3'
  if (!followerstoperth_DW.obj_n.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter3'

  // Terminate for MATLABSystem: '<S2>/Get Parameter4'
  if (!followerstoperth_DW.obj_b.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter4'

  // Terminate for MATLABSystem: '<S2>/Get Parameter5'
  if (!followerstoperth_DW.obj_c.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter5'

  // Terminate for MATLABSystem: '<S2>/Get Parameter6'
  if (!followerstoperth_DW.obj_g.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter6'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  if (!followerstoperth_DW.obj_o.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<S5>/Publish1'
  // Terminate for MATLABSystem: '<S15>/SinkBlock'
  if (!followerstoperth_DW.obj_d.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S15>/SinkBlock'
  // End of Terminate for SubSystem: '<S5>/Publish1'

  // Terminate for Atomic SubSystem: '<S2>/Publish1'
  // Terminate for MATLABSystem: '<S11>/SinkBlock'
  if (!followerstoperth_DW.obj_kl.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_kl.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SinkBlock'
  // End of Terminate for SubSystem: '<S2>/Publish1'

  // Terminate for Atomic SubSystem: '<S4>/Publish1'
  // Terminate for MATLABSystem: '<S13>/SinkBlock'
  if (!followerstoperth_DW.obj_dr.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_dr.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SinkBlock'
  // End of Terminate for SubSystem: '<S4>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//

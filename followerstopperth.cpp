//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: followerstopperth.cpp
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
#include "followerstopperth.h"
#include "followerstopperth_private.h"

// Block signals (default storage)
B_followerstopperth_T followerstopperth_B;

// Block states (default storage)
DW_followerstopperth_T followerstopperth_DW;

// Real-time model
RT_MODEL_followerstopperth_T followerstopperth_M_ = RT_MODEL_followerstopperth_T
  ();
RT_MODEL_followerstopperth_T *const followerstopperth_M = &followerstopperth_M_;

// Model step function
void followerstopperth_step(void)
{
  SL_Bus_followerstopperth_std_msgs_Float64 b_varargout_2;
  SL_Bus_followerstopperth_std_msgs_Float64 rtb_BusAssignment1_d;
  SL_Bus_followerstopperth_std_msgs_UInt8 rtb_BusAssignment1;
  real_T b_idx_0;
  real_T rtb_Subtract;
  real_T value;
  real_T value_0;
  real_T value_1;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S14>/In1'

  b_varargout_1 = Sub_followerstopperth_207.getLatestMessage
    (&followerstopperth_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (b_varargout_1) {
    followerstopperth_B.In1_b = followerstopperth_B.BusAssignment;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe3'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S15>/In1'

  b_varargout_1 = Sub_followerstopperth_41.getLatestMessage
    (&followerstopperth_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  if (b_varargout_1) {
    followerstopperth_B.In1 = followerstopperth_B.BusAssignment;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe3'

  // Sum: '<Root>/Subtract'
  rtb_Subtract = followerstopperth_B.In1_b.Linear.Z +
    followerstopperth_B.In1.Linear.X;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Inport: '<S13>/In1'

  b_varargout_1 = Sub_followerstopperth_237.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (b_varargout_1) {
    followerstopperth_B.In1_m = b_varargout_2;
  }

  // End of MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLABSystem: '<S2>/Get Parameter2'
  ParamGet_followerstopperth_226.get_parameter(&value);

  // MATLABSystem: '<S2>/Get Parameter1'
  ParamGet_followerstopperth_228.get_parameter(&followerstopperth_B.x2);

  // MATLABSystem: '<S2>/Get Parameter3'
  ParamGet_followerstopperth_230.get_parameter(&followerstopperth_B.x3);

  // MATLABSystem: '<S2>/Get Parameter4'
  ParamGet_followerstopperth_235.get_parameter(&followerstopperth_B.x1);

  // MATLABSystem: '<S2>/Get Parameter5'
  ParamGet_followerstopperth_240.get_parameter(&value_0);

  // MATLABSystem: '<S2>/Get Parameter6'
  ParamGet_followerstopperth_242.get_parameter(&value_1);

  // MATLAB Function: '<S2>/MATLAB Function1' incorporates:
  //   MATLABSystem: '<S2>/Get Parameter1'
  //   MATLABSystem: '<S2>/Get Parameter2'
  //   MATLABSystem: '<S2>/Get Parameter3'
  //   MATLABSystem: '<S2>/Get Parameter4'
  //   MATLABSystem: '<S2>/Get Parameter5'
  //   MATLABSystem: '<S2>/Get Parameter6'

  b_idx_0 = followerstopperth_B.In1_b.Linear.Z;
  if (followerstopperth_B.In1_b.Linear.Z >= 0.0) {
    b_idx_0 = 0.0;
  }

  b_idx_0 = b_idx_0 * b_idx_0 * 0.5;
  followerstopperth_B.x1 = (b_idx_0 / 1.5 + followerstopperth_B.x1) + value *
    followerstopperth_B.In1.Linear.X;
  followerstopperth_B.x2 = (b_idx_0 + value_0) + followerstopperth_B.x2 *
    followerstopperth_B.In1.Linear.X;
  followerstopperth_B.x3 = (b_idx_0 / 0.5 + value_1) + followerstopperth_B.x3 *
    followerstopperth_B.In1.Linear.X;
  value_1 = rtb_Subtract;
  if (rtb_Subtract < 0.0) {
    value_1 = 0.0;
  }

  value_0 = 0.0;
  if (followerstopperth_B.In1_m.Data > followerstopperth_B.x3) {
    value_0 = rtb_Subtract;
  }

  if ((followerstopperth_B.In1_m.Data > followerstopperth_B.x2) &&
      (followerstopperth_B.In1_m.Data <= followerstopperth_B.x3)) {
    value_0 = (rtb_Subtract - value_1) * (followerstopperth_B.In1_m.Data -
      followerstopperth_B.x2) / (followerstopperth_B.x3 - followerstopperth_B.x2)
      + value_1;
  }

  if ((followerstopperth_B.In1_m.Data > followerstopperth_B.x1) &&
      (followerstopperth_B.In1_m.Data <= followerstopperth_B.x2)) {
    value_0 = (followerstopperth_B.In1_m.Data - followerstopperth_B.x1) *
      value_1 / (followerstopperth_B.x2 - followerstopperth_B.x1);
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<S1>/Constant'
  //   MATLAB Function: '<S2>/MATLAB Function1'

  followerstopperth_B.BusAssignment = followerstopperth_P.Constant_Value;
  followerstopperth_B.BusAssignment.Linear.X = value_0;
  followerstopperth_B.BusAssignment.Angular.Z =
    followerstopperth_P.Constant_Value_b;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_followerstopperth_37.publish(&followerstopperth_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // MATLAB Function: '<S2>/MATLAB Function1'
  if (followerstopperth_B.In1_m.Data > followerstopperth_B.x3) {
    // BusAssignment: '<S4>/Bus Assignment1'
    rtb_BusAssignment1.Data = 0U;
  } else if ((followerstopperth_B.In1_m.Data > followerstopperth_B.x2) &&
             (followerstopperth_B.In1_m.Data <= followerstopperth_B.x3)) {
    // BusAssignment: '<S4>/Bus Assignment1'
    rtb_BusAssignment1.Data = 1U;
  } else if ((followerstopperth_B.In1_m.Data > followerstopperth_B.x1) &&
             (followerstopperth_B.In1_m.Data <= followerstopperth_B.x2)) {
    // BusAssignment: '<S4>/Bus Assignment1'
    rtb_BusAssignment1.Data = 2U;
  } else {
    // BusAssignment: '<S4>/Bus Assignment1'
    rtb_BusAssignment1.Data = 3U;
  }

  // Outputs for Atomic SubSystem: '<S4>/Publish1'
  // MATLABSystem: '<S12>/SinkBlock'
  Pub_followerstopperth_165.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<S4>/Publish1'

  // BusAssignment: '<S2>/Bus Assignment1' incorporates:
  //   MATLABSystem: '<S2>/Get Parameter2'

  rtb_BusAssignment1_d.Data = value;

  // Outputs for Atomic SubSystem: '<S2>/Publish1'
  // MATLABSystem: '<S10>/SinkBlock'
  Pub_followerstopperth_234.publish(&rtb_BusAssignment1_d);

  // End of Outputs for SubSystem: '<S2>/Publish1'
}

// Model initialize function
void followerstopperth_initialize(void)
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

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S14>/Out1' incorporates:
    //   Inport: '<S14>/In1'

    followerstopperth_B.In1_b = followerstopperth_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    followerstopperth_DW.obj_f.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Sub_followerstopperth_207.createSubscriber(&b_zeroDelimTopic[0], 1);
    followerstopperth_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S15>/Out1' incorporates:
    //   Inport: '<S15>/In1'

    followerstopperth_B.In1 = followerstopperth_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
    followerstopperth_DW.obj_l.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_l.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 'v';
    b_zeroDelimTopic_0[1] = 'e';
    b_zeroDelimTopic_0[2] = 'l';
    b_zeroDelimTopic_0[3] = '\x00';
    Sub_followerstopperth_41.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    followerstopperth_DW.obj_l.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<Root>/Subscribe3'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S13>/Out1' incorporates:
    //   Inport: '<S13>/In1'

    followerstopperth_B.In1_m = followerstopperth_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'

    // Start for MATLABSystem: '<S5>/SourceBlock'
    followerstopperth_DW.obj_bg.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_bg.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_1[i] = tmp_0[i];
    }

    b_zeroDelimTopic_1[9] = '\x00';
    Sub_followerstopperth_237.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    followerstopperth_DW.obj_bg.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    followerstopperth_DW.obj_o.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp_1[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Pub_followerstopperth_37.createPublisher(&b_zeroDelimTopic[0], 1);
    followerstopperth_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<S4>/Publish1'
    // Start for MATLABSystem: '<S12>/SinkBlock'
    followerstopperth_DW.obj_d.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic_2[i] = tmp_2[i];
    }

    b_zeroDelimTopic_2[6] = '\x00';
    Pub_followerstopperth_165.createPublisher(&b_zeroDelimTopic_2[0], 1);
    followerstopperth_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<S2>/Publish1'
    // Start for MATLABSystem: '<S10>/SinkBlock'
    followerstopperth_DW.obj_kl.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_kl.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_3[i] = tmp_3[i];
    }

    b_zeroDelimTopic_3[11] = '\x00';
    Pub_followerstopperth_234.createPublisher(&b_zeroDelimTopic_3[0], 1);
    followerstopperth_DW.obj_kl.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S2>/Publish1'

    // Start for MATLABSystem: '<S2>/Get Parameter2'
    followerstopperth_DW.obj_k.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_k.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '1';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstopperth_226.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstopperth_226.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth_226.set_initial_value(0.4);
    followerstopperth_DW.obj_k.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter1'
    followerstopperth_DW.obj_ci.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_ci.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '2';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstopperth_228.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstopperth_228.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth_228.set_initial_value(1.2);
    followerstopperth_DW.obj_ci.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter3'
    followerstopperth_DW.obj_n.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_n.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '3';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstopperth_230.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstopperth_230.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth_230.set_initial_value(1.8);
    followerstopperth_DW.obj_n.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter4'
    followerstopperth_DW.obj_b.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_b.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '1';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstopperth_235.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstopperth_235.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth_235.set_initial_value(4.5);
    followerstopperth_DW.obj_b.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter5'
    followerstopperth_DW.obj_c.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj_c.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '2';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstopperth_240.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstopperth_240.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth_240.set_initial_value(5.25);
    followerstopperth_DW.obj_c.isSetupComplete = true;

    // Start for MATLABSystem: '<S2>/Get Parameter6'
    followerstopperth_DW.obj.matlabCodegenIsDeleted = false;
    followerstopperth_DW.obj.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '3';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstopperth_242.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstopperth_242.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstopperth_242.set_initial_value(6.0);
    followerstopperth_DW.obj.isSetupComplete = true;
  }
}

// Model terminate function
void followerstopperth_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!followerstopperth_DW.obj_f.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe3'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!followerstopperth_DW.obj_l.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe3'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!followerstopperth_DW.obj_bg.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_bg.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for MATLABSystem: '<S2>/Get Parameter2'
  if (!followerstopperth_DW.obj_k.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter2'

  // Terminate for MATLABSystem: '<S2>/Get Parameter1'
  if (!followerstopperth_DW.obj_ci.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_ci.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter1'

  // Terminate for MATLABSystem: '<S2>/Get Parameter3'
  if (!followerstopperth_DW.obj_n.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter3'

  // Terminate for MATLABSystem: '<S2>/Get Parameter4'
  if (!followerstopperth_DW.obj_b.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter4'

  // Terminate for MATLABSystem: '<S2>/Get Parameter5'
  if (!followerstopperth_DW.obj_c.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter5'

  // Terminate for MATLABSystem: '<S2>/Get Parameter6'
  if (!followerstopperth_DW.obj.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter6'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  if (!followerstopperth_DW.obj_o.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<S4>/Publish1'
  // Terminate for MATLABSystem: '<S12>/SinkBlock'
  if (!followerstopperth_DW.obj_d.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SinkBlock'
  // End of Terminate for SubSystem: '<S4>/Publish1'

  // Terminate for Atomic SubSystem: '<S2>/Publish1'
  // Terminate for MATLABSystem: '<S10>/SinkBlock'
  if (!followerstopperth_DW.obj_kl.matlabCodegenIsDeleted) {
    followerstopperth_DW.obj_kl.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SinkBlock'
  // End of Terminate for SubSystem: '<S2>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//

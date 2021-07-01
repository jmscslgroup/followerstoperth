//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: followerstoperth.cpp
//
// Code generated for Simulink model 'followerstoperth'.
//
// Model version                  : 3.38
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Thu Jul  1 14:33:38 2021
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
  SL_Bus_followerstoperth_std_msgs_Float64 rtb_BusAssignment1_d;
  SL_Bus_followerstoperth_std_msgs_UInt8 rtb_BusAssignment1;
  real_T rtb_Subtract;
  real_T value;
  real_T value_0;
  real_T x1_tmp;
  real_T x3;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S6>/SourceBlock' incorporates:
  //   Inport: '<S14>/In1'

  b_varargout_1 = Sub_followerstoperth_207.getLatestMessage
    (&followerstoperth_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S6>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (b_varargout_1) {
    followerstoperth_B.In1_b = followerstoperth_B.BusAssignment;
  }

  // End of MATLABSystem: '<S6>/SourceBlock'
  // End of Outputs for SubSystem: '<S6>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe3'
  // MATLABSystem: '<S7>/SourceBlock' incorporates:
  //   Inport: '<S15>/In1'

  b_varargout_1 = Sub_followerstoperth_41.getLatestMessage
    (&followerstoperth_B.BusAssignment);

  // Outputs for Enabled SubSystem: '<S7>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S15>/Enable'

  if (b_varargout_1) {
    followerstoperth_B.In1 = followerstoperth_B.BusAssignment;
  }

  // End of MATLABSystem: '<S7>/SourceBlock'
  // End of Outputs for SubSystem: '<S7>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe3'

  // Sum: '<Root>/Subtract'
  rtb_Subtract = followerstoperth_B.In1_b.Linear.Z +
    followerstoperth_B.In1.Linear.X;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S5>/SourceBlock' incorporates:
  //   Inport: '<S13>/In1'

  b_varargout_1 = Sub_followerstoperth_237.getLatestMessage(&b_varargout_2);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (b_varargout_1) {
    followerstoperth_B.In1_m = b_varargout_2;
  }

  // End of MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLABSystem: '<S2>/Get Parameter2'
  ParamGet_followerstoperth_226.get_parameter(&value);

  // MATLABSystem: '<S2>/Get Parameter1'
  ParamGet_followerstoperth_228.get_parameter(&followerstoperth_B.x2);

  // MATLABSystem: '<S2>/Get Parameter3'
  ParamGet_followerstoperth_230.get_parameter(&x3);

  // MATLABSystem: '<S2>/Get Parameter4'
  ParamGet_followerstoperth_235.get_parameter(&value_0);

  // MATLAB Function: '<S2>/MATLAB Function1' incorporates:
  //   MATLABSystem: '<S2>/Get Parameter1'
  //   MATLABSystem: '<S2>/Get Parameter2'
  //   MATLABSystem: '<S2>/Get Parameter3'
  //   MATLABSystem: '<S2>/Get Parameter4'

  followerstoperth_B.x1 = followerstoperth_B.In1_b.Linear.Z;
  if (followerstoperth_B.In1_b.Linear.Z >= 0.0) {
    followerstoperth_B.x1 = 0.0;
  }

  x1_tmp = followerstoperth_B.x1 * followerstoperth_B.x1 * 0.5;
  followerstoperth_B.x1 = (x1_tmp / 1.5 + value_0) + value *
    followerstoperth_B.In1.Linear.X;
  followerstoperth_B.x2 = ((value_0 + 6.0) / 2.0 + x1_tmp) +
    followerstoperth_B.x2 * followerstoperth_B.In1.Linear.X;
  x3 = (x1_tmp / 0.5 + 6.0) + x3 * followerstoperth_B.In1.Linear.X;
  value_0 = rtb_Subtract;
  if (rtb_Subtract < 0.0) {
    value_0 = 0.0;
  }

  x1_tmp = 0.0;
  if (followerstoperth_B.In1_m.Data > x3) {
    x1_tmp = rtb_Subtract;
  }

  if ((followerstoperth_B.In1_m.Data > followerstoperth_B.x2) &&
      (followerstoperth_B.In1_m.Data <= x3)) {
    x1_tmp = (rtb_Subtract - value_0) * (followerstoperth_B.In1_m.Data -
      followerstoperth_B.x2) / (x3 - followerstoperth_B.x2) + value_0;
  }

  if ((followerstoperth_B.In1_m.Data > followerstoperth_B.x1) &&
      (followerstoperth_B.In1_m.Data <= followerstoperth_B.x2)) {
    x1_tmp = (followerstoperth_B.In1_m.Data - followerstoperth_B.x1) * value_0 /
      (followerstoperth_B.x2 - followerstoperth_B.x1);
  }

  // BusAssignment: '<Root>/Bus Assignment' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<S1>/Constant'
  //   MATLAB Function: '<S2>/MATLAB Function1'

  followerstoperth_B.BusAssignment = followerstoperth_P.Constant_Value;
  followerstoperth_B.BusAssignment.Linear.X = x1_tmp;
  followerstoperth_B.BusAssignment.Angular.Z =
    followerstoperth_P.Constant_Value_b;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_followerstoperth_37.publish(&followerstoperth_B.BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // MATLAB Function: '<S2>/MATLAB Function1'
  if (followerstoperth_B.In1_m.Data > x3) {
    // BusAssignment: '<S4>/Bus Assignment1'
    rtb_BusAssignment1.Data = 0U;
  } else if ((followerstoperth_B.In1_m.Data > followerstoperth_B.x2) &&
             (followerstoperth_B.In1_m.Data <= x3)) {
    // BusAssignment: '<S4>/Bus Assignment1'
    rtb_BusAssignment1.Data = 1U;
  } else if ((followerstoperth_B.In1_m.Data > followerstoperth_B.x1) &&
             (followerstoperth_B.In1_m.Data <= followerstoperth_B.x2)) {
    // BusAssignment: '<S4>/Bus Assignment1'
    rtb_BusAssignment1.Data = 2U;
  } else {
    // BusAssignment: '<S4>/Bus Assignment1'
    rtb_BusAssignment1.Data = 3U;
  }

  // Outputs for Atomic SubSystem: '<S4>/Publish1'
  // MATLABSystem: '<S12>/SinkBlock'
  Pub_followerstoperth_165.publish(&rtb_BusAssignment1);

  // End of Outputs for SubSystem: '<S4>/Publish1'

  // BusAssignment: '<S2>/Bus Assignment1' incorporates:
  //   MATLABSystem: '<S2>/Get Parameter2'

  rtb_BusAssignment1_d.Data = value;

  // Outputs for Atomic SubSystem: '<S2>/Publish1'
  // MATLABSystem: '<S10>/SinkBlock'
  Pub_followerstoperth_234.publish(&rtb_BusAssignment1_d);

  // End of Outputs for SubSystem: '<S2>/Publish1'
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

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S6>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S14>/Out1' incorporates:
    //   Inport: '<S14>/In1'

    followerstoperth_B.In1_b = followerstoperth_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S6>/Enabled Subsystem'

    // Start for MATLABSystem: '<S6>/SourceBlock'
    followerstoperth_DW.obj_f.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic[i] = tmp[i];
    }

    b_zeroDelimTopic[7] = '\x00';
    Sub_followerstoperth_207.createSubscriber(&b_zeroDelimTopic[0], 1);
    followerstoperth_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe3'
    // SystemInitialize for Enabled SubSystem: '<S7>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S15>/Out1' incorporates:
    //   Inport: '<S15>/In1'

    followerstoperth_B.In1 = followerstoperth_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S7>/Enabled Subsystem'

    // Start for MATLABSystem: '<S7>/SourceBlock'
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
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S13>/Out1' incorporates:
    //   Inport: '<S13>/In1'

    followerstoperth_B.In1_m = followerstoperth_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'

    // Start for MATLABSystem: '<S5>/SourceBlock'
    followerstoperth_DW.obj_b.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_1[i] = tmp_0[i];
    }

    b_zeroDelimTopic_1[9] = '\x00';
    Sub_followerstoperth_237.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    followerstoperth_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
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

    // SystemInitialize for Atomic SubSystem: '<S4>/Publish1'
    // Start for MATLABSystem: '<S12>/SinkBlock'
    followerstoperth_DW.obj_d.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      b_zeroDelimTopic_2[i] = tmp_2[i];
    }

    b_zeroDelimTopic_2[6] = '\x00';
    Pub_followerstoperth_165.createPublisher(&b_zeroDelimTopic_2[0], 1);
    followerstoperth_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<S2>/Publish1'
    // Start for MATLABSystem: '<S10>/SinkBlock'
    followerstoperth_DW.obj_kl.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_kl.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic_3[i] = tmp_3[i];
    }

    b_zeroDelimTopic_3[11] = '\x00';
    Pub_followerstoperth_234.createPublisher(&b_zeroDelimTopic_3[0], 1);
    followerstoperth_DW.obj_kl.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S2>/Publish1'

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
    followerstoperth_DW.obj_c.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj_c.isInitialized = 1;
    b_zeroDelimTopic_0[0] = 't';
    b_zeroDelimTopic_0[1] = 'h';
    b_zeroDelimTopic_0[2] = '2';
    b_zeroDelimTopic_0[3] = '\x00';
    ParamGet_followerstoperth_228.initialize(&b_zeroDelimTopic_0[0]);
    ParamGet_followerstoperth_228.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoperth_228.set_initial_value(1.2);
    followerstoperth_DW.obj_c.isSetupComplete = true;

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
    followerstoperth_DW.obj.matlabCodegenIsDeleted = false;
    followerstoperth_DW.obj.isInitialized = 1;
    b_zeroDelimName[0] = 'w';
    b_zeroDelimName[1] = '1';
    b_zeroDelimName[2] = '\x00';
    ParamGet_followerstoperth_235.initialize(&b_zeroDelimName[0]);
    ParamGet_followerstoperth_235.initialize_error_codes(0, 1, 2, 3);
    ParamGet_followerstoperth_235.set_initial_value(4.5);
    followerstoperth_DW.obj.isSetupComplete = true;
  }
}

// Model terminate function
void followerstoperth_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S6>/SourceBlock'
  if (!followerstoperth_DW.obj_f.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S6>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe3'
  // Terminate for MATLABSystem: '<S7>/SourceBlock'
  if (!followerstoperth_DW.obj_l.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S7>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe3'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!followerstoperth_DW.obj_b.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_b.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for MATLABSystem: '<S2>/Get Parameter2'
  if (!followerstoperth_DW.obj_k.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter2'

  // Terminate for MATLABSystem: '<S2>/Get Parameter1'
  if (!followerstoperth_DW.obj_c.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter1'

  // Terminate for MATLABSystem: '<S2>/Get Parameter3'
  if (!followerstoperth_DW.obj_n.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter3'

  // Terminate for MATLABSystem: '<S2>/Get Parameter4'
  if (!followerstoperth_DW.obj.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/Get Parameter4'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  if (!followerstoperth_DW.obj_o.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_o.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<S4>/Publish1'
  // Terminate for MATLABSystem: '<S12>/SinkBlock'
  if (!followerstoperth_DW.obj_d.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SinkBlock'
  // End of Terminate for SubSystem: '<S4>/Publish1'

  // Terminate for Atomic SubSystem: '<S2>/Publish1'
  // Terminate for MATLABSystem: '<S10>/SinkBlock'
  if (!followerstoperth_DW.obj_kl.matlabCodegenIsDeleted) {
    followerstoperth_DW.obj_kl.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SinkBlock'
  // End of Terminate for SubSystem: '<S2>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//

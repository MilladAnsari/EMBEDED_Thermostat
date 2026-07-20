/*
 * File: Proj2_data.c
 *
 * Code generated for Simulink model 'Proj2'.
 *
 * Model version                  : 2.13
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Fri Feb 13 19:10:16 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Proj2.h"

/* Block parameters (default storage) */
P_Proj2_T Proj2_P = {
  /* Variable: A_total
   * Referenced by: '<S3>/Gain2'
   */
  { -1.0, 0.3, 0.4, 0.3, 0.3, -0.8, 0.5, 0.0, 0.4, 0.5, -1.2, 0.3, 0.3, 0.0, 0.3,
    -0.6 },

  /* Variable: T_dif
   * Referenced by: '<S4>/Chart'
   */
  { 1.0, 1.0, 1.0, 1.0 },

  /* Variable: T_get
   * Referenced by: '<S4>/Chart'
   */
  { 17.0, 16.0, 16.0, 17.0 },

  /* Variable: T_off
   * Referenced by:
   *   '<S2>/Chart'
   *   '<S4>/Chart'
   */
  { 20.0, 20.0, 20.0, 20.0 },

  /* Variable: T_on
   * Referenced by:
   *   '<S2>/Chart'
   *   '<S4>/Chart'
   */
  { 19.0, 19.0, 19.0, 19.0 },

  /* Variable: b
   * Referenced by: '<S3>/Gain1'
   */
  { 0.3, 0.2, 0.5, 0.4 },

  /* Variable: c
   * Referenced by: '<S3>/Gain'
   */
  { 9.0, 7.0, 11.0, 7.0 },

  /* Variable: u
   * Referenced by: '<S1>/Constant'
   */
  6.0,

  /* Variable: x0
   * Referenced by: '<S3>/Discrete-Time Integrator'
   */
  { 16.5, 16.5, 16.5, 16.5 },

  /* Computed Parameter: x_Y0
   * Referenced by: '<S3>/x'
   */
  0.0,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S3>/Discrete-Time Integrator'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/Discrete Pulse Generator'
   */
  1.0,

  /* Computed Parameter: DiscretePulseGenerator_Period
   * Referenced by: '<S1>/Discrete Pulse Generator'
   */
  100.0,

  /* Computed Parameter: DiscretePulseGenerator_Duty
   * Referenced by: '<S1>/Discrete Pulse Generator'
   */
  50.0,

  /* Expression: 0
   * Referenced by: '<S1>/Discrete Pulse Generator'
   */
  0.0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

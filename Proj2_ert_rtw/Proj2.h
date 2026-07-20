/*
 * File: Proj2.h
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

#ifndef Proj2_h_
#define Proj2_h_
#ifndef Proj2_COMMON_INCLUDES_
#define Proj2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Proj2_COMMON_INCLUDES_ */

#include "Proj2_types.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T h[4];                         /* '<S4>/Chart' */
  real_T h_safe[4];                    /* '<S2>/Chart' */
} B_Proj2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE[4];          /* '<S1>/Unit Delay' */
  real_T UnitDelay1_DSTATE[4];         /* '<S1>/Unit Delay1' */
  real_T UnitDelay2_DSTATE[4];         /* '<S1>/Unit Delay2' */
  real_T DiscreteTimeIntegrator_DSTATE[4];/* '<S3>/Discrete-Time Integrator' */
  int32_T clockTickCounter;            /* '<S1>/Discrete Pulse Generator' */
  uint8_T is_active_c3_Proj2;          /* '<S4>/Chart' */
  uint8_T is_c3_Proj2;                 /* '<S4>/Chart' */
  uint8_T is_active_c1_Proj2;          /* '<S2>/Chart' */
  uint8_T is_c1_Proj2;                 /* '<S2>/Chart' */
} DW_Proj2_T;

/* Parameters (default storage) */
struct P_Proj2_T_ {
  real_T A_total[16];                  /* Variable: A_total
                                        * Referenced by: '<S3>/Gain2'
                                        */
  real_T T_dif[4];                     /* Variable: T_dif
                                        * Referenced by: '<S4>/Chart'
                                        */
  real_T T_get[4];                     /* Variable: T_get
                                        * Referenced by: '<S4>/Chart'
                                        */
  real_T T_off[4];                     /* Variable: T_off
                                        * Referenced by:
                                        *   '<S2>/Chart'
                                        *   '<S4>/Chart'
                                        */
  real_T T_on[4];                      /* Variable: T_on
                                        * Referenced by:
                                        *   '<S2>/Chart'
                                        *   '<S4>/Chart'
                                        */
  real_T b[4];                         /* Variable: b
                                        * Referenced by: '<S3>/Gain1'
                                        */
  real_T c[4];                         /* Variable: c
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T u;                            /* Variable: u
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T x0[4];                        /* Variable: x0
                                        * Referenced by: '<S3>/Discrete-Time Integrator'
                                        */
  real_T x_Y0;                         /* Computed Parameter: x_Y0
                                        * Referenced by: '<S3>/x'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S3>/Discrete-Time Integrator'
                            */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay1'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay2'
                                        */
  real_T DiscretePulseGenerator_Amp;   /* Expression: 1
                                        * Referenced by: '<S1>/Discrete Pulse Generator'
                                        */
  real_T DiscretePulseGenerator_Period;
                            /* Computed Parameter: DiscretePulseGenerator_Period
                             * Referenced by: '<S1>/Discrete Pulse Generator'
                             */
  real_T DiscretePulseGenerator_Duty;
                              /* Computed Parameter: DiscretePulseGenerator_Duty
                               * Referenced by: '<S1>/Discrete Pulse Generator'
                               */
  real_T DiscretePulseGenerator_PhaseDel;/* Expression: 0
                                          * Referenced by: '<S1>/Discrete Pulse Generator'
                                          */
};

/* Real-time Model Data Structure */
struct tag_RTM_Proj2_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_Proj2_T Proj2_P;

/* Block signals (default storage) */
extern B_Proj2_T Proj2_B;

/* Block states (default storage) */
extern DW_Proj2_T Proj2_DW;

/* Model entry point functions */
extern void Proj2_initialize(void);
extern void Proj2_step(void);
extern void Proj2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Proj2_T *const Proj2_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Proj2'
 * '<S1>'   : 'Proj2/Subsystem'
 * '<S2>'   : 'Proj2/Subsystem/Checker'
 * '<S3>'   : 'Proj2/Subsystem/Rooms'
 * '<S4>'   : 'Proj2/Subsystem/Thermostat'
 * '<S5>'   : 'Proj2/Subsystem/Checker/Chart'
 * '<S6>'   : 'Proj2/Subsystem/Thermostat/Chart'
 */
#endif                                 /* Proj2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

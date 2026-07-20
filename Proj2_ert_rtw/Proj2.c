/*
 * File: Proj2.c
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
#include "rtwtypes.h"

/* Named constants for Chart: '<S2>/Chart' */
#define Proj2_IN_Block                 ((uint8_T)1U)
#define Proj2_IN_Safe                  ((uint8_T)2U)

/* Named constants for Chart: '<S4>/Chart' */
#define Proj2_IN_S0011                 ((uint8_T)1U)
#define Proj2_IN_S0101                 ((uint8_T)2U)
#define Proj2_IN_S0110                 ((uint8_T)3U)
#define Proj2_IN_S1001                 ((uint8_T)4U)
#define Proj2_IN_S1010                 ((uint8_T)5U)
#define Proj2_IN_S1100                 ((uint8_T)6U)

/* Block signals (default storage) */
B_Proj2_T Proj2_B;

/* Block states (default storage) */
DW_Proj2_T Proj2_DW;

/* Real-time model */
static RT_MODEL_Proj2_T Proj2_M_;
RT_MODEL_Proj2_T *const Proj2_M = &Proj2_M_;

/* Forward declaration for local functions */
static void Proj2_S1100(void);
static void Proj2_S0110(void);
static void Proj2_S1001(void);
static void Proj2_S1010(void);

/* Function for Chart: '<S4>/Chart' */
static void Proj2_S1100(void)
{
  /* UnitDelay: '<S1>/Unit Delay' */
  if ((Proj2_DW.UnitDelay_DSTATE[2] <= Proj2_P.T_get[2]) &&
      (Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[2] >=
       Proj2_P.T_dif[2])) {
    Proj2_B.h[0] = 0.0;
    Proj2_B.h[2] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S0110;
  } else if ((Proj2_DW.UnitDelay_DSTATE[3] <= Proj2_P.T_get[3]) &&
             (Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[3] >=
              Proj2_P.T_dif[3])) {
    Proj2_B.h[0] = 0.0;
    Proj2_B.h[3] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S0101;
  } else if ((Proj2_DW.UnitDelay_DSTATE[2] <= Proj2_P.T_get[2]) &&
             (Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[2] >=
              Proj2_P.T_dif[2])) {
    Proj2_B.h[1] = 0.0;
    Proj2_B.h[2] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S1010;
  } else if ((Proj2_DW.UnitDelay_DSTATE[3] <= Proj2_P.T_get[3]) &&
             (Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[3] >=
              Proj2_P.T_dif[3])) {
    Proj2_B.h[1] = 0.0;
    Proj2_B.h[3] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S1001;
  } else if ((Proj2_DW.UnitDelay_DSTATE[0] >= Proj2_P.T_off[0]) && (Proj2_B.h[0]
              == 1.0)) {
    Proj2_B.h[0] = 0.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[0] <= Proj2_P.T_on[0]) && (Proj2_B.h[0] ==
              0.0)) {
    Proj2_B.h[0] = 1.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[1] <= Proj2_P.T_on[1]) && (Proj2_B.h[1] ==
              0.0)) {
    Proj2_B.h[1] = 1.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[1] >= Proj2_P.T_off[1]) && (Proj2_B.h[1]
              == 1.0)) {
    Proj2_B.h[1] = 0.0;
  }

  /* End of UnitDelay: '<S1>/Unit Delay' */
}

/* Function for Chart: '<S4>/Chart' */
static void Proj2_S0110(void)
{
  /* UnitDelay: '<S1>/Unit Delay' */
  if ((Proj2_DW.UnitDelay_DSTATE[0] <= Proj2_P.T_get[0]) &&
      (Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[0] >=
       Proj2_P.T_dif[0])) {
    Proj2_B.h[2] = 0.0;
    Proj2_B.h[0] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S1100;
  } else if ((Proj2_DW.UnitDelay_DSTATE[3] <= Proj2_P.T_get[3]) &&
             (Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[3] >=
              Proj2_P.T_dif[3])) {
    Proj2_B.h[2] = 0.0;
    Proj2_B.h[3] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S0101;
  } else if ((Proj2_DW.UnitDelay_DSTATE[0] <= Proj2_P.T_get[0]) &&
             (Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[0] >=
              Proj2_P.T_dif[0])) {
    Proj2_B.h[1] = 0.0;
    Proj2_B.h[0] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S1010;
  } else if ((Proj2_DW.UnitDelay_DSTATE[3] <= Proj2_P.T_get[3]) &&
             (Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[3] >=
              Proj2_P.T_dif[3])) {
    Proj2_B.h[1] = 0.0;
    Proj2_B.h[3] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S0011;
  } else if ((Proj2_DW.UnitDelay_DSTATE[2] >= Proj2_P.T_off[2]) && (Proj2_B.h[2]
              == 1.0)) {
    Proj2_B.h[2] = 0.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[2] <= Proj2_P.T_on[2]) && (Proj2_B.h[2] ==
              0.0)) {
    Proj2_B.h[2] = 1.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[1] <= Proj2_P.T_on[1]) && (Proj2_B.h[1] ==
              0.0)) {
    Proj2_B.h[1] = 1.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[1] >= Proj2_P.T_off[1]) && (Proj2_B.h[1]
              == 1.0)) {
    Proj2_B.h[1] = 0.0;
  }

  /* End of UnitDelay: '<S1>/Unit Delay' */
}

/* Function for Chart: '<S4>/Chart' */
static void Proj2_S1001(void)
{
  /* UnitDelay: '<S1>/Unit Delay' */
  if ((Proj2_DW.UnitDelay_DSTATE[1] <= Proj2_P.T_get[1]) &&
      (Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[1] >=
       Proj2_P.T_dif[1])) {
    Proj2_B.h[0] = 0.0;
    Proj2_B.h[1] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S0101;
  } else if ((Proj2_DW.UnitDelay_DSTATE[2] <= Proj2_P.T_get[2]) &&
             (Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[2] >=
              Proj2_P.T_dif[2])) {
    Proj2_B.h[3] = 0.0;
    Proj2_B.h[2] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S1010;
  } else if ((Proj2_DW.UnitDelay_DSTATE[1] <= Proj2_P.T_get[1]) &&
             (Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[1] >=
              Proj2_P.T_dif[1])) {
    Proj2_B.h[3] = 0.0;
    Proj2_B.h[1] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S1100;
  } else if ((Proj2_DW.UnitDelay_DSTATE[2] <= Proj2_P.T_get[2]) &&
             (Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[2] >=
              Proj2_P.T_dif[2])) {
    Proj2_B.h[0] = 0.0;
    Proj2_B.h[2] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S0011;
  } else if ((Proj2_DW.UnitDelay_DSTATE[3] <= Proj2_P.T_on[3]) && (Proj2_B.h[3] ==
              0.0)) {
    Proj2_B.h[3] = 1.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[3] >= Proj2_P.T_off[3]) && (Proj2_B.h[3]
              == 1.0)) {
    Proj2_B.h[3] = 0.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[0] >= Proj2_P.T_off[0]) && (Proj2_B.h[0]
              == 1.0)) {
    Proj2_B.h[0] = 0.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[0] <= Proj2_P.T_on[0]) && (Proj2_B.h[0] ==
              0.0)) {
    Proj2_B.h[0] = 1.0;
  }

  /* End of UnitDelay: '<S1>/Unit Delay' */
}

/* Function for Chart: '<S4>/Chart' */
static void Proj2_S1010(void)
{
  /* UnitDelay: '<S1>/Unit Delay' */
  if ((Proj2_DW.UnitDelay_DSTATE[1] <= Proj2_P.T_get[1]) &&
      (Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[1] >=
       Proj2_P.T_dif[1])) {
    Proj2_B.h[0] = 0.0;
    Proj2_B.h[1] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S0110;
  } else if ((Proj2_DW.UnitDelay_DSTATE[3] <= Proj2_P.T_get[3]) &&
             (Proj2_DW.UnitDelay_DSTATE[0] - Proj2_DW.UnitDelay_DSTATE[3] >=
              Proj2_P.T_dif[3])) {
    Proj2_B.h[0] = 0.0;
    Proj2_B.h[3] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S0011;
  } else if ((Proj2_DW.UnitDelay_DSTATE[3] <= Proj2_P.T_get[3]) &&
             (Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[3] >=
              Proj2_P.T_dif[3])) {
    Proj2_B.h[2] = 0.0;
    Proj2_B.h[3] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S1001;
  } else if ((Proj2_DW.UnitDelay_DSTATE[1] <= Proj2_P.T_get[1]) &&
             (Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[1] >=
              Proj2_P.T_dif[1])) {
    Proj2_B.h[2] = 0.0;
    Proj2_B.h[1] = 1.0;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S1100;
  } else if ((Proj2_DW.UnitDelay_DSTATE[0] >= Proj2_P.T_off[0]) && (Proj2_B.h[0]
              == 1.0)) {
    Proj2_B.h[0] = 0.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[0] <= Proj2_P.T_on[0]) && (Proj2_B.h[0] ==
              0.0)) {
    Proj2_B.h[0] = 1.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[2] <= Proj2_P.T_on[2]) && (Proj2_B.h[2] ==
              0.0)) {
    Proj2_B.h[2] = 1.0;
  } else if ((Proj2_DW.UnitDelay_DSTATE[2] >= Proj2_P.T_off[2]) && (Proj2_B.h[2]
              == 1.0)) {
    Proj2_B.h[2] = 0.0;
  }

  /* End of UnitDelay: '<S1>/Unit Delay' */
}

/* Model step function */
void Proj2_step(void)
{
  real_T rtb_DiscretePulseGenerator;
  int16_T k;
  boolean_T b_out;
  boolean_T exitg1;

  /* Chart: '<S4>/Chart' incorporates:
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (Proj2_DW.is_active_c3_Proj2 == 0) {
    Proj2_DW.is_active_c3_Proj2 = 1U;
    Proj2_DW.is_c3_Proj2 = Proj2_IN_S0110;
  } else {
    switch (Proj2_DW.is_c3_Proj2) {
     case Proj2_IN_S0011:
      if ((Proj2_DW.UnitDelay_DSTATE[1] <= Proj2_P.T_get[1]) &&
          (Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[1] >=
           Proj2_P.T_dif[1])) {
        Proj2_B.h[3] = 0.0;
        Proj2_B.h[1] = 1.0;
        Proj2_DW.is_c3_Proj2 = Proj2_IN_S0110;
      } else if ((Proj2_DW.UnitDelay_DSTATE[0] <= Proj2_P.T_get[0]) &&
                 (Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[0] >=
                  Proj2_P.T_dif[0])) {
        Proj2_B.h[3] = 0.0;
        Proj2_B.h[0] = 1.0;
        Proj2_DW.is_c3_Proj2 = Proj2_IN_S1010;
      } else if ((Proj2_DW.UnitDelay_DSTATE[1] <= Proj2_P.T_get[1]) &&
                 (Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[1] >=
                  Proj2_P.T_dif[1])) {
        Proj2_B.h[2] = 0.0;
        Proj2_B.h[1] = 1.0;
        Proj2_DW.is_c3_Proj2 = Proj2_IN_S0101;
      } else if ((Proj2_DW.UnitDelay_DSTATE[0] <= Proj2_P.T_get[0]) &&
                 (Proj2_DW.UnitDelay_DSTATE[2] - Proj2_DW.UnitDelay_DSTATE[0] >=
                  Proj2_P.T_dif[0])) {
        Proj2_B.h[2] = 0.0;
        Proj2_B.h[0] = 1.0;
        Proj2_DW.is_c3_Proj2 = Proj2_IN_S1001;
      } else if ((Proj2_DW.UnitDelay_DSTATE[2] >= Proj2_P.T_off[2]) &&
                 (Proj2_B.h[2] == 1.0)) {
        Proj2_B.h[2] = 0.0;
      } else if ((Proj2_DW.UnitDelay_DSTATE[2] <= Proj2_P.T_on[2]) &&
                 (Proj2_B.h[2] == 0.0)) {
        Proj2_B.h[2] = 1.0;
      } else if ((Proj2_DW.UnitDelay_DSTATE[3] <= Proj2_P.T_on[3]) &&
                 (Proj2_B.h[3] == 0.0)) {
        Proj2_B.h[3] = 1.0;
      } else if ((Proj2_DW.UnitDelay_DSTATE[3] >= Proj2_P.T_off[3]) &&
                 (Proj2_B.h[3] == 1.0)) {
        Proj2_B.h[3] = 0.0;
      }
      break;

     case Proj2_IN_S0101:
      if ((Proj2_DW.UnitDelay_DSTATE[2] <= Proj2_P.T_get[2]) &&
          (Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[2] >=
           Proj2_P.T_dif[2])) {
        Proj2_B.h[3] = 0.0;
        Proj2_B.h[2] = 1.0;
        Proj2_DW.is_c3_Proj2 = Proj2_IN_S0110;
      } else if ((Proj2_DW.UnitDelay_DSTATE[0] <= Proj2_P.T_get[0]) &&
                 (Proj2_DW.UnitDelay_DSTATE[3] - Proj2_DW.UnitDelay_DSTATE[0] >=
                  Proj2_P.T_dif[0])) {
        Proj2_B.h[3] = 0.0;
        Proj2_B.h[0] = 1.0;
        Proj2_DW.is_c3_Proj2 = Proj2_IN_S1100;
      } else if ((Proj2_DW.UnitDelay_DSTATE[0] <= Proj2_P.T_get[0]) &&
                 (Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[0] >=
                  Proj2_P.T_dif[0])) {
        Proj2_B.h[1] = 0.0;
        Proj2_B.h[0] = 1.0;
        Proj2_DW.is_c3_Proj2 = Proj2_IN_S1001;
      } else if ((Proj2_DW.UnitDelay_DSTATE[2] <= Proj2_P.T_get[2]) &&
                 (Proj2_DW.UnitDelay_DSTATE[1] - Proj2_DW.UnitDelay_DSTATE[2] >=
                  Proj2_P.T_dif[2])) {
        Proj2_B.h[1] = 0.0;
        Proj2_B.h[2] = 1.0;
        Proj2_DW.is_c3_Proj2 = Proj2_IN_S0011;
      } else if ((Proj2_DW.UnitDelay_DSTATE[3] >= Proj2_P.T_off[3]) &&
                 (Proj2_B.h[3] == 1.0)) {
        Proj2_B.h[3] = 0.0;
      } else if ((Proj2_DW.UnitDelay_DSTATE[3] <= Proj2_P.T_on[3]) &&
                 (Proj2_B.h[3] == 0.0)) {
        Proj2_B.h[3] = 1.0;
      } else if ((Proj2_DW.UnitDelay_DSTATE[1] <= Proj2_P.T_on[1]) &&
                 (Proj2_B.h[1] == 0.0)) {
        Proj2_B.h[1] = 1.0;
      } else if ((Proj2_DW.UnitDelay_DSTATE[1] >= Proj2_P.T_off[1]) &&
                 (Proj2_B.h[1] == 1.0)) {
        Proj2_B.h[1] = 0.0;
      }
      break;

     case Proj2_IN_S0110:
      Proj2_S0110();
      break;

     case Proj2_IN_S1001:
      Proj2_S1001();
      break;

     case Proj2_IN_S1010:
      Proj2_S1010();
      break;

     default:
      /* case IN_S1100: */
      Proj2_S1100();
      break;
    }
  }

  /* End of Chart: '<S4>/Chart' */

  /* Chart: '<S2>/Chart' */
  if (Proj2_DW.is_active_c1_Proj2 == 0) {
    Proj2_DW.is_active_c1_Proj2 = 1U;
    Proj2_DW.is_c1_Proj2 = Proj2_IN_Block;
  } else if (Proj2_DW.is_c1_Proj2 == Proj2_IN_Block) {
    if (((Proj2_B.h[0] + Proj2_B.h[1]) + Proj2_B.h[2]) + Proj2_B.h[3] <= 2.0) {
      Proj2_B.h_safe[0] = Proj2_B.h[0];
      Proj2_B.h_safe[1] = Proj2_B.h[1];
      Proj2_B.h_safe[2] = Proj2_B.h[2];
      Proj2_B.h_safe[3] = Proj2_B.h[3];
      Proj2_DW.is_c1_Proj2 = Proj2_IN_Safe;
    }
  } else {
    /* case IN_Safe: */
    rtb_DiscretePulseGenerator = ((Proj2_B.h[0] + Proj2_B.h[1]) + Proj2_B.h[2])
      + Proj2_B.h[3];
    if (rtb_DiscretePulseGenerator > 2.0) {
      b_out = true;
    } else {
      b_out = false;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k < 4)) {
        if (((Proj2_B.h[k] == 1.0) && (Proj2_DW.UnitDelay1_DSTATE[k] >=
              Proj2_P.T_off[k])) || ((Proj2_B.h[k] == 0.0) &&
             (Proj2_DW.UnitDelay1_DSTATE[k] <= Proj2_P.T_on[k]))) {
          b_out = true;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (b_out) {
      Proj2_DW.is_c1_Proj2 = Proj2_IN_Block;
    } else if (rtb_DiscretePulseGenerator <= 2.0) {
      Proj2_B.h_safe[0] = Proj2_B.h[0];
      Proj2_B.h_safe[1] = Proj2_B.h[1];
      Proj2_B.h_safe[2] = Proj2_B.h[2];
      Proj2_B.h_safe[3] = Proj2_B.h[3];
      Proj2_DW.is_c1_Proj2 = Proj2_IN_Safe;
    }
  }

  /* End of Chart: '<S2>/Chart' */

  /* DiscretePulseGenerator: '<S1>/Discrete Pulse Generator' */
  rtb_DiscretePulseGenerator = (Proj2_DW.clockTickCounter <
    Proj2_P.DiscretePulseGenerator_Duty) && (Proj2_DW.clockTickCounter >= 0L) ?
    Proj2_P.DiscretePulseGenerator_Amp : 0.0;
  if (Proj2_DW.clockTickCounter >= Proj2_P.DiscretePulseGenerator_Period - 1.0)
  {
    Proj2_DW.clockTickCounter = 0L;
  } else {
    Proj2_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Discrete Pulse Generator' */

  /* Outputs for Enabled SubSystem: '<S1>/Rooms' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  if (rtb_DiscretePulseGenerator > 0.0) {
    /* DiscreteIntegrator: '<S3>/Discrete-Time Integrator' incorporates:
     *  UnitDelay: '<S1>/Unit Delay1'
     */
    Proj2_DW.UnitDelay1_DSTATE[0] = Proj2_DW.DiscreteTimeIntegrator_DSTATE[0];
    Proj2_DW.UnitDelay1_DSTATE[1] = Proj2_DW.DiscreteTimeIntegrator_DSTATE[1];
    Proj2_DW.UnitDelay1_DSTATE[2] = Proj2_DW.DiscreteTimeIntegrator_DSTATE[2];
    Proj2_DW.UnitDelay1_DSTATE[3] = Proj2_DW.DiscreteTimeIntegrator_DSTATE[3];
    for (k = 0; k < 4; k++) {
      /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' incorporates:
       *  Constant: '<S1>/Constant'
       *  Gain: '<S3>/Gain'
       *  Gain: '<S3>/Gain1'
       *  Gain: '<S3>/Gain2'
       *  Sum: '<S3>/Subtract'
       *  Sum: '<S3>/Sum of Elements'
       *  UnitDelay: '<S1>/Unit Delay1'
       *  UnitDelay: '<S1>/Unit Delay2'
       */
      Proj2_DW.DiscreteTimeIntegrator_DSTATE[k] += (((((Proj2_P.A_total[k + 4] *
        Proj2_DW.UnitDelay1_DSTATE[1] + Proj2_P.A_total[k] *
        Proj2_DW.UnitDelay1_DSTATE[0]) + Proj2_P.A_total[k + 8] *
        Proj2_DW.UnitDelay1_DSTATE[2]) + Proj2_P.A_total[k + 12] *
        Proj2_DW.UnitDelay1_DSTATE[3]) + Proj2_P.c[k] *
        Proj2_DW.UnitDelay2_DSTATE[k]) + (Proj2_P.u -
        Proj2_DW.UnitDelay1_DSTATE[k]) * Proj2_P.b[k]) *
        Proj2_P.DiscreteTimeIntegrator_gainval;
    }
  }

  /* End of Outputs for SubSystem: '<S1>/Rooms' */

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  Proj2_DW.UnitDelay_DSTATE[0] = Proj2_DW.UnitDelay1_DSTATE[0];

  /* Update for UnitDelay: '<S1>/Unit Delay2' */
  Proj2_DW.UnitDelay2_DSTATE[0] = Proj2_B.h_safe[0];

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  Proj2_DW.UnitDelay_DSTATE[1] = Proj2_DW.UnitDelay1_DSTATE[1];

  /* Update for UnitDelay: '<S1>/Unit Delay2' */
  Proj2_DW.UnitDelay2_DSTATE[1] = Proj2_B.h_safe[1];

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  Proj2_DW.UnitDelay_DSTATE[2] = Proj2_DW.UnitDelay1_DSTATE[2];

  /* Update for UnitDelay: '<S1>/Unit Delay2' */
  Proj2_DW.UnitDelay2_DSTATE[2] = Proj2_B.h_safe[2];

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  Proj2_DW.UnitDelay_DSTATE[3] = Proj2_DW.UnitDelay1_DSTATE[3];

  /* Update for UnitDelay: '<S1>/Unit Delay2' */
  Proj2_DW.UnitDelay2_DSTATE[3] = Proj2_B.h_safe[3];
}

/* Model initialize function */
void Proj2_initialize(void)
{
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Proj2_DW.UnitDelay_DSTATE[0] = Proj2_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
  Proj2_DW.UnitDelay2_DSTATE[0] = Proj2_P.UnitDelay2_InitialCondition;

  /* SystemInitialize for Chart: '<S4>/Chart' */
  Proj2_B.h[0] = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S1>/Rooms' */
  /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  Proj2_DW.DiscreteTimeIntegrator_DSTATE[0] = Proj2_P.x0[0];

  /* SystemInitialize for Outport: '<S3>/x' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  Proj2_DW.UnitDelay1_DSTATE[0] = Proj2_P.x_Y0;

  /* End of SystemInitialize for SubSystem: '<S1>/Rooms' */

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Proj2_DW.UnitDelay_DSTATE[1] = Proj2_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
  Proj2_DW.UnitDelay2_DSTATE[1] = Proj2_P.UnitDelay2_InitialCondition;

  /* SystemInitialize for Chart: '<S4>/Chart' */
  Proj2_B.h[1] = 1.0;

  /* SystemInitialize for Enabled SubSystem: '<S1>/Rooms' */
  /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  Proj2_DW.DiscreteTimeIntegrator_DSTATE[1] = Proj2_P.x0[1];

  /* SystemInitialize for Outport: '<S3>/x' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  Proj2_DW.UnitDelay1_DSTATE[1] = Proj2_P.x_Y0;

  /* End of SystemInitialize for SubSystem: '<S1>/Rooms' */

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Proj2_DW.UnitDelay_DSTATE[2] = Proj2_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
  Proj2_DW.UnitDelay2_DSTATE[2] = Proj2_P.UnitDelay2_InitialCondition;

  /* SystemInitialize for Chart: '<S4>/Chart' */
  Proj2_B.h[2] = 1.0;

  /* SystemInitialize for Enabled SubSystem: '<S1>/Rooms' */
  /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  Proj2_DW.DiscreteTimeIntegrator_DSTATE[2] = Proj2_P.x0[2];

  /* SystemInitialize for Outport: '<S3>/x' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  Proj2_DW.UnitDelay1_DSTATE[2] = Proj2_P.x_Y0;

  /* End of SystemInitialize for SubSystem: '<S1>/Rooms' */

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Proj2_DW.UnitDelay_DSTATE[3] = Proj2_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
  Proj2_DW.UnitDelay2_DSTATE[3] = Proj2_P.UnitDelay2_InitialCondition;

  /* SystemInitialize for Chart: '<S4>/Chart' */
  Proj2_B.h[3] = 0.0;

  /* SystemInitialize for Enabled SubSystem: '<S1>/Rooms' */
  /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  Proj2_DW.DiscreteTimeIntegrator_DSTATE[3] = Proj2_P.x0[3];

  /* SystemInitialize for Outport: '<S3>/x' incorporates:
   *  DiscreteIntegrator: '<S3>/Discrete-Time Integrator'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  Proj2_DW.UnitDelay1_DSTATE[3] = Proj2_P.x_Y0;

  /* End of SystemInitialize for SubSystem: '<S1>/Rooms' */
}

/* Model terminate function */
void Proj2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

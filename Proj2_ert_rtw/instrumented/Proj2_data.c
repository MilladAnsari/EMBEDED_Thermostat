#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned long* __mw_instrum_Proj2_phits;

#define __MW_EXTRA_OPEN_MP_SHARED_CLAUSE shared(__mw_instrum_Proj2_phits)

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void)((++__mw_instrum_Proj2_phits[id - 1u]) || ((__mw_instrum_Proj2_phits[id - 1u] = (~0u))!=0)))
#define __MW_INSTRUM_RECORD_HIT(id) (__mw_instrum_Proj2_phits ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

#ifdef __cplusplus
template<typename T>
static T *__mw_instrum_address_of(T& arg)
{
  return reinterpret_cast<T*>(
               &const_cast<char&>(
                   reinterpret_cast<const volatile char&>(arg)));
}
#else
#define __mw_instrum_address_of(X) &(X)
#endif

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#define __mw_instrum_address_of(x) &(x)



#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

# 1 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2_data.c"
# 5 "C:\\Program Files\\MATLAB\\R2025b\\polyspace\\verifier\\extensions\\tmw_builtins\\tmw_builtins.h" 3
#ifndef _TMW_BUILTINS_H_
#define _TMW_BUILTINS_H_
# 71
# 76


#endif /* _TMW_BUILTINS_H_ */
# 16 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2.h"
#ifndef Proj2_h_
#define Proj2_h_
#ifndef Proj2_COMMON_INCLUDES_
#define Proj2_COMMON_INCLUDES_
# 16 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\rtwtypes.h"
#ifndef RTWTYPES_H
#define RTWTYPES_H



#ifndef false
#define false (0U)
#endif /* false */

#ifndef true
#define true (1U)
#endif /* true */
# 47
typedef signed char int8_T; 
typedef unsigned char uint8_T; 
typedef int int16_T; 
typedef unsigned uint16_T; 
typedef long int32_T; 
typedef unsigned long uint32_T; 
typedef float real32_T; 
typedef double real64_T; 
# 60
typedef double real_T; 
typedef double time_T; 
typedef unsigned char boolean_T; 
typedef int int_T; 
typedef unsigned uint_T; 
typedef unsigned long ulong_T; 
typedef char char_T; 
typedef unsigned char uchar_T; 
typedef char_T byte_T; 
# 78
typedef 
# 75
struct { 
real32_T re; 
real32_T im; 
} creal32_T; 




typedef 
# 80
struct { 
real64_T re; 
real64_T im; 
} creal64_T; 




typedef 
# 85
struct { 
real_T re; 
real_T im; 
} creal_T; 
# 95
typedef 
# 92
struct { 
int8_T re; 
int8_T im; 
} cint8_T; 
# 102
typedef 
# 99
struct { 
uint8_T re; 
uint8_T im; 
} cuint8_T; 
# 109
typedef 
# 106
struct { 
int16_T re; 
int16_T im; 
} cint16_T; 
# 116
typedef 
# 113
struct { 
uint16_T re; 
uint16_T im; 
} cuint16_T; 
# 123
typedef 
# 120
struct { 
int32_T re; 
int32_T im; 
} cint32_T; 
# 130
typedef 
# 127
struct { 
uint32_T re; 
uint32_T im; 
} cuint32_T; 
# 148
typedef void *pointer_T; 

#endif /* RTWTYPES_H */
# 11 "C:\\PROGRA~1\\MATLAB\\R2025b\\simulink\\include\\rtw_continuous.h"
#ifndef RTW_CONTINUOUS_H__
#define RTW_CONTINUOUS_H__
# 26
typedef 
# 21
enum { 
SS_MATRIX_NONE, 
SS_MATRIX_CONSTANT, 
SS_MATRIX_TIMEDEP, 
SS_MATRIX_STATEDEP
} ssMatrixType; 
# 33
typedef 
# 28
enum { 
SOLVER_MODE_AUTO, 

SOLVER_MODE_SINGLETASKING, 
SOLVER_MODE_MULTITASKING
} SolverMode; 

typedef enum { MINOR_TIME_STEP, MAJOR_TIME_STEP} SimTimeStep; 
# 41
typedef void (*rtMdlInitializeSizesFcn)(void * rtModel); 
typedef void (*rtMdlInitializeSampleTimesFcn)(void * rtModel); 
typedef void (*rtMdlStartFcn)(void * rtModel); 
typedef void (*rtMdlOutputsFcn)(void * rtModel, int_T tid); 
typedef void (*rtMdlUpdateFcn)(void * rtModel, int_T tid); 
typedef void (*rtMdlDerivativesFcn)(void * rtModel); 
typedef void (*rtMdlProjectionFcn)(void * rtModel); 
typedef void (*rtMdlMassMatrixFcn)(void * rtModel); 
typedef void (*rtMdlForcingFunctionFcn)(void * rtModel); 
typedef void (*rtMdlTerminateFcn)(void * rtModel); 
# 74
typedef 
# 59
struct _RTWRTModelMethodsInfo_tag { 
void *rtModelPtr; 
rtMdlInitializeSizesFcn rtmInitSizesFcn; 
rtMdlInitializeSampleTimesFcn rtmInitSampTimesFcn; 
rtMdlStartFcn rtmStartFcn; 
rtMdlOutputsFcn rtmOutputsFcn; 
rtMdlUpdateFcn rtmUpdateFcn; 
rtMdlDerivativesFcn rtmDervisFcn; 
rtMdlProjectionFcn rtmProjectionFcn; 
rtMdlMassMatrixFcn rtmMassMatrixFcn; 
rtMdlForcingFunctionFcn rtmForcingFunctionFcn; 
rtMdlTerminateFcn rtmTerminateFcn; 



} RTWRTModelMethodsInfo; 
# 109
#endif /* RTW_CONTINUOUS_H__ */
# 11 "C:\\PROGRA~1\\MATLAB\\R2025b\\simulink\\include\\rtw_solver.h"
#ifndef RTW_SOLVER_H__
#define RTW_SOLVER_H__
# 29
typedef 
# 24
enum { 
SL_SOLVER_TOLERANCE_AUTO, 
SL_SOLVER_TOLERANCE_LOCAL, 
SL_SOLVER_TOLERANCE_GLOBAL, 
SL_SOLVER_TOLERANCE_UNDEFINED = 255
} SL_SolverToleranceControlFlag_T; 
# 41
typedef 
# 35
enum { 
SL_JM_BD_AUTO, 
SL_JM_BD_SPARSE_PERTURBATION, 
SL_JM_BD_FULL_PERTURBATION, 
SL_JM_BD_SPARSE_ANALYTICAL, 
SL_JM_BD_FULL_ANALYTICAL
} slJmBdControl; 
# 126
typedef 
# 44
struct _ssSolverInfo_tag { 
void *rtModelPtr; 

SimTimeStep *simTimeStepPtr; 
void *solverData; 
const char_T *solverName; 
boolean_T isVariableStepSolver; 
boolean_T solverNeedsReset; 
SolverMode solverMode; 

time_T solverStopTime; 
time_T *stepSizePtr; 
time_T minStepSize; 
time_T maxStepSize; 
time_T fixedStepSize; 

int_T solverShapePreserveControl; 
int_T solverMaxConsecutiveMinStep; 
int_T maxNumMinSteps; 
int_T solverMaxOrder; 
real_T solverConsecutiveZCsStepRelTol; 
int_T solverMaxConsecutiveZCs; 

int_T solverExtrapolationOrder; 
int_T solverNumberNewtonIterations; 

int_T solverRefineFactor; 
real_T solverRelTol; 
real_T unused_real_T_1; 

real_T **dXPtr; 
time_T **tPtr; 

int_T *numContStatesPtr; 
real_T **contStatesPtr; 

int_T *numPeriodicContStatesPtr; 
int_T **periodicContStateIndicesPtr; 
real_T **periodicContStateRangesPtr; 

real_T *zcSignalVector; 
uint8_T *zcEventsVector; 
uint8_T *zcSignalAttrib; 
int_T zcSignalVectorLength; 
uint8_T *reserved; 

boolean_T foundContZcEvents; 
boolean_T isAtLeftPostOfContZcEvent; 
boolean_T isAtRightPostOfContZcEvent; 
boolean_T adaptiveZcDetection; 

int_T numZcSignals; 

boolean_T stateProjection; 
boolean_T robustResetMethod; 
boolean_T updateJacobianAtReset; 
boolean_T consistencyChecking; 

ssMatrixType massMatrixType; 
int_T massMatrixNzMax; 
int_T *massMatrixIr; 
int_T *massMatrixJc; 
real_T *massMatrixPr; 

const char_T **errStatusPtr; 

RTWRTModelMethodsInfo *modelMethodsPtr; 
real_T zcThreshold; 
int_T reserved_1; 
int_T consecutiveZCsError; 
boolean_T CTOutputIncnstWithState; 
boolean_T isComputingJacobian; 
slJmBdControl solverJacobianMethodControl; 
int_T ignoredZcDiagnostic; 
int_T maskedZcDiagnostic; 
boolean_T isOutputMethodComputed; 
int_T maxZcBracketingIterations; 
boolean_T isMinorTimeStepWithModeChange; 
int_T maxZcPerStep; 
real_T **zcSignalPtr; 
boolean_T **contStateDisabledPtr; 
boolean_T isContModeFrozen; 
} ssSolverInfo; 


typedef ssSolverInfo RTWSolverInfo; 
# 301
#endif /* RTW_SOLVER_H__ */
# 23 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2.h"
#endif /* Proj2_COMMON_INCLUDES_ */
# 16 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2_types.h"
#ifndef Proj2_types_h_
#define Proj2_types_h_


typedef struct P_Proj2_T_ P_Proj2_T; 


typedef struct tag_RTM_Proj2_T RT_MODEL_Proj2_T; 

#endif /* Proj2_types_h_ */
# 149 "c:\\programdata\\matlab\\supportpackages\\r2025b\\acli\\data\\packages\\arduino\\tools\\avr-gcc\\7.3.0-atmel3.6.1-arduino7\\lib\\gcc\\avr\\7.3.0\\include\\stddef.h" 3
typedef int ptrdiff_t; 
# 216
typedef unsigned size_t; 
# 293
#ifdef _BSD_WCHAR_T_
#undef _BSD_WCHAR_T_
#endif /* _BSD_WCHAR_T_ */
# 328
typedef int wchar_t; 
# 421
#ifndef _GCC_MAX_ALIGN_T
#define _GCC_MAX_ALIGN_T
# 437
typedef 
# 426
struct { 
long long __max_align_ll __attribute((__aligned__(__alignof__(long long)))); 
long double __max_align_ld __attribute((__aligned__(__alignof__(long double)))); 
# 437
} max_align_t; 
#endif /* _GCC_MAX_ALIGN_T */
# 29 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2.h"
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm) ((rtm)->errorStatus)
#endif /* rtmGetErrorStatus */

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm,val) ((rtm)->errorStatus = (val))
#endif /* rtmSetErrorStatus */





typedef 
# 38
struct { 
real_T h[4]; 
real_T h_safe[4]; 
} B_Proj2_T; 
# 54
typedef 
# 44
struct { 
real_T UnitDelay_DSTATE[4]; 
real_T UnitDelay1_DSTATE[4]; 
real_T UnitDelay2_DSTATE[4]; 
real_T DiscreteTimeIntegrator_DSTATE[4]; 
int32_T clockTickCounter; 
uint8_T is_active_c3_Proj2; 
uint8_T is_c3_Proj2; 
uint8_T is_active_c1_Proj2; 
uint8_T is_c1_Proj2; 
} DW_Proj2_T; 


struct P_Proj2_T_ { 
real_T A_total[16]; 


real_T T_dif[4]; 


real_T T_get[4]; 


real_T T_off[4]; 




real_T T_on[4]; 




real_T b[4]; 


real_T c[4]; 


real_T u; 


real_T x0[4]; 


real_T x_Y0; 


real_T DiscreteTimeIntegrator_gainval; 



real_T UnitDelay_InitialCondition; 


real_T UnitDelay1_InitialCondition; 


real_T UnitDelay2_InitialCondition; 


real_T DiscretePulseGenerator_Amp; 


real_T DiscretePulseGenerator_Period; 



real_T DiscretePulseGenerator_Duty; 



real_T DiscretePulseGenerator_PhaseDel; 


}; 


struct tag_RTM_Proj2_T { 
const char_T *volatile errorStatus; 
}; 


extern P_Proj2_T Proj2_P; 


extern B_Proj2_T Proj2_B; 


extern DW_Proj2_T Proj2_DW; 


extern void Proj2_initialize(void); 
extern void Proj2_step(void); 
extern void Proj2_terminate(void); 


extern RT_MODEL_Proj2_T *const Proj2_M; 
extern volatile boolean_T stopRequested; 
extern volatile boolean_T runModel; 
# 175
#endif /* Proj2_h_ */
# 19 "C:\\Users\\Sina\\Desktop\\embedded\\final project\\main\\Proj2_ert_rtw\\Proj2_data.c"
P_Proj2_T Proj2_P = {{(-(1.0)), (0.3), (0.4), (0.3), (0.3), (-(0.8)), (0.5), (0.0), (0.4), (0.5), (-(1.2)), (0.3), (0.3), (0.0), (0.3), (-(0.6))}, {(1.0), (1.0), (1.0), (1.0)}, {(17.0), (16.0), (16.0), (17.0)}, {(20.0), (20.0), (20.0), (20.0)}, {(19.0), (19.0), (19.0), (19.0)}, {(0.3), (0.2), (0.5), (0.4)}, {(9.0), (7.0), (11.0), (7.0)}, (6.0), {(16.5), (16.5), (16.5), (16.5)}, (0.0), (0.01), (0.0), (0.0), (0.0), (1.0), (100.0), (50.0), (0.0)}; 

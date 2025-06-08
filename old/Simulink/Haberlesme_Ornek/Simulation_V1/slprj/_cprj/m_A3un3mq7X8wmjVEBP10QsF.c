/* Include files */

#include "modelInterface.h"
#include "m_A3un3mq7X8wmjVEBP10QsF.h"
#include <string.h>
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 208,   /* lineNo */
  "CarrierSynchronizer",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\CarrierSynchronizer.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "Helper",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\compiled\\+comm\\+internal\\Helper.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 12,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 22,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 23,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 24,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 25,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 31,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 236, /* lineNo */
  "CarrierSynchronizer",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\CarrierSynchronizer.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 93,  /* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 215, /* lineNo */
  "CarrierSynchronizer",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\CarrierSynchronizer.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 222, /* lineNo */
  "CarrierSynchronizer",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\CarrierSynchronizer.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 302, /* lineNo */
  "CarrierSynchronizer",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\CarrierSynchronizer.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 33,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 39,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 48,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 57,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 65,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 412, /* lineNo */
  "CarrierSynchronizer",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\CarrierSynchronizer.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 334, /* lineNo */
  "CarrierSynchronizer",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\CarrierSynchronizer.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 34,  /* lineNo */
  "carrierSyncCore",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\+internal\\+carrierSync\\carrierSyncCore.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 35,  /* lineNo */
  "carrierSyncCore",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\+internal\\+carrierSync\\carrierSyncCore.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 38, /* lineNo */
  "carrierSyncCore",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\+internal\\+carrierSync\\carrierSyncCore.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 138,/* lineNo */
  "carrierSyncCore",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\+internal\\+carrierSync\\carrierSyncCore.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 167,/* lineNo */
  "carrierSyncCore",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\+internal\\+carrierSync\\carrierSyncCore.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 14,    /* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 14,  /* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo d_emlrtMCI = { 13,  /* lineNo */
  37,                                  /* colNo */
  "validateinteger",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateinteger.m"/* pName */
};

static emlrtMCInfo e_emlrtMCI = { 22,  /* lineNo */
  27,                                  /* colNo */
  "validategt",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validategt.m"/* pName */
};

static emlrtMCInfo f_emlrtMCI = { 22,  /* lineNo */
  27,                                  /* colNo */
  "validatele",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatele.m"/* pName */
};

static emlrtMCInfo g_emlrtMCI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtECInfo emlrtECI = { 1,     /* nDims */
  3,                                   /* lineNo */
  4,                                   /* colNo */
  "",                                  /* fName */
  ""                                   /* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  51,                                  /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "carrierSyncCore",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\+internal\\+carrierSync\\carrierSyncCore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  52,                                  /* lineNo */
  37,                                  /* colNo */
  "",                                  /* aName */
  "carrierSyncCore",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\+internal\\+carrierSync\\carrierSyncCore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "carrierSyncCore",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\comm\\comm\\+comm\\+internal\\+carrierSync\\carrierSyncCore.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo db_emlrtRSI = { 3,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 14, /* lineNo */
  "validatenonnan",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 14, /* lineNo */
  "validatefinite",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 14, /* lineNo */
  "validatepositive",                  /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 13, /* lineNo */
  "validateinteger",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateinteger.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 22, /* lineNo */
  "validatele",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatele.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 22, /* lineNo */
  "validategt",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validategt.m"/* pathName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance);
static void cgxe_mdl_derivative(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp, real_T SamplesPerSymbol, real_T
  DampingFactor, real_T NormalizedLoopBandwidth, int32_T u0_size[2]);
static comm_CarrierSynchronizer *CarrierSynchronizer_CarrierSynchronizer
  (comm_CarrierSynchronizer *obj);
static void CarrierSynchronizer_set_SamplesPerSymbol(const emlrtStack *sp,
  comm_CarrierSynchronizer *obj, real_T b_value);
static void CarrierSynchronizer_set_DampingFactor(const emlrtStack *sp,
  comm_CarrierSynchronizer *obj, real_T b_value);
static void CarrierSynchronizer_set_NormalizedLoopBandwidth(const emlrtStack *sp,
  comm_CarrierSynchronizer *obj, real_T b_value);
static void SystemCore_setup(const emlrtStack *sp, comm_CarrierSynchronizer *obj,
  int32_T varargin_1_size[1]);
static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  comm_CarrierSynchronizer *obj);
static void mw__internal__call__reset(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp, real_T SamplesPerSymbol, real_T
  DampingFactor, real_T NormalizedLoopBandwidth);
static void mw__internal__call__step(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp, real_T SamplesPerSymbol, real_T
  DampingFactor, real_T NormalizedLoopBandwidth, creal_T b_u0_data[], int32_T
  u0_size[2], creal_T b_y0_data[], int32_T y0_size[2]);
static void mw__internal__system___fcn(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp, real_T varargin_3, real_T varargin_4,
  real_T varargin_5, creal_T varargin_7_data[], int32_T varargin_7_size[1],
  creal_T varargout_1_data[], int32_T varargout_1_size[1]);
static void CarrierSynchronizer_stepImpl(const emlrtStack *sp,
  comm_CarrierSynchronizer *obj, creal_T input_data[], int32_T input_size[1],
  creal_T output_data[], int32_T output_size[1]);
static creal_T expFunc(real_T in);
static const mxArray *emlrt_marshallOut(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier, comm_CarrierSynchronizer *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, comm_CarrierSynchronizer *y);
static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_wrap y[1]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[8]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[4]);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static creal_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, emlrtMCInfo *location);
static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static int32_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static boolean_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[8]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[4]);
static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static creal_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void carrierSyncCore(const emlrtStack *sp, creal_T input_data[], int32_T
  input_size[1], real_T *loopFiltState, real_T *integFiltState, real_T
  *DDSPreviousInp, creal_T *previousSample, real_T *phase, real_T
  *digitalSynthesizerGain, real_T *integratorGain, real_T *proportionalGain,
  real_T *phaseOffset, creal_T output_data[], int32_T output_size[1], real_T
  phaseEstimate_data[], int32_T phaseEstimate_size[1]);
static void init_simulink_io_address(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  creal_T u_tmp3_data[1247];
  real_T *DampingFactor;
  real_T *NormalizedLoopBandwidth;
  real_T *SamplesPerSymbol;
  int32_T u_tmp3_size[2];
  int32_T loop_ub;
  init_simulink_io_address(moduleInstance);
  NormalizedLoopBandwidth = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 2);
  DampingFactor = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  SamplesPerSymbol = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  u_tmp3_size[0] = (*moduleInstance->u0_sizes)[0];
  u_tmp3_size[1] = (*moduleInstance->u0_sizes)[1];
  loop_ub = (*moduleInstance->u0_sizes)[0] * (*moduleInstance->u0_sizes)[1];
  if (loop_ub - 1 >= 0) {
    memcpy(&u_tmp3_data[0], &(*moduleInstance->u0_data)[0], (uint32_T)loop_ub *
           sizeof(creal_T));
  }

  mw__internal__call__setup(moduleInstance, &st, *SamplesPerSymbol,
    *DampingFactor, *NormalizedLoopBandwidth, u_tmp3_size);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T *DampingFactor;
  real_T *NormalizedLoopBandwidth;
  real_T *SamplesPerSymbol;
  NormalizedLoopBandwidth = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 2);
  DampingFactor = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  SamplesPerSymbol = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrtLicenseCheckR2022a(&st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "communication_toolbox", 2);
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st, *SamplesPerSymbol,
    *DampingFactor, *NormalizedLoopBandwidth);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  creal_T u_tmp3_data[1247];
  creal_T y_tmp0_data[1247];
  real_T *DampingFactor;
  real_T *NormalizedLoopBandwidth;
  real_T *SamplesPerSymbol;
  int32_T u_tmp3_size[2];
  int32_T y_tmp0_size[2];
  int32_T loop_ub;
  NormalizedLoopBandwidth = (real_T *)cgxertGetRunTimeParamInfoData
    (moduleInstance->S, 2);
  DampingFactor = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  SamplesPerSymbol = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S,
    0);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertCheckCurrentInputPortDimensions(moduleInstance->S,
    "comm.CarrierSynchronizer", "stepImpl");
  u_tmp3_size[0] = (*moduleInstance->u0_sizes)[0];
  u_tmp3_size[1] = (*moduleInstance->u0_sizes)[1];
  loop_ub = (*moduleInstance->u0_sizes)[0] * (*moduleInstance->u0_sizes)[1];
  if (loop_ub - 1 >= 0) {
    memcpy(&u_tmp3_data[0], &(*moduleInstance->u0_data)[0], (uint32_T)loop_ub *
           sizeof(creal_T));
  }

  mw__internal__call__step(moduleInstance, &st, *SamplesPerSymbol,
    *DampingFactor, *NormalizedLoopBandwidth, u_tmp3_data, u_tmp3_size,
    y_tmp0_data, y_tmp0_size);
  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 0, 0, y_tmp0_size[0]);
  cgxertSetCurrentOutputPortDimensions(moduleInstance->S, 0, 1, 1);
  if (y_tmp0_size[0] - 1 >= 0) {
    memcpy(&(*moduleInstance->y0_data)[0], &y_tmp0_data[0], (uint32_T)
           y_tmp0_size[0] * sizeof(creal_T));
  }

  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_derivative(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__call__setup(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp, real_T SamplesPerSymbol, real_T
  DampingFactor, real_T NormalizedLoopBandwidth, int32_T u0_size[2])
{
  static char_T correctedValue[4] = { 'A', 'u', 't', 'o' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T u0[1];
  int32_T i;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    CarrierSynchronizer_CarrierSynchronizer(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 4; i++) {
      moduleInstance->sysobj.ModulationPhaseOffset[i] = correctedValue[i];
    }

    st.site = &h_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &h_emlrtRSI;
    CarrierSynchronizer_set_SamplesPerSymbol(&st, &moduleInstance->sysobj,
      SamplesPerSymbol);
    st.site = &i_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &i_emlrtRSI;
    CarrierSynchronizer_set_DampingFactor(&st, &moduleInstance->sysobj,
      DampingFactor);
    st.site = &j_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &j_emlrtRSI;
    CarrierSynchronizer_set_NormalizedLoopBandwidth(&st, &moduleInstance->sysobj,
      NormalizedLoopBandwidth);
  }

  u0[0] = u0_size[0];
  st.site = &k_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj, u0);
}

static comm_CarrierSynchronizer *CarrierSynchronizer_CarrierSynchronizer
  (comm_CarrierSynchronizer *obj)
{
  comm_CarrierSynchronizer *b_obj;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  b_obj = obj;
  b_obj->CustomPhaseOffset = 0.0;
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  d_st.site = &d_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_obj->TunablePropsChanged = false;
  b_obj->CacheInputSizes = false;
  d_st.site = &e_emlrtRSI;
  b_obj->isInitialized = 0;
  return b_obj;
}

static void CarrierSynchronizer_set_SamplesPerSymbol(const emlrtStack *sp,
  comm_CarrierSynchronizer *obj, real_T b_value)
{
  static const int32_T iv[2] = { 1, 23 };

  static const int32_T iv1[2] = { 1, 21 };

  static const int32_T iv10[2] = { 1, 16 };

  static const int32_T iv11[2] = { 1, 16 };

  static const int32_T iv2[2] = { 1, 48 };

  static const int32_T iv3[2] = { 1, 21 };

  static const int32_T iv4[2] = { 1, 46 };

  static const int32_T iv5[2] = { 1, 16 };

  static const int32_T iv6[2] = { 1, 22 };

  static const int32_T iv7[2] = { 1, 46 };

  static const int32_T iv8[2] = { 1, 16 };

  static const int32_T iv9[2] = { 1, 47 };

  static char_T f_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T p_u[47] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'I', 'n', 't', 'e', 'g', 'e', 'r' };

  static char_T j_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T n_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T b_u[23] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T m_u[22] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'I', 'n', 't', 'e', 'g', 'e', 'r' };

  static char_T e_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T i_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T k_u[16] = { 'S', 'a', 'm', 'p', 'l', 'e', 's', 'P', 'e', 'r',
    'S', 'y', 'm', 'b', 'o', 'l' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T o_u[47];
  char_T g_u[46];
  char_T u[23];
  char_T l_u[22];
  char_T c_u[21];
  char_T h_u[16];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &l_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &m_emlrtRSI;
  p = true;
  if (b_value <= 0.0) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 23; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 23, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 48, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 16; i++) {
      h_u[i] = k_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 16, m, &h_u[0]);
    emlrtAssign(&f_y, m);
    c_st.site = &gb_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, c_y, f_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  b_st.site = &m_emlrtRSI;
  p = true;
  if (!((!muDoubleScalarIsInf(b_value)) && (!muDoubleScalarIsNaN(b_value)))) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 21; i++) {
      c_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 46; i++) {
      g_u[i] = j_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &g_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 16; i++) {
      h_u[i] = k_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&b_st, 16, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    c_st.site = &fb_emlrtRSI;
    error(&c_st, b_y, getString(&c_st, message(&c_st, e_y, i_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  b_st.site = &m_emlrtRSI;
  p = true;
  if (muDoubleScalarIsNaN(b_value)) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 21; i++) {
      c_u[i] = i_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 46; i++) {
      g_u[i] = n_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &g_u[0]);
    emlrtAssign(&h_y, m);
    for (i = 0; i < 16; i++) {
      h_u[i] = k_u[i];
    }

    k_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&b_st, 16, m, &h_u[0]);
    emlrtAssign(&k_y, m);
    c_st.site = &eb_emlrtRSI;
    error(&c_st, d_y, getString(&c_st, message(&c_st, h_y, k_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  b_st.site = &m_emlrtRSI;
  p = true;
  if ((!muDoubleScalarIsInf(b_value)) && (!muDoubleScalarIsNaN(b_value)) &&
      (muDoubleScalarFloor(b_value) == b_value)) {
  } else {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 22; i++) {
      l_u[i] = m_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&b_st, 22, m, &l_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 47; i++) {
      o_u[i] = p_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&b_st, 47, m, &o_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 16; i++) {
      h_u[i] = k_u[i];
    }

    l_y = NULL;
    m = emlrtCreateCharArray(2, &iv11[0]);
    emlrtInitCharArrayR2013a(&b_st, 16, m, &h_u[0]);
    emlrtAssign(&l_y, m);
    c_st.site = &hb_emlrtRSI;
    error(&c_st, g_y, getString(&c_st, message(&c_st, j_y, l_y, &d_emlrtMCI),
           &d_emlrtMCI), &d_emlrtMCI);
  }

  obj->SamplesPerSymbol = b_value;
}

static void CarrierSynchronizer_set_DampingFactor(const emlrtStack *sp,
  comm_CarrierSynchronizer *obj, real_T b_value)
{
  static const int32_T iv[2] = { 1, 23 };

  static const int32_T iv1[2] = { 1, 21 };

  static const int32_T iv2[2] = { 1, 48 };

  static const int32_T iv3[2] = { 1, 21 };

  static const int32_T iv4[2] = { 1, 46 };

  static const int32_T iv5[2] = { 1, 13 };

  static const int32_T iv6[2] = { 1, 46 };

  static const int32_T iv7[2] = { 1, 13 };

  static const int32_T iv8[2] = { 1, 13 };

  static char_T f_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T j_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T l_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T b_u[23] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T e_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T i_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T k_u[13] = { 'D', 'a', 'm', 'p', 'i', 'n', 'g', 'F', 'a', 'c',
    't', 'o', 'r' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T d_u[48];
  char_T g_u[46];
  char_T u[23];
  char_T c_u[21];
  char_T h_u[13];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &n_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &m_emlrtRSI;
  p = true;
  if (b_value <= 0.0) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 23; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 23, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 48; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 48, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 13; i++) {
      h_u[i] = k_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 13, m, &h_u[0]);
    emlrtAssign(&f_y, m);
    c_st.site = &gb_emlrtRSI;
    error(&c_st, y, getString(&c_st, message(&c_st, c_y, f_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  b_st.site = &m_emlrtRSI;
  p = true;
  if (!((!muDoubleScalarIsInf(b_value)) && (!muDoubleScalarIsNaN(b_value)))) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 21; i++) {
      c_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 46; i++) {
      g_u[i] = j_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &g_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 13; i++) {
      h_u[i] = k_u[i];
    }

    h_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&b_st, 13, m, &h_u[0]);
    emlrtAssign(&h_y, m);
    c_st.site = &fb_emlrtRSI;
    error(&c_st, b_y, getString(&c_st, message(&c_st, e_y, h_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  b_st.site = &m_emlrtRSI;
  p = true;
  if (muDoubleScalarIsNaN(b_value)) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 21; i++) {
      c_u[i] = i_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 46; i++) {
      g_u[i] = l_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &g_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 13; i++) {
      h_u[i] = k_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&b_st, 13, m, &h_u[0]);
    emlrtAssign(&i_y, m);
    c_st.site = &eb_emlrtRSI;
    error(&c_st, d_y, getString(&c_st, message(&c_st, g_y, i_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  obj->DampingFactor = b_value;
}

static void CarrierSynchronizer_set_NormalizedLoopBandwidth(const emlrtStack *sp,
  comm_CarrierSynchronizer *obj, real_T b_value)
{
  static const int32_T iv[2] = { 1, 17 };

  static const int32_T iv1[2] = { 1, 19 };

  static const int32_T iv10[2] = { 1, 46 };

  static const int32_T iv11[2] = { 1, 23 };

  static const int32_T iv12[2] = { 1, 2 };

  static const int32_T iv13[2] = { 1, 46 };

  static const int32_T iv14[2] = { 1, 23 };

  static const int32_T iv15[2] = { 1, 23 };

  static const int32_T iv2[2] = { 1, 40 };

  static const int32_T iv3[2] = { 1, 23 };

  static const int32_T iv4[2] = { 1, 40 };

  static const int32_T iv5[2] = { 1, 23 };

  static const int32_T iv6[2] = { 1, 21 };

  static const int32_T iv7[2] = { 1, 48 };

  static const int32_T iv8[2] = { 1, 23 };

  static const int32_T iv9[2] = { 1, 21 };

  static char_T m_u[48] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T q_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T s_u[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T f_u[40] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a', 'l',
    'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's',
    ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'S', 'c', 'a', 'l', 'a', 'r' };

  static char_T h_u[23] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'P', 'o', 's', 'i', 't', 'i', 'v', 'e' };

  static char_T i_u[23] = { 'N', 'o', 'r', 'm', 'a', 'l', 'i', 'z', 'e', 'd',
    'L', 'o', 'o', 'p', 'B', 'a', 'n', 'd', 'w', 'i', 'd', 't', 'h' };

  static char_T l_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T o_u[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T e_u[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 't',
    'L', 'e', 's', 's', 'E', 'q', 'u', 'a', 'l' };

  static char_T b_u[17] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o', 't',
    'G', 'r', 'e', 'a', 't', 'e', 'r' };

  static char_T r_u[2] = { '<', '=' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *y;
  int32_T i;
  char_T k_u[48];
  char_T n_u[46];
  char_T d_u[40];
  char_T g_u[23];
  char_T j_u[21];
  char_T c_u[19];
  char_T u[17];
  char_T p_u[2];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &o_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &m_emlrtRSI;
  p = true;
  if (!(b_value > 0.0)) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 17; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 17, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 40; i++) {
      d_u[i] = f_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&b_st, 40, m, &d_u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 23; i++) {
      g_u[i] = i_u[i];
    }

    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&b_st, 23, m, &g_u[0]);
    emlrtAssign(&f_y, m);
    h_y = NULL;
    m = emlrtCreateString1R2022a(&b_st, '>');
    emlrtAssign(&h_y, m);
    k_y = NULL;
    m = emlrtCreateString1R2022a(&b_st, '0');
    emlrtAssign(&k_y, m);
    c_st.site = &jb_emlrtRSI;
    error(&c_st, y, getString(&c_st, b_message(&c_st, c_y, f_y, h_y, k_y,
            &e_emlrtMCI), &e_emlrtMCI), &e_emlrtMCI);
  }

  b_st.site = &m_emlrtRSI;
  p = true;
  if (!(b_value <= 1.0)) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 19; i++) {
      c_u[i] = e_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&b_st, 19, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 40; i++) {
      d_u[i] = f_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&b_st, 40, m, &d_u[0]);
    emlrtAssign(&e_y, m);
    for (i = 0; i < 23; i++) {
      g_u[i] = i_u[i];
    }

    j_y = NULL;
    m = emlrtCreateCharArray(2, &iv8[0]);
    emlrtInitCharArrayR2013a(&b_st, 23, m, &g_u[0]);
    emlrtAssign(&j_y, m);
    for (i = 0; i < 2; i++) {
      p_u[i] = r_u[i];
    }

    o_y = NULL;
    m = emlrtCreateCharArray(2, &iv12[0]);
    emlrtInitCharArrayR2013a(&b_st, 2, m, &p_u[0]);
    emlrtAssign(&o_y, m);
    q_y = NULL;
    m = emlrtCreateString1R2022a(&b_st, '1');
    emlrtAssign(&q_y, m);
    c_st.site = &ib_emlrtRSI;
    error(&c_st, b_y, getString(&c_st, b_message(&c_st, e_y, j_y, o_y, q_y,
            &f_emlrtMCI), &f_emlrtMCI), &f_emlrtMCI);
  }

  b_st.site = &m_emlrtRSI;
  p = true;
  if (b_value <= 0.0) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 23; i++) {
      g_u[i] = h_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&b_st, 23, m, &g_u[0]);
    emlrtAssign(&d_y, m);
    for (i = 0; i < 48; i++) {
      k_u[i] = m_u[i];
    }

    i_y = NULL;
    m = emlrtCreateCharArray(2, &iv7[0]);
    emlrtInitCharArrayR2013a(&b_st, 48, m, &k_u[0]);
    emlrtAssign(&i_y, m);
    for (i = 0; i < 23; i++) {
      g_u[i] = i_u[i];
    }

    n_y = NULL;
    m = emlrtCreateCharArray(2, &iv11[0]);
    emlrtInitCharArrayR2013a(&b_st, 23, m, &g_u[0]);
    emlrtAssign(&n_y, m);
    c_st.site = &gb_emlrtRSI;
    error(&c_st, d_y, getString(&c_st, message(&c_st, i_y, n_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  b_st.site = &m_emlrtRSI;
  p = true;
  if (!((!muDoubleScalarIsInf(b_value)) && (!muDoubleScalarIsNaN(b_value)))) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 21; i++) {
      j_u[i] = l_u[i];
    }

    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv6[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &j_u[0]);
    emlrtAssign(&g_y, m);
    for (i = 0; i < 46; i++) {
      n_u[i] = q_u[i];
    }

    m_y = NULL;
    m = emlrtCreateCharArray(2, &iv10[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &n_u[0]);
    emlrtAssign(&m_y, m);
    for (i = 0; i < 23; i++) {
      g_u[i] = i_u[i];
    }

    r_y = NULL;
    m = emlrtCreateCharArray(2, &iv14[0]);
    emlrtInitCharArrayR2013a(&b_st, 23, m, &g_u[0]);
    emlrtAssign(&r_y, m);
    c_st.site = &fb_emlrtRSI;
    error(&c_st, g_y, getString(&c_st, message(&c_st, m_y, r_y, &b_emlrtMCI),
           &b_emlrtMCI), &b_emlrtMCI);
  }

  b_st.site = &m_emlrtRSI;
  p = true;
  if (muDoubleScalarIsNaN(b_value)) {
    p = false;
  }

  if (!p) {
    for (i = 0; i < 21; i++) {
      j_u[i] = o_u[i];
    }

    l_y = NULL;
    m = emlrtCreateCharArray(2, &iv9[0]);
    emlrtInitCharArrayR2013a(&b_st, 21, m, &j_u[0]);
    emlrtAssign(&l_y, m);
    for (i = 0; i < 46; i++) {
      n_u[i] = s_u[i];
    }

    p_y = NULL;
    m = emlrtCreateCharArray(2, &iv13[0]);
    emlrtInitCharArrayR2013a(&b_st, 46, m, &n_u[0]);
    emlrtAssign(&p_y, m);
    for (i = 0; i < 23; i++) {
      g_u[i] = i_u[i];
    }

    s_y = NULL;
    m = emlrtCreateCharArray(2, &iv15[0]);
    emlrtInitCharArrayR2013a(&b_st, 23, m, &g_u[0]);
    emlrtAssign(&s_y, m);
    c_st.site = &eb_emlrtRSI;
    error(&c_st, l_y, getString(&c_st, message(&c_st, p_y, s_y, &c_emlrtMCI),
           &c_emlrtMCI), &c_emlrtMCI);
  }

  obj->NormalizedLoopBandwidth = b_value;
}

static void SystemCore_setup(const emlrtStack *sp, comm_CarrierSynchronizer *obj,
  int32_T varargin_1_size[1])
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T b_b[4] = { 'A', 'u', 't', 'o' };

  cell_wrap varSizes[1];
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T PhaseRecoveryGain;
  real_T PhaseRecoveryLoopBandwidth;
  real_T d;
  int32_T ret;
  char_T u[51];
  char_T c_u[5];
  char_T a[4];
  char_T b[4];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->isInitialized != 0) {
    for (ret = 0; ret < 51; ret++) {
      u[ret] = b_u[ret];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (ret = 0; ret < 51; ret++) {
      u[ret] = b_u[ret];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (ret = 0; ret < 5; ret++) {
      c_u[ret] = d_u[ret];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &g_emlrtMCI),
           &g_emlrtMCI), &g_emlrtMCI);
  }

  obj->isInitialized = 1;
  st.site = &e_emlrtRSI;
  varSizes[0].f1[0] = (uint32_T)varargin_1_size[0];
  varSizes[0].f1[1] = 1U;
  for (ret = 0; ret < 6; ret++) {
    varSizes[0].f1[ret + 2] = 1U;
  }

  obj->inputVarSize[0] = varSizes[0];
  st.site = &e_emlrtRSI;
  obj->pPhase = 0.0;
  obj->pPreviousSample.re = 0.0;
  obj->pPreviousSample.im = 0.0;
  b_st.site = &p_emlrtRSI;
  PhaseRecoveryLoopBandwidth = obj->NormalizedLoopBandwidth *
    obj->SamplesPerSymbol;
  PhaseRecoveryGain = obj->SamplesPerSymbol;
  PhaseRecoveryLoopBandwidth /= (obj->DampingFactor + 0.25 / obj->DampingFactor)
    * obj->SamplesPerSymbol;
  d = (2.0 * obj->DampingFactor * PhaseRecoveryLoopBandwidth + 1.0) +
    PhaseRecoveryLoopBandwidth * PhaseRecoveryLoopBandwidth;
  obj->pProportionalGain = 4.0 * obj->DampingFactor * PhaseRecoveryLoopBandwidth
    / d / (2.0 * PhaseRecoveryGain);
  obj->pIntegratorGain = 4.0 * PhaseRecoveryLoopBandwidth *
    PhaseRecoveryLoopBandwidth / d / (2.0 * PhaseRecoveryGain);
  for (ret = 0; ret < 4; ret++) {
    a[ret] = obj->ModulationPhaseOffset[ret];
  }

  for (ret = 0; ret < 4; ret++) {
    b[ret] = b_b[ret];
  }

  ret = memcmp(&a[0], &b[0], 4);
  if (ret == 0) {
    obj->pActualPhaseOffset = 0.0;
  } else {
    obj->pActualPhaseOffset = obj->CustomPhaseOffset - 0.78539816339744828;
  }

  obj->pDigitalSynthesizerGain = -1.0;
  st.site = &e_emlrtRSI;
  SystemCore_checkTunablePropChange(&st, obj);
  obj->TunablePropsChanged = false;
}

static void SystemCore_checkTunablePropChange(const emlrtStack *sp,
  comm_CarrierSynchronizer *obj)
{
  static const int32_T iv[2] = { 1, 44 };

  static const int32_T iv1[2] = { 1, 44 };

  static char_T b_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[44];
  st.prev = sp;
  st.tls = sp->tls;
  if (obj->TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 44, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 44; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 44, m, &u[0]);
    emlrtAssign(&b_y, m);
    st.site = &e_emlrtRSI;
    error(&st, y, getString(&st, c_message(&st, b_y, &g_emlrtMCI), &g_emlrtMCI),
          &g_emlrtMCI);
  }
}

static void mw__internal__call__reset(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp, real_T SamplesPerSymbol, real_T
  DampingFactor, real_T NormalizedLoopBandwidth)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 44 };

  static const int32_T iv2[2] = { 1, 45 };

  static const int32_T iv3[2] = { 1, 44 };

  static const int32_T iv4[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  static char_T f_u[5] = { 'r', 'e', 's', 'e', 't' };

  static char_T correctedValue[4] = { 'A', 'u', 't', 'o' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[44];
  char_T e_u[5];
  boolean_T tunablePropChangedBeforeResetImpl;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    CarrierSynchronizer_CarrierSynchronizer(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i = 0; i < 4; i++) {
      moduleInstance->sysobj.ModulationPhaseOffset[i] = correctedValue[i];
    }

    st.site = &h_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &h_emlrtRSI;
    CarrierSynchronizer_set_SamplesPerSymbol(&st, &moduleInstance->sysobj,
      SamplesPerSymbol);
    st.site = &i_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &i_emlrtRSI;
    CarrierSynchronizer_set_DampingFactor(&st, &moduleInstance->sysobj,
      DampingFactor);
    st.site = &j_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &j_emlrtRSI;
    CarrierSynchronizer_set_NormalizedLoopBandwidth(&st, &moduleInstance->sysobj,
      NormalizedLoopBandwidth);
  }

  st.site = &q_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&c_y, m);
    for (i = 0; i < 5; i++) {
      e_u[i] = f_u[i];
    }

    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &e_u[0]);
    emlrtAssign(&e_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, c_y, e_y, &g_emlrtMCI),
           &g_emlrtMCI), &g_emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = moduleInstance->sysobj.TunablePropsChanged;
  if (moduleInstance->sysobj.isInitialized == 1) {
    b_st.site = &e_emlrtRSI;
    moduleInstance->sysobj.pLoopFilterState = 0.0;
    moduleInstance->sysobj.pIntegFilterState = 0.0;
    moduleInstance->sysobj.pDDSPreviousInput = 0.0;
    moduleInstance->sysobj.pPhase = 0.0;
    moduleInstance->sysobj.pPreviousSample.re = 0.0;
    moduleInstance->sysobj.pPreviousSample.im = 0.0;
  }

  if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
      moduleInstance->sysobj.TunablePropsChanged) {
    for (i = 0; i < 44; i++) {
      c_u[i] = d_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &c_u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 44; i++) {
      c_u[i] = d_u[i];
    }

    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &c_u[0]);
    emlrtAssign(&d_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, b_y, getString(&b_st, c_message(&b_st, d_y, &g_emlrtMCI),
           &g_emlrtMCI), &g_emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp, real_T SamplesPerSymbol, real_T
  DampingFactor, real_T NormalizedLoopBandwidth, creal_T b_u0_data[], int32_T
  u0_size[2], creal_T b_y0_data[], int32_T y0_size[2])
{
  emlrtStack st;
  creal_T c_y0_data[1247];
  int32_T b_y0_size[1];
  int32_T u0[1];
  st.prev = sp;
  st.tls = sp->tls;
  u0[0] = u0_size[0];
  st.site = &db_emlrtRSI;
  mw__internal__system___fcn(moduleInstance, &st, SamplesPerSymbol,
    DampingFactor, NormalizedLoopBandwidth, b_u0_data, u0, c_y0_data, b_y0_size);
  emlrtDimSizeGeqCheckR2012b(1247, b_y0_size[0], &emlrtECI, (void *)sp);
  y0_size[0] = b_y0_size[0];
  y0_size[1] = 1;
  if (b_y0_size[0] - 1 >= 0) {
    memcpy(&b_y0_data[0], &c_y0_data[0], (uint32_T)b_y0_size[0] * sizeof(creal_T));
  }
}

static void mw__internal__system___fcn(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp, real_T varargin_3, real_T varargin_4,
  real_T varargin_5, creal_T varargin_7_data[], int32_T varargin_7_size[1],
  creal_T varargout_1_data[], int32_T varargout_1_size[1])
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T correctedValue[4] = { 'A', 'u', 't', 'o' };

  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  cell_wrap varSizes[1];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T PhaseRecoveryGain;
  real_T PhaseRecoveryLoopBandwidth;
  real_T d;
  int32_T ret;
  int16_T inSize[8];
  char_T u[45];
  char_T b[4];
  char_T c_u[4];
  boolean_T exitg1;
  boolean_T flag;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &f_emlrtRSI;
    CarrierSynchronizer_CarrierSynchronizer(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    st.site = &g_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (ret = 0; ret < 4; ret++) {
      moduleInstance->sysobj.ModulationPhaseOffset[ret] = correctedValue[ret];
    }

    st.site = &h_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &h_emlrtRSI;
    CarrierSynchronizer_set_SamplesPerSymbol(&st, &moduleInstance->sysobj,
      varargin_3);
    st.site = &i_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &i_emlrtRSI;
    CarrierSynchronizer_set_DampingFactor(&st, &moduleInstance->sysobj,
      varargin_4);
    st.site = &j_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &j_emlrtRSI;
    CarrierSynchronizer_set_NormalizedLoopBandwidth(&st, &moduleInstance->sysobj,
      varargin_5);
  }

  if (moduleInstance->sysobj.SamplesPerSymbol != varargin_3) {
    st.site = &r_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &r_emlrtRSI;
    CarrierSynchronizer_set_SamplesPerSymbol(&st, &moduleInstance->sysobj,
      varargin_3);
  }

  if (moduleInstance->sysobj.DampingFactor != varargin_4) {
    st.site = &s_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &s_emlrtRSI;
    CarrierSynchronizer_set_DampingFactor(&st, &moduleInstance->sysobj,
      varargin_4);
  }

  if (moduleInstance->sysobj.NormalizedLoopBandwidth != varargin_5) {
    st.site = &t_emlrtRSI;
    b_st.site = &d_emlrtRSI;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    st.site = &t_emlrtRSI;
    CarrierSynchronizer_set_NormalizedLoopBandwidth(&st, &moduleInstance->sysobj,
      varargin_5);
  }

  st.site = &u_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (ret = 0; ret < 45; ret++) {
      u[ret] = b_u[ret];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (ret = 0; ret < 45; ret++) {
      u[ret] = b_u[ret];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (ret = 0; ret < 4; ret++) {
      c_u[ret] = d_u[ret];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &e_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &g_emlrtMCI),
           &g_emlrtMCI), &g_emlrtMCI);
  }

  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &e_emlrtRSI;
    c_st.site = &e_emlrtRSI;
    SystemCore_setup(&c_st, &moduleInstance->sysobj, varargin_7_size);
    c_st.site = &e_emlrtRSI;
    moduleInstance->sysobj.pLoopFilterState = 0.0;
    moduleInstance->sysobj.pIntegFilterState = 0.0;
    moduleInstance->sysobj.pDDSPreviousInput = 0.0;
    moduleInstance->sysobj.pPhase = 0.0;
    moduleInstance->sysobj.pPreviousSample.re = 0.0;
    moduleInstance->sysobj.pPreviousSample.im = 0.0;
  }

  b_st.site = &e_emlrtRSI;
  if (!moduleInstance->sysobj.CacheInputSizes) {
    moduleInstance->sysobj.CacheInputSizes = true;
    c_st.site = &e_emlrtRSI;
    varSizes[0].f1[0] = (uint32_T)varargin_7_size[0];
    varSizes[0].f1[1] = 1U;
    for (ret = 0; ret < 6; ret++) {
      varSizes[0].f1[ret + 2] = 1U;
    }

    moduleInstance->sysobj.inputVarSize[0] = varSizes[0];
  }

  b_st.site = &e_emlrtRSI;
  if (moduleInstance->sysobj.TunablePropsChanged) {
    moduleInstance->sysobj.TunablePropsChanged = false;
    c_st.site = &e_emlrtRSI;
    d_st.site = &v_emlrtRSI;
    PhaseRecoveryLoopBandwidth = moduleInstance->sysobj.NormalizedLoopBandwidth *
      moduleInstance->sysobj.SamplesPerSymbol;
    PhaseRecoveryGain = moduleInstance->sysobj.SamplesPerSymbol;
    PhaseRecoveryLoopBandwidth /= (moduleInstance->sysobj.DampingFactor + 0.25 /
      moduleInstance->sysobj.DampingFactor) *
      moduleInstance->sysobj.SamplesPerSymbol;
    d = (2.0 * moduleInstance->sysobj.DampingFactor * PhaseRecoveryLoopBandwidth
         + 1.0) + PhaseRecoveryLoopBandwidth * PhaseRecoveryLoopBandwidth;
    moduleInstance->sysobj.pProportionalGain = 4.0 *
      moduleInstance->sysobj.DampingFactor * PhaseRecoveryLoopBandwidth / d /
      (2.0 * PhaseRecoveryGain);
    moduleInstance->sysobj.pIntegratorGain = 4.0 * PhaseRecoveryLoopBandwidth *
      PhaseRecoveryLoopBandwidth / d / (2.0 * PhaseRecoveryGain);
    for (ret = 0; ret < 4; ret++) {
      c_u[ret] = moduleInstance->sysobj.ModulationPhaseOffset[ret];
    }

    for (ret = 0; ret < 4; ret++) {
      b[ret] = correctedValue[ret];
    }

    ret = memcmp(&c_u[0], &b[0], 4);
    if (ret == 0) {
      moduleInstance->sysobj.pActualPhaseOffset = 0.0;
    } else {
      moduleInstance->sysobj.pActualPhaseOffset =
        moduleInstance->sysobj.CustomPhaseOffset - 0.78539816339744828;
    }
  }

  b_st.site = &e_emlrtRSI;
  inSize[0] = (int16_T)varargin_7_size[0];
  inSize[1] = 1;
  for (ret = 0; ret < 6; ret++) {
    inSize[ret + 2] = 1;
  }

  ret = 0;
  exitg1 = false;
  while ((!exitg1) && (ret < 8)) {
    if (moduleInstance->sysobj.inputVarSize[0].f1[ret] != (uint32_T)inSize[ret])
    {
      for (ret = 0; ret < 8; ret++) {
        moduleInstance->sysobj.inputVarSize[0].f1[ret] = (uint32_T)inSize[ret];
      }

      exitg1 = true;
    } else {
      ret++;
    }
  }

  b_st.site = &e_emlrtRSI;
  CarrierSynchronizer_stepImpl(&b_st, &moduleInstance->sysobj, varargin_7_data,
    varargin_7_size, varargout_1_data, varargout_1_size);
  b_st.site = &e_emlrtRSI;
  SystemCore_checkTunablePropChange(&b_st, &moduleInstance->sysobj);
}

static void CarrierSynchronizer_stepImpl(const emlrtStack *sp,
  comm_CarrierSynchronizer *obj, creal_T input_data[], int32_T input_size[1],
  creal_T output_data[], int32_T output_size[1])
{
  emlrtStack st;
  creal_T previousSample;
  real_T phaseEstimate_data[1247];
  real_T DDSPreviousInp;
  real_T digitalSynthesizerGain;
  real_T integFiltState;
  real_T integratorGain;
  real_T loopFiltState;
  real_T phase;
  real_T phaseOffset;
  real_T proportionalGain;
  int32_T phaseEstimate_size[1];
  st.prev = sp;
  st.tls = sp->tls;
  loopFiltState = obj->pLoopFilterState;
  integFiltState = obj->pIntegFilterState;
  DDSPreviousInp = obj->pDDSPreviousInput;
  previousSample.re = obj->pPreviousSample.re;
  previousSample.im = obj->pPreviousSample.im;
  phase = obj->pPhase;
  digitalSynthesizerGain = obj->pDigitalSynthesizerGain;
  integratorGain = obj->pIntegratorGain;
  proportionalGain = obj->pProportionalGain;
  phaseOffset = obj->pActualPhaseOffset;
  st.site = &w_emlrtRSI;
  carrierSyncCore(&st, input_data, input_size, &loopFiltState, &integFiltState,
                  &DDSPreviousInp, &previousSample, &phase,
                  &digitalSynthesizerGain, &integratorGain, &proportionalGain,
                  &phaseOffset, output_data, output_size, phaseEstimate_data,
                  phaseEstimate_size);
  obj->pLoopFilterState = loopFiltState;
  obj->pIntegFilterState = integFiltState;
  obj->pDDSPreviousInput = DDSPreviousInp;
  obj->pPreviousSample.re = previousSample.re;
  obj->pPreviousSample.im = previousSample.im;
  obj->pPhase = phase;
  obj->pDigitalSynthesizerGain = digitalSynthesizerGain;
  obj->pIntegratorGain = integratorGain;
  obj->pProportionalGain = proportionalGain;
  obj->pActualPhaseOffset = phaseOffset;
}

static creal_T expFunc(real_T in)
{
  creal_T val;
  real_T cosVal;
  real_T sinVal;
  sinVal = sin(in);
  cosVal = cos(in);
  val.re = cosVal;
  val.im = sinVal;
  return val;
}

static const mxArray *emlrt_marshallOut(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv1[2] = { 1, 8 };

  static const int32_T iv2[2] = { 1, 4 };

  static const int32_T iv3[2] = { 1, 0 };

  static const char_T *sv[19] = { "isInitialized", "TunablePropsChanged",
    "inputVarSize", "CacheInputSizes", "ModulationPhaseOffset",
    "CustomPhaseOffset", "SamplesPerSymbol", "DampingFactor",
    "NormalizedLoopBandwidth", "pProportionalGain", "pIntegratorGain",
    "pDigitalSynthesizerGain", "pPhase", "pPreviousSample", "pActualPhaseOffset",
    "pLoopFilterState", "pIntegFilterState", "pDDSPreviousInput",
    "pPreviousHalfSymbol" };

  static const char_T *sv1[1] = { "f1" };

  cell_wrap c_u[1];
  const cell_wrap *r;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *t_y;
  const mxArray *u_y;
  const mxArray *v_y;
  const mxArray *w_y;
  const mxArray *y;
  creal_T *r1;
  real_T f_u;
  real_T u_im;
  int32_T iv[1];
  int32_T i;
  int32_T u;
  uint32_T d_u[8];
  uint32_T *pData;
  char_T e_u[4];
  boolean_T b_u;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 19, (const char_T **)&sv[0]));
  u = moduleInstance->sysobj.isInitialized;
  c_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, "isInitialized", c_y, 0);
  b_u = moduleInstance->sysobj.TunablePropsChanged;
  d_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(b_y, 0, "TunablePropsChanged", d_y, 1);
  c_u[0] = moduleInstance->sysobj.inputVarSize[0];
  e_y = NULL;
  iv[0] = 1;
  emlrtAssign(&e_y, emlrtCreateStructArray(1, &iv[0], 1, (const char_T **)&sv1[0]));
  r = &c_u[0];
  for (u = 0; u < 8; u++) {
    d_u[u] = r->f1[u];
  }

  f_y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv1[0], mxUINT32_CLASS, mxREAL);
  pData = (uint32_T *)emlrtMxGetData(m);
  u = 0;
  for (i = 0; i < 8; i++) {
    pData[u] = d_u[i];
    u++;
  }

  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(e_y, 0, "f1", f_y, 0);
  emlrtSetFieldR2017b(b_y, 0, "inputVarSize", e_y, 2);
  b_u = moduleInstance->sysobj.CacheInputSizes;
  g_y = NULL;
  m = emlrtCreateLogicalScalar(b_u);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(b_y, 0, "CacheInputSizes", g_y, 3);
  for (u = 0; u < 4; u++) {
    e_u[u] = moduleInstance->sysobj.ModulationPhaseOffset[u];
  }

  h_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 4, m, &e_u[0]);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(b_y, 0, "ModulationPhaseOffset", h_y, 4);
  f_u = moduleInstance->sysobj.CustomPhaseOffset;
  i_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(b_y, 0, "CustomPhaseOffset", i_y, 5);
  f_u = moduleInstance->sysobj.SamplesPerSymbol;
  j_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(b_y, 0, "SamplesPerSymbol", j_y, 6);
  f_u = moduleInstance->sysobj.DampingFactor;
  k_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(b_y, 0, "DampingFactor", k_y, 7);
  f_u = moduleInstance->sysobj.NormalizedLoopBandwidth;
  l_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&l_y, m);
  emlrtSetFieldR2017b(b_y, 0, "NormalizedLoopBandwidth", l_y, 8);
  f_u = moduleInstance->sysobj.pProportionalGain;
  m_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&m_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pProportionalGain", m_y, 9);
  f_u = moduleInstance->sysobj.pIntegratorGain;
  n_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&n_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pIntegratorGain", n_y, 10);
  f_u = moduleInstance->sysobj.pDigitalSynthesizerGain;
  o_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&o_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pDigitalSynthesizerGain", o_y, 11);
  f_u = moduleInstance->sysobj.pPhase;
  p_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&p_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pPhase", p_y, 12);
  f_u = moduleInstance->sysobj.pPreviousSample.re;
  u_im = moduleInstance->sysobj.pPreviousSample.im;
  q_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxDOUBLE_CLASS, mxCOMPLEX);
  r1 = (creal_T *)emlrtMxGetData(m);
  r1->re = f_u;
  r1->im = u_im;
  emlrtFreeImagIfZero(m);
  emlrtAssign(&q_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pPreviousSample", q_y, 13);
  f_u = moduleInstance->sysobj.pActualPhaseOffset;
  r_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&r_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pActualPhaseOffset", r_y, 14);
  f_u = moduleInstance->sysobj.pLoopFilterState;
  s_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&s_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pLoopFilterState", s_y, 15);
  f_u = moduleInstance->sysobj.pIntegFilterState;
  t_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&t_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pIntegFilterState", t_y, 16);
  f_u = moduleInstance->sysobj.pDDSPreviousInput;
  u_y = NULL;
  m = emlrtCreateDoubleScalar(f_u);
  emlrtAssign(&u_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pDDSPreviousInput", u_y, 17);
  v_y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv3[0], mxDOUBLE_CLASS,
    mxCOMPLEX);
  emlrtAssign(&v_y, m);
  emlrtSetFieldR2017b(b_y, 0, "pPreviousHalfSymbol", v_y, 18);
  emlrtSetCell(y, 0, b_y);
  w_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&w_y, m);
  emlrtSetCell(y, 1, w_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *st;
  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance, &b_st));
  return st;
}

static void emlrt_marshallIn(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  emlrtMsgIdentifier thisId;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  thisId.fIdentifier = "sysobj";
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((void *)sp, &thisId, u, 0)),
                     "sysobj", &moduleInstance->sysobj);
  thisId.fIdentifier = "sysobj_not_empty";
  moduleInstance->sysobj_not_empty = l_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell((void *)sp, &thisId, u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier, comm_CarrierSynchronizer *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  c_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, comm_CarrierSynchronizer *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[19] = { "isInitialized", "TunablePropsChanged",
    "inputVarSize", "CacheInputSizes", "ModulationPhaseOffset",
    "CustomPhaseOffset", "SamplesPerSymbol", "DampingFactor",
    "NormalizedLoopBandwidth", "pProportionalGain", "pIntegratorGain",
    "pDigitalSynthesizerGain", "pPhase", "pPreviousSample", "pActualPhaseOffset",
    "pLoopFilterState", "pIntegFilterState", "pDDSPreviousInput",
    "pPreviousHalfSymbol" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 19, (const char_T **)
    &fieldNames[0], 0U, (const void *)&dims);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 1, "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "inputVarSize";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
    2, "inputVarSize")), &thisId, y->inputVarSize);
  thisId.fIdentifier = "CacheInputSizes";
  y->CacheInputSizes = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 3, "CacheInputSizes")), &thisId);
  thisId.fIdentifier = "ModulationPhaseOffset";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
    4, "ModulationPhaseOffset")), &thisId, y->ModulationPhaseOffset);
  thisId.fIdentifier = "CustomPhaseOffset";
  y->CustomPhaseOffset = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 5, "CustomPhaseOffset")), &thisId);
  thisId.fIdentifier = "SamplesPerSymbol";
  y->SamplesPerSymbol = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 6, "SamplesPerSymbol")), &thisId);
  thisId.fIdentifier = "DampingFactor";
  y->DampingFactor = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 7, "DampingFactor")), &thisId);
  thisId.fIdentifier = "NormalizedLoopBandwidth";
  y->NormalizedLoopBandwidth = i_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "NormalizedLoopBandwidth")),
    &thisId);
  thisId.fIdentifier = "pProportionalGain";
  y->pProportionalGain = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 9, "pProportionalGain")), &thisId);
  thisId.fIdentifier = "pIntegratorGain";
  y->pIntegratorGain = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 10, "pIntegratorGain")), &thisId);
  thisId.fIdentifier = "pDigitalSynthesizerGain";
  y->pDigitalSynthesizerGain = i_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "pDigitalSynthesizerGain")),
    &thisId);
  thisId.fIdentifier = "pPhase";
  y->pPhase = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 12, "pPhase")), &thisId);
  thisId.fIdentifier = "pPreviousSample";
  y->pPreviousSample = j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 13, "pPreviousSample")), &thisId);
  thisId.fIdentifier = "pActualPhaseOffset";
  y->pActualPhaseOffset = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 14, "pActualPhaseOffset")), &thisId);
  thisId.fIdentifier = "pLoopFilterState";
  y->pLoopFilterState = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 15, "pLoopFilterState")), &thisId);
  thisId.fIdentifier = "pIntegFilterState";
  y->pIntegFilterState = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 16, "pIntegFilterState")), &thisId);
  thisId.fIdentifier = "pDDSPreviousInput";
  y->pDDSPreviousInput = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((emlrtConstCTX)sp, u, 0, 17, "pDDSPreviousInput")), &thisId);
  thisId.fIdentifier = "pPreviousHalfSymbol";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
    18, "pPreviousHalfSymbol")), &thisId);
  emlrtDestroyArray(&u);
}

static int32_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, cell_wrap y[1])
{
  static const int32_T dims[1] = { 1 };

  static const char_T *fieldNames[1] = { "f1" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 1, (const char_T **)
    &fieldNames[0], 1U, (const void *)&dims[0]);
  thisId.fIdentifier = "f1";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
    0, "f1")), &thisId, y[0].f1);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, uint32_T y[8])
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[4])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static creal_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  creal_T y;
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static boolean_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
  const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId);
  emlrtDestroyArray(&nullptr);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 2, &pArrays[0],
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "getString",
    true, location);
}

static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 2, &pArrays[0], "error",
                        true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, const mxArray *m3, const mxArray *m4, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 4, &pArrays[0],
    "message", true, location);
}

static const mxArray *c_message(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 1, &pArray, "message",
    true, location);
}

static int32_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  int32_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "int32", false, 0U, (
    const void *)&dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "logical", false, 0U, (
    const void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, uint32_T ret[8])
{
  static const int32_T dims[2] = { 1, 8 };

  int32_T i;
  uint32_T (*r)[8];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "uint32", false, 2U, (
    const void *)&dims[0]);
  r = (uint32_T (*)[8])emlrtMxGetData(src);
  for (i = 0; i < 8; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[4])
{
  static const int32_T dims[2] = { 1, 4 };

  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U, (
    const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 4);
  emlrtDestroyArray(&src);
}

static real_T q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U, (
    const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static creal_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  creal_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", true, 0U, (
    const void *)&dims);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, &ret, 8, true);
  emlrtDestroyArray(&src);
  return ret;
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2] = { 1, 0 };

  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", true, 2U, (
    const void *)&dims[0]);
  emlrtImportArrayR2015b((emlrtConstCTX)sp, src, NULL, 8, true);
  emlrtDestroyArray(&src);
}

static void carrierSyncCore(const emlrtStack *sp, creal_T input_data[], int32_T
  input_size[1], real_T *loopFiltState, real_T *integFiltState, real_T
  *DDSPreviousInp, creal_T *previousSample, real_T *phase, real_T
  *digitalSynthesizerGain, real_T *integratorGain, real_T *proportionalGain,
  real_T *phaseOffset, creal_T output_data[], int32_T output_size[1], real_T
  phaseEstimate_data[], int32_T phaseEstimate_size[1])
{
  emlrtStack b_st;
  emlrtStack st;
  creal_T phaseCorrection_data[1247];
  creal_T b;
  creal_T b_output_data;
  real_T DDSOut;
  real_T loopFiltOut;
  real_T phErr;
  int32_T i;
  int32_T loop_ub;
  int32_T phaseCorrection_size_idx_0;
  output_size[0] = input_size[0];
  loop_ub = input_size[0];
  phaseCorrection_size_idx_0 = input_size[0];
  for (i = 0; i < loop_ub; i++) {
    output_data[i].re = 0.0;
    output_data[i].im = 0.0;
    phaseCorrection_data[i].re = 0.0;
    phaseCorrection_data[i].im = 0.0;
  }

  i = input_size[0] - 1;
  for (loop_ub = 0; loop_ub <= i; loop_ub++) {
    st.site = &x_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    loopFiltOut = signDouble(previousSample->re);
    st.site = &y_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    DDSOut = signDouble(previousSample->im);
    phErr = loopFiltOut * previousSample->im - DDSOut * previousSample->re;
    st.site = &ab_emlrtRSI;
    b = expFunc(*phase);
    output_data[emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, output_size[0],
      &c_emlrtBCI, (emlrtConstCTX)sp) - 1].re =
      input_data[emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, input_size[0],
      &c_emlrtBCI, (emlrtConstCTX)sp) - 1].re * b.re -
      input_data[emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, input_size[0],
      &c_emlrtBCI, (emlrtConstCTX)sp) - 1].im * b.im;
    output_data[emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, output_size[0],
      &c_emlrtBCI, (emlrtConstCTX)sp) - 1].im =
      input_data[emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, input_size[0],
      &c_emlrtBCI, (emlrtConstCTX)sp) - 1].re * b.im +
      input_data[emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, input_size[0],
      &c_emlrtBCI, (emlrtConstCTX)sp) - 1].im * b.re;
    loopFiltOut = phErr * *integratorGain + *loopFiltState;
    *loopFiltState = loopFiltOut;
    DDSOut = *DDSPreviousInp + *integFiltState;
    *integFiltState = DDSOut;
    *DDSPreviousInp = phErr * *proportionalGain + loopFiltOut;
    *phase = *digitalSynthesizerGain * DDSOut;
    phaseCorrection_data[emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1,
      phaseCorrection_size_idx_0, &emlrtBCI, (emlrtConstCTX)sp) - 1].re = *phase;
    phaseCorrection_data[emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1,
      phaseCorrection_size_idx_0, &emlrtBCI, (emlrtConstCTX)sp) - 1].im = 0.0;
    previousSample->re = output_data[emlrtDynamicBoundsCheckR2012b(loop_ub + 1,
      1, output_size[0], &b_emlrtBCI, (emlrtConstCTX)sp) - 1].re;
    previousSample->im = output_data[emlrtDynamicBoundsCheckR2012b(loop_ub + 1,
      1, output_size[0], &b_emlrtBCI, (emlrtConstCTX)sp) - 1].im;
  }

  st.site = &bb_emlrtRSI;
  b = expFunc(*phaseOffset);
  loop_ub = input_size[0];
  phaseEstimate_size[0] = input_size[0];
  for (i = 0; i < loop_ub; i++) {
    b_output_data = output_data[i];
    loopFiltOut = b_output_data.re * b.im + b_output_data.im * b.re;
    b_output_data.re = b_output_data.re * b.re - b_output_data.im * b.im;
    b_output_data.im = loopFiltOut;
    phaseEstimate_data[i] = -(phaseCorrection_data[i].re + *phaseOffset);
    output_data[i] = b_output_data;
  }
}

static void init_simulink_io_address(InstanceStruct_A3un3mq7X8wmjVEBP10QsF
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0_data = (creal_T (*)[1247])cgxertGetInputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->u0_sizes = (int32_T (*)[2])cgxertGetCurrentInputPortDimensions
    (moduleInstance->S, 0);
  moduleInstance->y0_data = (creal_T (*)[1247])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->y0_sizes = (int32_T (*)[2])
    cgxertGetCurrentOutputPortDimensions(moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_A3un3mq7X8wmjVEBP10QsF(SimStruct *S, int_T tid)
{
  InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance =
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_A3un3mq7X8wmjVEBP10QsF(SimStruct *S)
{
  InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance =
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_A3un3mq7X8wmjVEBP10QsF(SimStruct *S, int_T tid)
{
  InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance =
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlDerivatives_A3un3mq7X8wmjVEBP10QsF(SimStruct *S)
{
  InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance =
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_derivative(moduleInstance);
}

static mxArray* getSimState_A3un3mq7X8wmjVEBP10QsF(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance =
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_A3un3mq7X8wmjVEBP10QsF(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance =
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_A3un3mq7X8wmjVEBP10QsF(SimStruct *S)
{
  InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance =
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_A3un3mq7X8wmjVEBP10QsF(SimStruct *S)
{
  InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance =
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_A3un3mq7X8wmjVEBP10QsF(SimStruct *S)
{
  InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance =
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_A3un3mq7X8wmjVEBP10QsF(SimStruct *S)
{
  InstanceStruct_A3un3mq7X8wmjVEBP10QsF *moduleInstance =
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF *)calloc(1, sizeof
    (InstanceStruct_A3un3mq7X8wmjVEBP10QsF));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_A3un3mq7X8wmjVEBP10QsF);
  ssSetmdlInitializeConditions(S, mdlInitialize_A3un3mq7X8wmjVEBP10QsF);
  ssSetmdlUpdate(S, mdlUpdate_A3un3mq7X8wmjVEBP10QsF);
  ssSetmdlDerivatives(S, mdlDerivatives_A3un3mq7X8wmjVEBP10QsF);
  ssSetmdlTerminate(S, mdlTerminate_A3un3mq7X8wmjVEBP10QsF);
  ssSetmdlEnable(S, mdlEnable_A3un3mq7X8wmjVEBP10QsF);
  ssSetmdlDisable(S, mdlDisable_A3un3mq7X8wmjVEBP10QsF);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_A3un3mq7X8wmjVEBP10QsF(SimStruct *S)
{
}

void method_dispatcher_A3un3mq7X8wmjVEBP10QsF(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_A3un3mq7X8wmjVEBP10QsF(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_A3un3mq7X8wmjVEBP10QsF(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_A3un3mq7X8wmjVEBP10QsF(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_A3un3mq7X8wmjVEBP10QsF(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: A3un3mq7X8wmjVEBP10QsF.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_A3un3mq7X8wmjVEBP10QsF_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxArray * elem_11;
  mxArray * elem_12;
  mxArray * elem_13;
  mxArray * elem_14;
  mxArray * elem_15;
  mxArray * elem_16;
  mxArray * elem_17;
  mxArray * elem_18;
  mxArray * elem_19;
  mxArray * elem_20;
  mxArray * elem_21;
  mxArray * elem_22;
  mxArray * elem_23;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(1,4);
  elem_4 = mxCreateString("addIncludeFiles");
  mxSetCell(elem_3,0,elem_4);
  elem_5 = mxCreateCellMatrix(1,3);
  elem_6 = mxCreateString("<string.h>");
  mxSetCell(elem_5,0,elem_6);
  elem_7 = mxCreateString("math.h");
  mxSetCell(elem_5,1,elem_7);
  elem_8 = mxCreateString("signLib.h");
  mxSetCell(elem_5,2,elem_8);
  mxSetCell(elem_3,1,elem_5);
  elem_9 = mxCreateCellMatrix(1,3);
  elem_10 = mxCreateString("");
  mxSetCell(elem_9,0,elem_10);
  elem_11 = mxCreateString("");
  mxSetCell(elem_9,1,elem_11);
  elem_12 = mxCreateString("");
  mxSetCell(elem_9,2,elem_12);
  mxSetCell(elem_3,2,elem_9);
  elem_13 = mxCreateCellMatrix(1,3);
  elem_14 = mxCreateString("");
  mxSetCell(elem_13,0,elem_14);
  elem_15 = mxCreateString("");
  mxSetCell(elem_13,1,elem_15);
  elem_16 = mxCreateString("");
  mxSetCell(elem_13,2,elem_16);
  mxSetCell(elem_3,3,elem_13);
  mxSetCell(elem_1,1,elem_3);
  elem_17 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_17);
  elem_18 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_18);
  elem_19 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_19);
  elem_20 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_20);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_21 = mxCreateCellMatrix(1,1);
  elem_22 = mxCreateString("comm.internal.utilities.mathCore");
  mxSetCell(elem_21,0,elem_22);
  mxSetCell(mxBIArgs,1,elem_21);
  elem_23 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_23);
  return mxBIArgs;
}

mxArray *cgxe_A3un3mq7X8wmjVEBP10QsF_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString(
    "comm.internal.utilities.mathCore");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}

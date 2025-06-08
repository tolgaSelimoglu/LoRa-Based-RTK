# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL  = commqpsktxrx
TARGET = cgxe
MODULE_SRCS 	= m_BTWFqGYD8aagFTEBQPdwsF.c m_FpwZVT78uS5A5Xdp3o5d3.c
MODEL_SRC	= commqpsktxrx_cgxe.c
MODEL_REG = commqpsktxrx_cgxe_registry.c
MAKEFILE    = commqpsktxrx_cgxe.mak
MATLAB_ROOT	= C:\Program Files\MATLAB\R2023b
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------


USER_INCLUDES   =  /I "C:\Users\tolga-evry\Desktop\Github\Bitirme\lora-based-rtk\Simulink\haberlesme_ornek\simulation_v1\slprj\_cgxe\commqpsktxrx\src" /I "C:\Users\tolga-evry\Desktop\Github\Bitirme\lora-based-rtk\Simulink\haberlesme_ornek\simulation_v1" /I "C:\Users\Tolga-Evry\Desktop\Github\Bitirme\LoRa-Based-RTK\Simulink\Haberlesme_Ornek\Simulation_V1\slprj\_cprj"

MLSL_INCLUDES     = \
    /I "C:\Program Files\MATLAB\R2023b\extern\include" \
    /I "C:\Program Files\MATLAB\R2023b\simulink\include" \
    /I "C:\Program Files\MATLAB\R2023b\rtw\c\src"
COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   =  /I "C:\Users\Tolga-Evry\Desktop\Github\Bitirme\LoRa-Based-RTK\Simulink\Haberlesme_Ornek\Simulation_V1\slprj\_cgxe\commqpsktxrx\src" /I "C:\Users\Tolga-Evry\Desktop\Github\Bitirme\LoRa-Based-RTK\Simulink\Haberlesme_Ornek\Simulation_V1"
INCLUDE_PATH = $(MLSL_INCLUDES) $(USER_INCLUDES) $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"
CFLAGS = /c /Zp8 /GR /w /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMX_COMPAT_64 /DMATLAB_MEXCMD_RELEASE=R2018a /DMATLAB_MEX_FILE /nologo /MD   
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

USER_OBJS =

AUX_SRCS = C:\PROGRA~1\MATLAB\R2023b\extern\version\c_mexapi_version.c C:\Users\TOLGA-~1\Desktop\Github\Bitirme\LORA-B~1\Simulink\HABERL~1\SIMULA~1\slprj\_cgxe\COMMQP~1\src\signLib.c  

REQ_SRCS  = $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS) $(AUX_SRCS)
REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_OBJS) $(AUX_ABS_OBJS)
OBJLIST_FILE = commqpsktxrx_cgxe.mol
TMWLIB = "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmx.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmex.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmat.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libfixedpoint.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libut.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmwmathutil.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libemlrt.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmwcgxert.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmwcgxeooprt.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmwslexec_simbridge.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmwslccrt.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmwstringutil.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libcovrt.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmwsl_sfcn_cov_bridge.lib" "C:\Program Files\MATLAB\R2023b\extern\lib\win64\microsoft\libmwdsp_halidesim.lib" 
THIRD_PARTY_LIBS = 

#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
all : $(MEX_FILE_NAME) 


$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS)
	@echo ### Linking ...
	$(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map" $(TMWLIB) $(THIRD_PARTY_LIBS) @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"


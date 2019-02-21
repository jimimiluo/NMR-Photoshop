//
// MATLAB Compiler: 4.16 (R2011b)
// Date: Wed Dec 25 14:12:11 2013
// Arguments: "-B" "macro_default" "-W" "cpplib:mcore" "-T" "link:lib" "-d"
// "E:\MATLAB\NMRCA1205\mcore\src" "-w" "enable:specified_file_mismatch" "-w"
// "enable:repeated_file" "-w" "enable:switch_ignored" "-w"
// "enable:missing_lib_sentinel" "-w" "enable:demo_license" "-v"
// "E:\MATLAB\NMRCA1205\bessel1.m" "E:\MATLAB\NMRCA1205\bessel2.m"
// "E:\MATLAB\NMRCA1205\CHrelax.m" "E:\MATLAB\NMRCA1205\invtsvd.m"
// "E:\MATLAB\NMRCA1205\JJ.m" "E:\MATLAB\NMRCA1205\mCalPor.m"
// "E:\MATLAB\NMRCA1205\mCalStd.m" "E:\MATLAB\NMRCA1205\mCK.m"
// "E:\MATLAB\NMRCA1205\mcPcgm.m" "E:\MATLAB\NMRCA1205\mcT2gm.m"
// "E:\MATLAB\NMRCA1205\mfitRqSHg.m" "E:\MATLAB\NMRCA1205\mfitSwnRq.m"
// "E:\MATLAB\NMRCA1205\mfitT2iPc.m" "E:\MATLAB\NMRCA1205\mfitT2Swn.m"
// "E:\MATLAB\NMRCA1205\mSK.m" "E:\MATLAB\NMRCA1205\mSwansonForward.m"
// "E:\MATLAB\NMRCA1205\mT2Pdiff.m" "E:\MATLAB\NMRCA1205\mT2Pint.m"
// "E:\MATLAB\NMRCA1205\Piecewise.m" "E:\MATLAB\NMRCA1205\relax.m"
// "E:\MATLAB\NMRCA1205\SwansonUntitled.m" "E:\MATLAB\NMRCA1205\tsvd.m"
// "E:\MATLAB\NMRCA1205\wrelax.m" 
//

#ifndef __mcore_h
#define __mcore_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_mcore
#define PUBLIC_mcore_C_API __global
#else
#define PUBLIC_mcore_C_API /* No import statement needed. */
#endif

#define LIB_mcore_C_API PUBLIC_mcore_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_mcore
#define PUBLIC_mcore_C_API __declspec(dllexport)
#else
#define PUBLIC_mcore_C_API __declspec(dllimport)
#endif

#define LIB_mcore_C_API PUBLIC_mcore_C_API


#else

#define LIB_mcore_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_mcore_C_API 
#define LIB_mcore_C_API /* No special import/export declaration */
#endif

extern LIB_mcore_C_API 
bool MW_CALL_CONV mcoreInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mcoreInitialize(void);

extern LIB_mcore_C_API 
void MW_CALL_CONV mcoreTerminate(void);



extern LIB_mcore_C_API 
void MW_CALL_CONV mcorePrintStackTrace(void);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxBessel1(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxBessel2(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxCHrelax(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxInvtsvd(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxJJ(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMCalPor(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMCalStd(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMCK(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMcPcgm(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMcT2gm(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMfitRqSHg(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMfitSwnRq(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMfitT2iPc(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMfitT2Swn(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMSK(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMSwansonForward(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                     *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMT2Pdiff(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxMT2Pint(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxPiecewise(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxRelax(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxSwansonUntitled(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                     *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxTsvd(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
bool MW_CALL_CONV mlxWrelax(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_mcore_C_API 
long MW_CALL_CONV mcoreGetMcrID();


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_mcore
#define PUBLIC_mcore_CPP_API __declspec(dllexport)
#else
#define PUBLIC_mcore_CPP_API __declspec(dllimport)
#endif

#define LIB_mcore_CPP_API PUBLIC_mcore_CPP_API

#else

#if !defined(LIB_mcore_CPP_API)
#if defined(LIB_mcore_C_API)
#define LIB_mcore_CPP_API LIB_mcore_C_API
#else
#define LIB_mcore_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_mcore_CPP_API void MW_CALL_CONV bessel1(int nargout, mwArray& Jx, const mwArray& n, const mwArray& x);

extern LIB_mcore_CPP_API void MW_CALL_CONV bessel2(int nargout, mwArray& Yx, const mwArray& n, const mwArray& x);

extern LIB_mcore_CPP_API void MW_CALL_CONV CHrelax(int nargout, mwArray& Sc, mwArray& Sh, const mwArray& wa, const mwArray& wb, const mwArray& J, const mwArray& tt, const mwArray& ss);

extern LIB_mcore_CPP_API void MW_CALL_CONV invtsvd(int nargout, mwArray& T2Amp, mwArray& T2, const mwArray& tau2, const mwArray& sig, const mwArray& T2min, const mwArray& T2max, const mwArray& nT2, const mwArray& TOL);

extern LIB_mcore_CPP_API void MW_CALL_CONV JJ(int nargout, mwArray& y, const mwArray& w, const mwArray& tt);

extern LIB_mcore_CPP_API void MW_CALL_CONV mCalPor(int nargout, mwArray& Porosity, const mwArray& m, const mwArray& M, const mwArray& s, const mwArray& S, const mwArray& g, const mwArray& G, const mwArray& v, const mwArray& V);

extern LIB_mcore_CPP_API void MW_CALL_CONV mCalStd(int nargout, mwArray& Qstd, const mwArray& var1, const mwArray& var2);

extern LIB_mcore_CPP_API void MW_CALL_CONV mCK(int nargout, mwArray& Kc, const mwArray& T2, const mwArray& T2Amp, const mwArray& T2cutoff, const mwArray& Porosity, const mwArray& C);

extern LIB_mcore_CPP_API void MW_CALL_CONV mcPcgm(int nargout, mwArray& Pcgm, const mwArray& Pc, const mwArray& SHg);

extern LIB_mcore_CPP_API void MW_CALL_CONV mcT2gm(int nargout, mwArray& T2gm, const mwArray& T2, const mwArray& T2Amp);

extern LIB_mcore_CPP_API void MW_CALL_CONV mfitRqSHg(int nargout, mwArray& A, mwArray& B, const mwArray& Rq, const mwArray& SHg);

extern LIB_mcore_CPP_API void MW_CALL_CONV mfitSwnRq(int nargout, mwArray& a, mwArray& b, mwArray& c, const mwArray& Swn, const mwArray& Rq);

extern LIB_mcore_CPP_API void MW_CALL_CONV mfitT2iPc(int nargout, mwArray& a, mwArray& b, const mwArray& T2gmn, const mwArray& Pcgmn);

extern LIB_mcore_CPP_API void MW_CALL_CONV mfitT2Swn(int nargout, mwArray& a, mwArray& b, mwArray& c, const mwArray& T2gm, const mwArray& Swn);

extern LIB_mcore_CPP_API void MW_CALL_CONV mSK(int nargout, mwArray& Ks, const mwArray& T2, const mwArray& T2Amp, const mwArray& Porosity, const mwArray& a);

extern LIB_mcore_CPP_API void MW_CALL_CONV mSwansonForward(int nargout, mwArray& nmrSHg, const mwArray& T2g, const mwArray& ats, const mwArray& bts, const mwArray& cts, const mwArray& asr, const mwArray& bsr, const mwArray& csr, const mwArray& ArSHg, const mwArray& BrSHg);

extern LIB_mcore_CPP_API void MW_CALL_CONV mT2Pdiff(int nargout, mwArray& C, mwArray& NCX, mwArray& NCY, mwArray& Y, mwArray& Qstd, const mwArray& T2, const mwArray& T2Amp, const mwArray& P, const mwArray& DSHg, const mwArray& Cmin, const mwArray& Cmax, const mwArray& step);

extern LIB_mcore_CPP_API void MW_CALL_CONV mT2Pint(int nargout, mwArray& C, mwArray& NCX, mwArray& NCY, mwArray& Y, mwArray& Qstd, const mwArray& T2, const mwArray& T2Amp, const mwArray& P, const mwArray& SHg, const mwArray& Cmin, const mwArray& Cmax, const mwArray& step);

extern LIB_mcore_CPP_API void MW_CALL_CONV Piecewise(int nargout, mwArray& P, mwArray& Snmr, const mwArray& T2, const mwArray& T2Amp, const mwArray& Pc, const mwArray& SHg, const mwArray& thresh);

extern LIB_mcore_CPP_API void MW_CALL_CONV relax(int nargout, mwArray& t, mwArray& Mo, mwArray& Mw, mwArray& M, const mwArray& a, const mwArray& b, const mwArray& S0, const mwArray& D, const mwArray& p, const mwArray& h);

extern LIB_mcore_CPP_API void MW_CALL_CONV SwansonUntitled();

extern LIB_mcore_CPP_API void MW_CALL_CONV tsvd(int nargout, mwArray& x, const mwArray& U, const mwArray& S, const mwArray& V, const mwArray& sig, const mwArray& k);

extern LIB_mcore_CPP_API void MW_CALL_CONV wrelax(int nargout, mwArray& Mw, const mwArray& a, const mwArray& b, const mwArray& S0, const mwArray& D, const mwArray& p, const mwArray& h);

#endif
#endif

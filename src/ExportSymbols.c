#include "collapse_c.h"
#include "collapse_cpp.h"

static const R_CMethodDef CEntries[]  = {
  {"C_multi_yw", (DL_FUNC) &multi_yw, 10},
  {NULL, NULL, 0}
};

static const R_CallMethodDef CallEntries[] = {
  {"Cpp_BW", (DL_FUNC) &_collapse_BWCpp, 10},
  {"Cpp_BWm", (DL_FUNC) &_collapse_BWmCpp, 10},
  {"Cpp_BWl", (DL_FUNC) &_collapse_BWlCpp, 10},
  {"C_TRA", (DL_FUNC) &TRAC, 5},
  {"C_TRAm", (DL_FUNC) &TRAmC, 5},
  {"C_TRAl", (DL_FUNC) &TRAlC, 5},
  {"C_fndistinct", (DL_FUNC) &fndistinctC, 4},
  {"C_fndistinctl", (DL_FUNC) &fndistinctlC, 5},
  {"C_fndistinctm", (DL_FUNC) &fndistinctmC, 5},
  {"Cpp_pwnobsm", (DL_FUNC) &_collapse_pwnobsmCpp, 1},
  {"C_fnobs", (DL_FUNC) &fnobsC, 3},
  {"C_fnobsm", (DL_FUNC) &fnobsmC, 4},
  {"C_fnobsl", (DL_FUNC) &fnobslC, 4},
  {"Cpp_varying", (DL_FUNC) &_collapse_varyingCpp, 4},
  {"Cpp_varyingm", (DL_FUNC) &_collapse_varyingmCpp, 5},
  {"Cpp_varyingl", (DL_FUNC) &_collapse_varyinglCpp, 5},
  {"Cpp_fbstats", (DL_FUNC) &_collapse_fbstatsCpp, 11},
  {"Cpp_fbstatsm", (DL_FUNC) &_collapse_fbstatsmCpp, 10},
  {"Cpp_fbstatsl", (DL_FUNC) &_collapse_fbstatslCpp, 10},
  {"C_ffirst", (DL_FUNC) &ffirstC, 5},
  {"C_ffirstm", (DL_FUNC) &ffirstmC, 6},
  {"C_ffirstl", (DL_FUNC) &ffirstlC, 5},
  {"Cpp_fdiffgrowth", (DL_FUNC) &_collapse_fdiffgrowthCpp, 12},
  {"Cpp_fdiffgrowthm", (DL_FUNC) &_collapse_fdiffgrowthmCpp, 12},
  {"Cpp_fdiffgrowthl", (DL_FUNC) &_collapse_fdiffgrowthlCpp, 12},
  {"Cpp_flaglead", (DL_FUNC) &_collapse_flagleadCpp, 7},
  {"Cpp_flagleadm", (DL_FUNC) &_collapse_flagleadmCpp, 7},
  {"Cpp_flagleadl", (DL_FUNC) &_collapse_flagleadlCpp, 7},
  {"C_flast", (DL_FUNC) &flastC, 4},
  {"C_flastm", (DL_FUNC) &flastmC, 5},
  {"C_flastl", (DL_FUNC) &flastlC, 4},
  {"C_fmin", (DL_FUNC) &fminC, 4},
  {"C_fminm", (DL_FUNC) &fminmC, 5},
  {"C_fminl", (DL_FUNC) &fminlC, 5},
  {"C_fmax", (DL_FUNC) &fmaxC, 4},
  {"C_fmaxm", (DL_FUNC) &fmaxmC, 5},
  {"C_fmaxl", (DL_FUNC) &fmaxlC, 5},
  {"C_fmean", (DL_FUNC) &fmeanC, 7},
  {"C_fmeanm", (DL_FUNC) &fmeanmC, 8},
  {"C_fmeanl", (DL_FUNC) &fmeanlC, 8},
  {"Cpp_fnth", (DL_FUNC) &_collapse_fnthCpp, 9},
  {"Cpp_fnthm", (DL_FUNC) &_collapse_fnthmCpp, 10},
  {"Cpp_fnthl", (DL_FUNC) &_collapse_fnthlCpp, 10},
  {"C_fmode", (DL_FUNC) &fmodeC, 6},
  {"C_fmodem", (DL_FUNC) &fmodemC, 7},
  {"C_fmodel", (DL_FUNC) &fmodelC, 6},
  {"C_fnth", (DL_FUNC) &fnthC, 7},
  {"C_fnthm", (DL_FUNC) &fnthmC, 8},
  {"C_fnthl", (DL_FUNC) &fnthlC, 8},
  {"C_fquantile", (DL_FUNC) &fquantileC, 7},
  {"C_fprod", (DL_FUNC) &fprodC, 5},
  {"C_fprodm", (DL_FUNC) &fprodmC, 6},
  {"C_fprodl", (DL_FUNC) &fprodlC, 6},
  {"Cpp_fscale", (DL_FUNC) &_collapse_fscaleCpp, 7},
  {"Cpp_fscalem", (DL_FUNC) &_collapse_fscalemCpp, 7},
  {"Cpp_fscalel", (DL_FUNC) &_collapse_fscalelCpp, 7},
  {"C_fsum", (DL_FUNC) &fsumC, 7},
  {"C_fsumm", (DL_FUNC) &fsummC, 8},
  {"C_fsuml", (DL_FUNC) &fsumlC, 8},
  {"Cpp_fvarsd", (DL_FUNC) &_collapse_fvarsdCpp, 8},
  {"Cpp_fvarsdm", (DL_FUNC) &_collapse_fvarsdmCpp, 9},
  {"Cpp_fvarsdl", (DL_FUNC) &_collapse_fvarsdlCpp, 9},
  {"Cpp_mrtl", (DL_FUNC) &_collapse_mrtl, 3},
  {"Cpp_mctl", (DL_FUNC) &_collapse_mctl, 3},
  {"Cpp_psmat", (DL_FUNC) &_collapse_psmatCpp, 4},
  {"Cpp_qF", (DL_FUNC) &_collapse_qFCpp, 5},
  {"Cpp_sortunique", (DL_FUNC) &_collapse_sortuniqueCpp, 1},
  {"Cpp_fdroplevels", (DL_FUNC) &_collapse_fdroplevelsCpp, 2},
  {"C_setAttributes", (DL_FUNC) &setAttributes, 2},
  {"C_setattributes", (DL_FUNC) &setattributes, 2},
  // {"C_setAttr", (DL_FUNC) &CsetAttr, 3},
  // {"C_setattr", (DL_FUNC) &setattr, 3},
  {"C_duplAttributes", (DL_FUNC) &duplAttributes, 2},
  // {"C_duplattributes", (DL_FUNC) &duplattributes, 2},
  // {"C_cond_duplAttributes", (DL_FUNC) &cond_duplAttributes, 2},
  {"C_copyMostAttributes", (DL_FUNC) &copyMostAttributes, 2},
  // {"C_cond_duplattributes", (DL_FUNC) &cond_duplattributes, 2},
  {"C_setAttrib", (DL_FUNC) &CsetAttrib, 2},
  {"C_copyAttrib", (DL_FUNC) &CcopyAttrib, 2},
  {"C_copyMostAttrib", (DL_FUNC) &CcopyMostAttrib, 2},
  {"C_groups2GRP", (DL_FUNC) &groups2GRP, 3},
  {"C_gsplit", (DL_FUNC) &gsplit, 3},
  {"C_greorder", (DL_FUNC) &greorder, 2},
  {"C_lassign", (DL_FUNC) &lassign, 4},
  {"Cpp_seqid", (DL_FUNC) &_collapse_seqid, 7},
  {"Cpp_groupid", (DL_FUNC) &_collapse_groupid, 5},
  {"C_collapse_init", (DL_FUNC) &collapse_init, 1},
  {"C_dt_na", (DL_FUNC) &dt_na, 4},
  {"C_allNA", (DL_FUNC) &allNAv, 2},
  {"C_na_rm", (DL_FUNC) &Cna_rm, 1},
  {"C_whichv", (DL_FUNC) &whichv, 3},
  {"C_anyallv", (DL_FUNC) &anyallv, 3},
  {"C_setcopyv", (DL_FUNC) &setcopyv, 6},
  {"C_setop", (DL_FUNC) &setop, 4},
  {"C_vtypes", (DL_FUNC) &vtypes, 2},
  {"C_vlengths", (DL_FUNC) &vlengths, 2},
  {"C_multiassign", (DL_FUNC) &multiassign, 3},
  {"C_vlabels", (DL_FUNC) &vlabels, 3},
  {"C_setvlabels", (DL_FUNC) &setvlabels, 4},
  {"C_setnames", (DL_FUNC) &setnames, 2},
  {"C_group", (DL_FUNC) &groupVec, 3},
  {"C_groupat", (DL_FUNC) &groupAtVec, 3},
  {"C_funique", (DL_FUNC) &funiqueC, 1},
  {"C_radixsort", (DL_FUNC) &Cradixsort, 6},
  {"C_frankds", (DL_FUNC) &frankds, 4},
  {"C_pacf1", (DL_FUNC) &pacf1, 2},
  {"C_rbindlist", (DL_FUNC) &rbindlist, 4},
  {"C_setcolorder", (DL_FUNC) &setcolorder, 2},
  {"C_subsetCols", (DL_FUNC) &subsetCols, 3},
  {"C_alloc", (DL_FUNC) &falloc, 2},
  {"C_frange", (DL_FUNC) &frange, 2},
  {"C_fdist", (DL_FUNC) &fdist, 4},
  {"C_fnrow", (DL_FUNC) &fnrowC, 1},
  {"C_createeptr", (DL_FUNC) &createeptr, 1},
  {"C_geteptr", (DL_FUNC) &geteptr, 1},
  {"C_fcrosscolon", (DL_FUNC) &fcrosscolon, 4},
  {"C_fwtabulate", (DL_FUNC) &fwtabulate, 4},
  {"C_vecgcd", (DL_FUNC) &vecgcd, 1},
  {"C_issorted", (DL_FUNC) &Cissorted, 2},
  {"C_all_funs", (DL_FUNC) &all_funs, 1},
  // {"C_aschar", (DL_FUNC) &CasChar, 1},
  {"C_subsetDT", (DL_FUNC) &subsetDT, 4},
  {"C_subsetVector", (DL_FUNC) &subsetVector, 3},
  {"C_alloccol", (DL_FUNC) &Calloccol, 1},
  {"C_fcumsum", (DL_FUNC) &fcumsumC, 6},
  {"C_fcumsumm", (DL_FUNC) &fcumsummC, 6},
  {"C_fcumsuml", (DL_FUNC) &fcumsumlC, 6},
  {NULL, NULL, 0}
};

void R_init_collapse(DllInfo *dll) {
  R_registerRoutines(dll, CEntries, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
  // C API ------------------------------------------------------------------
  // Functions start with cp_. Apart from a brief description on the right, the API is not documented.
  // You need to look up the function in the C code under src/, and perhaps also how
  // it is used under R/. Feel free to request export of additional C/C++ functions.
  // I do not guarantee C API stability, but you are of course free to secure yourself
  // by putting a package on CRAN that uses the API, together with appropriate tests...
  R_RegisterCCallable("collapse", "cp_TRA", (DL_FUNC) &TRAC);
  R_RegisterCCallable("collapse", "cp_range", (DL_FUNC) &frange);
  R_RegisterCCallable("collapse", "cp_dist", (DL_FUNC) &fdist);
  R_RegisterCCallable("collapse", "cp_quantile", (DL_FUNC) &fquantileC);
  R_RegisterCCallable("collapse", "cp_group", (DL_FUNC) &groupVec);          // Main hash-based grouping function: for atomic vectors and data frames
  R_RegisterCCallable("collapse", "cp_group_at", (DL_FUNC) &groupAtVec);     // Same but only works with atomic vectors and has option to keep missing values
  R_RegisterCCallable("collapse", "cp_unique", (DL_FUNC) &funiqueC);         // Unique values for atomic vector
  R_RegisterCCallable("collapse", "cp_radixorder", (DL_FUNC) &Cradixsort);
  R_RegisterCCallable("collapse", "cp_rbindlist", (DL_FUNC) &rbindlist);
  R_RegisterCCallable("collapse", "cp_alloc", (DL_FUNC) &falloc);
  R_RegisterCCallable("collapse", "cp_na_rm", (DL_FUNC) &Cna_rm);
  R_RegisterCCallable("collapse", "cp_missing_cases", (DL_FUNC) &dt_na);
  R_RegisterCCallable("collapse", "cp_whichv", (DL_FUNC) &whichv);
  R_RegisterCCallable("collapse", "cp_anyallv", (DL_FUNC) &anyallv);
  R_RegisterCCallable("collapse", "cp_setcopyv", (DL_FUNC) &setcopyv);
  R_RegisterCCallable("collapse", "cp_multiassign", (DL_FUNC) &multiassign);
  R_RegisterCCallable("collapse", "cp_vecgcd", (DL_FUNC) &vecgcd);
  R_RegisterCCallable("collapse", "cp_all_funs", (DL_FUNC) &all_funs);
  R_RegisterCCallable("collapse", "cp_subsetVector", (DL_FUNC) &subsetVector);
  R_RegisterCCallable("collapse", "cp_subsetCols", (DL_FUNC) &subsetCols);
  R_RegisterCCallable("collapse", "cp_subsetDataFrame", (DL_FUNC) &subsetDT);
}

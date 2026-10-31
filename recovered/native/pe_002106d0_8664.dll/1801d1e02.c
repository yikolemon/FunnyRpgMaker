/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d1e02 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1801d1e02(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = (param_3[1] + param_2[1]) * _UNK_18032a1a8;
  *param_1 = (*param_3 + *param_2) * _DAT_18032a1a0;
  param_1[1] = dVar1;
  param_1[2] = (param_2[2] + param_3[2]) * DAT_1802df1c8;
  return param_1;
}


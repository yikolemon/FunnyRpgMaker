/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140118b36 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140118b36(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = (param_3[1] + param_2[1]) * _UNK_140e8e198;
  *param_1 = (*param_3 + *param_2) * _DAT_140e8e190;
  param_1[1] = dVar1;
  param_1[2] = (param_2[2] + param_3[2]) * DAT_140211f38;
  return param_1;
}


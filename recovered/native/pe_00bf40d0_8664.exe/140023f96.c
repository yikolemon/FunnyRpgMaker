/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023f96 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140023f96(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = (param_3[1] + param_2[1]) * _UNK_1400e72f8;
  *param_1 = (*param_3 + *param_2) * _DAT_1400e72f0;
  param_1[1] = dVar1;
  param_1[2] = (param_2[2] + param_3[2]) * DAT_1400dcde0;
  return param_1;
}


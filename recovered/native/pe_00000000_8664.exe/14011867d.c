/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011867d */

double * FUN_14011867d(double *param_1,double *param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_2[1];
  dVar2 = param_4[1];
  *param_1 = param_3 * (*param_4 - *param_2) + *param_2;
  param_1[1] = param_3 * (dVar2 - dVar1) + dVar1;
  param_1[2] = (param_4[2] - param_2[2]) * param_3 + param_2[2];
  return param_1;
}


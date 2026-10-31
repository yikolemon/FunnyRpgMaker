/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b860 */

double * FUN_14001b860(double *param_1,uint param_2)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  FUN_14001b7f8(param_1,param_2);
  return param_1;
}


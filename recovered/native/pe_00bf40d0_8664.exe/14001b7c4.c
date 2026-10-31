/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b7c4 */

double * FUN_14001b7c4(double *param_1,double param_2,double param_3,double param_4)

{
  uint uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  uVar1 = FUN_140024776(param_2,param_3,param_4);
  FUN_14001b7f8(param_1,uVar1);
  return param_1;
}


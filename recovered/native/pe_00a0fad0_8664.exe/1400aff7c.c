/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aff7c */

void FUN_1400aff7c(void *param_1,int param_2,FILE *param_3,undefined8 param_4,int param_5)

{
  if (param_5 == -1) {
    param_5 = FUN_1401144b0(param_3);
  }
  fread(param_1,1,(longlong)param_2,param_3);
  FUN_1400afec4(param_1,param_2,param_5,param_4);
  return;
}


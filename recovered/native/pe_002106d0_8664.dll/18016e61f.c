/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016e61f */

void FUN_18016e61f(longlong param_1,int param_2,char param_3)

{
  float *pfVar1;
  
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0xc);
  }
  pfVar1 = (float *)((longlong)param_2 * 0x1c + *(longlong *)(param_1 + 0x68));
  if (param_3 != '\0') {
    FUN_18016e419(param_1,pfVar1[8] - pfVar1[1]);
    return;
  }
  FUN_18016e419(param_1,pfVar1[7] - *pfVar1);
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400dff9c */

void FUN_1400dff9c(int *param_1,undefined8 param_2,int param_3,longlong param_4)

{
  int iVar1;
  
  iVar1 = 2;
  if (2 < param_3) {
    iVar1 = param_3;
  }
  *param_1 = iVar1 + -2;
  *(longlong *)(param_1 + 2) = param_4;
  param_4 = (longlong)param_3 * 0x20 + param_4;
  *(longlong *)(param_1 + 4) = param_4;
  *(longlong *)(param_1 + 8) = param_4 + (longlong)param_3 * 8;
  FUN_1400dffee();
  FUN_1400e006e(param_1);
  FUN_1400e00e8(param_1);
  return;
}


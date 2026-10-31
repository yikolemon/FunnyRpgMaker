/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180194a28 */

void FUN_180194a28(int *param_1,undefined8 param_2,int param_3,longlong param_4)

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
  FUN_180194a7a();
  FUN_180194afa(param_1);
  FUN_180194b74(param_1);
  return;
}


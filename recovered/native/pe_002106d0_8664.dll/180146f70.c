/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180146f70 */

void FUN_180146f70(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 + *(longlong *)(param_1 + 0x28);
  FUN_1802a82f0(lVar2,param_3 + lVar2,
                (longlong)((*(int *)(param_1 + 0x30) - (param_3 + param_2)) + 1));
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_3 + param_2) {
    if (iVar1 < param_2) goto LAB_180146fb5;
  }
  else {
    param_2 = iVar1 - param_3;
  }
  iVar1 = param_2;
  *(int *)(param_1 + 0x38) = iVar1;
LAB_180146fb5:
  *(int *)(param_1 + 0x40) = iVar1;
  *(int *)(param_1 + 0x3c) = iVar1;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - param_3;
  return;
}


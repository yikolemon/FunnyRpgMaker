/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bfea0 */

void FUN_1400bfea0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 + *(longlong *)(param_1 + 0x28);
  FUN_1401c5180(lVar2,param_3 + lVar2,
                (longlong)((*(int *)(param_1 + 0x30) - (param_3 + param_2)) + 1));
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_3 + param_2) {
    if (iVar1 < param_2) goto LAB_1400bfee5;
  }
  else {
    param_2 = iVar1 - param_3;
  }
  iVar1 = param_2;
  *(int *)(param_1 + 0x38) = iVar1;
LAB_1400bfee5:
  *(int *)(param_1 + 0x40) = iVar1;
  *(int *)(param_1 + 0x3c) = iVar1;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - param_3;
  return;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014269e */

void __thiscall FUN_1014269e(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) + param_2;
  FUN_1025b2d0(iVar1,iVar1 + param_3,(*(int *)(param_1 + 0x20) - (param_3 + param_2)) + 1);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_3 + param_2) {
    if (iVar1 < param_2) goto LAB_101426de;
  }
  else {
    param_2 = iVar1 - param_3;
  }
  iVar1 = param_2;
  *(int *)(param_1 + 0x28) = iVar1;
LAB_101426de:
  *(int *)(param_1 + 0x30) = iVar1;
  *(int *)(param_1 + 0x2c) = iVar1;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - param_3;
  return;
}


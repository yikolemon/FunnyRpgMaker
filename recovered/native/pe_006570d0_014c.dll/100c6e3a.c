/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c6e3a */

void __thiscall FUN_100c6e3a(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_100c701e(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x30;
    return;
  }
  FUN_100c6e6e(iVar1,param_2);
  return;
}


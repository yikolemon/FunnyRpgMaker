/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009f22a */

void __thiscall FUN_1009f22a(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_1009f40a(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x34;
    return;
  }
  FUN_1009f25e(iVar1,param_2);
  return;
}


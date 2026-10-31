/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009958e */

void __thiscall FUN_1009958e(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != *(int *)(param_1 + 8)) {
    FUN_1009976a(iVar1,param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_100995c2(iVar1,param_2);
  return;
}


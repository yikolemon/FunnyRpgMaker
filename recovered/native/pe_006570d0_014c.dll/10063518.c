/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10063518 */

void __thiscall FUN_10063518(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == *(int *)(param_1 + 8)) {
    FUN_10063552(iVar1,param_2,param_3);
  }
  else {
    FUN_1006370c(iVar1,param_2,param_3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x1c;
  }
  return;
}


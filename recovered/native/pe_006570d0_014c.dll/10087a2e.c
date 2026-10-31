/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10087a2e */

void __thiscall FUN_10087a2e(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 4) == *(int *)(param_1 + 8)) {
    FUN_10087a66(*(int *)(param_1 + 4),param_2,param_3);
  }
  else {
    FUN_10087be4(param_2,param_3);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x28;
  }
  return;
}


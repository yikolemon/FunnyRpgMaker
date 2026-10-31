/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008a0ac */

void __thiscall FUN_1008a0ac(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_10088b42(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_1008a0de(*(int *)(param_1 + 4),param_2);
  return;
}


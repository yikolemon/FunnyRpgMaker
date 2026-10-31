/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017b17c */

void __thiscall FUN_1017b17c(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_1017b35e(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x38;
    return;
  }
  FUN_1017b1ae(*(int *)(param_1 + 4),param_2);
  return;
}


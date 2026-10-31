/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009e75c */

void __thiscall FUN_1009e75c(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_1009e92e(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x6c;
    return;
  }
  FUN_1009e78e(*(int *)(param_1 + 4),param_2);
  return;
}


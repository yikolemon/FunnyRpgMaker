/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005567c */

void __thiscall FUN_1005567c(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_10053816(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_100556ae(*(int *)(param_1 + 4),param_2);
  return;
}


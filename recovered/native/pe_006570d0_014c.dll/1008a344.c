/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008a344 */

void __thiscall FUN_1008a344(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_100878a4(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_1008a376(*(int *)(param_1 + 4),param_2);
  return;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10089b80 */

void __thiscall FUN_10089b80(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_1008845e(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_10089bb2(*(int *)(param_1 + 4),param_2);
  return;
}


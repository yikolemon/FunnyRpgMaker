/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10055150 */

void __thiscall FUN_10055150(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_10053132(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_10055182(*(int *)(param_1 + 4),param_2);
  return;
}


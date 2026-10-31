/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009ee24 */

void __thiscall FUN_1009ee24(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_1009eff6(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x54;
    return;
  }
  FUN_1009ee56(*(int *)(param_1 + 4),param_2);
  return;
}


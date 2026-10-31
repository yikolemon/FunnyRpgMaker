/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017ad20 */

void __thiscall FUN_1017ad20(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_1017aec2(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x1c;
    return;
  }
  FUN_1017ad52(*(int *)(param_1 + 4),param_2);
  return;
}


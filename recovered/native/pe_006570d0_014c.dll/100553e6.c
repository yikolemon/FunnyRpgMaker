/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100553e6 */

void __thiscall FUN_100553e6(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_1004b3be(0);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_10055418(*(int *)(param_1 + 4),param_2);
  return;
}


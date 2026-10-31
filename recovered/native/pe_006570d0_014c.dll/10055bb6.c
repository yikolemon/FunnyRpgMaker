/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10055bb6 */

void __thiscall FUN_10055bb6(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_10053efc(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_10055be8(*(int *)(param_1 + 4),param_2);
  return;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10055914 */

void __thiscall FUN_10055914(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_100523ca(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_10055946(*(int *)(param_1 + 4),param_2);
  return;
}


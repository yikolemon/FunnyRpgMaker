/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009ca92 */

void __thiscall FUN_1009ca92(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_1009cc64(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x4c;
    return;
  }
  FUN_1009cac4(*(int *)(param_1 + 4),param_2);
  return;
}


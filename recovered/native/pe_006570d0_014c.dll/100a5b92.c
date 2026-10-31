/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a5b92 */

void __thiscall FUN_100a5b92(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_100a5d70(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x60;
    return;
  }
  FUN_100a5bc4(*(int *)(param_1 + 4),param_2);
  return;
}


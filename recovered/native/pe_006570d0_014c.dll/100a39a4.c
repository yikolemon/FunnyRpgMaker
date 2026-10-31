/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a39a4 */

void __thiscall FUN_100a39a4(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_100a3b54(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x84;
    return;
  }
  FUN_100a39d8(*(int *)(param_1 + 4),param_2);
  return;
}


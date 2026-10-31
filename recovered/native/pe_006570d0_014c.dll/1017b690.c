/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017b690 */

void __thiscall FUN_1017b690(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_1017b872(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x58;
    return;
  }
  FUN_1017b6c2(*(int *)(param_1 + 4),param_2);
  return;
}


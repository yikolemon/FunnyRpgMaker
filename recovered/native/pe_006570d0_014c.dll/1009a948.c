/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009a948 */

void __thiscall FUN_1009a948(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_10003728(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x18;
    return;
  }
  FUN_1009a97a(*(int *)(param_1 + 4),param_2);
  return;
}


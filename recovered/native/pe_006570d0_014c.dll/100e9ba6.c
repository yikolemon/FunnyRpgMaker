/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e9ba6 */

void __thiscall FUN_100e9ba6(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_1000334a(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x18;
    return;
  }
  FUN_100e9bd8(*(int *)(param_1 + 4),param_2);
  return;
}


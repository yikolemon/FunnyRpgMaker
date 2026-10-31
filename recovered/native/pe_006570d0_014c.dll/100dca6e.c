/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dca6e */

void __thiscall FUN_100dca6e(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_10013db4(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x10;
    return;
  }
  FUN_100dcaa0(*(int *)(param_1 + 4),param_2);
  return;
}


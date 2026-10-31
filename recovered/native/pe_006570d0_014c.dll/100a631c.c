/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a631c */

void __thiscall FUN_100a631c(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    FUN_100a64c2(param_2);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 0x4c;
    return;
  }
  FUN_100a634e(*(int *)(param_1 + 4),param_2);
  return;
}


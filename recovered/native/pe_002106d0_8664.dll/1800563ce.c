/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800563ce */

void FUN_1800563ce(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_18005437a(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x10;
    return;
  }
  FUN_18005640e(param_1);
  return;
}


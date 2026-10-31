/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009fa7a */

void FUN_18009fa7a(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_18009fc82(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x78;
    return;
  }
  FUN_18009faba(param_1);
  return;
}


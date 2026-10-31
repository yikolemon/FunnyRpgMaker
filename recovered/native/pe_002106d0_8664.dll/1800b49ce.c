/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b49ce */

void FUN_1800b49ce(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800b4be8(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x28;
    return;
  }
  FUN_1800b4a0e(param_1);
  return;
}


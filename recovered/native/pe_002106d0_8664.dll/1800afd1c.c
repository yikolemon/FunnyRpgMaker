/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800afd1c */

void FUN_1800afd1c(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800afed4(*(longlong *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x78;
    return;
  }
  FUN_1800afd56(param_1);
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800605b0 */

void FUN_1800605b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_180060770(*(longlong *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x60;
    return;
  }
  FUN_1800605ea(param_1);
  return;
}


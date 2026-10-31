/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800baaa8 */

void FUN_1800baaa8(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_1800bac90(*(longlong *)(param_1 + 8));
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x40;
    return;
  }
  FUN_1800baae2(param_1);
  return;
}


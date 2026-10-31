/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eb692 */

void FUN_1800eb692(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    FUN_180002d2c(*(longlong *)(param_1 + 8),param_2);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_1800eb6d2(param_1);
  return;
}


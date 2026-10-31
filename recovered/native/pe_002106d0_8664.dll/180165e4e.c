/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180165e4e */

void FUN_180165e4e(longlong param_1)

{
  FUN_18018f06e(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016ea3e */

void FUN_18016ea3e(longlong param_1)

{
  FUN_18018f06e(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


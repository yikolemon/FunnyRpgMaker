/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105424 */

void FUN_180105424(longlong param_1)

{
  FUN_180106790(param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


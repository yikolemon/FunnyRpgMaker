/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105294 */

void FUN_180105294(longlong param_1)

{
  FUN_180106818(param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


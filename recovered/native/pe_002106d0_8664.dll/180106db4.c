/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180106db4 */

void FUN_180106db4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


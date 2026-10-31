/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105070 */

void FUN_180105070(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105592 */

void FUN_180105592(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


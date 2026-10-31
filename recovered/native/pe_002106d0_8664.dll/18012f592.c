/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012f592 */

void FUN_18012f592(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_18012f547();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_18012f547();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1800fe8d4();
  }
  return;
}


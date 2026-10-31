/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018e1c0 */

void FUN_18018e1c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


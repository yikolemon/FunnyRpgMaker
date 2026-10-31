/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c2f7c */

void FUN_1801c2f7c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


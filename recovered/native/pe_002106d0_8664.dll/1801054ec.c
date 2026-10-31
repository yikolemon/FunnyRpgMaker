/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801054ec */

void FUN_1801054ec(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


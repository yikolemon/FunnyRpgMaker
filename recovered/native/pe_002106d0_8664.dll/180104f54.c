/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180104f54 */

void FUN_180104f54(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


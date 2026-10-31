/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105164 */

void FUN_180105164(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1800fe8d4();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


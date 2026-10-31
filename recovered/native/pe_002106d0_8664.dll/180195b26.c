/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180195b26 */

void FUN_180195b26(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1800fe8d4();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  return;
}


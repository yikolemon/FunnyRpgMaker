/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012170c */

void FUN_18012170c(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1800fe8d4();
    return;
  }
  return;
}


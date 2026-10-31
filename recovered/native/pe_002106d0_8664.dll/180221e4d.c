/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180221e4d */

void FUN_180221e4d(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_1801c9b65();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006f48d */

void FUN_14006f48d(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_14001c53d(*(longlong *)(param_1 + 0x38),*(longlong *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}


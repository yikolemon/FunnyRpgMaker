/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400397e9 */

void FUN_1400397e9(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14001c53d(*(longlong *)(param_1 + 0x10),*(longlong *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}


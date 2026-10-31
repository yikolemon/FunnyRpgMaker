/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013b8a1 */

void FUN_14013b8a1(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_140128b39(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}


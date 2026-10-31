/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009a9c8 */

void FUN_14009a9c8(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}


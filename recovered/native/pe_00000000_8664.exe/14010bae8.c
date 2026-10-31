/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010bae8 */

void FUN_14010bae8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_140077b90();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_1400c8506(param_1 + 0x28);
  return;
}


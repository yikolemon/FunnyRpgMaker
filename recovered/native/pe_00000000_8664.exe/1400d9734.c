/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d9734 */

void FUN_1400d9734(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_140077b90();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_140077b90();
    return;
  }
  return;
}


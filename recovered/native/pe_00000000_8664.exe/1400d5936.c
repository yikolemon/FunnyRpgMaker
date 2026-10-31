/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d5936 */

void FUN_1400d5936(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_140077b90();
    }
    FUN_140077b90(param_1);
    return;
  }
  return;
}


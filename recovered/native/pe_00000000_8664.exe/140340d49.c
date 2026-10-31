/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140340d49 */

void FUN_140340d49(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_14030fda4();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_14030fda4();
    }
    FUN_14030fda4(param_1);
    return;
  }
  return;
}


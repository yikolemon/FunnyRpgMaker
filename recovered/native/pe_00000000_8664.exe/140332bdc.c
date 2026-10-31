/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140332bdc */

void FUN_140332bdc(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14030fda4();
    return;
  }
  return;
}


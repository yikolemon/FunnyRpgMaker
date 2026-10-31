/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a6ff6 */

void FUN_1403a6ff6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14030fda4();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  return;
}


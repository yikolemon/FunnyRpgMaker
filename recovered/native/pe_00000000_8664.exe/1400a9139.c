/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a9139 */

void FUN_1400a9139(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400a87a9();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


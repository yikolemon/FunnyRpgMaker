/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008c560 */

void FUN_14008c560(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x15) & 1) == 0) && (*(float *)(DAT_140f2a910 + 0x2974) <= 0.0)) {
    *(undefined4 *)(DAT_140f2a910 + 0x2974) = *(undefined4 *)(DAT_140f2a910 + 0x4c);
  }
  return;
}


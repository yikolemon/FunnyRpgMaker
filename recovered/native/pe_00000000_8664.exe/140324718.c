/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140324718 */

void FUN_140324718(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x15) & 1) == 0) && (*(float *)(DAT_14062a630 + 0x2974) <= 0.0)) {
    *(undefined4 *)(DAT_14062a630 + 0x2974) = *(undefined4 *)(DAT_14062a630 + 0x4c);
  }
  return;
}


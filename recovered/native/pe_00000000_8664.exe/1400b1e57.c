/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b1e57 */

float FUN_1400b1e57(int param_1)

{
  if (0 < param_1) {
    return *(float *)(DAT_140f2a910 + 0xdc0) + *(float *)(DAT_140f2a910 + 0xdc0) +
           ((float)param_1 *
            (*(float *)(DAT_140f2a910 + 0x1320) + *(float *)(DAT_140f2a910 + 0xe08)) -
           *(float *)(DAT_140f2a910 + 0xe08));
  }
  return DAT_1402112e4;
}


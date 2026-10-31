/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180138f27 */

float FUN_180138f27(int param_1)

{
  if (0 < param_1) {
    return *(float *)(DAT_180419160 + 0xdc0) + *(float *)(DAT_180419160 + 0xdc0) +
           ((float)param_1 *
            (*(float *)(DAT_180419160 + 0x1320) + *(float *)(DAT_180419160 + 0xe08)) -
           *(float *)(DAT_180419160 + 0xe08));
  }
  return DAT_1802de564;
}


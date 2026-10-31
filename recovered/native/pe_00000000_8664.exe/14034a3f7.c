/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14034a3f7 */

float FUN_14034a3f7(int param_1)

{
  if (0 < param_1) {
    return *(float *)(DAT_14062a630 + 0xdc0) + *(float *)(DAT_14062a630 + 0xdc0) +
           ((float)param_1 *
            (*(float *)(DAT_14062a630 + 0x1320) + *(float *)(DAT_14062a630 + 0xe08)) -
           *(float *)(DAT_14062a630 + 0xe08));
  }
  return DAT_1404efa34;
}


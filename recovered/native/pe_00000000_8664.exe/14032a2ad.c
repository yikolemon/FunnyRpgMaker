/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032a2ad */

undefined8 FUN_14032a2ad(int param_1,float param_2)

{
  if (param_2 < 0.0) {
    param_2 = *(float *)(DAT_14062a630 + 0xa4);
  }
  return CONCAT71((int7)((ulonglong)DAT_14062a630 >> 8),
                  param_2 * param_2 <= *(float *)(DAT_14062a630 + 0xbfc + (longlong)param_1 * 4));
}


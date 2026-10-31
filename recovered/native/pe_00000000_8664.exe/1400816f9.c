/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400816f9 */

undefined8 FUN_1400816f9(int param_1,float param_2)

{
  if (*(char *)(DAT_140f2a910 + 0x120 + (longlong)param_1) != '\x01') {
    return 0;
  }
  if (param_2 < 0.0) {
    param_2 = *(float *)(DAT_140f2a910 + 0xa4);
  }
  return CONCAT71((int7)((ulonglong)DAT_140f2a910 >> 8),
                  param_2 * param_2 <= *(float *)(DAT_140f2a910 + 0xbfc + (longlong)param_1 * 4));
}


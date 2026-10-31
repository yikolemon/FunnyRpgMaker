/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403198b1 */

undefined8 FUN_1403198b1(int param_1,float param_2)

{
  if (*(char *)(DAT_14062a630 + 0x120 + (longlong)param_1) != '\x01') {
    return 0;
  }
  if (param_2 < 0.0) {
    param_2 = *(float *)(DAT_14062a630 + 0xa4);
  }
  return CONCAT71((int7)((ulonglong)DAT_14062a630 >> 8),
                  param_2 * param_2 <= *(float *)(DAT_14062a630 + 0xbfc + (longlong)param_1 * 4));
}


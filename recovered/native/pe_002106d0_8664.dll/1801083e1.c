/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801083e1 */

undefined8 FUN_1801083e1(int param_1,float param_2)

{
  if (*(char *)(DAT_180419160 + 0x120 + (longlong)param_1) != '\x01') {
    return 0;
  }
  if (param_2 < 0.0) {
    param_2 = *(float *)(DAT_180419160 + 0xa4);
  }
  return CONCAT71((int7)((ulonglong)DAT_180419160 >> 8),
                  param_2 * param_2 <= *(float *)(DAT_180419160 + 0xbfc + (longlong)param_1 * 4));
}


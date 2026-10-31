/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110cf0 */

void FUN_180110cf0(undefined8 *param_1)

{
  *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)(DAT_180419160 + 0x1ff4) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(DAT_180419160 + 0x1fec) >> 0x20),
                      (float)*(undefined8 *)(DAT_180419160 + 0x1ff4) -
                      (float)*(undefined8 *)(DAT_180419160 + 0x1fec));
  return;
}


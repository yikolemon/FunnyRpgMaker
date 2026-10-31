/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008a008 */

void FUN_14008a008(undefined8 *param_1)

{
  *param_1 = CONCAT44((float)((ulonglong)*(undefined8 *)(DAT_140f2a910 + 0x1ff4) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(DAT_140f2a910 + 0x1fec) >> 0x20),
                      (float)*(undefined8 *)(DAT_140f2a910 + 0x1ff4) -
                      (float)*(undefined8 *)(DAT_140f2a910 + 0x1fec));
  return;
}


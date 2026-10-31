/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180061eb4 */

undefined8 FUN_180061eb4(uint param_1)

{
  if (param_1 < 3 && DAT_180417a18 != 0) {
    return *(undefined8 *)(DAT_180417a18 + 8 + (ulonglong)param_1 * 8);
  }
  return 0;
}


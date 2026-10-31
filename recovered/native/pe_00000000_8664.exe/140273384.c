/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140273384 */

undefined8 FUN_140273384(uint param_1)

{
  if (param_1 < 3 && DAT_140628ee8 != 0) {
    return *(undefined8 *)(DAT_140628ee8 + 8 + (ulonglong)param_1 * 8);
  }
  return 0;
}


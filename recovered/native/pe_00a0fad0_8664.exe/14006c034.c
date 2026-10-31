/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006c034 */

char * FUN_14006c034(byte *param_1)

{
  if ((ulonglong)*param_1 < 10) {
    return (&PTR_DAT_140140e18)[*param_1];
  }
  return "number";
}


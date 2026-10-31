/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007b035 */

char * FUN_14007b035(uint param_1)

{
  if (param_1 < 0x3f) {
    return (&PTR_s_Text_140ec3312_0x13_140210f38)[param_1];
  }
  return "Unknown";
}


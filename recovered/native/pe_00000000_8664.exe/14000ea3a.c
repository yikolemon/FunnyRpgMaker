/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000ea3a */

char * FUN_14000ea3a(byte *param_1)

{
  if ((ulonglong)*param_1 < 10) {
    return (&PTR_s_null_140ec7a46_0x12_1401c83e0)[*param_1];
  }
  return "invalid";
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800173a0 */

char * FUN_1800173a0(byte *param_1)

{
  if ((ulonglong)*param_1 < 10) {
    return (&PTR_s_null_180366767_0x12_1802b0b40)[*param_1];
  }
  return "invalid";
}


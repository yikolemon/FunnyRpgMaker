/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008843c */

char * FUN_18008843c(byte *param_1)

{
  if ((ulonglong)*param_1 < 10) {
    return (&PTR_s_null_180366767_0x12_1802b7ab8)[*param_1];
  }
  return "invalid";
}


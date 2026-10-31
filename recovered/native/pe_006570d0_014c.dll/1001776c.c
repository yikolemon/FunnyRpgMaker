/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001776c */

char * __fastcall FUN_1001776c(byte *param_1)

{
  char *pcVar1;
  
  pcVar1 = "invalid";
  if (*param_1 < 10) {
    pcVar1 = (&PTR_s_null_10336666_0x12_1028f46c)[*param_1];
  }
  return pcVar1;
}


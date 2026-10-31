/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10087286 */

char * __fastcall FUN_10087286(byte *param_1)

{
  char *pcVar1;
  
  pcVar1 = "invalid";
  if (*param_1 < 10) {
    pcVar1 = (&PTR_s_null_10336666_0x12_102943c8)[*param_1];
  }
  return pcVar1;
}


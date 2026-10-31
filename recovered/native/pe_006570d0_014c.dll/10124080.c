/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10124080 */

char * __fastcall FUN_10124080(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown";
  if (param_1 < 3) {
    pcVar1 = (&PTR_s_Mouse_10338d61_0x12_102b86dc)[param_1];
  }
  return pcVar1;
}


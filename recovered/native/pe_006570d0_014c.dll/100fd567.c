/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fd567 */

char * FUN_100fd567(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown";
  if (param_1 < 0x3f) {
    pcVar1 = (&PTR_s_Text_103310c6_0x13_102b8704)[param_1];
  }
  return pcVar1;
}


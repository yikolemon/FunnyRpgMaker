/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100547ee */

char * FUN_100547ee(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = "unknown token";
  if (param_1 < 0x11) {
    pcVar1 = (&PTR_s_<uninitialized>_1028f4c8)[param_1];
  }
  return pcVar1;
}


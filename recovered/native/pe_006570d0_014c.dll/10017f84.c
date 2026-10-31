/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10017f84 */

char * __fastcall FUN_10017f84(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 0x14) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x14);
  }
  return pcVar1;
}


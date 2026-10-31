/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180001688 */

char * FUN_180001688(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}


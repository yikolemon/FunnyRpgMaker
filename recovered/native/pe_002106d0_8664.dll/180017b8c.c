/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180017b8c */

char * FUN_180017b8c(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 0x28) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x28);
  }
  return pcVar1;
}


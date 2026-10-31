/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140006528 */

char * FUN_140006528(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}


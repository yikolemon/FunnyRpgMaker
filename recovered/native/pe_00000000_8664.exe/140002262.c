/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140002262 */

char * FUN_140002262(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}


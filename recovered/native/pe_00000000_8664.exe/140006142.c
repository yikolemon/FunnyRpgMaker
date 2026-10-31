/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140006142 */

char * FUN_140006142(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 0x28) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x28);
  }
  return pcVar1;
}


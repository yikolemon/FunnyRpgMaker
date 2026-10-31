/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140063dec */

char * FUN_140063dec(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 0x28) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 0x28);
  }
  return pcVar1;
}


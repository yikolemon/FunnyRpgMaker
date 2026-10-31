/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402ac4 */

char * __fastcall FUN_00402ac4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 4) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100016fc */

char * __fastcall FUN_100016fc(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 4) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 4);
  }
  return pcVar1;
}


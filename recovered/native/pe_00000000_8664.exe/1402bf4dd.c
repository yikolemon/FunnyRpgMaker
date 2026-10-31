/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bf4dd */

char * FUN_1402bf4dd(char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  if (param_1 < param_2) {
    do {
      pcVar1 = param_2 + -1;
      if (pcVar1 <= param_1) {
        return param_1;
      }
      param_2 = pcVar1;
    } while (*pcVar1 < -0x40);
  }
  return pcVar1;
}


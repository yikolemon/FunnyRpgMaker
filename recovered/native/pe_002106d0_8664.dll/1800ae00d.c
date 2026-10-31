/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ae00d */

char * FUN_1800ae00d(char *param_1,char *param_2)

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


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ae19 */

char * FUN_18019ae19(char *param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  if (param_1 < param_2 && (char)((param_3 & 2) >> 1) == '\0') {
    do {
      if ((*param_1 != ' ') && (pcVar1 = param_1, *param_1 != '\t')) break;
      param_1 = param_1 + 1;
      pcVar1 = param_2;
    } while (param_1 != param_2);
  }
  if (pcVar1 < param_2) {
    pcVar1 = pcVar1 + (*pcVar1 == '\n');
  }
  return pcVar1;
}


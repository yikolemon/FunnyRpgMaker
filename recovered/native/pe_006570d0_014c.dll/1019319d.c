/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019319d */

char * FUN_1019319d(char *param_1,char *param_2,byte param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  if (param_1 < param_2 && (param_3 & 2) == 0) {
    do {
      param_1 = pcVar1;
      if ((*param_1 != ' ') && (*param_1 != '\t')) break;
      pcVar1 = param_1 + 1;
      param_1 = param_2;
    } while (pcVar1 != param_2);
  }
  if (param_1 < param_2) {
    param_1 = param_1 + (*param_1 == '\n');
  }
  return param_1;
}


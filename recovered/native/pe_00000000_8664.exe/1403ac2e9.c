/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ac2e9 */

char * FUN_1403ac2e9(char *param_1,char *param_2,uint param_3)

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


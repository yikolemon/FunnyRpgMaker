/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229cc0 */

char * FUN_10229cc0(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  
  if (((byte)DAT_10389df8 & 4) != 0) {
    pcVar1 = (char *)FUN_1022a800(param_1,(int)param_2 - (int)param_1,param_3,
                                  (int)param_4 - (int)param_3);
    return pcVar1;
  }
  do {
    if (param_1 == param_2) {
      return param_1;
    }
    if (param_3 != param_4) {
      pcVar1 = param_3;
      do {
        if (*param_1 == *pcVar1) {
          return param_1;
        }
        pcVar1 = pcVar1 + 1;
      } while (pcVar1 != param_4);
    }
    param_1 = param_1 + 1;
  } while( true );
}


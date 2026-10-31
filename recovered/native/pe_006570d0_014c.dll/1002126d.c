/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002126d */

char * FUN_1002126d(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((int)param_4 - (int)param_3 == 1) {
    pcVar1 = (char *)FUN_100062be(param_1,param_2,(int)*param_3);
  }
  else {
    if (0xf < (int)param_2 - (int)param_1) {
      pcVar1 = (char *)FUN_10229cc0(param_1,param_2,param_3,param_4);
      return pcVar1;
    }
    pcVar1 = param_1;
    if (param_1 != param_2) {
      pcVar1 = param_1 + ((int)param_2 - (int)param_1);
      do {
        if (param_3 != param_4) {
          pcVar2 = param_3;
          do {
            if (*param_1 == *pcVar2) {
              return param_1;
            }
            pcVar2 = pcVar2 + 1;
          } while (pcVar2 != param_4);
        }
        param_1 = param_1 + 1;
      } while (param_1 != param_2);
    }
  }
  return pcVar1;
}


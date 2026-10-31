/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002162c */

char * FUN_18002162c(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  
  if ((longlong)param_4 - (longlong)param_3 == 1) {
    pcVar1 = (char *)FUN_180006039(param_1,param_2,*param_3);
    return pcVar1;
  }
  if ((longlong)param_2 - (longlong)param_1 < 0x10) {
    pcVar1 = param_1;
    if (param_1 != param_2) {
      pcVar1 = param_1 + ((longlong)param_2 - (longlong)param_1);
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
    return pcVar1;
  }
  pcVar1 = (char *)FUN_18023b320();
  return pcVar1;
}


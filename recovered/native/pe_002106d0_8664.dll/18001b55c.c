/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001b55c */

char * FUN_18001b55c(char *param_1,char *param_2,char *param_3,char *param_4,longlong *param_5)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  
  lVar3 = *param_5;
  pcVar4 = param_1;
  while ((lVar3 = lVar3 + 1, pcVar4 != param_2 && (param_3 != param_4))) {
    *param_5 = lVar3;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    cVar2 = *param_3;
    param_3 = param_3 + 1;
    if (cVar1 != cVar2) {
      return param_1;
    }
  }
  if (param_3 != param_4) {
    return param_1;
  }
  return pcVar4;
}


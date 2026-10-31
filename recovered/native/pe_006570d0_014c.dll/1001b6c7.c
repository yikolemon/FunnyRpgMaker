/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b6c7 */

char * FUN_1001b6c7(char *param_1,char *param_2,char *param_3,char *param_4,int *param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = *param_5;
  pcVar4 = param_1;
  while ((iVar3 = iVar3 + 1, pcVar4 != param_2 && (param_3 != param_4))) {
    *param_5 = iVar3;
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


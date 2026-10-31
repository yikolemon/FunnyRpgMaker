/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b679 */

char * FUN_1001b679(char *param_1,char *param_2,char *param_3,char *param_4,int *param_5,int param_6
                   )

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  while ((pcVar3 != param_2 && (param_3 != param_4))) {
    *param_5 = *param_5 + 1;
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    cVar2 = (**(code **)(**(int **)(param_6 + 4) + 0x10))((int)cVar2);
    if (cVar2 != cVar1) {
      return param_1;
    }
  }
  if (param_3 != param_4) {
    return param_1;
  }
  return pcVar3;
}


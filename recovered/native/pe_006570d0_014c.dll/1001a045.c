/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001a045 */

bool FUN_1001a045(char *param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar3 = param_3;
  if (param_1 == param_2) {
    bVar5 = true;
  }
  else {
    do {
      pcVar4 = param_1 + 1;
      cVar2 = *pcVar3;
      cVar1 = (**(code **)(**(int **)(param_4 + 4) + 0x10))((int)*param_1);
      cVar2 = (**(code **)(**(int **)(param_3 + 4) + 0x10))((int)cVar2);
      bVar5 = cVar1 == cVar2;
      if (!bVar5) {
        return bVar5;
      }
      pcVar3 = pcVar3 + 1;
      param_1 = pcVar4;
    } while (pcVar4 != param_2);
  }
  return bVar5;
}


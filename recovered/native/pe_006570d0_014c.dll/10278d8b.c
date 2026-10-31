/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10278d8b */

int FUN_10278d8b(char *param_1,undefined4 param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (1 - (int)(param_1 + 1));
  if ((char *)~param_3 < pcVar4) {
    iVar3 = 0xc;
  }
  else {
    pcVar5 = pcVar4 + param_3 + 1;
    iVar2 = FUN_10275d90(pcVar5,1);
    if (param_3 != 0) {
      iVar3 = FUN_10283660(iVar2,pcVar5,param_2,param_3);
      if (iVar3 != 0) goto LAB_10278e2f;
    }
    iVar3 = FUN_10283660(iVar2 + param_3,(int)pcVar5 - param_3,param_1,pcVar4);
    if (iVar3 != 0) {
LAB_10278e2f:
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar3 = expand_if_necessary();
    if (iVar3 == 0) {
      **(int **)(param_4 + 4) = iVar2;
      iVar3 = 0;
      *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 4;
    }
    else {
      FUN_10274120(iVar2);
    }
    FUN_10274120(0);
  }
  return iVar3;
}


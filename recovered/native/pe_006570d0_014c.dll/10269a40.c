/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269a40 */

int * FUN_10269a40(char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  int *local_8;
  
  iVar3 = 0;
  cVar5 = *param_1;
  pcVar4 = param_1;
  while (cVar5 != '\0') {
    iVar2 = iVar3 + 1;
    if (cVar5 == '=') {
      iVar2 = iVar3;
    }
    do {
      iVar3 = iVar2;
      cVar5 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar3;
    } while (cVar5 != '\0');
    cVar5 = *pcVar4;
  }
  piVar1 = (int *)FUN_10275d90(iVar3 + 1,4);
  local_8 = piVar1;
  if (piVar1 == (int *)0x0) {
    FUN_10274120(0);
    piVar1 = (int *)0x0;
  }
  else {
    for (; *param_1 != '\0'; param_1 = param_1 + (int)pcVar4) {
      pcVar4 = param_1;
      do {
        cVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar5 != '\0');
      pcVar4 = pcVar4 + (1 - (int)(param_1 + 1));
      if (*param_1 != '=') {
        iVar3 = FUN_10275d90(pcVar4,1);
        if (iVar3 == 0) {
          free_environment<>(piVar1);
          FUN_10274120(0);
          FUN_10274120(0);
          return (int *)0x0;
        }
        iVar2 = FUN_102733f0(iVar3,pcVar4,param_1);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *local_8 = iVar3;
        local_8 = local_8 + 1;
        FUN_10274120(0);
      }
    }
    FUN_10274120(0);
  }
  return piVar1;
}


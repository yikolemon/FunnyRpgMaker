/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269b25 */

int * FUN_10269b25(short *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int *local_c;
  
  sVar2 = *param_1;
  iVar1 = 0;
  psVar8 = param_1;
  while (sVar2 != 0) {
    iVar5 = iVar1 + 1;
    if (sVar2 == 0x3d) {
      iVar5 = iVar1;
    }
    psVar7 = psVar8;
    do {
      sVar2 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar2 != 0);
    psVar8 = psVar8 + ((int)psVar7 - (int)(psVar8 + 1) >> 1) + 1;
    iVar1 = iVar5;
    sVar2 = *psVar8;
  }
  piVar4 = (int *)FUN_10275d90(iVar1 + 1,4);
  if (piVar4 == (int *)0x0) {
    FUN_10274120(0);
    piVar4 = (int *)0x0;
  }
  else {
    sVar2 = *param_1;
    local_c = piVar4;
    while (sVar2 != 0) {
      psVar8 = param_1;
      do {
        sVar3 = *psVar8;
        psVar8 = psVar8 + 1;
      } while (sVar3 != 0);
      iVar1 = ((int)psVar8 - (int)(param_1 + 1) >> 1) + 1;
      if (sVar2 != 0x3d) {
        iVar5 = FUN_10275d90(iVar1,2);
        if (iVar5 == 0) {
          free_environment<>(piVar4);
          FUN_10274120(0);
          FUN_10274120(0);
          return (int *)0x0;
        }
        iVar6 = FUN_102749e0(iVar5,iVar1,param_1);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *local_c = iVar5;
        local_c = local_c + 1;
        FUN_10274120(0);
      }
      param_1 = param_1 + iVar1;
      sVar2 = *param_1;
    }
    FUN_10274120(0);
  }
  return piVar4;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a243 */

int FUN_1027a243(int *param_1)

{
  short *psVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  
  if (param_1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar7 = 0;
    iVar4 = *param_1;
    piVar3 = param_1;
    while (iVar4 != 0) {
      piVar3 = piVar3 + 1;
      iVar7 = iVar7 + 1;
      iVar4 = *piVar3;
    }
    iVar4 = FUN_10275d90(iVar7 + 1,4);
    if (iVar4 == 0) {
LAB_1027a2ef:
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    psVar8 = (short *)*param_1;
    if (psVar8 != (short *)0x0) {
      iVar7 = iVar4 - (int)param_1;
      do {
        psVar1 = psVar8 + 1;
        do {
          sVar2 = *psVar8;
          psVar8 = psVar8 + 1;
        } while (sVar2 != 0);
        iVar6 = ((int)psVar8 - (int)psVar1 >> 1) + 1;
        uVar5 = FUN_10275d90(iVar6,2);
        *(undefined4 *)(iVar7 + (int)param_1) = uVar5;
        FUN_10274120(0);
        if (*(int *)(iVar7 + (int)param_1) == 0) goto LAB_1027a2ef;
        iVar6 = FUN_102749e0(*(undefined4 *)(iVar7 + (int)param_1),iVar6,*param_1);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        psVar8 = (short *)*param_1;
      } while (psVar8 != (short *)0x0);
    }
    FUN_10274120(0);
  }
  return iVar4;
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007eb77 */

void FUN_14007eb77(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  int *piVar11;
  
  if (1 < *(int *)((longlong)param_1 + 0xc)) {
    iVar2 = (int)param_1[1];
    lVar6 = (longlong)iVar2;
    uVar5 = (ulonglong)(*(int *)((longlong)param_1 + 0xc) - 2);
    lVar4 = lVar6 * uVar5 * 0x10;
    piVar9 = (int *)(lVar4 + *param_1 + 0x10);
    lVar1 = (longlong)(iVar2 + -2) + 1;
    piVar11 = (int *)((longlong)(iVar2 + -2) * 0x10 + *param_1 + lVar4);
    do {
      piVar7 = piVar9;
      lVar10 = (ulonglong)(iVar2 - 1) - 1;
      piVar8 = piVar11;
      lVar4 = lVar1;
      if (iVar2 < 3) {
        if (1 < iVar2) goto LAB_14007ec4e;
      }
      else {
        do {
          FUN_14007ec8e(piVar7,-1,1,iVar2);
          FUN_14007ec8e(piVar7,0,1,iVar2);
          FUN_14007ec8e(piVar7,1,1,iVar2);
          FUN_14007ec8e(piVar7,-1,0,iVar2);
          lVar10 = lVar10 + -1;
          piVar7 = piVar7 + 4;
        } while (lVar10 != 0);
LAB_14007ec4e:
        do {
          FUN_14007ec8e(piVar8,1,0,iVar2);
          lVar4 = lVar4 + -1;
          piVar8 = piVar8 + -4;
        } while (lVar4 != 0);
      }
      piVar9 = piVar9 + lVar6 * -4;
      piVar11 = piVar11 + lVar6 * -4;
      bVar3 = 0 < (longlong)uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar3);
  }
  return;
}


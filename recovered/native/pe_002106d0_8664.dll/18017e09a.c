/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017e09a */

void FUN_18017e09a(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  if (((int)param_1[0x906] != 0) && (lVar10 = *param_1, 0 < *(int *)(lVar10 + 8))) {
    lVar7 = 0;
    do {
      lVar8 = lVar7 * 0x60;
      iVar4 = (int)param_1[lVar7 * 0xc + 0x8d8] + 7 >> 3;
      if (0 < iVar4) {
        uVar2 = *(int *)((longlong)param_1 + lVar8 + 0x46bc) + 7 >> 3;
        iVar3 = 0;
        iVar5 = 0;
        do {
          if (0 < (int)uVar2) {
            iVar9 = 0;
            lVar10 = 0;
            do {
              lVar6 = (longlong)(((int)param_1[lVar7 * 0xc + 0x8df] * iVar5 + iVar9) * 0x40) * 2 +
                      param_1[lVar7 * 0xc + 0x8de];
              FUN_18017f149(lVar6,param_1 + (longlong)*(int *)((longlong)param_1 + lVar8 + 0x46ac) *
                                            0x10 + 0x691);
              iVar1 = *(int *)((longlong)param_1 + lVar8 + 0x46c4);
              (*(code *)param_1[0x90e])
                        ((longlong)(iVar3 * iVar1) + param_1[lVar7 * 0xc + 0x8da] + lVar10,iVar1,
                         lVar6);
              iVar9 = iVar9 + 1;
              lVar10 = lVar10 + 8;
            } while ((ulonglong)uVar2 * 8 - lVar10 != 0);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 8;
        } while (iVar5 != iVar4);
        lVar10 = *param_1;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar10 + 8));
  }
  return;
}


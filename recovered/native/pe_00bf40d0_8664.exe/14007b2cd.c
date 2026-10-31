/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007b2cd */

void FUN_14007b2cd(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong local_60;
  longlong local_58;
  
  uVar2 = param_1[0x11];
  iVar9 = (int)uVar2 >> 8;
  iVar14 = (int)param_3 >> 8;
  if ((iVar9 < param_1[3] || iVar14 < param_1[3]) && (param_1[1] <= iVar9 || param_1[1] <= iVar14))
  {
    uVar1 = param_1[0x10];
    iVar15 = (int)uVar1 >> 8;
    iVar11 = (int)param_2 >> 8;
    uVar6 = (ulonglong)uVar1 & 0xff;
    iVar12 = (int)uVar6;
    uVar8 = (ulonglong)uVar2 & 0xff;
    if ((int)(uVar2 ^ param_3 | uVar1 ^ param_2) >> 8 != 0) {
      if (param_3 == uVar2) {
        FUN_14007b23e(param_1,iVar11,iVar14);
        goto LAB_14007b396;
      }
      iVar10 = param_3 - uVar2;
      if (param_2 == uVar1) {
        if (iVar10 < 1) {
          do {
            iVar9 = iVar9 + -1;
            *(int *)(*(longlong *)(param_1 + 10) + 4) =
                 *(int *)(*(longlong *)(param_1 + 10) + 4) - (int)uVar8;
            *(int *)(*(longlong *)(param_1 + 10) + 8) =
                 *(int *)(*(longlong *)(param_1 + 10) + 8) + (int)uVar8 * iVar12 * -2;
            FUN_14007b23e(param_1,iVar15,iVar9);
            uVar8 = 0x100;
          } while (iVar9 != iVar14);
        }
        else {
          iVar11 = 0x100 - (int)uVar8;
          do {
            iVar9 = iVar9 + 1;
            *(int *)(*(longlong *)(param_1 + 10) + 4) =
                 *(int *)(*(longlong *)(param_1 + 10) + 4) + iVar11;
            *(int *)(*(longlong *)(param_1 + 10) + 8) =
                 *(int *)(*(longlong *)(param_1 + 10) + 8) + iVar11 * iVar12 * 2;
            FUN_14007b23e(param_1,iVar15,iVar9);
            iVar11 = 0x100;
          } while (iVar9 != iVar14);
          uVar8 = 0;
        }
      }
      else {
        iVar12 = param_2 - uVar1;
        if (iVar15 == iVar11) {
          local_58 = 0;
        }
        else {
          local_58 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffff)) / SEXT816((longlong)iVar12),0
                           );
        }
        if (iVar9 == iVar14) {
          local_60 = 0;
        }
        else {
          local_60 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffff)) / SEXT816((longlong)iVar10),0
                           );
        }
        lVar3 = (longlong)(iVar12 * 0x100);
        lVar4 = (longlong)(iVar10 * 0x100);
        lVar13 = (longlong)iVar12 * uVar8 - uVar6 * (longlong)iVar10;
        do {
          lVar5 = lVar13 - lVar3;
          iVar10 = (int)uVar6;
          iVar12 = (int)uVar8;
          if (lVar13 < 1 && (lVar5 != 0 && lVar3 <= lVar13)) {
            uVar2 = (uint)((ulonglong)(lVar13 * local_58) >> 0x20);
            iVar12 = uVar2 - iVar12;
            *(int *)(*(longlong *)(param_1 + 10) + 4) =
                 *(int *)(*(longlong *)(param_1 + 10) + 4) + iVar12;
            *(int *)(*(longlong *)(param_1 + 10) + 8) =
                 *(int *)(*(longlong *)(param_1 + 10) + 8) + iVar12 * iVar10;
            lVar5 = lVar13 - lVar4;
            iVar15 = iVar15 + -1;
            uVar6 = 0x100;
            uVar8 = (ulonglong)uVar2;
          }
          else {
            lVar7 = lVar4 + lVar5;
            if ((lVar5 < 1) && (0 < lVar7)) {
              *(int *)(*(longlong *)(param_1 + 10) + 4) =
                   *(int *)(*(longlong *)(param_1 + 10) + 4) + (0x100 - iVar12);
              uVar2 = (uint)((ulonglong)-(local_60 * lVar5) >> 0x20);
              *(int *)(*(longlong *)(param_1 + 10) + 8) =
                   *(int *)(*(longlong *)(param_1 + 10) + 8) + (iVar10 + uVar2) * (0x100 - iVar12);
              iVar9 = iVar9 + 1;
              uVar8 = 0;
              uVar6 = (ulonglong)uVar2;
            }
            else {
              lVar5 = lVar13 + lVar4;
              if ((lVar5 < 0) || (0 < lVar7)) {
                *(int *)(*(longlong *)(param_1 + 10) + 4) =
                     *(int *)(*(longlong *)(param_1 + 10) + 4) - iVar12;
                uVar2 = (uint)((ulonglong)-(local_60 * lVar13) >> 0x20);
                *(int *)(*(longlong *)(param_1 + 10) + 8) =
                     *(int *)(*(longlong *)(param_1 + 10) + 8) - (iVar10 + uVar2) * iVar12;
                lVar5 = lVar13 + lVar3;
                iVar9 = iVar9 + -1;
                uVar8 = 0x100;
                uVar6 = (ulonglong)uVar2;
              }
              else {
                uVar2 = (uint)((ulonglong)(lVar5 * local_58) >> 0x20);
                iVar12 = uVar2 - iVar12;
                *(int *)(*(longlong *)(param_1 + 10) + 4) =
                     *(int *)(*(longlong *)(param_1 + 10) + 4) + iVar12;
                *(int *)(*(longlong *)(param_1 + 10) + 8) =
                     *(int *)(*(longlong *)(param_1 + 10) + 8) + (iVar10 + 0x100) * iVar12;
                iVar15 = iVar15 + 1;
                uVar6 = 0;
                uVar8 = (ulonglong)uVar2;
              }
            }
          }
          iVar12 = (int)uVar6;
          FUN_14007b23e(param_1,iVar15,iVar9);
          lVar13 = lVar5;
        } while ((iVar15 != iVar11) || (iVar9 != iVar14));
      }
    }
    iVar9 = (param_3 & 0xff) - (int)uVar8;
    *(int *)(*(longlong *)(param_1 + 10) + 4) = *(int *)(*(longlong *)(param_1 + 10) + 4) + iVar9;
    *(int *)(*(longlong *)(param_1 + 10) + 8) =
         *(int *)(*(longlong *)(param_1 + 10) + 8) + iVar9 * ((param_2 & 0xff) + iVar12);
  }
LAB_14007b396:
  param_1[0x10] = param_2;
  param_1[0x11] = param_3;
  return;
}


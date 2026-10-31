/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022dc8d */

void FUN_18022dc8d(longlong param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong local_60;
  longlong local_58;
  
  uVar3 = *(uint *)(param_1 + 0x44);
  iVar10 = (int)uVar3 >> 8;
  iVar15 = (int)param_3 >> 8;
  if ((iVar10 < *(int *)(param_1 + 0xc) || iVar15 < *(int *)(param_1 + 0xc)) &&
     (*(int *)(param_1 + 4) <= iVar10 || *(int *)(param_1 + 4) <= iVar15)) {
    uVar2 = *(uint *)(param_1 + 0x40);
    iVar16 = (int)uVar2 >> 8;
    iVar12 = (int)param_2 >> 8;
    uVar7 = (ulonglong)uVar2 & 0xff;
    iVar13 = (int)uVar7;
    uVar9 = (ulonglong)uVar3 & 0xff;
    if ((int)(uVar3 ^ param_3 | uVar2 ^ param_2) >> 8 != 0) {
      if (param_3 == uVar3) {
        FUN_18022dbfe(param_1,iVar12,iVar15);
        goto LAB_18022dd56;
      }
      iVar11 = param_3 - uVar3;
      if (param_2 == uVar2) {
        if (iVar11 < 1) {
          do {
            iVar10 = iVar10 + -1;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
            *piVar1 = *piVar1 - (int)uVar9;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
            *piVar1 = *piVar1 + (int)uVar9 * iVar13 * -2;
            FUN_18022dbfe(param_1,iVar16,iVar10);
            uVar9 = 0x100;
          } while (iVar10 != iVar15);
        }
        else {
          iVar12 = 0x100 - (int)uVar9;
          do {
            iVar10 = iVar10 + 1;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
            *piVar1 = *piVar1 + iVar12;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
            *piVar1 = *piVar1 + iVar12 * iVar13 * 2;
            FUN_18022dbfe(param_1,iVar16,iVar10);
            iVar12 = 0x100;
          } while (iVar10 != iVar15);
          uVar9 = 0;
        }
      }
      else {
        iVar13 = param_2 - uVar2;
        if (iVar16 == iVar12) {
          local_58 = 0;
        }
        else {
          local_58 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffff)) / SEXT816((longlong)iVar13),0
                           );
        }
        if (iVar10 == iVar15) {
          local_60 = 0;
        }
        else {
          local_60 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffff)) / SEXT816((longlong)iVar11),0
                           );
        }
        lVar4 = (longlong)(iVar13 * 0x100);
        lVar5 = (longlong)(iVar11 * 0x100);
        lVar14 = (longlong)iVar13 * uVar9 - uVar7 * (longlong)iVar11;
        do {
          lVar6 = lVar14 - lVar4;
          iVar11 = (int)uVar7;
          iVar13 = (int)uVar9;
          if (lVar14 < 1 && (lVar6 != 0 && lVar4 <= lVar14)) {
            uVar3 = (uint)((ulonglong)(lVar14 * local_58) >> 0x20);
            iVar13 = uVar3 - iVar13;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
            *piVar1 = *piVar1 + iVar13;
            piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
            *piVar1 = *piVar1 + iVar13 * iVar11;
            lVar6 = lVar14 - lVar5;
            iVar16 = iVar16 + -1;
            uVar7 = 0x100;
            uVar9 = (ulonglong)uVar3;
          }
          else {
            lVar8 = lVar5 + lVar6;
            if ((lVar6 < 1) && (0 < lVar8)) {
              piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
              *piVar1 = *piVar1 + (0x100 - iVar13);
              uVar3 = (uint)((ulonglong)-(local_60 * lVar6) >> 0x20);
              piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
              *piVar1 = *piVar1 + (iVar11 + uVar3) * (0x100 - iVar13);
              iVar10 = iVar10 + 1;
              uVar9 = 0;
              uVar7 = (ulonglong)uVar3;
            }
            else {
              lVar6 = lVar14 + lVar5;
              if ((lVar6 < 0) || (0 < lVar8)) {
                piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
                *piVar1 = *piVar1 - iVar13;
                uVar3 = (uint)((ulonglong)-(local_60 * lVar14) >> 0x20);
                piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
                *piVar1 = *piVar1 - (iVar11 + uVar3) * iVar13;
                lVar6 = lVar14 + lVar4;
                iVar10 = iVar10 + -1;
                uVar9 = 0x100;
                uVar7 = (ulonglong)uVar3;
              }
              else {
                uVar3 = (uint)((ulonglong)(lVar6 * local_58) >> 0x20);
                iVar13 = uVar3 - iVar13;
                piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
                *piVar1 = *piVar1 + iVar13;
                piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
                *piVar1 = *piVar1 + (iVar11 + 0x100) * iVar13;
                iVar16 = iVar16 + 1;
                uVar7 = 0;
                uVar9 = (ulonglong)uVar3;
              }
            }
          }
          iVar13 = (int)uVar7;
          FUN_18022dbfe(param_1,iVar16,iVar10);
          lVar14 = lVar6;
        } while ((iVar16 != iVar12) || (iVar10 != iVar15));
      }
    }
    iVar10 = (param_3 & 0xff) - (int)uVar9;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 4);
    *piVar1 = *piVar1 + iVar10;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 8);
    *piVar1 = *piVar1 + iVar10 * ((param_2 & 0xff) + iVar13);
  }
LAB_18022dd56:
  *(uint *)(param_1 + 0x40) = param_2;
  *(uint *)(param_1 + 0x44) = param_3;
  return;
}


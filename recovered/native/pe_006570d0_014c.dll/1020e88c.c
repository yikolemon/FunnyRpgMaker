/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020e88c */

void __fastcall FUN_1020e88c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  
  iVar16 = *(int *)(param_1 + 4);
  if (iVar16 != 0) {
    puVar9 = *(uint **)(param_1 + 0xc);
    uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + 200 + param_2 * 0xcc);
    iVar17 = *(int *)(*(int *)(param_1 + 0x18) + 0xcc + param_2 * 0xcc);
    do {
      if (puVar9[1] != 0) {
        uVar6 = *puVar9;
        uVar15 = puVar9[1] * 0x2c + uVar6;
        uVar4 = 0;
        uVar7 = uVar6;
        uVar13 = 0;
        do {
          uVar10 = *(uint *)(uVar7 + 0x10) & 0x20;
          uVar14 = uVar13;
          if (uVar13 == 0) {
            uVar14 = uVar7;
          }
          if (uVar10 == 0) {
            uVar14 = uVar13;
          }
          uVar4 = uVar4 + (uVar10 >> 5);
          uVar7 = uVar7 + 0x2c;
          uVar13 = uVar14;
        } while (uVar7 < uVar15);
        uVar7 = uVar14;
        if (uVar4 < 2) {
          if (uVar4 == 1) {
            lVar3 = (longlong)(int)uVar1 * (longlong)*(int *)(uVar14 + 0x20);
            iVar17 = (int)(lVar3 >> 0x3f);
            lVar3 = lVar3 + CONCAT44(iVar17,iVar17) + 0x8000;
            iVar17 = *(int *)(uVar14 + 0x28) -
                     ((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10);
          }
          do {
            if (uVar6 != uVar14) {
              lVar3 = (longlong)(int)uVar1 * (longlong)*(int *)(uVar6 + 0x20);
              iVar18 = (int)(lVar3 >> 0x3f);
              lVar3 = lVar3 + CONCAT44(iVar18,iVar18) + 0x8000;
              *(uint *)(uVar6 + 0x28) =
                   ((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10) + iVar17;
            }
            uVar6 = uVar6 + 0x2c;
          } while (uVar6 < uVar15);
        }
        else {
          do {
            do {
              uVar6 = uVar7;
              uVar7 = *(uint *)(uVar6 + 4);
              if (uVar7 == uVar14) goto LAB_1020ea5d;
              uVar13 = uVar7;
            } while ((*(byte *)(uVar7 + 0x10) & 0x20) != 0);
            do {
              uVar13 = *(uint *)(uVar13 + 4);
            } while ((*(byte *)(uVar13 + 0x10) & 0x20) == 0);
            iVar18 = *(int *)(uVar6 + 0x20);
            iVar11 = *(int *)(uVar13 + 0x20);
            iVar5 = iVar18 - iVar11;
            uVar4 = uVar6;
            uVar15 = uVar13;
            if (iVar5 == 0 || iVar18 < iVar11) {
              iVar5 = iVar11 - iVar18;
              uVar4 = uVar13;
              uVar15 = uVar6;
              iVar11 = iVar18;
            }
            iVar18 = *(int *)(uVar15 + 0x28);
            iVar2 = *(int *)(uVar4 + 0x28);
            if (iVar5 == 0) {
              uVar4 = 0x10000;
            }
            else {
              uVar4 = FUN_101c2523(iVar2 - iVar18,iVar5);
              uVar7 = *(uint *)(uVar6 + 4);
            }
            do {
              uVar6 = *(int *)(uVar7 + 0x20) - iVar11;
              iVar8 = iVar18;
              if (uVar6 == 0 || *(int *)(uVar7 + 0x20) < iVar11) {
                lVar3 = (longlong)(int)uVar6 * (longlong)(int)uVar1;
              }
              else if ((int)uVar6 < iVar5) {
                lVar3 = CONCAT44(((int)uVar4 >> 0x1f) * uVar6 +
                                 (int)((ulonglong)uVar6 * (ulonglong)uVar4 >> 0x20),
                                 (int)((ulonglong)uVar6 * (ulonglong)uVar4));
              }
              else {
                lVar3 = (ulonglong)(uVar6 - iVar5) * (ulonglong)uVar1;
                lVar3 = CONCAT44((int)((ulonglong)lVar3 >> 0x20) +
                                 ((int)uVar1 >> 0x1f) * (uVar6 - iVar5),(int)lVar3);
                iVar8 = iVar2;
              }
              iVar12 = (int)(lVar3 >> 0x3f);
              lVar3 = lVar3 + CONCAT44(iVar12,iVar12) + 0x8000;
              *(uint *)(uVar7 + 0x28) =
                   ((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10) + iVar8;
              uVar7 = *(uint *)(uVar7 + 4);
            } while (uVar7 != uVar13);
            uVar7 = uVar13;
          } while (uVar13 != uVar14);
        }
      }
LAB_1020ea5d:
      puVar9 = puVar9 + 2;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  return;
}


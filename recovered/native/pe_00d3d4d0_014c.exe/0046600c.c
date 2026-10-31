/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046600c */

void __fastcall FUN_0046600c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar15 = *(int *)(param_1 + 4);
  if (iVar15 != 0) {
    puVar8 = *(uint **)(param_1 + 0xc);
    uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + 200 + param_2 * 0xcc);
    iVar16 = *(int *)(*(int *)(param_1 + 0x18) + 0xcc + param_2 * 0xcc);
    do {
      if (puVar8[1] != 0) {
        uVar5 = *puVar8;
        uVar14 = puVar8[1] * 0x2c + uVar5;
        uVar4 = 0;
        uVar6 = uVar5;
        uVar12 = 0;
        do {
          uVar9 = *(uint *)(uVar6 + 0x10) & 0x20;
          uVar13 = uVar12;
          if (uVar12 == 0) {
            uVar13 = uVar6;
          }
          if (uVar9 == 0) {
            uVar13 = uVar12;
          }
          uVar4 = uVar4 + (uVar9 >> 5);
          uVar6 = uVar6 + 0x2c;
          uVar12 = uVar13;
        } while (uVar6 < uVar14);
        uVar6 = uVar13;
        if (uVar4 < 2) {
          if (uVar4 == 1) {
            lVar3 = (longlong)(int)uVar1 * (longlong)*(int *)(uVar13 + 0x20);
            iVar16 = (int)(lVar3 >> 0x3f);
            lVar3 = lVar3 + CONCAT44(iVar16,iVar16) + 0x8000;
            iVar16 = *(int *)(uVar13 + 0x28) -
                     ((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10);
          }
          do {
            if (uVar5 != uVar13) {
              lVar3 = (longlong)(int)uVar1 * (longlong)*(int *)(uVar5 + 0x20);
              iVar17 = (int)(lVar3 >> 0x3f);
              lVar3 = lVar3 + CONCAT44(iVar17,iVar17) + 0x8000;
              *(uint *)(uVar5 + 0x28) =
                   ((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10) + iVar16;
            }
            uVar5 = uVar5 + 0x2c;
          } while (uVar5 < uVar14);
        }
        else {
          do {
            do {
              uVar5 = uVar6;
              uVar6 = *(uint *)(uVar5 + 4);
              if (uVar6 == uVar13) goto LAB_004661dd;
              uVar12 = uVar6;
            } while ((*(byte *)(uVar6 + 0x10) & 0x20) != 0);
            do {
              uVar12 = *(uint *)(uVar12 + 4);
            } while ((*(byte *)(uVar12 + 0x10) & 0x20) == 0);
            iVar17 = *(int *)(uVar5 + 0x20);
            iVar10 = *(int *)(uVar12 + 0x20);
            uVar9 = iVar17 - iVar10;
            uVar4 = uVar5;
            uVar14 = uVar12;
            if (uVar9 == 0 || iVar17 < iVar10) {
              uVar9 = iVar10 - iVar17;
              uVar4 = uVar12;
              uVar14 = uVar5;
              iVar10 = iVar17;
            }
            iVar17 = *(int *)(uVar14 + 0x28);
            iVar2 = *(int *)(uVar4 + 0x28);
            if (uVar9 == 0) {
              uVar4 = 0x10000;
            }
            else {
              uVar4 = FUN_0041eaa0(iVar2 - iVar17,uVar9);
              uVar6 = *(uint *)(uVar5 + 4);
            }
            do {
              uVar5 = *(int *)(uVar6 + 0x20) - iVar10;
              iVar7 = iVar17;
              if (uVar5 == 0 || *(int *)(uVar6 + 0x20) < iVar10) {
                lVar3 = (longlong)(int)uVar5 * (longlong)(int)uVar1;
              }
              else if ((int)uVar5 < (int)uVar9) {
                lVar3 = CONCAT44(((int)uVar4 >> 0x1f) * uVar5 +
                                 (int)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20),
                                 (int)((ulonglong)uVar5 * (ulonglong)uVar4));
              }
              else {
                lVar3 = (ulonglong)(uVar5 - uVar9) * (ulonglong)uVar1;
                lVar3 = CONCAT44((int)((ulonglong)lVar3 >> 0x20) +
                                 ((int)uVar1 >> 0x1f) * (uVar5 - uVar9),(int)lVar3);
                iVar7 = iVar2;
              }
              iVar11 = (int)(lVar3 >> 0x3f);
              lVar3 = lVar3 + CONCAT44(iVar11,iVar11) + 0x8000;
              *(uint *)(uVar6 + 0x28) =
                   ((int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10) + iVar7;
              uVar6 = *(uint *)(uVar6 + 4);
            } while (uVar6 != uVar12);
            uVar6 = uVar12;
          } while (uVar12 != uVar13);
        }
      }
LAB_004661dd:
      puVar8 = puVar8 + 2;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}


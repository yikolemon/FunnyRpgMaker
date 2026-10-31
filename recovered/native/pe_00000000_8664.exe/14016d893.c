/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016d893 */

void FUN_14016d893(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong *puVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  iVar15 = *(int *)(param_1 + 4);
  if (iVar15 != 0) {
    puVar17 = *(ulonglong **)(param_1 + 0x10);
    lVar6 = (param_2 & 0xffffffff) * 0xcc;
    iVar18 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xd0 + lVar6);
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0xcc + lVar6);
    do {
      if ((ulonglong)(uint)puVar17[1] != 0) {
        uVar8 = *puVar17;
        uVar7 = (ulonglong)(uint)puVar17[1] * 0x40 + uVar8;
        uVar11 = 0;
        uVar4 = uVar8;
        uVar19 = 0;
        do {
          uVar16 = *(uint *)(uVar4 + 0x1c) & 0x20;
          uVar20 = uVar19;
          if (uVar19 == 0) {
            uVar20 = uVar4;
          }
          if (uVar16 == 0) {
            uVar20 = uVar19;
          }
          uVar11 = uVar11 + (uVar16 >> 5);
          uVar4 = uVar4 + 0x40;
          uVar19 = uVar20;
        } while (uVar4 < uVar7);
        uVar4 = uVar20;
        if (uVar11 < 2) {
          if (uVar11 == 1) {
            lVar5 = *(int *)(uVar20 + 0x30) * lVar6;
            iVar18 = *(int *)(uVar20 + 0x38) -
                     (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
          }
          do {
            if (uVar8 != uVar20) {
              lVar5 = *(int *)(uVar8 + 0x30) * lVar6;
              *(int *)(uVar8 + 0x38) =
                   (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10) + iVar18;
            }
            uVar8 = uVar8 + 0x40;
          } while (uVar8 < uVar7);
        }
        else {
          do {
            do {
              uVar8 = uVar4;
              uVar4 = *(ulonglong *)(uVar8 + 8);
              if (uVar4 == uVar20) goto LAB_14016da7f;
              uVar19 = uVar4;
            } while ((*(byte *)(uVar4 + 0x1c) & 0x20) != 0);
            do {
              uVar19 = *(ulonglong *)(uVar19 + 8);
            } while ((*(byte *)(uVar19 + 0x1c) & 0x20) == 0);
            iVar1 = *(int *)(uVar8 + 0x30);
            iVar9 = *(int *)(uVar19 + 0x30);
            iVar10 = iVar1 - iVar9;
            uVar7 = uVar8;
            uVar13 = uVar19;
            if (iVar10 == 0 || iVar1 < iVar9) {
              iVar10 = iVar9 - iVar1;
              uVar7 = uVar19;
              uVar13 = uVar8;
              iVar9 = iVar1;
            }
            iVar1 = *(int *)(uVar13 + 0x38);
            iVar2 = *(int *)(uVar7 + 0x38);
            if (iVar10 == 0) {
              lVar5 = 0x10000;
            }
            else {
              iVar3 = FUN_14012b378(iVar2 - iVar1,iVar10);
              lVar5 = (longlong)iVar3;
              uVar4 = *(ulonglong *)(uVar8 + 8);
            }
            do {
              uVar8 = (longlong)*(int *)(uVar4 + 0x30) - (longlong)iVar9;
              iVar12 = (int)uVar8;
              iVar3 = iVar1;
              if (iVar12 < 1) {
                lVar14 = uVar8 * lVar6;
              }
              else if (iVar12 < iVar10) {
                lVar14 = (uVar8 & 0xffffffff) * lVar5;
              }
              else {
                lVar14 = (ulonglong)(uint)(iVar12 - iVar10) * lVar6;
                iVar3 = iVar2;
              }
              *(int *)(uVar4 + 0x38) =
                   (int)((ulonglong)(lVar14 + (lVar14 >> 0x3f) + 0x8000) >> 0x10) + iVar3;
              uVar4 = *(ulonglong *)(uVar4 + 8);
            } while (uVar4 != uVar19);
            uVar4 = uVar19;
          } while (uVar19 != uVar20);
        }
      }
LAB_14016da7f:
      puVar17 = puVar17 + 2;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}


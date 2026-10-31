/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006b7e7 */

void FUN_14006b7e7(longlong param_1,ulonglong param_2)

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
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong *puVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  iVar14 = *(int *)(param_1 + 4);
  if (iVar14 != 0) {
    puVar16 = *(ulonglong **)(param_1 + 0x10);
    lVar6 = (param_2 & 0xffffffff) * 0xcc;
    iVar17 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xd0 + lVar6);
    lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0xcc + lVar6);
    do {
      if ((ulonglong)(uint)puVar16[1] != 0) {
        uVar8 = *puVar16;
        uVar7 = (ulonglong)(uint)puVar16[1] * 0x40 + uVar8;
        uVar10 = 0;
        uVar4 = uVar8;
        uVar18 = 0;
        do {
          uVar15 = *(uint *)(uVar4 + 0x1c) & 0x20;
          uVar19 = uVar18;
          if (uVar18 == 0) {
            uVar19 = uVar4;
          }
          if (uVar15 == 0) {
            uVar19 = uVar18;
          }
          uVar10 = uVar10 + (uVar15 >> 5);
          uVar4 = uVar4 + 0x40;
          uVar18 = uVar19;
        } while (uVar4 < uVar7);
        uVar4 = uVar19;
        if (uVar10 < 2) {
          if (uVar10 == 1) {
            lVar5 = *(int *)(uVar19 + 0x30) * lVar6;
            iVar17 = *(int *)(uVar19 + 0x38) -
                     (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10);
          }
          do {
            if (uVar8 != uVar19) {
              lVar5 = *(int *)(uVar8 + 0x30) * lVar6;
              *(int *)(uVar8 + 0x38) =
                   (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10) + iVar17;
            }
            uVar8 = uVar8 + 0x40;
          } while (uVar8 < uVar7);
        }
        else {
          do {
            do {
              uVar8 = uVar4;
              uVar4 = *(ulonglong *)(uVar8 + 8);
              if (uVar4 == uVar19) goto LAB_14006b9d3;
              uVar18 = uVar4;
            } while ((*(byte *)(uVar4 + 0x1c) & 0x20) != 0);
            do {
              uVar18 = *(ulonglong *)(uVar18 + 8);
            } while ((*(byte *)(uVar18 + 0x1c) & 0x20) == 0);
            iVar1 = *(int *)(uVar8 + 0x30);
            iVar9 = *(int *)(uVar18 + 0x30);
            uVar10 = iVar1 - iVar9;
            uVar7 = uVar8;
            uVar12 = uVar18;
            if (uVar10 == 0 || iVar1 < iVar9) {
              uVar10 = iVar9 - iVar1;
              uVar7 = uVar18;
              uVar12 = uVar8;
              iVar9 = iVar1;
            }
            iVar1 = *(int *)(uVar12 + 0x38);
            iVar2 = *(int *)(uVar7 + 0x38);
            if (uVar10 == 0) {
              lVar5 = 0x10000;
            }
            else {
              iVar3 = FUN_14001ecff(iVar2 - iVar1,uVar10);
              lVar5 = (longlong)iVar3;
              uVar4 = *(ulonglong *)(uVar8 + 8);
            }
            do {
              uVar8 = (longlong)*(int *)(uVar4 + 0x30) - (longlong)iVar9;
              iVar11 = (int)uVar8;
              iVar3 = iVar1;
              if (iVar11 < 1) {
                lVar13 = uVar8 * lVar6;
              }
              else if (iVar11 < (int)uVar10) {
                lVar13 = (uVar8 & 0xffffffff) * lVar5;
              }
              else {
                lVar13 = (ulonglong)(iVar11 - uVar10) * lVar6;
                iVar3 = iVar2;
              }
              *(int *)(uVar4 + 0x38) =
                   (int)((ulonglong)(lVar13 + (lVar13 >> 0x3f) + 0x8000) >> 0x10) + iVar3;
              uVar4 = *(ulonglong *)(uVar4 + 8);
            } while (uVar4 != uVar18);
            uVar4 = uVar18;
          } while (uVar18 != uVar19);
        }
      }
LAB_14006b9d3:
      puVar16 = puVar16 + 2;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401802a4 */

undefined8 FUN_1401802a4(int *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  uVar3 = *(uint *)(param_2 + 1);
  iVar4 = param_1[1];
  uVar8 = 6;
  if (iVar4 <= (int)uVar3) {
    uVar5 = *(uint *)((longlong)param_2 + 0xc);
    iVar6 = *param_1;
    if ((iVar6 <= (int)uVar5) && (cVar2 = *(char *)((longlong)param_1 + 0x1a), cVar2 != '\0')) {
      iVar11 = (int)(uVar3 - iVar4) / 2;
      iVar16 = (int)(uVar5 - iVar6) / 2;
      lVar7 = *(longlong *)(param_1 + 4);
      if (cVar2 == '\x01') {
        if (0 < (int)uVar5) {
          lVar12 = *param_2 + 0xc;
          lVar13 = (ulonglong)uVar3 * 0x10;
          uVar17 = 0;
          do {
            if (0 < (int)uVar3) {
              lVar10 = uVar17 - (longlong)iVar16;
              lVar15 = 0;
              uVar9 = -(longlong)iVar11;
              do {
                puVar1 = (undefined8 *)(lVar12 + -0xc + lVar15);
                *puVar1 = 0;
                puVar1[1] = 0;
                if (((longlong)uVar9 < (longlong)iVar4 && -1 < (longlong)uVar9) &&
                    (lVar10 < iVar6 && -1 < lVar10)) {
                  uVar14 = (uint)lVar10;
                  if (*(char *)((longlong)param_2 + 0x65) != '\0') {
                    uVar14 = ~(uint)lVar10 + iVar6;
                  }
                  *(char *)(lVar12 + lVar15) =
                       -((*(byte *)(lVar7 + (int)(((uint)(uVar9 >> 3) & 0x1fffffff) +
                                                 uVar14 * param_1[2])) >> (~(byte)uVar9 & 7) & 1) !=
                        0);
                }
                lVar15 = lVar15 + 0x10;
                uVar9 = uVar9 + 1;
              } while (lVar13 != lVar15);
            }
            uVar17 = uVar17 + 1;
            lVar12 = lVar12 + lVar13;
          } while (uVar17 != uVar5);
        }
      }
      else {
        if (cVar2 != '\x02') {
          return 7;
        }
        if (0 < (int)uVar5) {
          lVar13 = *param_2 + 0xc;
          lVar12 = (ulonglong)uVar3 * 0x10;
          uVar17 = 0;
          do {
            if (0 < (int)uVar3) {
              lVar18 = uVar17 - (longlong)iVar16;
              lVar10 = 0;
              lVar15 = -(longlong)iVar11;
              do {
                puVar1 = (undefined8 *)(lVar13 + -0xc + lVar10);
                *puVar1 = 0;
                puVar1[1] = 0;
                if ((lVar15 < iVar4 && -1 < lVar15) && (lVar18 < iVar6 && -1 < lVar18)) {
                  uVar14 = (uint)lVar18;
                  if (*(char *)((longlong)param_2 + 0x65) != '\0') {
                    uVar14 = ~(uint)lVar18 + iVar6;
                  }
                  *(undefined1 *)(lVar13 + lVar10) =
                       *(undefined1 *)(lVar15 + (int)(iVar4 * uVar14) + lVar7);
                }
                lVar10 = lVar10 + 0x10;
                lVar15 = lVar15 + 1;
              } while (lVar12 != lVar10);
            }
            uVar17 = uVar17 + 1;
            lVar13 = lVar13 + lVar12;
          } while (uVar17 != uVar5);
        }
      }
      uVar8 = 0;
    }
  }
  return uVar8;
}


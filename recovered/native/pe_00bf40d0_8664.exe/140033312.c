/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140033312 */

void FUN_140033312(longlong param_1,uint param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  ulonglong uVar18;
  short sVar19;
  
  lVar6 = (ulonglong)param_2 * 0x898 + param_1;
  uVar10 = *(ulonglong *)(lVar6 + 0x50);
  if (uVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = uVar10 + (ulonglong)*(uint *)(lVar6 + 0x48) * 0x48;
  }
  iVar3 = *(int *)(lVar6 + 0x68);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x1180) + 0x40);
  iVar9 = iVar5 + 0xff;
  if (-1 < iVar5) {
    iVar9 = iVar5;
  }
  iVar5 = FUN_14001ecff(0xc0,*(uint *)(param_1 + 8 + (ulonglong)(param_2 != 0) * 8));
  if (uVar10 < uVar11) {
    lVar6 = 0;
    uVar7 = uVar10;
    do {
      lVar12 = lVar6;
      uVar13 = uVar10;
      if (iVar3 == *(char *)(uVar7 + 1)) {
        do {
          if (((lVar12 != 0) && ((int)*(char *)(uVar13 + 1) + (int)*(char *)(uVar7 + 1) == 0)) &&
             (iVar15 = (int)*(short *)(uVar13 + 2) - (int)*(short *)(uVar7 + 2), -1 < iVar15)) {
            sVar2 = (short)*(undefined4 *)(uVar7 + 8);
            sVar19 = *(short *)(uVar13 + 6);
            if (*(short *)(uVar13 + 6) < *(short *)(uVar7 + 6)) {
              sVar19 = *(short *)(uVar7 + 6);
            }
            sVar16 = (short)*(undefined4 *)(uVar13 + 8);
            if (sVar2 < sVar16) {
              sVar16 = sVar2;
            }
            iVar17 = (int)sVar16 - (int)sVar19;
            if (iVar9 >> 8 <= iVar17) {
              iVar1 = iVar15 * 8;
              if ((iVar1 < *(int *)(uVar7 + 0x30) * 9) &&
                 ((iVar1 < *(int *)(uVar7 + 0x30) * 7 || (*(int *)(uVar7 + 0x34) < iVar17)))) {
                *(int *)(uVar7 + 0x30) = iVar15;
                *(int *)(uVar7 + 0x34) = iVar17;
                *(ulonglong *)(uVar7 + 0x20) = uVar13;
              }
              if ((iVar1 < *(int *)(uVar13 + 0x30) * 9) &&
                 ((iVar1 < *(int *)(uVar13 + 0x30) * 7 || (*(int *)(uVar13 + 0x34) < iVar17)))) {
                *(int *)(uVar13 + 0x30) = iVar15;
                *(int *)(uVar13 + 0x34) = iVar17;
                *(ulonglong *)(uVar13 + 0x20) = uVar7;
              }
            }
          }
          uVar13 = uVar13 + 0x48;
          lVar12 = lVar12 + -0x48;
        } while (uVar13 < uVar11);
      }
      uVar7 = uVar7 + 0x48;
      lVar6 = lVar6 + 0x48;
      uVar13 = uVar10;
    } while (uVar7 < uVar11);
    do {
      uVar7 = *(ulonglong *)(uVar13 + 0x20);
      if ((((uVar7 != 0) && (*(ulonglong *)(uVar7 + 0x20) == uVar13)) &&
          (*(short *)(uVar13 + 2) < *(short *)(uVar7 + 2))) &&
         (uVar14 = uVar10, *(int *)(uVar13 + 0x30) < iVar5)) {
        do {
          if (((uVar13 != uVar14 && *(short *)(uVar14 + 2) <= *(short *)(uVar13 + 2)) &&
              (uVar4 = *(ulonglong *)(uVar14 + 0x20), uVar4 != 0)) &&
             (*(ulonglong *)(uVar4 + 0x20) == uVar14)) {
            if ((*(short *)(uVar7 + 2) <= *(short *)(uVar4 + 2)) &&
               ((*(short *)(uVar13 + 2) != *(short *)(uVar14 + 2) ||
                (*(short *)(uVar7 + 2) != *(short *)(uVar4 + 2))))) {
              if ((*(int *)(uVar13 + 0x30) < *(int *)(uVar14 + 0x30)) &&
                 (*(int *)(uVar14 + 0x30) < *(int *)(uVar13 + 0x30) * 4)) {
                uVar18 = uVar10;
                if (*(int *)(uVar13 + 0x34) < *(int *)(uVar14 + 0x34) * 3) {
                  *(undefined8 *)(uVar7 + 0x20) = 0;
                  *(undefined8 *)(uVar13 + 0x20) = 0;
                  break;
                }
                do {
                  uVar8 = uVar7;
                  if ((*(ulonglong *)(uVar18 + 0x20) == uVar14) ||
                     (uVar8 = uVar13, *(ulonglong *)(uVar18 + 0x20) == uVar4)) {
                    *(undefined8 *)(uVar18 + 0x20) = 0;
                    *(ulonglong *)(uVar18 + 0x28) = uVar8;
                  }
                  uVar18 = uVar18 + 0x48;
                } while (uVar18 < uVar11);
              }
            }
          }
          uVar14 = uVar14 + 0x48;
        } while (uVar14 < uVar11);
      }
      uVar13 = uVar13 + 0x48;
    } while (uVar13 < uVar11);
    do {
      lVar6 = *(longlong *)(uVar10 + 0x20);
      if ((lVar6 != 0) && (uVar10 != *(ulonglong *)(lVar6 + 0x20))) {
        *(undefined8 *)(uVar10 + 0x20) = 0;
        if ((*(int *)(lVar6 + 0x30) < iVar5) ||
           (*(int *)(uVar10 + 0x30) < *(int *)(lVar6 + 0x30) * 4)) {
          *(undefined8 *)(uVar10 + 0x28) = *(undefined8 *)(lVar6 + 0x20);
        }
      }
      uVar10 = uVar10 + 0x48;
    } while (uVar10 < uVar11);
  }
  return;
}


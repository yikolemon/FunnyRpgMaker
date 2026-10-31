/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a5b41 */

void FUN_1400a5b41(longlong param_1)

{
  short *psVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  short sVar8;
  undefined2 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  
  lVar7 = DAT_140f2a910;
  if (*(int *)(param_1 + 0x14c) < 0) {
    uVar11 = FUN_140077ab4(0);
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_1401c5180(uVar11,*(longlong *)(param_1 + 0x150),(longlong)*(int *)(param_1 + 0x148) << 4);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x150));
    }
    *(undefined8 *)(param_1 + 0x150) = uVar11;
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  lVar18 = 0x200;
  uVar19 = 0;
  do {
    sVar8 = *(short *)(param_1 + -0x400 + lVar18 * 2);
    iVar15 = (int)uVar19;
    if (sVar8 == -1) {
      uVar9 = 0xffff;
    }
    else {
      lVar14 = lVar7 + lVar18 * 0xc;
      do {
        lVar13 = *(longlong *)(param_1 + 0x140);
        lVar12 = (longlong)sVar8 * 0x10;
        psVar1 = (short *)(lVar13 + lVar12);
        *(undefined2 *)(lVar13 + 4 + lVar12) = *(undefined2 *)(lVar13 + 6 + lVar12);
        iVar17 = *(int *)(lVar13 + 0xc + lVar12);
        *(int *)(lVar13 + 8 + lVar12) = iVar17;
        *(undefined4 *)(lVar13 + 0xc + lVar12) = 0xffffffff;
        *(undefined2 *)(lVar13 + 6 + lVar12) = 0;
        if (iVar17 != -1) {
          iVar17 = *(int *)(param_1 + 0x148);
          if (iVar17 == *(int *)(param_1 + 0x14c)) {
            if (iVar17 == 0) {
              iVar10 = 8;
            }
            else {
              iVar10 = iVar17 / 2 + iVar17;
            }
            iVar16 = iVar17 + 1;
            if (iVar17 + 1 < iVar10) {
              iVar16 = iVar10;
            }
            lVar13 = FUN_140077ab4((longlong)iVar16 << 4);
            if (*(longlong *)(param_1 + 0x150) != 0) {
              FUN_1401c5180(lVar13,*(longlong *)(param_1 + 0x150),
                            (longlong)*(int *)(param_1 + 0x148) << 4);
              FUN_140077b90(*(undefined8 *)(param_1 + 0x150));
            }
            *(longlong *)(param_1 + 0x150) = lVar13;
            *(int *)(param_1 + 0x14c) = iVar16;
            iVar17 = *(int *)(param_1 + 0x148);
          }
          else {
            lVar13 = *(longlong *)(param_1 + 0x150);
          }
          uVar4 = *(undefined4 *)(psVar1 + 2);
          uVar5 = *(undefined4 *)(psVar1 + 4);
          uVar6 = *(undefined4 *)(psVar1 + 6);
          puVar2 = (undefined4 *)(lVar13 + (longlong)iVar17 * 0x10);
          *puVar2 = *(undefined4 *)psVar1;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
          if ((*(uint *)(lVar7 + 0x13c) == (uint)(ushort)psVar1[1]) &&
             (*(int *)(lVar14 + -0x10c) == -1)) {
            *(undefined4 *)(lVar14 + -0x10c) = *(undefined4 *)(psVar1 + 4);
          }
        }
        sVar8 = *psVar1;
      } while (sVar8 != -1);
      uVar9 = 0xffff;
      if (iVar15 < *(int *)(param_1 + 0x148)) {
        uVar9 = (undefined2)uVar19;
      }
    }
    *(undefined2 *)(param_1 + -0x400 + lVar18 * 2) = uVar9;
    uVar3 = *(uint *)(param_1 + 0x148);
    if (iVar15 < (int)uVar3) {
      lVar14 = (longlong)iVar15;
      lVar13 = lVar14 << 4;
      uVar19 = (ulonglong)uVar3;
      do {
        iVar15 = iVar15 + 1;
        lVar14 = lVar14 + 1;
        uVar9 = (undefined2)iVar15;
        if ((int)uVar19 <= lVar14) {
          uVar9 = 0xffff;
        }
        *(undefined2 *)(*(longlong *)(param_1 + 0x150) + lVar13) = uVar9;
        uVar19 = (ulonglong)*(int *)(param_1 + 0x148);
        lVar13 = lVar13 + 0x10;
      } while (lVar14 < (longlong)uVar19);
    }
    else {
      uVar19 = (ulonglong)uVar3;
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 0x29b);
  uVar11 = *(undefined8 *)(param_1 + 0x138);
  *(int *)(param_1 + 0x138) = (int)uVar19;
  *(undefined8 *)(param_1 + 0x148) = uVar11;
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x14c);
  uVar11 = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = uVar11;
  return;
}


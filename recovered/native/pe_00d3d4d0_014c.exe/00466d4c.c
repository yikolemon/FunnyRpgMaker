/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00466d4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00466d4c(int *param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  undefined1 auVar19 [16];
  longlong lVar20;
  undefined1 auVar21 [16];
  longlong lVar22;
  int iVar23;
  undefined1 auVar24 [16];
  
  *(bool *)(param_1 + 0x208) = (int)param_2 < param_1[0x204];
  uVar8 = param_1[0x205];
  uVar15 = (int)param_2 >> 0x1f;
  if ((0 < (int)uVar8) &&
     (uVar6 = (uint)((ulonglong)uVar8 * (ulonglong)param_2),
     iVar10 = uVar8 * uVar15 + (int)((ulonglong)uVar8 * (ulonglong)param_2 >> 0x20),
     uVar12 = iVar10 >> 0x1f, uVar7 = uVar6 + uVar12,
     0x20 < (int)((uVar12 + iVar10 + (uint)CARRY4(uVar6,uVar12) + (uint)(0xffff7fff < uVar7)) *
                  0x10000 | uVar7 + 0x8000 >> 0x10))) {
    uVar8 = (uint)(0x200000 / (longlong)(int)param_2);
  }
  param_1[0x206] = uVar8;
  lVar5 = _UNK_004d7418;
  lVar4 = _DAT_004d7410;
  auVar19._0_8_ = (longlong)(int)param_2;
  auVar19._8_4_ = param_2;
  auVar19._12_4_ = uVar15;
  iVar10 = 0;
  do {
    piVar11 = param_1;
    if (((iVar10 != 0) && (piVar11 = param_1 + 0x102, iVar10 != 2)) &&
       (piVar11 = param_1 + 0x81, iVar10 != 1)) {
      piVar11 = param_1 + 0x183;
    }
    iVar9 = *piVar11;
    if (iVar9 != 0) {
      piVar11 = piVar11 + 7;
      do {
        uVar1 = *(ulonglong *)(piVar11 + -4);
        uVar8 = (uint)(uVar1 >> 0x20);
        auVar21._4_4_ = -(uint)((longlong)uVar1 < 0);
        auVar21._0_4_ = uVar8;
        auVar21._8_4_ = (int)uVar1;
        auVar21._12_4_ = -(uint)((int)uVar1 < 0);
        lVar20 = ((ulonglong)-(uint)((longlong)uVar1 < 0) * (ulonglong)param_2 +
                  (ulonglong)uVar15 * (ulonglong)uVar8 << 0x20) +
                 (ulonglong)param_2 * (ulonglong)uVar8;
        lVar22 = ((auVar21._8_8_ >> 0x20) * (ulonglong)param_2 +
                  (auVar19._8_8_ >> 0x20) * (uVar1 & 0xffffffff) << 0x20) +
                 (auVar19._8_8_ & 0xffffffff) * (uVar1 & 0xffffffff);
        iVar23 = (int)(lVar20 >> 0x3f);
        auVar24._0_8_ = CONCAT44(iVar23,iVar23);
        auVar24._8_4_ = (int)(lVar22 >> 0x3f);
        auVar24._12_4_ = auVar24._8_4_;
        *(ulonglong *)piVar11 =
             CONCAT44((int)((ulonglong)(auVar24._8_8_ + lVar22 + lVar5) >> 0x10) + param_3,
                      (int)((ulonglong)(auVar24._0_8_ + lVar20 + lVar4) >> 0x10) + param_3);
        uVar8 = piVar11[-6];
        uVar6 = (uint)((ulonglong)param_2 * (ulonglong)uVar8);
        iVar23 = uVar8 * uVar15 + (int)((ulonglong)param_2 * (ulonglong)uVar8 >> 0x20) +
                 ((int)uVar8 >> 0x1f) * param_2;
        uVar16 = iVar23 >> 0x1f;
        uVar7 = uVar6 + uVar16;
        uVar8 = piVar11[-5];
        uVar12 = (uint)((ulonglong)param_2 * (ulonglong)uVar8);
        iVar18 = uVar8 * uVar15 + (int)((ulonglong)param_2 * (ulonglong)uVar8 >> 0x20) +
                 ((int)uVar8 >> 0x1f) * param_2;
        uVar13 = iVar18 >> 0x1f;
        uVar8 = uVar12 + uVar13;
        piVar11[-1] = (uVar13 + iVar18 + (uint)CARRY4(uVar12,uVar13) + (uint)(0xffff7fff < uVar8)) *
                      0x10000 | uVar8 + 0x8000 >> 0x10;
        piVar11[-2] = ((uVar16 + iVar23 + (uint)CARRY4(uVar6,uVar16) + (uint)(0xffff7fff < uVar7)) *
                       0x10000 | uVar7 + 0x8000 >> 0x10) + param_3 + 0x20 & 0xffffffc0;
        piVar11 = piVar11 + 8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 4);
  bVar2 = true;
  do {
    piVar11 = param_1 + 0x81;
    if (bVar2) {
      piVar11 = param_1;
    }
    iVar10 = 0x60c;
    if (bVar2) {
      iVar10 = 0x408;
    }
    iVar9 = *piVar11;
    if (iVar9 != 0) {
      piVar11 = piVar11 + 1;
      do {
        iVar23 = *(int *)((int)param_1 + iVar10);
        if (iVar23 != 0) {
          iVar18 = *piVar11;
          piVar17 = (int *)((int)param_1 + iVar10 + 0x20);
          do {
            iVar14 = piVar17[-7];
            uVar8 = iVar14 - iVar18;
            if (iVar14 < iVar18) {
              uVar8 = iVar18 - iVar14;
            }
            uVar6 = (uint)((ulonglong)param_2 * (ulonglong)uVar8);
            iVar14 = (int)((ulonglong)param_2 * (ulonglong)uVar8 >> 0x20) + uVar15 * uVar8;
            uVar7 = iVar14 >> 0x1f;
            uVar8 = uVar6 + uVar7;
            if ((int)((uVar7 + iVar14 + (uint)CARRY4(uVar6,uVar7) + (uint)(0xffff7fff < uVar8)) *
                      0x10000 | uVar8 + 0x8000 >> 0x10) < 0x40) {
              piVar11[7] = *piVar17;
              piVar11[6] = piVar17[-1];
              piVar11[4] = piVar17[-3];
              piVar11[5] = piVar17[-2];
              break;
            }
            piVar17 = piVar17 + 8;
            iVar23 = iVar23 + -1;
          } while (iVar23 != 0);
        }
        piVar11 = piVar11 + 8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    bVar3 = !bVar2;
    bVar2 = false;
    if (bVar3) {
      return;
    }
  } while( true );
}


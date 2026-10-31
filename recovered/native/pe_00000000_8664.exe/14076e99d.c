/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076e99d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14076e99d(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float *pfVar10;
  float10 in_ST0;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  pfVar10 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x54);
  fVar15 = pfVar10[0x1a];
  uVar1 = *(undefined8 *)(ulonglong)(uint)pfVar10[0x1e];
  uVar2 = ((undefined8 *)(ulonglong)(uint)pfVar10[0x1e])[1];
  fVar17 = (float)*(undefined8 *)(ulonglong)(uint)pfVar10[0x1c];
  fVar14 = (float)((ulonglong)*(undefined8 *)(ulonglong)(uint)pfVar10[0x1c] >> 0x20);
  *(undefined8 *)(pfVar10 + 3) = *(undefined8 *)(ulonglong)(uint)pfVar10[0x1b];
  pfVar10[5] = 0.0;
  pfVar10[6] = 0.0;
  fVar13 = (float)uVar1;
  fVar16 = (float)((ulonglong)uVar1 >> 0x20);
  fVar20 = (float)uVar2;
  fVar9 = (float)((ulonglong)uVar2 >> 0x20);
  pfVar10[9] = fVar9;
  pfVar10[10] = fVar9;
  pfVar10[0xb] = fVar9;
  pfVar10[0xc] = fVar9;
  pfVar10[0x11] = fVar14;
  pfVar10[0x12] = fVar14;
  pfVar10[0x13] = fVar14;
  pfVar10[0x14] = fVar14;
  if (pfVar10[0x20] == 1.4013e-45) {
    uVar11 = *(uint *)(ulonglong)(uint)pfVar10[0x1d];
    uVar12 = (uint)(uVar11 != 0xffffffff);
    fVar7 = (float)(uVar12 * -4 + 0x102b839c);
    fVar18 = *(float *)(ulonglong)(uint)pfVar10[0x1f];
    pfVar10[0xd] = ((float *)(ulonglong)(uint)pfVar10[0x1f])[3];
    pfVar10[2] = fVar18;
    do {
      fVar18 = pfVar10[0x1d];
      if (uVar12 != 1) {
        fVar18 = fVar7;
      }
      uVar5 = *(uint *)(ulonglong)(uint)fVar18;
      if ((uVar12 == 1) || (uVar5 != uVar11)) {
        *(undefined8 *)(ulonglong)(uint)fVar15 = 0;
        if (uVar5 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00014076ea58 */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)((ulonglong)uVar5 * 4 + 0x102b9244))();
          return uVar6;
        }
        if ((fVar13 <= 0.0) && (fVar16 <= 0.0)) {
          if (fVar17 + 0.0 <= fVar20) {
            if (pfVar10[0x11] + 0.0 <= pfVar10[9]) {
              *(uint *)(ulonglong)(uint)pfVar10[0x1d] = uVar5;
              goto LAB_14076ed54;
            }
          }
        }
      }
      fVar7 = (float)((int)fVar7 + 4);
    } while (fVar7 != 0.0);
  }
  if (((uint)pfVar10[0x20] & 0xfffffffd) == 0) {
    auVar19._0_4_ = fVar20 - fVar17;
    auVar19._4_4_ = fVar9 - fVar14;
    auVar19._8_8_ = 0;
    auVar4 = *(undefined1 (*) [16])(pfVar10 + 3);
    auVar19 = minps(auVar19,auVar4);
    uVar11 = -(uint)(auVar4._0_4_ < fVar13);
    uVar12 = -(uint)(auVar4._4_4_ < fVar16);
    auVar22._0_4_ = ~uVar11 & auVar19._0_4_;
    auVar22._4_4_ = ~uVar12 & auVar19._4_4_;
    auVar22._8_4_ = ~-(uint)(auVar4._8_4_ < 0.0) & auVar19._8_4_;
    auVar22._12_4_ = ~-(uint)(auVar4._12_4_ < 0.0) & auVar19._12_4_;
    auVar4._4_4_ = (uint)fVar16 & uVar12;
    auVar4._0_4_ = (uint)fVar13 & uVar11;
    auVar4._8_8_ = 0;
    *(undefined1 (*) [16])(pfVar10 + 3) = auVar22 | auVar4;
    uVar11 = *(uint *)(ulonglong)(uint)pfVar10[0x1d];
    uVar12 = (uint)(uVar11 != 0xffffffff);
    pfVar8 = (float *)(ulonglong)(uint)pfVar10[0x1f];
    fVar14 = *pfVar8;
    *(undefined1 (*) [16])(pfVar10 + 0xd) = ZEXT416((uint)pfVar8[1]);
    uVar2 = *(undefined8 *)(pfVar8 + 2);
    pfVar10[2] = pfVar8[3];
    fVar9 = (float)(uVar12 * -4 + 0x102b83ac);
    do {
      fVar18 = pfVar10[0x1d];
      if (uVar12 != 1) {
        fVar18 = fVar9;
      }
      uVar5 = *(uint *)(ulonglong)(uint)fVar18;
      if ((uVar12 == 1) || (uVar5 != uVar11)) {
        fVar18 = fVar14;
        if (uVar5 != 0) {
          fVar18 = fVar20;
        }
        fVar7 = (float)uVar2;
        uVar3 = uVar2;
        if (uVar5 != 1) {
          uVar3 = uVar1;
        }
        if (fVar17 <= fVar18 - (float)uVar3 || 1 < uVar5) {
          fVar18 = SUB164(*(undefined1 (*) [16])(pfVar10 + 0xd),0);
          if (uVar5 != 2) {
            fVar18 = SUB164(*(undefined1 (*) [16])(pfVar10 + 9),0);
          }
          fVar21 = pfVar10[2];
          if (uVar5 != 3) {
            fVar21 = fVar16;
          }
          if ((SUB164(*(undefined1 (*) [16])(pfVar10 + 0x11),0) <= fVar18 - fVar21) ||
             ((uVar5 & 0xfffffffe) != 2)) {
            if (uVar5 == 0) {
              fVar7 = fVar14 - fVar17;
              fVar15 = pfVar10[4];
              fVar16 = pfVar10[5];
              fVar17 = pfVar10[6];
            }
            else if (uVar5 == 1) {
              fVar16 = 0.0;
              fVar17 = 0.0;
              fVar15 = pfVar10[4];
            }
            else {
              fVar7 = pfVar10[3];
              fVar16 = pfVar10[5];
              fVar17 = pfVar10[6];
              if (uVar5 == 2) {
                fVar15 = pfVar10[0xd] - pfVar10[0x11];
              }
              else {
                fVar15 = pfVar10[4];
                if (uVar5 == 3) {
                  fVar15 = (float)((ulonglong)uVar2 >> 0x20);
                }
              }
            }
            pfVar10[3] = fVar7;
            pfVar10[4] = fVar15;
            pfVar10[5] = fVar16;
            pfVar10[6] = fVar17;
            pfVar10[1] = fVar13;
            *pfVar10 = fVar7;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(pfVar10 + -2) = &UNK_14076ed27;
            FUN_140755a9a();
          }
        }
      }
      fVar9 = (float)((int)fVar9 + 4);
    } while (fVar9 != 0.0);
  }
  *(undefined4 *)(ulonglong)(uint)pfVar10[0x1d] = 0xffffffff;
  if (pfVar10[0x20] != 2.8026e-45) {
    pfVar10[9] = *(float *)(ulonglong)(uint)pfVar10[0x1e];
    fVar15 = ((float *)(ulonglong)(uint)pfVar10[0x1e])[2];
    fVar17 = pfVar10[0x1c];
    fVar13 = *(float *)(ulonglong)(uint)fVar17;
    fVar16 = *(float *)(ulonglong)(uint)pfVar10[0x1b];
    pfVar10[0x11] = ((float *)(ulonglong)(uint)pfVar10[0x1b])[1];
    pfVar10[1] = fVar15;
    *pfVar10 = fVar13 + fVar16;
    pfVar10[-2] = 3.858166;
    pfVar10[-1] = 1.4013e-45;
    FUN_14074225a();
    pfVar10[8] = (float)in_ST0;
    fVar15 = *(float *)(ulonglong)(uint)fVar17;
    pfVar10[1] = pfVar10[9];
    *pfVar10 = pfVar10[8] - fVar15;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar10 + -2) = &UNK_14076ec55;
    FUN_140755a9a();
  }
  *(ulonglong *)(ulonglong)(uint)fVar15 =
       CONCAT44((float)((ulonglong)*(undefined8 *)(ulonglong)(uint)pfVar10[0x1b] >> 0x20) +
                fRam0000000150a2769f,
                (float)*(undefined8 *)(ulonglong)(uint)pfVar10[0x1b] + _DAT_150a2769b);
LAB_14076ed54:
  return (ulonglong)(uint)fVar15;
}


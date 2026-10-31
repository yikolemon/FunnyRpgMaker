/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a85de */

ulonglong FUN_1400a85de(ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  lVar5 = DAT_140f2a910;
  if (*(int *)(DAT_140f2a910 + 0xd78) < 2) {
    uVar6 = (ulonglong)(*(int *)(DAT_140f2a910 + 0xd78) - 1);
  }
  else {
    fVar14 = (float)(param_1[1] >> 0x20) - (float)(*param_1 >> 0x20);
    fVar14 = (float)FUN_14007b71f(CONCAT44(fVar14,fVar14 * ((float)param_1[1] - (float)*param_1) *
                                                  DAT_1401c86a0),DAT_1401c86c8);
    uVar7 = (ulonglong)*(int *)(lVar5 + 0xd78);
    uVar6 = 0;
    if ((0 < (longlong)uVar7) && (DAT_1402118a0 < fVar14)) {
      uVar1 = *param_1;
      fVar15 = (float)(uVar1 >> 0x20);
      uVar2 = param_1[1];
      fVar16 = (float)(uVar2 >> 0x20);
      puVar8 = (undefined8 *)(*(longlong *)(lVar5 + 0xd80) + 8);
      uVar9 = 0;
      uVar6 = 0;
      fVar17 = DAT_1402118a0;
      do {
        fVar18 = (float)puVar8[-1];
        fVar19 = (float)((ulonglong)puVar8[-1] >> 0x20);
        fVar20 = (float)*puVar8 + fVar18;
        fVar22 = (float)((ulonglong)*puVar8 >> 0x20) + fVar19;
        auVar21._0_8_ = CONCAT44(fVar22,fVar20);
        auVar21._8_8_ = 0;
        auVar24._4_4_ = -(uint)(fVar16 <= fVar22);
        auVar24._0_4_ = -(uint)((float)uVar2 <= fVar20);
        auVar24._8_4_ = -(uint)(fVar18 <= (float)uVar1);
        auVar24._12_4_ = -(uint)(fVar19 <= fVar15);
        uVar10 = movmskps((int)param_4,auVar24);
        param_4 = (ulonglong)uVar10;
        if (uVar10 == 0xf) {
          return uVar9 & 0xffffffff;
        }
        uVar10 = -(uint)((float)uVar1 < fVar18);
        uVar12 = -(uint)(fVar15 < fVar19);
        uVar11 = -(uint)((float)uVar2 < fVar18);
        uVar13 = -(uint)(fVar16 < fVar19);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = auVar21._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar1;
        auVar24 = minps(auVar23,auVar3);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar2;
        auVar21 = minps(auVar21,auVar4);
        fVar18 = ((float)(~uVar13 & auVar21._4_4_ | (uint)fVar19 & uVar13) -
                 (float)(~uVar12 & auVar24._4_4_ | (uint)fVar19 & uVar12)) *
                 ((float)(~uVar11 & auVar21._0_4_ | (uint)fVar18 & uVar11) -
                 (float)(~uVar10 & auVar24._0_4_ | (uint)fVar18 & uVar10));
        if (fVar17 <= fVar18) {
          uVar6 = uVar9 & 0xffffffff;
        }
        uVar9 = uVar9 + 1;
        if (uVar7 <= uVar9) {
          return uVar6;
        }
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
        puVar8 = puVar8 + 6;
      } while (fVar17 < fVar14);
    }
  }
  return uVar6;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101295b9 */

int __fastcall FUN_101295b9(ulonglong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
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
  
  iVar9 = DAT_1039d74c;
  if (*(int *)(DAT_1039d74c + 0xc9c) < 2) {
    iVar6 = *(int *)(DAT_1039d74c + 0xc9c) + -1;
  }
  else {
    fVar10 = (float10)FUN_100fdbca(((float)(param_1[1] >> 0x20) - (float)(*param_1 >> 0x20)) *
                                   ((float)param_1[1] - (float)*param_1) * DAT_102b70e0,0x3f800000);
    piVar1 = (int *)(iVar9 + 0xc9c);
    iVar6 = 0;
    if ((0 < *piVar1) && (DAT_102b9130 < (float)fVar10)) {
      uVar2 = *param_1;
      fVar15 = (float)(uVar2 >> 0x20);
      uVar3 = param_1[1];
      fVar16 = (float)(uVar3 >> 0x20);
      puVar7 = (undefined8 *)(*(int *)(iVar9 + 0xca4) + 8);
      iVar8 = 0;
      iVar6 = 0;
      fVar17 = DAT_102b9130;
      do {
        fVar18 = (float)puVar7[-1];
        fVar19 = (float)((ulonglong)puVar7[-1] >> 0x20);
        fVar20 = (float)*puVar7 + fVar18;
        fVar22 = (float)((ulonglong)*puVar7 >> 0x20) + fVar19;
        auVar21._0_8_ = CONCAT44(fVar22,fVar20);
        auVar21._8_8_ = 0;
        auVar24._4_4_ = -(uint)(fVar16 <= fVar22);
        auVar24._0_4_ = -(uint)((float)uVar3 <= fVar20);
        auVar24._8_4_ = -(uint)(fVar18 <= (float)uVar2);
        auVar24._12_4_ = -(uint)(fVar19 <= fVar15);
        iVar9 = movmskps(iVar9,auVar24);
        if (iVar9 == 0xf) {
          return iVar8;
        }
        uVar11 = -(uint)((float)uVar2 < fVar18);
        uVar13 = -(uint)(fVar15 < fVar19);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = auVar21._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar2;
        auVar24 = minps(auVar23,auVar4);
        uVar12 = -(uint)((float)uVar3 < fVar18);
        uVar14 = -(uint)(fVar16 < fVar19);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar3;
        auVar21 = minps(auVar21,auVar5);
        fVar18 = ((float)(~uVar14 & auVar21._4_4_ | (uint)fVar19 & uVar14) -
                 (float)(~uVar13 & auVar24._4_4_ | (uint)fVar19 & uVar13)) *
                 ((float)(~uVar12 & auVar21._0_4_ | (uint)fVar18 & uVar12) -
                 (float)(~uVar11 & auVar24._0_4_ | (uint)fVar18 & uVar11));
        if (fVar17 <= fVar18) {
          iVar6 = iVar8;
        }
        iVar8 = iVar8 + 1;
        if (*piVar1 <= iVar8) {
          return iVar6;
        }
        if (fVar17 <= fVar18) {
          fVar17 = fVar18;
        }
        puVar7 = puVar7 + 5;
      } while (fVar17 < (float)fVar10);
    }
  }
  return iVar6;
}


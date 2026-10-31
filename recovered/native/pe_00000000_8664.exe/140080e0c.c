/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140080e0c */

undefined4 FUN_140080e0c(ulonglong *param_1,ulonglong *param_2,char param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  ulonglong uVar12;
  
  uVar1 = *param_1;
  uVar12 = *param_2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar12;
  if (param_3 != '\0') {
    uVar2 = *(undefined8 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x2b8);
    fVar14 = (float)uVar2;
    fVar15 = (float)((ulonglong)uVar2 >> 0x20);
    fVar11 = (float)(uVar1 >> 0x20);
    uVar7 = -(uint)(fVar14 <= (float)uVar1);
    uVar9 = -(uint)(fVar15 <= fVar11);
    uVar1 = CONCAT44((uint)fVar11 & uVar9,(uint)(float)uVar1 & uVar7) |
            CONCAT44(~uVar9 & (uint)fVar15,~uVar7 & (uint)fVar14);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x2c0);
    auVar13 = minps(auVar13,auVar4);
    uVar12 = auVar13._0_8_;
  }
  if ((float)uVar1 - *(float *)(DAT_140f2a910 + 0xe1c) <= *(float *)(DAT_140f2a910 + 0x118)) {
    fVar11 = (float)(uVar1 >> 0x20);
    uVar6 = 0;
    if (((fVar11 - *(float *)(DAT_140f2a910 + 0xe20) <= *(float *)(DAT_140f2a910 + 0x11c)) &&
        (*(float *)(DAT_140f2a910 + 0x118) < *(float *)(DAT_140f2a910 + 0xe1c) + (float)uVar12)) &&
       (fVar14 = (float)(uVar12 >> 0x20), uVar6 = 0,
       *(float *)(DAT_140f2a910 + 0x11c) < fVar14 + *(float *)(DAT_140f2a910 + 0xe20))) {
      lVar3 = *(longlong *)(DAT_140f2a910 + 0x2190);
      fVar15 = (float)*(undefined8 *)(lVar3 + 8);
      fVar16 = (float)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x20);
      iVar8 = -(uint)(fVar15 < (float)uVar12);
      iVar10 = -(uint)(fVar16 < fVar14);
      auVar5._4_4_ = iVar8;
      auVar5._0_4_ = iVar8;
      auVar5._8_4_ = iVar10;
      auVar5._12_4_ = iVar10;
      uVar6 = movmskpd((int)param_1,auVar5);
      uVar6 = CONCAT31((int3)((uint)uVar6 >> 8),
                       (byte)uVar6 >> 1 & (byte)uVar6 &
                       -(fVar11 < fVar16 + *(float *)(lVar3 + 0x14)) &
                       -((float)uVar1 < *(float *)(lVar3 + 0x10) + fVar15));
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


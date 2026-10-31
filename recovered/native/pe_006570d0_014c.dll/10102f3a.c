/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10102f3a */

undefined4 FUN_10102f3a(ulonglong *param_1,ulonglong *param_2,char param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
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
    uVar2 = *(undefined8 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x28c);
    fVar14 = (float)uVar2;
    fVar15 = (float)((ulonglong)uVar2 >> 0x20);
    fVar11 = (float)(uVar1 >> 0x20);
    uVar7 = -(uint)(fVar14 <= (float)uVar1);
    uVar9 = -(uint)(fVar15 <= fVar11);
    uVar1 = CONCAT44((uint)fVar11 & uVar9,(uint)(float)uVar1 & uVar7) |
            CONCAT44(~uVar9 & (uint)fVar15,~uVar7 & (uint)fVar14);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x294);
    auVar13 = minps(auVar13,auVar4);
    uVar12 = auVar13._0_8_;
  }
  if ((float)uVar1 - *(float *)(DAT_1039d74c + 0xd34) <= *(float *)(DAT_1039d74c + 0xe4)) {
    fVar11 = (float)(uVar1 >> 0x20);
    if (((fVar11 - *(float *)(DAT_1039d74c + 0xd38) <= *(float *)(DAT_1039d74c + 0xe8)) &&
        (*(float *)(DAT_1039d74c + 0xe4) < *(float *)(DAT_1039d74c + 0xd34) + (float)uVar12)) &&
       (fVar14 = (float)(uVar12 >> 0x20),
       *(float *)(DAT_1039d74c + 0xe8) < fVar14 + *(float *)(DAT_1039d74c + 0xd38))) {
      iVar3 = *(int *)(DAT_1039d74c + 0x1ff0);
      fVar15 = (float)*(undefined8 *)(iVar3 + 8);
      fVar16 = (float)((ulonglong)*(undefined8 *)(iVar3 + 8) >> 0x20);
      iVar8 = -(uint)(fVar15 < (float)uVar12);
      iVar10 = -(uint)(fVar16 < fVar14);
      auVar5._4_4_ = iVar8;
      auVar5._0_4_ = iVar8;
      auVar5._8_4_ = iVar10;
      auVar5._12_4_ = iVar10;
      uVar6 = movmskpd(DAT_1039d74c,auVar5);
      return CONCAT31((int3)((uint)uVar6 >> 8),
                      (byte)uVar6 >> 1 & (byte)uVar6 &
                      -((float)uVar1 < *(float *)(iVar3 + 0x10) + fVar15 &&
                       fVar11 < fVar16 + *(float *)(iVar3 + 0x14)));
    }
  }
  return 0;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044d0d0 */

void FUN_14044d0d0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
                  short param_4,short param_5)

{
  undefined1 auVar1 [32];
  undefined1 *puVar2;
  short sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar19;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  uint uVar23;
  undefined1 auVar10 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  uVar23 = CONCAT22(param_5,param_5);
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_140614eac & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_140614eac & 4) != 0)) {
      puVar2 = *param_1;
      auVar20._0_4_ = CONCAT22(param_5,param_5);
      auVar20._4_4_ = auVar20._0_4_;
      auVar20._8_4_ = auVar20._0_4_;
      auVar20._12_4_ = auVar20._0_4_;
      do {
        auVar7 = *(undefined1 (*) [16])*param_1;
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
        auVar6._0_2_ = -(ushort)(auVar7._0_2_ == param_4);
        auVar6._2_2_ = -(ushort)(auVar7._2_2_ == param_4);
        auVar6._4_2_ = -(ushort)(auVar7._4_2_ == param_4);
        auVar6._6_2_ = -(ushort)(auVar7._6_2_ == param_4);
        auVar6._8_2_ = -(ushort)(auVar7._8_2_ == param_4);
        auVar6._10_2_ = -(ushort)(auVar7._10_2_ == param_4);
        auVar6._12_2_ = -(ushort)(auVar7._12_2_ == param_4);
        auVar6._14_2_ = -(ushort)(auVar7._14_2_ == param_4);
        auVar7 = pblendvb(auVar7,auVar20,auVar6);
        *(undefined1 (*) [16])*param_3 = auVar7;
        param_3 = (undefined1 (*) [32])(*param_3 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar5 & 0xfffffffffffffff0)));
    }
  }
  else {
    auVar20 = vpunpcklwd_avx(ZEXT416((uint)(int)param_4),ZEXT416((uint)(int)param_4));
    auVar7 = vpunpcklwd_avx(ZEXT416((uint)(int)param_5),ZEXT416((uint)(int)param_5));
    auVar20 = vpshufd_avx(auVar20,0);
    auVar7 = vpshufd_avx(auVar7,0);
    auVar21._16_16_ = auVar20;
    auVar21._0_16_ = auVar20;
    auVar22._16_16_ = auVar7;
    auVar22._0_16_ = auVar7;
    puVar2 = *param_1;
    do {
      auVar1 = vpcmpeqw_avx2(auVar21,*param_1);
      auVar1 = vpblendvb_avx2(*param_1,auVar22,auVar1);
      *param_3 = auVar1;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar5 & 0xffffffffffffffe0)));
    uVar4 = (ulonglong)((uint)uVar5 & 0x1c);
    if ((uVar5 & 0x1c) != 0) {
      auVar1 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1404cfb00 + -uVar4),*param_1);
      auVar21 = vpcmpeqw_avx2(auVar1,auVar21);
      auVar21 = vpblendvb_avx2(auVar1,auVar22,auVar21);
      param_1 = (undefined1 (*) [32])(*param_1 + uVar4);
      auVar21 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_1404cfb00 + -uVar4),auVar21);
      *param_3 = auVar21;
      param_3 = (undefined1 (*) [32])(*param_3 + uVar4);
    }
  }
  uVar5 = (ulonglong)((longlong)param_2 + (1 - (longlong)param_1)) >> 1;
  if (param_2 < param_1) {
    uVar5 = 0;
  }
  if ((0x1f < uVar5) &&
     (((undefined1 (*) [32])(param_1[-1] + uVar5 * 2 + 0x1e) < param_3 ||
      ((undefined1 (*) [32])(param_3[-1] + uVar5 * 2 + 0x1e) < param_1)))) {
    uVar4 = 0;
    do {
      auVar20 = *(undefined1 (*) [16])*param_1;
      uVar4 = uVar4 + 0x20;
      uVar9 = CONCAT22(-(ushort)(auVar20._2_2_ == param_4),-(ushort)(auVar20._0_2_ == param_4));
      auVar10._0_8_ =
           CONCAT26(-(ushort)(auVar20._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar20._4_2_ == param_4),uVar9));
      auVar10._8_2_ = -(ushort)(auVar20._8_2_ == param_4);
      auVar10._10_2_ = -(ushort)(auVar20._10_2_ == param_4);
      auVar14._12_2_ = -(ushort)(auVar20._12_2_ == param_4);
      auVar14._0_12_ = auVar10;
      auVar14._14_2_ = -(ushort)(auVar20._14_2_ == param_4);
      uVar19 = (uint)((ulonglong)auVar10._0_8_ >> 0x20);
      auVar7 = *(undefined1 (*) [16])(*param_1 + 0x10);
      *(uint *)*param_3 = ~uVar9 & auVar20._0_4_ | uVar9 & uVar23;
      *(uint *)(*param_3 + 4) = ~uVar19 & auVar20._4_4_ | uVar19 & uVar23;
      *(uint *)(*param_3 + 8) = ~auVar10._8_4_ & auVar20._8_4_ | auVar10._8_4_ & uVar23;
      *(uint *)(*param_3 + 0xc) = ~auVar14._12_4_ & auVar20._12_4_ | auVar14._12_4_ & uVar23;
      uVar9 = CONCAT22(-(ushort)(auVar7._2_2_ == param_4),-(ushort)(auVar7._0_2_ == param_4));
      auVar11._0_8_ =
           CONCAT26(-(ushort)(auVar7._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar7._4_2_ == param_4),uVar9));
      auVar11._8_2_ = -(ushort)(auVar7._8_2_ == param_4);
      auVar11._10_2_ = -(ushort)(auVar7._10_2_ == param_4);
      auVar15._12_2_ = -(ushort)(auVar7._12_2_ == param_4);
      auVar15._0_12_ = auVar11;
      auVar15._14_2_ = -(ushort)(auVar7._14_2_ == param_4);
      uVar19 = (uint)((ulonglong)auVar11._0_8_ >> 0x20);
      auVar20 = *(undefined1 (*) [16])param_1[1];
      *(uint *)(*param_3 + 0x10) = ~uVar9 & auVar7._0_4_ | uVar9 & uVar23;
      *(uint *)(*param_3 + 0x14) = ~uVar19 & auVar7._4_4_ | uVar19 & uVar23;
      *(uint *)(*param_3 + 0x18) = ~auVar11._8_4_ & auVar7._8_4_ | auVar11._8_4_ & uVar23;
      *(uint *)(*param_3 + 0x1c) = ~auVar15._12_4_ & auVar7._12_4_ | auVar15._12_4_ & uVar23;
      uVar9 = CONCAT22(-(ushort)(auVar20._2_2_ == param_4),-(ushort)(auVar20._0_2_ == param_4));
      auVar12._0_8_ =
           CONCAT26(-(ushort)(auVar20._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar20._4_2_ == param_4),uVar9));
      auVar12._8_2_ = -(ushort)(auVar20._8_2_ == param_4);
      auVar12._10_2_ = -(ushort)(auVar20._10_2_ == param_4);
      auVar16._12_2_ = -(ushort)(auVar20._12_2_ == param_4);
      auVar16._0_12_ = auVar12;
      auVar16._14_2_ = -(ushort)(auVar20._14_2_ == param_4);
      uVar19 = (uint)((ulonglong)auVar12._0_8_ >> 0x20);
      auVar7 = *(undefined1 (*) [16])(param_1[1] + 0x10);
      param_1 = param_1 + 2;
      *(uint *)param_3[1] = ~uVar9 & auVar20._0_4_ | uVar9 & uVar23;
      *(uint *)(param_3[1] + 4) = ~uVar19 & auVar20._4_4_ | uVar19 & uVar23;
      *(uint *)(param_3[1] + 8) = ~auVar12._8_4_ & auVar20._8_4_ | auVar12._8_4_ & uVar23;
      *(uint *)(param_3[1] + 0xc) = ~auVar16._12_4_ & auVar20._12_4_ | auVar16._12_4_ & uVar23;
      uVar9 = CONCAT22(-(ushort)(auVar7._2_2_ == param_4),-(ushort)(auVar7._0_2_ == param_4));
      auVar13._0_8_ =
           CONCAT26(-(ushort)(auVar7._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar7._4_2_ == param_4),uVar9));
      auVar13._8_2_ = -(ushort)(auVar7._8_2_ == param_4);
      auVar13._10_2_ = -(ushort)(auVar7._10_2_ == param_4);
      auVar17._12_2_ = -(ushort)(auVar7._12_2_ == param_4);
      auVar17._0_12_ = auVar13;
      auVar17._14_2_ = -(ushort)(auVar7._14_2_ == param_4);
      auVar18._0_4_ = uVar9 & uVar23;
      uVar19 = (uint)((ulonglong)auVar13._0_8_ >> 0x20);
      auVar18._4_4_ = uVar19 & uVar23;
      auVar18._8_4_ = auVar13._8_4_ & uVar23;
      auVar18._12_4_ = auVar17._12_4_ & uVar23;
      auVar8._0_4_ = ~uVar9 & auVar7._0_4_;
      auVar8._4_4_ = ~uVar19 & auVar7._4_4_;
      auVar8._8_4_ = ~auVar13._8_4_ & auVar7._8_4_;
      auVar8._12_4_ = ~auVar17._12_4_ & auVar7._12_4_;
      *(undefined1 (*) [16])(param_3[1] + 0x10) = auVar8 | auVar18;
      param_3 = param_3 + 2;
    } while (uVar4 != (uVar5 & 0xffffffffffffffe0));
  }
  for (; param_1 != param_2; param_1 = (undefined1 (*) [32])(*param_1 + 2)) {
    sVar3 = *(short *)*param_1;
    if (*(short *)*param_1 == param_4) {
      sVar3 = param_5;
    }
    *(short *)*param_3 = sVar3;
    param_3 = (undefined1 (*) [32])(*param_3 + 2);
  }
  return;
}


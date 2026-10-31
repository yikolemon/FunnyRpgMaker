/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022a5f0 */

void FUN_1022a5f0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
                 short param_4,short param_5)

{
  undefined1 auVar1 [32];
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar20;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar11 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar6 = CONCAT22(param_5,param_5);
  uVar4 = (int)param_2 - (int)param_1;
  if (((uVar4 & 0xffffffe0) == 0) || (((byte)DAT_10389df8 & 0x20) == 0)) {
    if (((uVar4 & 0xfffffff0) != 0) && (((byte)DAT_10389df8 & 4) != 0)) {
      puVar2 = *param_1;
      uVar7 = CONCAT22(param_5,param_5);
      auVar21._4_4_ = uVar7;
      auVar21._0_4_ = uVar7;
      auVar21._8_4_ = uVar7;
      auVar21._12_4_ = uVar7;
      do {
        auVar9 = *(undefined1 (*) [16])*param_1;
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
        auVar8._0_2_ = -(ushort)(auVar9._0_2_ == param_4);
        auVar8._2_2_ = -(ushort)(auVar9._2_2_ == param_4);
        auVar8._4_2_ = -(ushort)(auVar9._4_2_ == param_4);
        auVar8._6_2_ = -(ushort)(auVar9._6_2_ == param_4);
        auVar8._8_2_ = -(ushort)(auVar9._8_2_ == param_4);
        auVar8._10_2_ = -(ushort)(auVar9._10_2_ == param_4);
        auVar8._12_2_ = -(ushort)(auVar9._12_2_ == param_4);
        auVar8._14_2_ = -(ushort)(auVar9._14_2_ == param_4);
        auVar9 = pblendvb(auVar9,auVar21,auVar8);
        *(undefined1 (*) [16])*param_3 = auVar9;
        param_3 = (undefined1 (*) [32])(*param_3 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar4 & 0xfffffff0)));
    }
  }
  else {
    auVar21 = vpunpcklwd_avx(ZEXT416((uint)(int)param_4),ZEXT416((uint)(int)param_4));
    auVar21 = vpshufd_avx(auVar21,0);
    auVar22._16_16_ = auVar21;
    auVar22._0_16_ = auVar21;
    auVar21 = vpunpcklwd_avx(ZEXT416((uint)(int)param_5),ZEXT416((uint)(int)param_5));
    auVar21 = vpshufd_avx(auVar21,0);
    auVar23._16_16_ = auVar21;
    auVar23._0_16_ = auVar21;
    puVar2 = *param_1;
    do {
      auVar1 = vpcmpeqw_avx2(auVar22,*param_1);
      auVar1 = vpblendvb_avx2(*param_1,auVar23,auVar1);
      *param_3 = auVar1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar4 & 0xffffffe0)));
    uVar4 = uVar4 & 0x1c;
    if (uVar4 != 0) {
      auVar1 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_10299870 + -uVar4),*param_1);
      auVar22 = vpcmpeqw_avx2(auVar1,auVar22);
      auVar22 = vpblendvb_avx2(auVar1,auVar23,auVar22);
      auVar22 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_10299870 + -uVar4),auVar22);
      *param_3 = auVar22;
      param_1 = (undefined1 (*) [32])(*param_1 + uVar4);
      param_3 = (undefined1 (*) [32])(*param_3 + uVar4);
    }
  }
  uVar4 = (uint)((int)param_2 + (1 - (int)param_1)) >> 1;
  if (param_2 < param_1) {
    uVar4 = 0;
  }
  if (((uVar4 != 0) && (0x1f < uVar4)) &&
     (((undefined1 (*) [32])(param_1[-1] + uVar4 * 2 + 0x1e) < param_3 ||
      ((undefined1 (*) [32])(param_3[-1] + uVar4 * 2 + 0x1e) < param_1)))) {
    uVar3 = 0;
    do {
      auVar21 = *(undefined1 (*) [16])*param_1;
      uVar3 = uVar3 + 0x20;
      uVar10 = CONCAT22(-(ushort)(auVar21._2_2_ == param_4),-(ushort)(auVar21._0_2_ == param_4));
      auVar11._0_8_ =
           CONCAT26(-(ushort)(auVar21._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar21._4_2_ == param_4),uVar10));
      auVar11._8_2_ = -(ushort)(auVar21._8_2_ == param_4);
      auVar11._10_2_ = -(ushort)(auVar21._10_2_ == param_4);
      auVar15._12_2_ = -(ushort)(auVar21._12_2_ == param_4);
      auVar15._0_12_ = auVar11;
      auVar15._14_2_ = -(ushort)(auVar21._14_2_ == param_4);
      uVar20 = (uint)((ulonglong)auVar11._0_8_ >> 0x20);
      *(uint *)*param_3 = ~uVar10 & auVar21._0_4_ | uVar10 & uVar6;
      *(uint *)(*param_3 + 4) = ~uVar20 & auVar21._4_4_ | uVar20 & uVar6;
      *(uint *)(*param_3 + 8) = ~auVar11._8_4_ & auVar21._8_4_ | auVar11._8_4_ & uVar6;
      *(uint *)(*param_3 + 0xc) = ~auVar15._12_4_ & auVar21._12_4_ | auVar15._12_4_ & uVar6;
      auVar21 = *(undefined1 (*) [16])(*param_1 + 0x10);
      uVar10 = CONCAT22(-(ushort)(auVar21._2_2_ == param_4),-(ushort)(auVar21._0_2_ == param_4));
      auVar12._0_8_ =
           CONCAT26(-(ushort)(auVar21._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar21._4_2_ == param_4),uVar10));
      auVar12._8_2_ = -(ushort)(auVar21._8_2_ == param_4);
      auVar12._10_2_ = -(ushort)(auVar21._10_2_ == param_4);
      auVar16._12_2_ = -(ushort)(auVar21._12_2_ == param_4);
      auVar16._0_12_ = auVar12;
      auVar16._14_2_ = -(ushort)(auVar21._14_2_ == param_4);
      uVar20 = (uint)((ulonglong)auVar12._0_8_ >> 0x20);
      *(uint *)(*param_3 + 0x10) = ~uVar10 & auVar21._0_4_ | uVar10 & uVar6;
      *(uint *)(*param_3 + 0x14) = ~uVar20 & auVar21._4_4_ | uVar20 & uVar6;
      *(uint *)(*param_3 + 0x18) = ~auVar12._8_4_ & auVar21._8_4_ | auVar12._8_4_ & uVar6;
      *(uint *)(*param_3 + 0x1c) = ~auVar16._12_4_ & auVar21._12_4_ | auVar16._12_4_ & uVar6;
      auVar21 = *(undefined1 (*) [16])param_1[1];
      uVar10 = CONCAT22(-(ushort)(auVar21._2_2_ == param_4),-(ushort)(auVar21._0_2_ == param_4));
      auVar13._0_8_ =
           CONCAT26(-(ushort)(auVar21._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar21._4_2_ == param_4),uVar10));
      auVar13._8_2_ = -(ushort)(auVar21._8_2_ == param_4);
      auVar13._10_2_ = -(ushort)(auVar21._10_2_ == param_4);
      auVar17._12_2_ = -(ushort)(auVar21._12_2_ == param_4);
      auVar17._0_12_ = auVar13;
      auVar17._14_2_ = -(ushort)(auVar21._14_2_ == param_4);
      uVar20 = (uint)((ulonglong)auVar13._0_8_ >> 0x20);
      *(uint *)param_3[1] = ~uVar10 & auVar21._0_4_ | uVar10 & uVar6;
      *(uint *)(param_3[1] + 4) = ~uVar20 & auVar21._4_4_ | uVar20 & uVar6;
      *(uint *)(param_3[1] + 8) = ~auVar13._8_4_ & auVar21._8_4_ | auVar13._8_4_ & uVar6;
      *(uint *)(param_3[1] + 0xc) = ~auVar17._12_4_ & auVar21._12_4_ | auVar17._12_4_ & uVar6;
      auVar21 = *(undefined1 (*) [16])(param_1[1] + 0x10);
      param_1 = param_1 + 2;
      uVar10 = CONCAT22(-(ushort)(auVar21._2_2_ == param_4),-(ushort)(auVar21._0_2_ == param_4));
      auVar14._0_8_ =
           CONCAT26(-(ushort)(auVar21._6_2_ == param_4),
                    CONCAT24(-(ushort)(auVar21._4_2_ == param_4),uVar10));
      auVar14._8_2_ = -(ushort)(auVar21._8_2_ == param_4);
      auVar14._10_2_ = -(ushort)(auVar21._10_2_ == param_4);
      auVar18._12_2_ = -(ushort)(auVar21._12_2_ == param_4);
      auVar18._0_12_ = auVar14;
      auVar18._14_2_ = -(ushort)(auVar21._14_2_ == param_4);
      auVar19._0_4_ = uVar10 & uVar6;
      uVar20 = (uint)((ulonglong)auVar14._0_8_ >> 0x20);
      auVar19._4_4_ = uVar20 & uVar6;
      auVar19._8_4_ = auVar14._8_4_ & uVar6;
      auVar19._12_4_ = auVar18._12_4_ & uVar6;
      auVar9._0_4_ = ~uVar10 & auVar21._0_4_;
      auVar9._4_4_ = ~uVar20 & auVar21._4_4_;
      auVar9._8_4_ = ~auVar14._8_4_ & auVar21._8_4_;
      auVar9._12_4_ = ~auVar18._12_4_ & auVar21._12_4_;
      *(undefined1 (*) [16])(param_3[1] + 0x10) = auVar9 | auVar19;
      param_3 = param_3 + 2;
    } while (uVar3 != (uVar4 & 0xffffffe0));
  }
  for (; param_1 != param_2; param_1 = (undefined1 (*) [32])(*param_1 + 2)) {
    sVar5 = *(short *)*param_1;
    if (*(short *)*param_1 == param_4) {
      sVar5 = param_5;
    }
    *(short *)*param_3 = sVar5;
    param_3 = (undefined1 (*) [32])(*param_3 + 2);
  }
  return;
}


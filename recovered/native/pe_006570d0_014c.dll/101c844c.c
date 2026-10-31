/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c844c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_101c844c(double *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined1 in_stack_fffffea0 [16];
  undefined1 auVar21 [16];
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_stack_fffffeb0 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  fVar3 = (float10)FUN_101c8dc1(param_2 >> 0x10 & 0xff);
  auVar25._8_8_ = in_stack_fffffeb0._8_8_;
  auVar25._0_8_ = (double)fVar3;
  fVar3 = (float10)FUN_101c8dc1(param_2 >> 8 & 0xff);
  auVar21._8_8_ = in_stack_fffffea0._8_8_;
  auVar21._0_8_ = (double)fVar3;
  fVar3 = (float10)FUN_101c8dc1(param_2 & 0xff);
  dVar16 = (double)fVar3;
  dVar7 = auVar21._0_8_;
  dVar9 = auVar25._0_8_;
  dVar6 = DAT_10303a28 * dVar16 + DAT_10303a20 * dVar9 + DAT_10303a18 * dVar7;
  dVar11 = DAT_10303860 * dVar16 + DAT_10303878 * dVar9 + DAT_10303870 * dVar7;
  dVar16 = dVar16 * _DAT_10303a40 + dVar9 * _DAT_10303a38 + dVar7 * _DAT_10303a30;
  dVar7 = (DAT_10303a58 * dVar16 + DAT_10303a50 * dVar6 + DAT_10303a48 * dVar11) *
          *(double *)(param_3 + 0x80);
  auVar14._8_8_ = 0;
  auVar14._0_8_ =
       (DAT_10303a70 * dVar16 + DAT_10303a68 * dVar6 + DAT_10303a60 * dVar11) *
       *(double *)(param_3 + 0x88);
  auVar26._8_8_ = 0;
  auVar26._0_8_ =
       (dVar16 * _DAT_10303a88 + dVar6 * _DAT_10303a80 + dVar11 * _DAT_10303a78) *
       *(double *)(param_3 + 0x90);
  dVar16 = *(double *)(param_3 + 0x50);
  fVar3 = (float10)FUN_1026fab0(((double)((ulonglong)dVar7 & _DAT_1028b420) * dVar16) / DAT_103037f0
                                ,0xae147ae1,0x3fdae147,auVar14,auVar26,dVar16);
  fVar4 = (float10)FUN_1026fab0(((double)(auVar14._0_8_ & _DAT_1028b420) * dVar16) / DAT_103037f0,
                                0xae147ae1,0x3fdae147);
  uVar20 = 0x3fdae147ae147ae1;
  fVar5 = (float10)FUN_1026fab0(((double)(_DAT_1028b420 & auVar26._0_8_) * dVar16) / DAT_103037f0,
                                0xae147ae1,0x3fdae147);
  iVar1 = FUN_101c9054(dVar7);
  iVar2 = FUN_101c9054(auVar14._0_8_);
  auVar13._0_8_ = (double)iVar1 * _DAT_10303a90 * (double)fVar3;
  auVar13._8_8_ = (double)iVar2 * _UNK_10303a98 * (double)fVar4;
  auVar10._0_8_ = (double)fVar3 + _DAT_10303aa0;
  auVar10._8_8_ = (double)fVar4 + _UNK_10303aa8;
  auVar14 = divpd(auVar13,auVar10);
  iVar1 = FUN_101c9054(auVar26._0_8_,uVar20,auVar14);
  dVar16 = ((double)iVar1 * DAT_10303820 * (double)fVar5) / ((double)fVar5 + DAT_10303828);
  dVar6 = auVar14._0_8_;
  dVar24 = auVar14._8_8_;
  dVar17 = (dVar6 * DAT_10303838 + DAT_10303830 * dVar24 + dVar16) / DAT_10303838;
  dVar18 = ((dVar6 + dVar24) - (dVar16 + dVar16)) / _DAT_10303840;
  dVar19 = (DAT_10303ab8 * dVar16 + dVar6 * DAT_10303ab0 + dVar24 * DAT_10303ab0) / DAT_10303ab0;
  dVar11 = (dVar6 * DAT_10303ac0 + dVar24 * DAT_10303ab0 + dVar16) / DAT_10303ab0;
  fVar3 = (float10)FUN_1026cb50(dVar18,dVar17,dVar11);
  auVar27._8_8_ = auVar26._8_8_;
  auVar27._0_8_ = DAT_10303940;
  fVar3 = (float10)FUN_101c8fab(((double)fVar3 * _DAT_10303938) / DAT_10303940);
  dVar7 = (double)fVar3;
  dVar16 = *(double *)(param_3 + 0x28);
  dVar6 = *(double *)(param_3 + 0x40);
  fVar3 = (float10)FUN_1026fab0((dVar11 * *(double *)(param_3 + 0x30)) / dVar16,
                                *(double *)(param_3 + 0x60) * dVar6);
  dVar8 = (double)fVar3 * DAT_103037f0;
  dVar12 = DAT_10302778 / dVar6;
  dVar15 = dVar8 / DAT_103037f0;
  dVar9 = SQRT(dVar15);
  dVar11 = dVar9;
  if (dVar15 < 0.0) {
    fVar3 = (float10)FUN_10270500(dVar15);
    dVar11 = (double)fVar3;
  }
  auVar28._8_8_ = auVar27._8_8_;
  auVar28._0_8_ = auVar27._0_8_ * dVar7;
  dVar16 = dVar16 + DAT_10302778;
  auVar22._8_8_ = dVar24;
  auVar22._0_8_ = dVar12 * dVar11 * dVar16;
  dVar12 = *(double *)(param_3 + 0x58);
  dVar11 = *(double *)(param_3 + 0x58);
  fVar3 = (float10)FUN_1026d4b0(((double)(~-(ulonglong)(dVar7 < DAT_10303ac8) & (ulonglong)dVar7 |
                                         (ulonglong)(DAT_103039e8 + dVar7) &
                                         -(ulonglong)(dVar7 < DAT_10303ac8)) * DAT_10303940) /
                                _DAT_10303938 + DAT_10303890);
  fVar3 = (float10)FUN_1026fab0((SQRT(dVar17 * dVar17 + dVar18 * dVar18) *
                                ((double)fVar3 + _DAT_10303898) * DAT_102b8f88 * _DAT_103038a0 *
                                *(double *)(param_3 + 0x48) * *(double *)(param_3 + 0x38)) /
                                (dVar19 + _DAT_103038c0),0xcccccccd,0x3feccccc);
  fVar4 = (float10)FUN_1026fab0(0x28f5c28f,0x3fd28f5c,*(undefined8 *)(param_3 + 0x20));
  fVar4 = (float10)FUN_1026fab0(DAT_10303ad0 - (double)fVar4,0xf5c28f5c,0x3fe75c28);
  if (dVar15 < 0.0) {
    fVar5 = (float10)FUN_10270500(dVar15);
    dVar9 = (double)fVar5;
  }
  auVar29._8_8_ = auVar28._8_8_;
  auVar29._0_8_ = auVar28._0_8_ / _DAT_10303938;
  auVar23._8_8_ = auVar22._8_8_;
  auVar23._0_8_ = auVar22._0_8_ * dVar11;
  dVar9 = dVar9 * (double)fVar3 * (double)fVar4;
  dVar16 = (dVar6 * (double)fVar3 * (double)fVar4) / dVar16;
  if (dVar16 < 0.0) {
    fVar3 = (float10)FUN_10270500(dVar16);
    dVar16 = (double)fVar3;
  }
  else {
    dVar16 = SQRT(dVar16);
  }
  dVar15 = DAT_103039f0 * dVar8;
  dVar11 = DAT_103039f8 * dVar8 + DAT_1028b438;
  dVar12 = dVar9 * dVar12;
  dVar16 = _UNK_10303a08 * dVar16;
  fVar3 = (float10)FUN_1026fa50(DAT_103039e0 * dVar12 + DAT_1028b438);
  dVar6 = (double)fVar3 * _DAT_10303a10;
  fVar3 = (float10)FUN_1026d4b0(auVar29._0_8_);
  fVar4 = (float10)FUN_102704b0(auVar29._0_8_);
  *param_1 = dVar7;
  param_1[1] = dVar9;
  param_1[2] = dVar8;
  param_1[3] = auVar23._0_8_;
  param_1[4] = dVar12;
  param_1[5] = dVar16;
  param_1[6] = dVar15 / dVar11;
  param_1[7] = (double)fVar3 * dVar6;
  param_1[8] = (double)fVar4 * dVar6;
  return param_1;
}


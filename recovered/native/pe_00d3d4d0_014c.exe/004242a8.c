/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004242a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __cdecl
FUN_004242a8(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            double param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  void *this;
  void *extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  void *this_00;
  void *extraout_ECX_09;
  void *extraout_ECX_10;
  void *pvVar4;
  void *this_01;
  void *this_02;
  float10 fVar5;
  undefined1 auVar6 [10];
  undefined1 auVar7 [10];
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double in_stack_00000030;
  double in_stack_00000048;
  undefined8 in_stack_00000068;
  undefined1 in_stack_fffffea0 [16];
  undefined1 auVar17 [16];
  undefined1 in_stack_fffffeb0 [16];
  undefined1 auVar18 [16];
  undefined1 in_stack_fffffed0 [16];
  undefined1 in_stack_ffffff10 [16];
  double in_stack_ffffff30;
  double dStack_b0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_48;
  double dStack_40;
  
  fVar5 = FUN_00424c1d(0xff);
  auVar18._8_8_ = in_stack_fffffeb0._8_8_;
  auVar18._0_8_ = (double)fVar5;
  fVar5 = FUN_00424c1d(extraout_ECX);
  auVar17._8_8_ = in_stack_fffffea0._8_8_;
  auVar17._0_8_ = (double)fVar5;
  fVar5 = FUN_00424c1d(extraout_ECX_00);
  dVar12 = (double)fVar5;
  dVar16 = auVar17._0_8_;
  dVar15 = auVar18._0_8_;
  dVar8 = DAT_004d7fe8 * dVar12 + DAT_004d7fe0 * dVar15 + DAT_004d7fd8 * dVar16;
  dVar11 = DAT_004d7e10 * dVar12 + DAT_004d7e28 * dVar15 + DAT_004d7e20 * dVar16;
  dVar16 = dVar12 * _DAT_004d8000 + dVar15 * _DAT_004d7ff8 + dVar16 * _DAT_004d7ff0;
  auVar9._0_8_ = (DAT_004d8018 * dVar16 + DAT_004d8010 * dVar8 + DAT_004d8008 * dVar11) *
                 *(double *)(param_2._4_4_ + 0x80);
  auVar9._8_8_ = 0;
  auVar14._8_8_ = 0;
  auVar14._0_8_ =
       (dVar16 * _DAT_004d8048 + dVar8 * _DAT_004d8040 + dVar11 * _DAT_004d8038) *
       *(double *)(param_2._4_4_ + 0x90);
  dVar8 = ((double)((ulonglong)auVar9._0_8_ & _DAT_004a88c0) * *(double *)(param_2._4_4_ + 0x50)) /
          DAT_004d7da0;
  FUN_004924e0(extraout_ECX_01,SUB84(dVar8,0),(uint)((ulonglong)dVar8 >> 0x20),-0x51eb851f,
               0x3fdae147);
  dVar8 = ((double)(auVar14._0_8_ & _DAT_004a88c0) * in_stack_fffffed0._0_8_) / DAT_004d7da0;
  auVar6 = FUN_004924e0(extraout_ECX_02,SUB84(dVar8,0),(uint)((ulonglong)dVar8 >> 0x20),-0x51eb851f,
                        0x3fdae147);
  dVar8 = ((double)(_DAT_004a88c0 & in_stack_fffffed0._0_8_) * auVar9._0_8_) / DAT_004d7da0;
  auVar7 = FUN_004924e0(extraout_ECX_03,SUB84(dVar8,0),(uint)((ulonglong)dVar8 >> 0x20),-0x51eb851f,
                        0x3fdae147);
  dVar8 = (double)(float10)auVar7;
  uVar2 = FUN_00424eb0(in_stack_ffffff10._0_8_);
  uVar3 = FUN_00424eb0(in_stack_fffffed0._0_8_);
  auVar13._0_8_ = (double)(int)uVar2 * _DAT_004d8050 * dStack_40;
  auVar13._8_8_ = (double)(int)uVar3 * _UNK_004d8058 * dStack_48;
  auVar10._0_8_ = dStack_40 + _DAT_004d8060;
  auVar10._8_8_ = dStack_48 + _UNK_004d8068;
  auVar14 = divpd(auVar13,auVar10);
  uVar2 = FUN_00424eb0(auVar9._0_8_);
  dVar8 = ((double)(int)uVar2 * DAT_004d7dd0 * dVar8) / (dVar8 + DAT_004d7dd8);
  dVar11 = (auVar14._0_8_ * DAT_004d7de8 + DAT_004d7de0 * auVar14._8_8_ + dVar8) / DAT_004d7de8;
  dVar8 = ((auVar14._0_8_ + auVar14._8_8_) - (dVar8 + dVar8)) / _DAT_004d7df0;
  fVar5 = (float10)FUN_00490460(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),SUB84(dVar11,0),
                                (int)((ulonglong)dVar11 >> 0x20));
  dVar8 = ((double)fVar5 * _DAT_004d7ee8) / DAT_004d7ef0;
  fVar5 = FUN_00424e07(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
  puVar1 = (undefined8 *)((ulonglong)(double)fVar5 >> 0x20);
  dVar8 = *(double *)(param_2._4_4_ + 0x60) * *(double *)(param_2._4_4_ + 0x40);
  dVar11 = (auVar9._0_8_ * *(double *)(param_2._4_4_ + 0x30)) / *(double *)(param_2._4_4_ + 0x28);
  auVar7 = FUN_004924e0(extraout_ECX_04,SUB84(dVar11,0),(uint)((ulonglong)dVar11 >> 0x20),
                        SUB84(dVar8,0),(uint)((ulonglong)dVar8 >> 0x20));
  dVar8 = (double)(float10)auVar7 * DAT_004d7da0;
  dVar11 = dVar8 / DAT_004d7da0;
  pvVar4 = this;
  if (dVar11 < 0.0) {
    FUN_00492f00(this,SUB84(dVar11,0),(uint)((ulonglong)dVar11 >> 0x20));
    pvVar4 = extraout_ECX_05;
  }
  dVar11 = ((double)(~-(ulonglong)(param_5 < DAT_004d8088) & (ulonglong)param_5 |
                    (ulonglong)(DAT_004d7f98 + param_5) & -(ulonglong)(param_5 < DAT_004d8088)) *
           DAT_004d7ef0) / _DAT_004d7ee8 + DAT_004d7e40;
  FUN_004905c0(pvVar4,SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20));
  dVar11 = (SQRT(in_stack_ffffff30 * in_stack_ffffff30 + in_stack_00000030 * in_stack_00000030) *
           ((double)extraout_ST0 + _DAT_004d7e48) * _DAT_004cd868 * _DAT_004d7e50 *
           *(double *)(param_2._4_4_ + 0x48) * *(double *)(param_2._4_4_ + 0x38)) /
           (dStack_90 + _DAT_004d7e70);
  FUN_004924e0(extraout_ECX_06,SUB84(dVar11,0),(uint)((ulonglong)dVar11 >> 0x20),-0x33333333,
               0x3feccccc);
  auVar7 = FUN_004924e0(extraout_ECX_07,0x28f5c28f,0x3fd28f5c,
                        (int)*(undefined8 *)(param_2._4_4_ + 0x20),
                        (uint)((ulonglong)*(undefined8 *)(param_2._4_4_ + 0x20) >> 0x20));
  dVar11 = DAT_004d8090 - (double)(float10)auVar7;
  FUN_004924e0(extraout_ECX_08,SUB84(dVar11,0),(uint)((ulonglong)dVar11 >> 0x20),-0xa3d70a4,
               0x3fe75c28);
  pvVar4 = this_00;
  dVar11 = dStack_b0;
  if ((double)CONCAT44(uStack_7c,uStack_80) < 0.0) {
    fVar5 = (float10)FUN_00492f00(this_00,uStack_80,uStack_7c);
    dVar11 = (double)fVar5;
    pvVar4 = extraout_ECX_09;
  }
  dVar8 = dVar8 / _DAT_004d7ee8;
  dVar12 = (dVar12 * dStack_98) / dStack_88;
  if (dVar12 < 0.0) {
    FUN_00492f00(pvVar4,SUB84(dVar12,0),(uint)((ulonglong)dVar12 >> 0x20));
    pvVar4 = extraout_ECX_10;
  }
  dVar15 = DAT_004d7fa8 * dStack_70;
  dVar16 = DAT_004d7fb0 * dStack_70 + DAT_004a88f8;
  dVar11 = dVar11 * dStack_98 * in_stack_00000048;
  dVar12 = DAT_004d7f90 * dVar11 + DAT_004a88f8;
  FUN_00492480(pvVar4,SUB84(dVar12,0),(uint)((ulonglong)dVar12 >> 0x20));
  FUN_004905c0(this_01,SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
  FUN_00492eb0(this_02,SUB84(dStack_b0,0),(int)((ulonglong)dStack_b0 >> 0x20));
  *puVar1 = in_stack_00000068;
  puVar1[1] = dVar11;
  puVar1[2] = 0;
  puVar1[3] = dVar8;
  puVar1[4] = dVar15 / dVar16;
  *(uint *)(puVar1 + 5) = uStack_80;
  *(uint *)((int)puVar1 + 0x2c) = uStack_7c;
  puVar1[6] = uStack_78;
  puVar1[7] = (double)(float10)auVar7 * (double)(float10)auVar6;
  puVar1[8] = (double)extraout_ST0_00 * (double)(float10)auVar6;
  return puVar1;
}


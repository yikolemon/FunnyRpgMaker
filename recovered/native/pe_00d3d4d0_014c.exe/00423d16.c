/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00423d16 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_00423d16(void *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            uint param_6,uint param_7,undefined4 param_8,double param_9,undefined4 param_10,
            uint param_11)

{
  int iVar1;
  void *extraout_ECX;
  void *this;
  void *this_00;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this_01;
  undefined4 extraout_ECX_02;
  void *this_02;
  int iVar2;
  bool bVar3;
  float10 extraout_ST0;
  undefined1 auVar4 [10];
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double dStack_90;
  double dStack_80;
  float10 fStack_78;
  double dStack_58;
  double dStack_50;
  
  if ((double)CONCAT44(param_7,param_6) < 0.0) {
    FUN_00492f00(param_1,param_6,param_7);
    param_1 = extraout_ECX;
  }
  dVar8 = DAT_004d7e40 + (double)CONCAT44(param_3,param_2);
  FUN_004905c0(param_1,SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20));
  FUN_00492eb0(this,param_2,param_3);
  FUN_004905c0(this_00,param_2,param_3);
  dVar7 = (double)CONCAT44(uStack_9c,uStack_a0);
  iVar2 = 4;
  fStack_78 = (float10)CONCAT28(fStack_78._8_2_,(double)extraout_ST0);
  dVar8 = (double)CONCAT44(uStack_ac,uStack_b0) * _DAT_004d7e78;
  this_01 = extraout_ECX_00;
  while( true ) {
    uStack_ac = (undefined4)((ulonglong)dVar8 >> 0x20);
    dVar8 = dVar7 / DAT_004d7da0;
    if ((((double)CONCAT44(param_5,param_4) != 0.0) ||
        (dVar9 = 0.0, NAN((double)CONCAT44(param_5,param_4)))) &&
       ((dVar7 != 0.0 || (dVar9 = 0.0, NAN(dVar7))))) {
      if (dVar8 < 0.0) {
        fVar5 = (float10)FUN_00492f00(this_01,SUB84(dVar8,0),(uint)((ulonglong)dVar8 >> 0x20));
        dVar7 = (double)fVar5;
        this_01 = extraout_ECX_01;
      }
      else {
        dVar7 = SQRT(dVar8);
      }
      dVar9 = ((double)CONCAT44(param_5,param_4) / dVar7) * _DAT_004d7e60;
    }
    FUN_004924e0(this_01,SUB84(dVar9,0),(uint)((ulonglong)dVar9 >> 0x20),0x71c71c72,0x3ff1c71c);
    auVar4 = FUN_004924e0(extraout_ECX_02,SUB104(fStack_78,0),(uint)((unkuint10)fStack_78 >> 0x20),
                          0x4737f42c,0x3fe84aa7);
    dVar7 = ((double)(float10)auVar4 * _DAT_004d7e68) / _DAT_004d7e58;
    dVar9 = ((dVar7 + _DAT_004d7e70) * _DAT_004d7e78 * dVar8) /
            (dVar8 * _DAT_004d7e80 * dStack_50 + dVar8 * DAT_004d7de8 * dStack_58 + dStack_90);
    dVar8 = dStack_58 * dVar9;
    dVar9 = dVar9 * dStack_50;
    dVar7 = dVar7 * _DAT_004d7e90;
    dVar12 = (dVar9 * _DAT_004d7eb0 + dVar8 * _DAT_004d7ea8 + dVar7) / DAT_004d7ea0;
    dVar10 = (dVar9 * _DAT_004d7ec0 + dVar8 * _DAT_004d7eb8 + dVar7) / DAT_004d7ea0;
    fVar5 = FUN_00423c7d(SUB84((dVar9 * _DAT_004d7e98 + dVar8 * _DAT_004d7e88 + dVar7) /
                               DAT_004d7ea0,0),uStack_ac);
    fStack_78 = FUN_00423c7d(SUB84(dVar12,0),uStack_ac);
    fVar6 = FUN_00423c7d(SUB84(dVar10,0),uStack_ac);
    dVar7 = (double)fVar5;
    param_4 = (undefined4)((ulonglong)(double)fVar6 >> 0x20);
    dVar8 = (double)((longlong)dVar7 << 0x20);
    FUN_00424f09((double *)&stack0xfffffff0,dVar7,(double)fStack_78,(double)fVar6,
                 (double *)&DAT_004d7d50);
    dVar9 = (double)CONCAT44(param_6,param_5);
    iVar1 = 0;
    if ((((dVar9 < 0.0) || (dVar10 = (double)CONCAT44(param_8,param_7), dVar10 < 0.0)) ||
        (param_9 < 0.0)) ||
       (dVar12 = param_9 * DAT_004d7e10 + dVar9 * DAT_004d7e28 + dVar10 * DAT_004d7e20,
       dVar12 <= 0.0)) goto LAB_0042415e;
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if ((bVar3) ||
       (dVar11 = dVar12 - (double)CONCAT44(param_7,param_6),
       (double)((ulonglong)dVar11 & _DAT_004a88c0) < DAT_004d7ec8)) break;
    dVar7 = dStack_80 - (dVar11 * dStack_80) / (dVar12 + dVar12);
    this_01 = this_02;
  }
  if ((dVar9 <= _DAT_004d7ed0) && ((dVar10 <= _DAT_004d7ed0 && (param_9 <= _DAT_004d7ed0)))) {
    iVar1 = FUN_00424b24(this_02,CONCAT44(param_6,param_5),
                         CONCAT44(SUB84((double)fStack_78,0),(int)((ulonglong)dVar7 >> 0x20)),
                         param_9);
  }
LAB_0042415e:
  if (DAT_0050e8c0 != (param_11 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(param_11 ^ (uint)&stack0xfffffffc);
  }
  return iVar1;
}


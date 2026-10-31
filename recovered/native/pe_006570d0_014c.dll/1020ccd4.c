/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020ccd4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall
FUN_1020ccd4(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar7;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  longlong lVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  ulonglong uVar6;
  undefined1 auVar16 [16];
  
  iVar8 = (int)*(undefined8 *)param_4;
  iVar1 = (int)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  auVar4._0_4_ = _UNK_10312624 + ((int)((ulonglong)*(undefined8 *)param_5 >> 0x20) - iVar1) >> 5;
  auVar4._4_4_ = _DAT_10312620 + ((int)*(undefined8 *)param_5 - iVar8) >> 5;
  iVar7 = _UNK_1031262c >> 5;
  auVar15._0_4_ = -(uint)((int)auVar4._0_4_ < 0);
  auVar15._4_4_ = -(uint)(auVar4._4_4_ < 0);
  auVar15._12_4_ = -(uint)(iVar7 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
  auVar4._8_4_ = auVar4._4_4_;
  auVar4._12_4_ = auVar15._4_4_;
  uVar6 = auVar4._8_8_;
  iVar9 = (int)*(undefined8 *)param_2;
  iVar10 = (int)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  auVar17._0_4_ = ((int)*(undefined8 *)param_3 - iVar9) + _DAT_10312620 >> 5;
  auVar17._4_4_ = ((int)((ulonglong)*(undefined8 *)param_3 >> 0x20) - iVar10) + _UNK_10312624 >> 5;
  auVar12._0_4_ = -(uint)((int)auVar17._0_4_ < 0);
  auVar12._4_4_ = -(uint)(auVar17._4_4_ < 0);
  auVar12._12_4_ = -(uint)(iVar7 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
  auVar17._8_4_ = auVar17._4_4_;
  auVar17._12_4_ = auVar12._4_4_;
  auVar15._8_4_ = auVar15._4_4_;
  auVar12._8_4_ = auVar12._4_4_;
  lVar11 = ((ulonglong)auVar12._0_4_ * (ulonglong)auVar4._0_4_ +
            (ulonglong)auVar15._0_4_ * (ulonglong)auVar17._0_4_ << 0x20) +
           (ulonglong)auVar4._0_4_ * (ulonglong)auVar17._0_4_;
  lVar13 = ((auVar12._8_8_ & 0xffffffff) * (uVar6 & 0xffffffff) +
            (auVar15._8_8_ & 0xffffffff) * (auVar17._8_8_ & 0xffffffff) << 0x20) +
           (uVar6 & 0xffffffff) * (auVar17._8_8_ & 0xffffffff);
  iVar14 = (int)(lVar11 >> 0x3f);
  auVar16._0_8_ = CONCAT44(iVar14,iVar14);
  auVar16._8_4_ = (int)(lVar13 >> 0x3f);
  auVar16._12_4_ = auVar16._8_4_;
  iVar14 = (int)((ulonglong)(auVar16._0_8_ + lVar11 + _DAT_10302e70) >> 0x10) -
           (int)((ulonglong)(auVar16._8_8_ + lVar13 + _UNK_10302e78) >> 0x10);
  if (iVar14 != 0) {
    auVar2._0_4_ = (iVar8 - iVar9) + _DAT_10312620 >> 5;
    auVar2._4_4_ = (iVar1 - iVar10) + _UNK_10312624 >> 5;
    iVar8 = -(uint)(auVar2._4_4_ < 0);
    auVar2._8_4_ = auVar2._4_4_;
    auVar2._12_4_ = iVar8;
    auVar3._4_4_ = iVar8;
    auVar3._0_4_ = -(uint)((int)auVar2._0_4_ < 0);
    auVar3._8_4_ = iVar8;
    auVar3._12_4_ = -(uint)(iVar7 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
    lVar11 = ((ulonglong)-(uint)((int)auVar2._0_4_ < 0) * (ulonglong)auVar4._0_4_ +
              (ulonglong)auVar15._0_4_ * (ulonglong)auVar2._0_4_ << 0x20) +
             (ulonglong)auVar2._0_4_ * (ulonglong)auVar4._0_4_;
    lVar13 = ((auVar3._8_8_ & 0xffffffff) * (uVar6 & 0xffffffff) +
              (uVar6 >> 0x20) * (auVar2._8_8_ & 0xffffffff) << 0x20) +
             (auVar2._8_8_ & 0xffffffff) * (uVar6 & 0xffffffff);
    iVar8 = (int)(lVar11 >> 0x3f);
    auVar5._0_8_ = CONCAT44(iVar8,iVar8);
    auVar5._8_4_ = (int)(lVar13 >> 0x3f);
    auVar5._12_4_ = auVar5._8_4_;
    iVar14 = FUN_101c2523((int)((ulonglong)(auVar5._0_8_ + lVar11 + _DAT_10302e70) >> 0x10) -
                          (int)((ulonglong)(auVar5._8_8_ + lVar13 + _UNK_10302e78) >> 0x10),iVar14);
    lVar11 = (longlong)(*param_3 - *param_2) * (longlong)iVar14;
    iVar8 = (int)(lVar11 >> 0x3f);
    lVar11 = lVar11 + CONCAT44(iVar8,iVar8) + 0x8000;
    iVar1 = ((int)((ulonglong)lVar11 >> 0x20) * 0x10000 | (uint)lVar11 >> 0x10) + *param_2;
    *param_6 = iVar1;
    lVar11 = (longlong)(param_3[1] - param_2[1]) * (longlong)iVar14;
    iVar14 = (int)(lVar11 >> 0x3f);
    lVar11 = lVar11 + CONCAT44(iVar14,iVar14) + 0x8000;
    iVar8 = ((int)((ulonglong)lVar11 >> 0x20) * 0x10000 | (uint)lVar11 >> 0x10) + param_2[1];
    param_6[1] = iVar8;
    iVar14 = *param_2;
    if (iVar14 == *param_3) {
      iVar7 = -(iVar1 - iVar14);
      if (iVar7 < 0) {
        iVar7 = iVar1 - iVar14;
      }
      if (iVar7 < *(int *)(param_1 + 0x2db0)) {
        *param_6 = iVar14;
        iVar1 = iVar14;
      }
    }
    iVar14 = param_2[1];
    if (iVar14 == param_3[1]) {
      iVar7 = -(iVar8 - iVar14);
      if (iVar7 < 0) {
        iVar7 = iVar8 - iVar14;
      }
      if (iVar7 < *(int *)(param_1 + 0x2db0)) {
        param_6[1] = iVar14;
        iVar8 = iVar14;
      }
    }
    iVar14 = *param_4;
    if (iVar14 == *param_5) {
      iVar7 = -(iVar1 - iVar14);
      if (iVar7 < 0) {
        iVar7 = iVar1 - iVar14;
      }
      if (iVar7 < *(int *)(param_1 + 0x2db0)) {
        *param_6 = iVar14;
        iVar1 = iVar14;
      }
    }
    iVar14 = param_4[1];
    if (iVar14 == param_5[1]) {
      iVar7 = -(iVar8 - iVar14);
      if (iVar7 < 0) {
        iVar7 = iVar8 - iVar14;
      }
      if (iVar7 < *(int *)(param_1 + 0x2db0)) {
        param_6[1] = iVar14;
        iVar8 = iVar14;
      }
    }
    iVar1 = iVar1 - (*param_4 + *param_3) / 2;
    iVar14 = -iVar1;
    if (iVar14 < 0) {
      iVar14 = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x2dac);
    if (iVar14 <= iVar1) {
      iVar8 = iVar8 - (param_4[1] + param_3[1]) / 2;
      iVar14 = -iVar8;
      if (iVar14 < 0) {
        iVar14 = iVar8;
      }
      return CONCAT31((int3)((uint)iVar1 >> 8),iVar14 <= iVar1);
    }
  }
  return 0;
}


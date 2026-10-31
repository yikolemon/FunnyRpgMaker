/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00464454 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall
FUN_00464454(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  ulonglong uVar8;
  undefined1 auVar17 [16];
  
  iVar10 = (int)*(undefined8 *)param_4;
  iVar2 = (int)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  auVar6._0_4_ = _UNK_004e6bc4 + ((int)((ulonglong)*(undefined8 *)param_5 >> 0x20) - iVar2) >> 5;
  auVar6._4_4_ = _DAT_004e6bc0 + ((int)*(undefined8 *)param_5 - iVar10) >> 5;
  iVar9 = _UNK_004e6bcc >> 5;
  auVar16._0_4_ = -(uint)((int)auVar6._0_4_ < 0);
  auVar16._4_4_ = -(uint)(auVar6._4_4_ < 0);
  auVar16._12_4_ = -(uint)(iVar9 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
  auVar6._8_4_ = auVar6._4_4_;
  auVar6._12_4_ = auVar16._4_4_;
  uVar8 = auVar6._8_8_;
  iVar3 = (int)*(undefined8 *)param_2;
  iVar11 = (int)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  auVar18._0_4_ = ((int)*(undefined8 *)param_3 - iVar3) + _DAT_004e6bc0 >> 5;
  auVar18._4_4_ = ((int)((ulonglong)*(undefined8 *)param_3 >> 0x20) - iVar11) + _UNK_004e6bc4 >> 5;
  auVar13._0_4_ = -(uint)((int)auVar18._0_4_ < 0);
  auVar13._4_4_ = -(uint)(auVar18._4_4_ < 0);
  auVar13._12_4_ = -(uint)(iVar9 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
  auVar18._8_4_ = auVar18._4_4_;
  auVar18._12_4_ = auVar13._4_4_;
  auVar16._8_4_ = auVar16._4_4_;
  auVar13._8_4_ = auVar13._4_4_;
  lVar12 = ((ulonglong)auVar13._0_4_ * (ulonglong)auVar6._0_4_ +
            (ulonglong)auVar16._0_4_ * (ulonglong)auVar18._0_4_ << 0x20) +
           (ulonglong)auVar6._0_4_ * (ulonglong)auVar18._0_4_;
  lVar14 = ((auVar13._8_8_ & 0xffffffff) * (uVar8 & 0xffffffff) +
            (auVar16._8_8_ & 0xffffffff) * (auVar18._8_8_ & 0xffffffff) << 0x20) +
           (uVar8 & 0xffffffff) * (auVar18._8_8_ & 0xffffffff);
  iVar15 = (int)(lVar12 >> 0x3f);
  auVar17._0_8_ = CONCAT44(iVar15,iVar15);
  auVar17._8_4_ = (int)(lVar14 >> 0x3f);
  auVar17._12_4_ = auVar17._8_4_;
  uVar1 = (int)((ulonglong)(auVar17._0_8_ + lVar12 + _DAT_004d7410) >> 0x10) -
          (int)((ulonglong)(auVar17._8_8_ + lVar14 + _UNK_004d7418) >> 0x10);
  if (uVar1 != 0) {
    auVar4._0_4_ = (iVar10 - iVar3) + _DAT_004e6bc0 >> 5;
    auVar4._4_4_ = (iVar2 - iVar11) + _UNK_004e6bc4 >> 5;
    iVar10 = -(uint)(auVar4._4_4_ < 0);
    auVar4._8_4_ = auVar4._4_4_;
    auVar4._12_4_ = iVar10;
    auVar5._4_4_ = iVar10;
    auVar5._0_4_ = -(uint)((int)auVar4._0_4_ < 0);
    auVar5._8_4_ = iVar10;
    auVar5._12_4_ = -(uint)(iVar9 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
    lVar12 = ((ulonglong)-(uint)((int)auVar4._0_4_ < 0) * (ulonglong)auVar6._0_4_ +
              (ulonglong)auVar16._0_4_ * (ulonglong)auVar4._0_4_ << 0x20) +
             (ulonglong)auVar4._0_4_ * (ulonglong)auVar6._0_4_;
    lVar14 = ((auVar5._8_8_ & 0xffffffff) * (uVar8 & 0xffffffff) +
              (uVar8 >> 0x20) * (auVar4._8_8_ & 0xffffffff) << 0x20) +
             (auVar4._8_8_ & 0xffffffff) * (uVar8 & 0xffffffff);
    iVar10 = (int)(lVar12 >> 0x3f);
    auVar7._0_8_ = CONCAT44(iVar10,iVar10);
    auVar7._8_4_ = (int)(lVar14 >> 0x3f);
    auVar7._12_4_ = auVar7._8_4_;
    iVar10 = FUN_0041eaa0((int)((ulonglong)(auVar7._0_8_ + lVar12 + _DAT_004d7410) >> 0x10) -
                          (int)((ulonglong)(auVar7._8_8_ + lVar14 + _UNK_004d7418) >> 0x10),uVar1);
    lVar12 = (longlong)(*param_3 - *param_2) * (longlong)iVar10;
    iVar2 = (int)(lVar12 >> 0x3f);
    lVar12 = lVar12 + CONCAT44(iVar2,iVar2) + 0x8000;
    iVar9 = ((int)((ulonglong)lVar12 >> 0x20) * 0x10000 | (uint)lVar12 >> 0x10) + *param_2;
    *param_6 = iVar9;
    lVar12 = (longlong)(param_3[1] - param_2[1]) * (longlong)iVar10;
    iVar10 = (int)(lVar12 >> 0x3f);
    lVar12 = lVar12 + CONCAT44(iVar10,iVar10) + 0x8000;
    iVar2 = ((int)((ulonglong)lVar12 >> 0x20) * 0x10000 | (uint)lVar12 >> 0x10) + param_2[1];
    param_6[1] = iVar2;
    iVar10 = *param_2;
    if (iVar10 == *param_3) {
      iVar3 = -(iVar9 - iVar10);
      if (iVar3 < 0) {
        iVar3 = iVar9 - iVar10;
      }
      if (iVar3 < *(int *)(param_1 + 0x2db0)) {
        *param_6 = iVar10;
        iVar9 = iVar10;
      }
    }
    iVar10 = param_2[1];
    if (iVar10 == param_3[1]) {
      iVar3 = -(iVar2 - iVar10);
      if (iVar3 < 0) {
        iVar3 = iVar2 - iVar10;
      }
      if (iVar3 < *(int *)(param_1 + 0x2db0)) {
        param_6[1] = iVar10;
        iVar2 = iVar10;
      }
    }
    iVar10 = *param_4;
    if (iVar10 == *param_5) {
      iVar3 = -(iVar9 - iVar10);
      if (iVar3 < 0) {
        iVar3 = iVar9 - iVar10;
      }
      if (iVar3 < *(int *)(param_1 + 0x2db0)) {
        *param_6 = iVar10;
        iVar9 = iVar10;
      }
    }
    iVar10 = param_4[1];
    if (iVar10 == param_5[1]) {
      iVar3 = -(iVar2 - iVar10);
      if (iVar3 < 0) {
        iVar3 = iVar2 - iVar10;
      }
      if (iVar3 < *(int *)(param_1 + 0x2db0)) {
        param_6[1] = iVar10;
        iVar2 = iVar10;
      }
    }
    iVar9 = iVar9 - (*param_4 + *param_3) / 2;
    iVar10 = -iVar9;
    if (iVar10 < 0) {
      iVar10 = iVar9;
    }
    iVar9 = *(int *)(param_1 + 0x2dac);
    if (iVar10 <= iVar9) {
      iVar2 = iVar2 - (param_4[1] + param_3[1]) / 2;
      iVar10 = -iVar2;
      if (iVar10 < 0) {
        iVar10 = iVar2;
      }
      return CONCAT31((int3)((uint)iVar9 >> 8),iVar10 <= iVar9);
    }
  }
  return 0;
}


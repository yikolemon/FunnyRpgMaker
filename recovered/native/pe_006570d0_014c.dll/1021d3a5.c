/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021d3a5 */

void __fastcall FUN_1021d3a5(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  undefined1 auVar15 [16];
  longlong lVar16;
  
  iVar11 = (int)*param_3 * 4;
  iVar12 = (int)((ulonglong)*param_3 >> 0x20) * 4;
  iVar6 = *(int *)(param_1 + 0x2c) >> 8;
  iVar8 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)((int)param_2 + 4) >> 6;
  iVar2 = *(int *)((int)param_3 + 4) >> 6;
  if ((iVar2 < iVar8 || (iVar4 < iVar8 || iVar6 < iVar8)) &&
     (iVar8 = *(int *)(param_1 + 4), iVar8 <= iVar2 || (iVar8 <= iVar4 || iVar8 <= iVar6))) {
    iVar2 = (int)*param_2 * 4;
    iVar4 = (int)((ulonglong)*param_2 >> 0x20) * 4;
    auVar15._0_4_ = iVar2 - (int)*(undefined8 *)(param_1 + 0x28);
    iVar8 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
    auVar15._4_4_ = iVar4 - iVar8;
    auVar9._0_4_ = iVar11 - (iVar2 + auVar15._0_4_);
    auVar9._4_4_ = iVar12 - (iVar4 + auVar15._4_4_);
    uVar3 = -auVar9._0_4_;
    if ((int)-auVar9._0_4_ < 0) {
      uVar3 = auVar9._0_4_;
    }
    uVar7 = -auVar9._4_4_;
    if ((int)-auVar9._4_4_ < 0) {
      uVar7 = auVar9._4_4_;
    }
    if (uVar7 < uVar3) {
      uVar7 = uVar3;
    }
    if (uVar7 < 0x41) {
      FUN_1021cf4d(iVar12);
    }
    else {
      uVar3 = 0x21;
      uVar5 = 0x20;
      do {
        uVar3 = uVar3 - 1;
        uVar5 = uVar5 - 2;
        bVar1 = 0x103 < uVar7;
        uVar7 = uVar7 >> 2;
      } while (bVar1);
      uVar7 = 0x10000 >> ((char)uVar3 - 0x11U & 0x1f);
      auVar9._8_4_ = auVar9._4_4_;
      auVar9._12_4_ = -(uint)((int)auVar9._4_4_ < 0);
      lVar10 = auVar9._8_8_ << (ulonglong)uVar5;
      auVar15._8_4_ = auVar15._4_4_;
      auVar15._12_4_ = -(uint)(auVar15._4_4_ < 0);
      lVar16 = (auVar15._8_8_ << (ulonglong)uVar3) + lVar10;
      auVar13._0_12_ = ZEXT412(0) << 0x40;
      auVar13._12_4_ = iVar8;
      lVar14 = auVar13._8_8_;
      do {
        lVar14 = lVar14 + lVar16;
        lVar16 = lVar16 + lVar10 * 2;
        FUN_1021cf4d((int)((ulonglong)lVar14 >> 0x20));
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  else {
    *(int *)(param_1 + 0x28) = iVar11;
    *(int *)(param_1 + 0x2c) = iVar12;
  }
  return;
}


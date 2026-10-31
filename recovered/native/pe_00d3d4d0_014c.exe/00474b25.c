/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00474b25 */

void __fastcall FUN_00474b25(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar18;
  longlong lVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  int iVar19;
  longlong lVar15;
  undefined1 auVar16 [16];
  longlong lVar17;
  
  uVar10 = (int)*param_3 * 4;
  uVar11 = (int)((ulonglong)*param_3 >> 0x20) * 4;
  iVar6 = param_1[3];
  iVar3 = *(int *)((int)param_2 + 4) >> 6;
  iVar2 = *(int *)((int)param_3 + 4) >> 6;
  if ((iVar2 < iVar6 || (iVar3 < iVar6 || param_1[0xb] >> 8 < iVar6)) &&
     (iVar6 = param_1[1], iVar6 <= iVar2 || (iVar6 <= iVar3 || iVar6 <= param_1[0xb] >> 8))) {
    lVar12 = *(longlong *)(param_1 + 10);
    iVar2 = (int)*param_2 * 4;
    iVar3 = (int)((ulonglong)*param_2 >> 0x20) * 4;
    iVar19 = iVar2 - (int)lVar12;
    iVar6 = (int)((ulonglong)lVar12 >> 0x20);
    auVar16._4_4_ = iVar3 - iVar6;
    uVar18 = uVar10 - (iVar2 + iVar19);
    auVar8._4_4_ = uVar11 - (iVar3 + auVar16._4_4_);
    uVar5 = -uVar18;
    if ((int)-uVar18 < 0) {
      uVar5 = uVar18;
    }
    uVar4 = -auVar8._4_4_;
    if ((int)-auVar8._4_4_ < 0) {
      uVar4 = auVar8._4_4_;
    }
    if (uVar4 < uVar5) {
      uVar4 = uVar5;
    }
    if (uVar4 < 0x41) {
      FUN_004746cd(param_1,uVar10,uVar11);
    }
    else {
      uVar10 = 0x21;
      uVar11 = 0x20;
      do {
        uVar10 = uVar10 - 1;
        uVar11 = uVar11 - 2;
        bVar1 = 0x103 < uVar4;
        uVar4 = uVar4 >> 2;
      } while (bVar1);
      uVar5 = 0x10000 >> ((char)uVar10 - 0x11U & 0x1f);
      auVar8._8_4_ = auVar8._4_4_;
      auVar8._12_4_ = -(uint)((int)auVar8._4_4_ < 0);
      lVar7 = CONCAT44(-(uint)((int)uVar18 < 0),uVar18) << (ulonglong)uVar11;
      lVar9 = auVar8._8_8_ << (ulonglong)uVar11;
      auVar16._8_4_ = auVar16._4_4_;
      auVar16._12_4_ = -(uint)(auVar16._4_4_ < 0);
      lVar15 = (CONCAT44(-(uint)(iVar19 < 0),iVar19) << (ulonglong)uVar10) + lVar7;
      lVar17 = (auVar16._8_8_ << (ulonglong)uVar10) + lVar9;
      auVar13._0_12_ = ZEXT412(0) << 0x40;
      auVar13._12_4_ = iVar6;
      lVar14 = auVar13._8_8_;
      lVar12 = lVar12 << 0x20;
      do {
        lVar12 = lVar12 + lVar15;
        lVar14 = lVar14 + lVar17;
        lVar15 = lVar15 + lVar7 * 2;
        lVar17 = lVar17 + lVar9 * 2;
        FUN_004746cd(param_1,(uint)((ulonglong)lVar12 >> 0x20),(uint)((ulonglong)lVar14 >> 0x20));
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
  }
  return;
}


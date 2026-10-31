/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00479374 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00479374(int *param_1,int param_2,int param_3,uint *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar7;
  undefined1 auVar6 [16];
  longlong lVar8;
  undefined1 auVar9 [16];
  longlong lVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int local_48;
  uint local_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  uint local_24;
  uint uStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_48;
  if (param_1[8] == 1) {
    local_34 = *param_1;
    iStack_30 = param_1[1];
    uStack_2c = 0;
    iStack_28 = 0;
    uVar5 = (int)*(undefined8 *)(param_1 + 2) - local_34;
    iVar7 = (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20) - iStack_30;
    uStack_3c = 0;
    iStack_38 = 0;
    iVar4 = (param_2 - local_34) * uVar5;
    iVar3 = iVar4 + 0x3f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    iVar2 = (param_3 - iStack_30) * iVar7;
    iVar4 = iVar2 + 0x3f;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    local_48 = param_2;
    local_44 = uVar5;
    iStack_40 = iVar7;
    local_1c = uVar5;
    iStack_18 = iVar7;
    iVar4 = FUN_0041eaa0((iVar4 >> 6) + (iVar3 >> 6),
                         ((uint)(iVar7 * iVar7) >> 6) + (uVar5 * uVar5 >> 6));
    iVar3 = 0;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    if (0xffff < iVar3) {
      iVar3 = 0x10000;
    }
    lVar8 = (longlong)(iVar7 * 0x400) * (longlong)iVar3;
    lVar13 = (longlong)iVar3 * (longlong)(int)(uVar5 * 0x400);
    iVar3 = (int)(lVar8 >> 0x3f);
    auVar9._0_8_ = CONCAT44(iVar3,iVar3);
    auVar9._8_4_ = (int)(lVar13 >> 0x3f);
    auVar9._12_4_ = auVar9._8_4_;
    lVar13 = auVar9._8_8_ + _UNK_004d7418 + lVar13;
    uStack_20 = (iStack_30 - param_3) * 0x400 +
                (int)((ulonglong)(auVar9._0_8_ + _DAT_004d7410 + lVar8) >> 0x10);
    local_24 = (local_34 - local_48) * 0x400 + (int)((ulonglong)lVar13 >> 0x10);
    auVar10._0_4_ = -(uint)((int)uStack_20 < 0);
    auVar10._4_4_ = -(uint)((int)local_24 < 0);
    auVar10._12_4_ =
         -(uint)((int)(iStack_28 * 0x400 + (uint)(ushort)((ulonglong)lVar13 >> 0x30)) <
                SUB124(SUB1612((undefined1  [16])0x0,4),8));
    auVar18._4_4_ = iStack_40;
    auVar18._0_4_ = local_44;
    auVar14._0_4_ = -(uint)((int)local_44 < 0);
    auVar14._4_4_ = -(uint)(iStack_40 < 0);
    auVar14._12_4_ = -(uint)(iStack_38 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
    auVar18._8_4_ = iStack_40;
    auVar18._12_4_ = auVar14._4_4_;
    auVar1._4_4_ = auVar10._0_4_;
    auVar1._0_4_ = uStack_20;
    auVar1._8_4_ = local_24;
    auVar1._12_4_ = auVar10._4_4_;
    auVar14._8_4_ = auVar14._4_4_;
    auVar10._8_4_ = auVar10._4_4_;
    lVar8 = ((ulonglong)auVar10._0_4_ * (ulonglong)local_44 +
             (ulonglong)auVar14._0_4_ * (ulonglong)uStack_20 << 0x20) +
            (ulonglong)uStack_20 * (ulonglong)local_44;
    lVar13 = ((auVar10._8_8_ & 0xffffffff) * (auVar18._8_8_ & 0xffffffff) +
              (auVar14._8_8_ & 0xffffffff) * (ulonglong)local_24 << 0x20) +
             (auVar1._8_8_ & 0xffffffff) * (auVar18._8_8_ & 0xffffffff);
    iVar3 = (int)(lVar8 >> 0x3f);
    auVar15._0_8_ = CONCAT44(iVar3,iVar3);
    auVar15._8_4_ = (int)(lVar13 >> 0x3f);
    auVar15._12_4_ = auVar15._8_4_;
    *(byte *)(param_4 + 2) =
         ~-((int)((ulonglong)(lVar13 + _UNK_004d7418 + auVar15._8_8_) >> 0x10) <
           (int)((ulonglong)(lVar8 + _DAT_004d7410 + auVar15._0_8_) >> 0x10)) | 1;
    uVar5 = FUN_00421279(&local_24);
    *param_4 = uVar5;
    uVar5 = 0x10000;
    if (0xfffe < iVar4 - 1U) {
      FUN_0041ff88(&local_1c);
      FUN_0041ff88(&local_24);
      auVar11._4_4_ = iStack_18;
      auVar11._0_4_ = local_1c;
      auVar16._0_4_ = -(uint)((int)local_1c < 0);
      auVar16._4_4_ = -(uint)(iStack_18 < 0);
      auVar16._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar11._8_4_ = iStack_18;
      auVar11._12_4_ = auVar16._4_4_;
      auVar6._4_4_ = local_24;
      auVar6._0_4_ = uStack_20;
      auVar17._0_4_ = -(uint)((int)uStack_20 < 0);
      auVar17._4_4_ = -(uint)((int)local_24 < 0);
      auVar17._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar6._8_4_ = local_24;
      auVar6._12_4_ = auVar17._4_4_;
      auVar16._8_4_ = auVar16._4_4_;
      auVar17._8_4_ = auVar17._4_4_;
      lVar8 = (ulonglong)uStack_20 * (ulonglong)local_1c +
              ((ulonglong)auVar17._0_4_ * (ulonglong)local_1c +
               (ulonglong)auVar16._0_4_ * (ulonglong)uStack_20 << 0x20);
      lVar13 = (auVar6._8_8_ & 0xffffffff) * (auVar11._8_8_ & 0xffffffff) +
               ((auVar17._8_8_ & 0xffffffff) * (auVar11._8_8_ & 0xffffffff) +
                (auVar16._8_8_ & 0xffffffff) * (auVar6._8_8_ & 0xffffffff) << 0x20);
      iVar3 = (int)(lVar8 >> 0x3f);
      auVar12._0_8_ = CONCAT44(iVar3,iVar3);
      auVar12._8_4_ = (int)(lVar13 >> 0x3f);
      auVar12._12_4_ = auVar12._8_4_;
      uVar5 = (int)((ulonglong)(auVar12._0_8_ + lVar8 + _DAT_004d7410) >> 0x10) -
              (int)((ulonglong)(auVar12._8_8_ + lVar13 + _UNK_004d7418) >> 0x10);
    }
    param_4[1] = uVar5;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_48);
}


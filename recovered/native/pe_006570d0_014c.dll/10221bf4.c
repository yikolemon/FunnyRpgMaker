/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10221bf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10221bf4(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar8;
  undefined1 auVar7 [16];
  longlong lVar9;
  undefined1 auVar10 [16];
  longlong lVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  if (param_1[8] == 1) {
    local_34 = *param_1;
    iStack_30 = param_1[1];
    uStack_2c = 0;
    iStack_28 = 0;
    uVar6 = (int)*(undefined8 *)(param_1 + 2) - local_34;
    iVar8 = (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20) - iStack_30;
    uStack_3c = 0;
    iStack_38 = 0;
    iVar5 = (param_2 - local_34) * uVar6;
    iVar4 = iVar5 + 0x3f;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    iVar3 = (param_3 - iStack_30) * iVar8;
    iVar5 = iVar3 + 0x3f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    local_48 = param_2;
    local_44 = uVar6;
    iStack_40 = iVar8;
    local_1c = uVar6;
    iStack_18 = iVar8;
    iVar5 = FUN_101c2523((iVar5 >> 6) + (iVar4 >> 6),
                         ((uint)(iVar8 * iVar8) >> 6) + (uVar6 * uVar6 >> 6));
    iVar4 = 0;
    if (0 < iVar5) {
      iVar4 = iVar5;
    }
    if (0xffff < iVar4) {
      iVar4 = 0x10000;
    }
    lVar9 = (longlong)(iVar8 * 0x400) * (longlong)iVar4;
    lVar14 = (longlong)iVar4 * (longlong)(int)(uVar6 * 0x400);
    iVar4 = (int)(lVar9 >> 0x3f);
    auVar10._0_8_ = CONCAT44(iVar4,iVar4);
    auVar10._8_4_ = (int)(lVar14 >> 0x3f);
    auVar10._12_4_ = auVar10._8_4_;
    lVar14 = auVar10._8_8_ + _UNK_10302e78 + lVar14;
    uStack_20 = (iStack_30 - param_3) * 0x400 +
                (int)((ulonglong)(auVar10._0_8_ + _DAT_10302e70 + lVar9) >> 0x10);
    local_24 = (local_34 - local_48) * 0x400 + (int)((ulonglong)lVar14 >> 0x10);
    auVar11._0_4_ = -(uint)((int)uStack_20 < 0);
    auVar11._4_4_ = -(uint)((int)local_24 < 0);
    auVar11._12_4_ =
         -(uint)((int)(iStack_28 * 0x400 + (uint)(ushort)((ulonglong)lVar14 >> 0x30)) <
                SUB124(SUB1612((undefined1  [16])0x0,4),8));
    auVar19._4_4_ = iStack_40;
    auVar19._0_4_ = local_44;
    auVar15._0_4_ = -(uint)((int)local_44 < 0);
    auVar15._4_4_ = -(uint)(iStack_40 < 0);
    auVar15._12_4_ = -(uint)(iStack_38 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
    auVar19._8_4_ = iStack_40;
    auVar19._12_4_ = auVar15._4_4_;
    auVar1._4_4_ = auVar11._0_4_;
    auVar1._0_4_ = uStack_20;
    auVar1._8_4_ = local_24;
    auVar1._12_4_ = auVar11._4_4_;
    auVar15._8_4_ = auVar15._4_4_;
    auVar11._8_4_ = auVar11._4_4_;
    lVar9 = ((ulonglong)auVar11._0_4_ * (ulonglong)local_44 +
             (ulonglong)auVar15._0_4_ * (ulonglong)uStack_20 << 0x20) +
            (ulonglong)uStack_20 * (ulonglong)local_44;
    lVar14 = ((auVar11._8_8_ & 0xffffffff) * (auVar19._8_8_ & 0xffffffff) +
              (auVar15._8_8_ & 0xffffffff) * (ulonglong)local_24 << 0x20) +
             (auVar1._8_8_ & 0xffffffff) * (auVar19._8_8_ & 0xffffffff);
    iVar4 = (int)(lVar9 >> 0x3f);
    auVar16._0_8_ = CONCAT44(iVar4,iVar4);
    auVar16._8_4_ = (int)(lVar14 >> 0x3f);
    auVar16._12_4_ = auVar16._8_4_;
    *(byte *)(param_4 + 2) =
         ~-((int)((ulonglong)(lVar14 + _UNK_10302e78 + auVar16._8_8_) >> 0x10) <
           (int)((ulonglong)(lVar9 + _DAT_10302e70 + auVar16._0_8_) >> 0x10)) | 1;
    uVar2 = FUN_101c5201(&local_24);
    *param_4 = uVar2;
    iVar4 = 0x10000;
    if (0xfffe < iVar5 - 1U) {
      FUN_101c3f10(&local_1c);
      FUN_101c3f10(&local_24);
      auVar12._4_4_ = iStack_18;
      auVar12._0_4_ = local_1c;
      auVar17._0_4_ = -(uint)((int)local_1c < 0);
      auVar17._4_4_ = -(uint)(iStack_18 < 0);
      auVar17._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar12._8_4_ = iStack_18;
      auVar12._12_4_ = auVar17._4_4_;
      auVar7._4_4_ = local_24;
      auVar7._0_4_ = uStack_20;
      auVar18._0_4_ = -(uint)((int)uStack_20 < 0);
      auVar18._4_4_ = -(uint)((int)local_24 < 0);
      auVar18._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar7._8_4_ = local_24;
      auVar7._12_4_ = auVar18._4_4_;
      auVar17._8_4_ = auVar17._4_4_;
      auVar18._8_4_ = auVar18._4_4_;
      lVar9 = (ulonglong)uStack_20 * (ulonglong)local_1c +
              ((ulonglong)auVar18._0_4_ * (ulonglong)local_1c +
               (ulonglong)auVar17._0_4_ * (ulonglong)uStack_20 << 0x20);
      lVar14 = (auVar7._8_8_ & 0xffffffff) * (auVar12._8_8_ & 0xffffffff) +
               ((auVar18._8_8_ & 0xffffffff) * (auVar12._8_8_ & 0xffffffff) +
                (auVar17._8_8_ & 0xffffffff) * (auVar7._8_8_ & 0xffffffff) << 0x20);
      iVar4 = (int)(lVar9 >> 0x3f);
      auVar13._0_8_ = CONCAT44(iVar4,iVar4);
      auVar13._8_4_ = (int)(lVar14 >> 0x3f);
      auVar13._12_4_ = auVar13._8_4_;
      iVar4 = (int)((ulonglong)(auVar13._0_8_ + lVar9 + _DAT_10302e70) >> 0x10) -
              (int)((ulonglong)(auVar13._8_8_ + lVar14 + _UNK_10302e78) >> 0x10);
    }
    param_4[1] = iVar4;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


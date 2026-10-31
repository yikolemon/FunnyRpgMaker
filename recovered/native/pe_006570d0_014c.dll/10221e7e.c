/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10221e7e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10221e7e(int *param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  int iVar11;
  longlong lVar12;
  undefined1 auVar10 [16];
  int iVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  longlong lVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int *local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined8 local_e4;
  uint uStack_dc;
  uint uStack_d8;
  uint local_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined1 local_c4 [16];
  int local_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  ulonglong local_a4;
  uint uStack_9c;
  undefined4 uStack_98;
  int local_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  ulonglong local_84;
  uint uStack_7c;
  uint uStack_78;
  int local_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  int iStack_30;
  uint uStack_2c;
  int iStack_28;
  undefined8 local_24;
  int local_1c;
  uint uStack_18;
  uint local_14;
  undefined1 auVar16 [16];
  
  local_14 = DAT_10388d00 ^ (uint)&local_f8;
  iVar6 = 0;
  uStack_18 = 0;
  local_1c = 0;
  if (param_1[8] == 2) {
    local_54 = *param_1;
    iStack_50 = param_1[1];
    local_b4 = (int)*(undefined8 *)(param_1 + 4);
    iStack_b0 = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
    local_64 = local_54 + local_b4 * -2 + (int)*(undefined8 *)(param_1 + 2);
    uStack_dc = iStack_50 + iStack_b0 * -2 + (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
    iStack_4c = 0;
    iStack_48 = 0;
    local_b4 = local_b4 - local_54;
    iStack_b0 = iStack_b0 - iStack_50;
    uStack_ac = 0;
    uStack_a8 = 0;
    local_74 = local_b4 * 2;
    uStack_7c = iStack_b0 * 2;
    local_d4 = -(uint)(local_64 < 0);
    uStack_d8 = -(uint)((int)uStack_dc < 0);
    local_e4 = CONCAT44(local_d4,local_64);
    uStack_9c = -(uint)((int)uStack_7c < 0);
    uStack_6c = 0;
    uStack_68 = 0;
    local_84 = CONCAT44(-(uint)(local_74 < 0),local_74);
    local_64 = local_64 * 2;
    iStack_60 = uStack_dc * 2;
    uStack_5c = 0;
    uStack_58 = 0;
    iStack_90 = param_3;
    uStack_8c = 0;
    uStack_88 = 0;
    local_f0 = 0x7fffffff;
    uStack_d0 = 0;
    uStack_c8 = 0;
    local_a4 = (ulonglong)-(uint)(local_74 < 0);
    uStack_98 = 0;
    uVar4 = 0;
    local_c4 = (undefined1  [16])0x0;
    local_ec = param_2;
    uStack_cc = uStack_d8;
    local_94 = param_2;
    uStack_78 = uStack_9c;
    uStack_70 = uStack_7c;
    do {
      uVar7 = iVar6 << 0xe;
      uVar5 = 0;
      local_e8 = iVar6;
      do {
        lVar9 = (ulonglong)uVar7 * (ulonglong)uVar7 + 0x8000;
        uVar3 = (int)((ulonglong)lVar9 >> 0x20) << 0x10 | (uint)lVar9 >> 0x10;
        lVar9 = ((ulonglong)uVar3 * (ulonglong)local_d4 << 0x20) +
                (ulonglong)uVar3 * (local_e4 & 0xffffffff);
        lVar12 = ((ulonglong)uVar3 * (ulonglong)uStack_cc << 0x20) +
                 (ulonglong)uVar3 * (ulonglong)uStack_dc;
        iVar6 = (int)(lVar9 >> 0x3f);
        auVar15._0_8_ = CONCAT44(iVar6,iVar6);
        auVar15._8_4_ = (int)(lVar12 >> 0x3f);
        auVar15._12_4_ = auVar15._8_4_;
        lVar12 = lVar12 + _UNK_10302e78 + auVar15._8_8_;
        iStack_30 = 0;
        iStack_28 = 0;
        lVar14 = ((ulonglong)uVar7 * (local_a4 & 0xffffffff) << 0x20) +
                 (ulonglong)uVar7 * (local_84 & 0xffffffff);
        lVar19 = ((ulonglong)uVar7 * (ulonglong)uStack_9c << 0x20) +
                 (ulonglong)uVar7 * (ulonglong)uStack_7c;
        iVar6 = (int)(lVar14 >> 0x3f);
        auVar20._0_8_ = CONCAT44(iVar6,iVar6);
        auVar20._8_4_ = (int)(lVar19 >> 0x3f);
        auVar20._12_4_ = auVar20._8_4_;
        lVar19 = lVar19 + _UNK_10302e78 + auVar20._8_8_;
        iStack_3c = (int)((ulonglong)lVar12 >> 0x10);
        iVar6 = (int)((ulonglong)lVar19 >> 0x10);
        local_44 = (int)((ulonglong)(lVar14 + _DAT_10302e70 + auVar20._0_8_) >> 0x10) + local_54 +
                   (int)((ulonglong)(lVar9 + _DAT_10302e70 + auVar15._0_8_) >> 0x10);
        iStack_40 = iVar6 + iStack_50 + iStack_3c;
        iStack_3c = iVar6 + iStack_4c + iStack_3c;
        iStack_38 = (uint)(ushort)((ulonglong)lVar19 >> 0x30) + iStack_48 +
                    (uint)(ushort)((ulonglong)lVar12 >> 0x30);
        local_24._0_4_ = (local_44 - local_94) * 0x400;
        local_24._4_4_ = (iStack_40 - iStack_90) * 0x400;
        local_f8 = (int *)&local_24;
        local_34 = uVar7;
        uStack_2c = uVar7;
        iVar6 = FUN_101c5201();
        if (iVar6 < local_f0) {
          local_c4._4_4_ = iStack_40 << 10;
          local_c4._0_4_ = local_44 << 10;
          local_c4._8_4_ = iStack_3c << 10;
          local_c4._12_4_ = iStack_38 << 10;
          uVar4 = uVar7;
          local_f0 = iVar6;
        }
        iVar6 = (int)(((uint)((int)local_24 >> 0x1f) >> 0x16) + (int)local_24) >> 10;
        iVar11 = (int)(((uint)(local_24._4_4_ >> 0x1f) >> 0x16) + local_24._4_4_) >> 10;
        local_24 = CONCAT44(iVar11,iVar6);
        uVar3 = local_34 * 2;
        auVar22._4_4_ = iStack_30 * 2;
        auVar22._0_4_ = uVar3;
        auVar22._8_4_ = uStack_2c * 2;
        auVar22._12_4_ = iStack_28 * 2;
        lVar9 = ((ulonglong)uVar3 * (ulonglong)local_d4 << 0x20) +
                (ulonglong)uVar3 * (local_e4 & 0xffffffff);
        lVar12 = ((auVar22._8_8_ & 0xffffffff) * (ulonglong)uStack_cc << 0x20) +
                 (auVar22._8_8_ & 0xffffffff) * (ulonglong)uStack_dc;
        iVar13 = (int)(lVar9 >> 0x3f);
        auVar16._0_8_ = CONCAT44(iVar13,iVar13);
        auVar16._8_4_ = (int)(lVar12 >> 0x3f);
        auVar16._12_4_ = auVar16._8_4_;
        iVar13 = (int)((ulonglong)(lVar9 + _DAT_10302e70 + auVar16._0_8_) >> 0x10) + local_74;
        iVar24 = (int)((ulonglong)(lVar12 + _UNK_10302e78 + auVar16._8_8_) >> 0x10) + uStack_70;
        local_f8 = (int *)(((int)(((uint)(iVar24 * iVar11 >> 0x1f) >> 0x1a) + iVar24 * iVar11) >> 6)
                          + ((int)(((uint)(iVar6 * iVar13 >> 0x1f) >> 0x1a) + iVar6 * iVar13) >> 6))
        ;
        local_f4 = ((int)(((uint)(iStack_60 * iVar11 >> 0x1f) >> 0x1a) + iStack_60 * iVar11) >> 6) +
                   ((int)(((uint)(iVar6 * local_64 >> 0x1f) >> 0x1a) + iVar6 * local_64) >> 6) +
                   ((uint)(iVar24 * iVar24) >> 6) + ((uint)(iVar13 * iVar13) >> 6);
        iVar6 = FUN_101c2523();
        uVar7 = uVar7 - iVar6;
      } while ((uVar7 < 0x10001) && (bVar8 = uVar5 < 3, uVar5 = uVar5 + 1, bVar8));
      iVar6 = local_e8 + 1;
    } while (iVar6 != 5);
    lVar9 = (local_e4 & 0xffffffff) * (ulonglong)uVar4;
    uVar7 = (uint)lVar9;
    iVar6 = local_e4._4_4_ * uVar4 + (int)((ulonglong)lVar9 >> 0x20) +
            (int)local_e4 * ((int)uVar4 >> 0x1f);
    uVar2 = iVar6 >> 0x1f;
    uVar3 = uVar7 + uVar2;
    uVar1 = (uint)((ulonglong)uStack_dc * (ulonglong)uVar4);
    iVar11 = uStack_d8 * uVar4 + (int)((ulonglong)uStack_dc * (ulonglong)uVar4 >> 0x20) +
             ((int)uVar4 >> 0x1f) * uStack_dc;
    iVar6 = (local_b4 +
            ((uVar2 + iVar6 + (uint)CARRY4(uVar7,uVar2) + (uint)(0xffff7fff < uVar3)) * 0x10000 |
            uVar3 + 0x8000 >> 0x10)) * 2;
    uVar3 = iVar11 >> 0x1f;
    uVar7 = uVar1 + uVar3;
    local_d4 = local_c4._0_4_ + local_ec * -0x400;
    iVar11 = (iStack_b0 +
             ((uVar3 + iVar11 + (uint)CARRY4(uVar1,uVar3) + (uint)(0xffff7fff < uVar7)) * 0x10000 |
             uVar7 + 0x8000 >> 0x10)) * 2;
    lVar9 = (longlong)(int)local_d4 * (longlong)iVar11;
    iVar13 = (int)(lVar9 >> 0x3f);
    lVar12 = lVar9 + CONCAT44(iVar13,iVar13) + 0x8000;
    uVar7 = local_c4._4_4_ + param_3 * -0x400;
    lVar9 = (longlong)(int)uVar7 * (longlong)iVar6;
    local_e4 = CONCAT44(local_e4._4_4_,uVar4);
    iVar13 = (int)(lVar9 >> 0x3f);
    lVar9 = lVar9 + CONCAT44(iVar13,iVar13) + 0x8000;
    local_24 = CONCAT44(iVar11,iVar6);
    *param_4 = local_f0;
    *(byte *)(param_4 + 2) =
         -((int)((int)((ulonglong)lVar9 >> 0x20) * 0x10000 | (uint)lVar9 >> 0x10) <=
          (int)((int)((ulonglong)lVar12 >> 0x20) * 0x10000 | (uint)lVar12 >> 0x10)) | 1;
    iVar6 = 0x10000;
    if ((uVar4 & 0xfffeffff) == 0) {
      local_f8 = (int *)&local_24;
      local_1c = local_d4;
      uStack_18 = uVar7;
      FUN_101c3f10();
      local_f8 = &local_1c;
      FUN_101c3f10();
      auVar23._0_4_ = -(uint)((int)local_24 < 0);
      auVar23._4_4_ = -(uint)((longlong)local_24 < 0);
      auVar23._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar17._8_4_ = (int)(local_24 >> 0x20);
      auVar17._0_8_ = local_24;
      auVar17._12_4_ = auVar23._4_4_;
      auVar10._4_4_ = local_1c;
      auVar10._0_4_ = uStack_18;
      auVar21._0_4_ = -(uint)((int)uStack_18 < 0);
      auVar21._4_4_ = -(uint)(local_1c < 0);
      auVar21._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar10._8_4_ = local_1c;
      auVar10._12_4_ = auVar21._4_4_;
      auVar23._8_4_ = auVar23._4_4_;
      auVar21._8_4_ = auVar21._4_4_;
      lVar9 = (ulonglong)uStack_18 * (local_24 & 0xffffffff) +
              ((ulonglong)auVar21._0_4_ * (local_24 & 0xffffffff) +
               (ulonglong)auVar23._0_4_ * (ulonglong)uStack_18 << 0x20);
      lVar12 = (auVar10._8_8_ & 0xffffffff) * (auVar17._8_8_ & 0xffffffff) +
               ((auVar21._8_8_ & 0xffffffff) * (auVar17._8_8_ & 0xffffffff) +
                (auVar23._8_8_ & 0xffffffff) * (auVar10._8_8_ & 0xffffffff) << 0x20);
      iVar6 = (int)(lVar9 >> 0x3f);
      auVar18._0_8_ = CONCAT44(iVar6,iVar6);
      auVar18._8_4_ = (int)(lVar12 >> 0x3f);
      auVar18._12_4_ = auVar18._8_4_;
      iVar6 = (int)((ulonglong)(auVar18._0_8_ + lVar9 + _DAT_10302e70) >> 0x10) -
              (int)((ulonglong)(auVar18._8_8_ + lVar12 + _UNK_10302e78) >> 0x10);
    }
    param_4[1] = iVar6;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_f8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


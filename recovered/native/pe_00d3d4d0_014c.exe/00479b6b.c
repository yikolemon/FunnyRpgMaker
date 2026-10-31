/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00479b6b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00479b6b(int *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar16;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  longlong lVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  longlong lVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  int iVar25;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined1 local_74 [16];
  uint local_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  int local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  ulonglong local_44;
  uint uStack_3c;
  uint uStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined8 local_24;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  undefined1 auVar26 [16];
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_cc;
  uStack_18 = 0;
  local_1c = 0;
  if (param_1[8] == 3) {
    iVar1 = param_1[4];
    iVar9 = param_1[5];
    local_34 = *param_1;
    iStack_30 = param_1[1];
    local_88 = local_34 + iVar1 * -2 + param_1[6];
    iStack_2c = 0;
    iStack_28 = 0;
    local_ac = ((iVar1 - param_1[6]) * 3 - local_34) + (int)*(undefined8 *)(param_1 + 2);
    local_a4 = ((iVar9 - param_1[7]) * 3 - iStack_30) +
               (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
    local_8c = iStack_30 + iVar9 * -2 + param_1[7];
    local_c0 = local_8c * 3;
    local_c4 = local_88 * 3;
    local_cc = (iVar1 - local_34) * 3;
    local_bc = (iVar9 - iStack_30) * 3;
    iVar1 = 0;
    local_74 = (undefined1  [16])0x0;
    local_a8 = -(uint)((int)local_ac < 0);
    local_98 = -(uint)((int)local_a4 < 0);
    local_44 = CONCAT44(local_a8,local_ac);
    local_88 = local_88 * 6;
    local_8c = local_8c * 6;
    iStack_50 = param_3;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    local_b4 = 0x7fffffff;
    local_b8 = 0;
    local_9c = 0;
    local_a0 = param_2;
    local_64 = local_a8;
    uStack_5c = local_98;
    local_54 = param_2;
    uStack_3c = local_a4;
    uStack_38 = local_98;
    do {
      uVar2 = iVar1 << 0xe;
      local_94 = 0;
      local_90 = iVar1;
      do {
        lVar14 = (ulonglong)uVar2 * (ulonglong)uVar2 + 0x8000;
        uVar6 = (int)((ulonglong)lVar14 >> 0x20) * 0x10000 | (uint)lVar14 >> 0x10;
        lVar14 = (ulonglong)uVar6 * (ulonglong)uVar2 + 0x8000;
        uVar5 = (int)((ulonglong)lVar14 >> 0x20) * 0x10000 | (uint)lVar14 >> 0x10;
        local_b0 = (int)((ulonglong)uVar6 * (ulonglong)local_c0);
        iVar11 = (int)((ulonglong)uVar6 * (ulonglong)local_c0 >> 0x20) +
                 ((int)local_c0 >> 0x1f) * uVar6;
        iVar1 = (int)((ulonglong)uVar6 * (ulonglong)local_c4 >> 0x20) +
                ((int)local_c4 >> 0x1f) * uVar6;
        iVar9 = ((int)local_bc >> 0x1f) * uVar2 +
                (int)((ulonglong)uVar2 * (ulonglong)local_bc >> 0x20);
        iVar12 = ((int)local_cc >> 0x1f) * uVar2 +
                 (int)((ulonglong)uVar2 * (ulonglong)local_cc >> 0x20);
        lVar14 = ((ulonglong)uVar5 * (ulonglong)local_64 << 0x20) +
                 (ulonglong)uVar5 * (local_44 & 0xffffffff);
        lVar16 = ((ulonglong)uVar5 * (ulonglong)uStack_5c << 0x20) +
                 (ulonglong)uVar5 * (ulonglong)uStack_3c;
        iVar25 = (int)(lVar14 >> 0x3f);
        auVar26._0_8_ = CONCAT44(iVar25,iVar25);
        auVar26._8_4_ = (int)(lVar16 >> 0x3f);
        auVar26._12_4_ = auVar26._8_4_;
        lVar16 = lVar16 + _UNK_004d7418 + auVar26._8_8_;
        iVar25 = iVar1 >> 0x1f;
        auVar17._0_8_ = CONCAT44(iVar25,iVar25);
        auVar17._8_4_ = iVar11 >> 0x1f;
        auVar17._12_4_ = auVar17._8_4_;
        iVar25 = iVar12 >> 0x1f;
        auVar21._0_8_ = CONCAT44(iVar25,iVar25);
        auVar21._8_4_ = iVar9 >> 0x1f;
        auVar21._12_4_ = auVar21._8_4_;
        lVar20 = auVar17._8_8_ + CONCAT44(iVar11,local_b0) + _UNK_004d7418;
        iVar11 = (int)((ulonglong)lVar20 >> 0x10);
        lVar23 = auVar21._8_8_ + CONCAT44(iVar9,(int)((ulonglong)uVar2 * (ulonglong)local_bc)) +
                 _UNK_004d7418;
        iVar9 = (int)((ulonglong)lVar23 >> 0x10);
        iStack_7c = (int)((ulonglong)lVar16 >> 0x10);
        local_84 = (int)((ulonglong)
                         (auVar21._0_8_ +
                          CONCAT44(iVar12,(int)((ulonglong)uVar2 * (ulonglong)local_cc)) +
                         _DAT_004d7410) >> 0x10) + local_34 +
                   (int)((ulonglong)
                         (auVar17._0_8_ +
                          CONCAT44(iVar1,(int)((ulonglong)uVar6 * (ulonglong)local_c4)) +
                         _DAT_004d7410) >> 0x10) +
                   (int)((ulonglong)(lVar14 + _DAT_004d7410 + auVar26._0_8_) >> 0x10);
        iStack_80 = iVar9 + iStack_30 + iVar11 + iStack_7c;
        iStack_7c = iVar9 + iStack_2c + iVar11 + iStack_7c;
        iStack_78 = (uint)(ushort)((ulonglong)lVar23 >> 0x30) + iStack_28 +
                    (uint)(ushort)((ulonglong)lVar20 >> 0x30) +
                    (uint)(ushort)((ulonglong)lVar16 >> 0x30);
        local_24._0_4_ = (local_84 - local_54) * 0x400;
        local_24._4_4_ = (iStack_80 - iStack_50) * 0x400;
        local_c8 = uVar2;
        uVar5 = FUN_00421279((uint *)&local_24);
        if ((int)uVar5 < (int)local_b4) {
          local_74._4_4_ = iStack_80 << 10;
          local_74._0_4_ = local_84 << 10;
          local_74._8_4_ = iStack_7c << 10;
          local_74._12_4_ = iStack_78 << 10;
          local_b8 = uVar2;
          local_b4 = uVar5;
          local_9c = uVar6;
        }
        uVar6 = uVar6 * 3;
        uVar5 = (uint)((ulonglong)local_ac * (ulonglong)uVar6);
        iVar1 = (int)((ulonglong)local_ac * (ulonglong)uVar6 >> 0x20) + local_a8 * uVar6;
        uVar7 = iVar1 >> 0x1f;
        uVar3 = uVar5 + uVar7;
        lVar14 = (longlong)(int)(uVar2 * 2) * (longlong)(int)local_c4;
        iVar9 = (int)(lVar14 >> 0x3f);
        lVar14 = lVar14 + CONCAT44(iVar9,iVar9) + 0x8000;
        iVar25 = ((int)((ulonglong)lVar14 >> 0x20) * 0x10000 | (uint)lVar14 >> 0x10) + local_cc +
                 ((uVar7 + iVar1 + (uint)CARRY4(uVar5,uVar7) + (uint)(0xffff7fff < uVar3)) * 0x10000
                 | uVar3 + 0x8000 >> 0x10);
        uVar5 = (uint)((ulonglong)local_a4 * (ulonglong)uVar6);
        iVar1 = (int)((ulonglong)local_a4 * (ulonglong)uVar6 >> 0x20) + local_98 * uVar6;
        uVar3 = iVar1 >> 0x1f;
        uVar6 = uVar5 + uVar3;
        lVar14 = (longlong)(int)(uVar2 * 2) * (longlong)(int)local_c0;
        iVar9 = (int)(lVar14 >> 0x3f);
        lVar14 = lVar14 + CONCAT44(iVar9,iVar9) + 0x8000;
        iVar13 = ((int)((ulonglong)lVar14 >> 0x20) * 0x10000 | (uint)lVar14 >> 0x10) + local_bc +
                 ((uVar3 + iVar1 + (uint)CARRY4(uVar5,uVar3) + (uint)(0xffff7fff < uVar6)) * 0x10000
                 | uVar6 + 0x8000 >> 0x10);
        uVar2 = uVar2 * 6;
        uVar6 = (uint)((ulonglong)local_ac * (ulonglong)uVar2);
        iVar9 = (int)((ulonglong)local_ac * (ulonglong)uVar2 >> 0x20) + local_a8 * uVar2;
        uVar7 = iVar9 >> 0x1f;
        uVar5 = uVar6 + uVar7;
        uVar3 = (uint)((ulonglong)local_a4 * (ulonglong)uVar2);
        iVar11 = (int)((ulonglong)local_a4 * (ulonglong)uVar2 >> 0x20) + local_98 * uVar2;
        uVar8 = iVar11 >> 0x1f;
        uVar2 = uVar3 + uVar8;
        local_84 = (int)(((uint)((int)(uint)local_24 >> 0x1f) >> 0x16) + (uint)local_24) >> 10;
        local_b0 = (int)(((uint)(local_24._4_4_ >> 0x1f) >> 0x16) + local_24._4_4_) >> 10;
        local_24 = CONCAT44(local_b0,local_84);
        iVar12 = local_84 * iVar25;
        iVar1 = iVar12 + 0x3f;
        if (-1 < iVar12) {
          iVar1 = iVar12;
        }
        iVar10 = local_b0 * iVar13;
        iVar12 = iVar10 + 0x3f;
        if (-1 < iVar10) {
          iVar12 = iVar10;
        }
        iVar10 = (((uVar7 + iVar9 + (uint)CARRY4(uVar6,uVar7) + (uint)(0xffff7fff < uVar5)) *
                   0x10000 | uVar5 + 0x8000 >> 0x10) + local_88) * local_84;
        iVar9 = iVar10 + 0x3f;
        if (-1 < iVar10) {
          iVar9 = iVar10;
        }
        iVar10 = (((uVar8 + iVar11 + (uint)CARRY4(uVar3,uVar8) + (uint)(0xffff7fff < uVar2)) *
                   0x10000 | uVar2 + 0x8000 >> 0x10) + local_8c) * local_b0;
        iVar11 = iVar10 + 0x3f;
        if (-1 < iVar10) {
          iVar11 = iVar10;
        }
        iVar1 = FUN_0041eaa0((iVar12 >> 6) + (iVar1 >> 6),
                             ((uint)(iVar13 * iVar13) >> 6) + ((uint)(iVar25 * iVar25) >> 6) +
                             (iVar11 >> 6) + (iVar9 >> 6));
        uVar2 = local_c8 - iVar1;
      } while ((uVar2 < 0x10001) && (uVar4 = (ushort)local_94, local_94 = local_94 + 1, uVar4 < 3));
      iVar1 = local_90 + 1;
    } while (iVar1 != 5);
    uVar2 = local_9c * 3;
    uVar6 = (uint)((ulonglong)local_ac * (ulonglong)uVar2);
    iVar1 = local_a8 * uVar2 + (int)((ulonglong)local_ac * (ulonglong)uVar2 >> 0x20) +
            local_ac * ((int)uVar2 >> 0x1f);
    uVar3 = iVar1 >> 0x1f;
    uVar5 = uVar6 + uVar3;
    local_c8 = local_b8 * 2;
    iVar9 = (int)((longlong)(int)local_c8 * (longlong)(int)local_c4 >> 0x3f);
    lVar14 = (longlong)(int)local_c8 * (longlong)(int)local_c4 + CONCAT44(iVar9,iVar9) + 0x8000;
    local_cc = local_cc + ((int)((ulonglong)lVar14 >> 0x20) * 0x10000 | (uint)lVar14 >> 0x10) +
               ((uVar3 + iVar1 + (uint)CARRY4(uVar6,uVar3) + (uint)(0xffff7fff < uVar5)) * 0x10000 |
               uVar5 + 0x8000 >> 0x10);
    uVar6 = (uint)((ulonglong)local_a4 * (ulonglong)uVar2);
    iVar1 = local_98 * uVar2 + (int)((ulonglong)local_a4 * (ulonglong)uVar2 >> 0x20) +
            ((int)uVar2 >> 0x1f) * local_a4;
    uVar5 = iVar1 >> 0x1f;
    uVar2 = uVar6 + uVar5;
    iVar9 = (int)((longlong)(int)local_c8 * (longlong)(int)local_c0 >> 0x3f);
    lVar14 = (longlong)(int)local_c8 * (longlong)(int)local_c0 + CONCAT44(iVar9,iVar9) + 0x8000;
    iVar9 = local_bc + ((int)((ulonglong)lVar14 >> 0x20) * 0x10000 | (uint)lVar14 >> 0x10) +
            ((uVar5 + iVar1 + (uint)CARRY4(uVar6,uVar5) + (uint)(0xffff7fff < uVar2)) * 0x10000 |
            uVar2 + 0x8000 >> 0x10);
    uVar6 = local_74._0_4_ + local_a0 * -0x400;
    lVar14 = (longlong)(int)uVar6 * (longlong)iVar9;
    iVar1 = (int)(lVar14 >> 0x3f);
    lVar16 = lVar14 + CONCAT44(iVar1,iVar1) + 0x8000;
    uVar5 = local_74._4_4_ + param_3 * -0x400;
    lVar14 = (longlong)(int)uVar5 * (longlong)(int)local_cc;
    iVar1 = (int)(lVar14 >> 0x3f);
    lVar14 = lVar14 + CONCAT44(iVar1,iVar1) + 0x8000;
    local_24 = CONCAT44(iVar9,local_cc);
    *param_4 = local_b4;
    *(byte *)(param_4 + 2) =
         -((int)((int)((ulonglong)lVar14 >> 0x20) * 0x10000 | (uint)lVar14 >> 0x10) <=
          (int)((int)((ulonglong)lVar16 >> 0x20) * 0x10000 | (uint)lVar16 >> 0x10)) | 1;
    uVar2 = 0x10000;
    if ((local_b8 & 0xfffeffff) == 0) {
      local_1c = uVar6;
      uStack_18 = uVar5;
      FUN_0041ff88((uint *)&local_24);
      FUN_0041ff88(&local_1c);
      auVar24._0_4_ = -(uint)((int)local_24 < 0);
      auVar24._4_4_ = -(uint)((longlong)local_24 < 0);
      auVar24._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar18._8_4_ = (int)(local_24 >> 0x20);
      auVar18._0_8_ = local_24;
      auVar18._12_4_ = auVar24._4_4_;
      auVar15._4_4_ = local_1c;
      auVar15._0_4_ = uStack_18;
      auVar22._0_4_ = -(uint)((int)uStack_18 < 0);
      auVar22._4_4_ = -(uint)((int)local_1c < 0);
      auVar22._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar15._8_4_ = local_1c;
      auVar15._12_4_ = auVar22._4_4_;
      auVar24._8_4_ = auVar24._4_4_;
      auVar22._8_4_ = auVar22._4_4_;
      lVar14 = (ulonglong)uStack_18 * (local_24 & 0xffffffff) +
               ((ulonglong)auVar22._0_4_ * (local_24 & 0xffffffff) +
                (ulonglong)auVar24._0_4_ * (ulonglong)uStack_18 << 0x20);
      lVar16 = (auVar15._8_8_ & 0xffffffff) * (auVar18._8_8_ & 0xffffffff) +
               ((auVar22._8_8_ & 0xffffffff) * (auVar18._8_8_ & 0xffffffff) +
                (auVar24._8_8_ & 0xffffffff) * (auVar15._8_8_ & 0xffffffff) << 0x20);
      iVar1 = (int)(lVar14 >> 0x3f);
      auVar19._0_8_ = CONCAT44(iVar1,iVar1);
      auVar19._8_4_ = (int)(lVar16 >> 0x3f);
      auVar19._12_4_ = auVar19._8_4_;
      uVar2 = (int)((ulonglong)(auVar19._0_8_ + lVar14 + _DAT_004d7410) >> 0x10) -
              (int)((ulonglong)(auVar19._8_8_ + lVar16 + _UNK_004d7418) >> 0x10);
    }
    param_4[1] = uVar2;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_cc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_cc);
}


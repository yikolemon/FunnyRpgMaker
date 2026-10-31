/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004795fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004795fe(int *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar14;
  longlong lVar12;
  longlong lVar15;
  undefined1 auVar13 [16];
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar24;
  int iVar25;
  int iVar28;
  undefined1 auVar26 [16];
  int iVar29;
  undefined1 auVar27 [16];
  int iVar30;
  int iVar32;
  undefined1 auVar31 [16];
  uint uVar33;
  uint uVar34;
  uint local_f0;
  undefined1 local_c4 [16];
  undefined8 local_24;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xffffff08;
  iVar8 = 0;
  uStack_18 = 0;
  local_1c = 0;
  if (param_1[8] == 2) {
    iVar4 = *param_1;
    iVar1 = param_1[1];
    iVar24 = (int)*(undefined8 *)(param_1 + 4);
    iVar28 = (int)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
    uVar33 = iVar4 + iVar24 * -2 + (int)*(undefined8 *)(param_1 + 2);
    uVar34 = iVar1 + iVar28 * -2 + (int)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
    iVar24 = iVar24 - iVar4;
    iVar28 = iVar28 - iVar1;
    uVar2 = iVar24 * 2;
    uVar3 = iVar28 * 2;
    uVar11 = -(uint)((int)uVar33 < 0);
    uVar14 = -(uint)((int)uVar34 < 0);
    local_f0 = 0x7fffffff;
    uVar6 = 0;
    local_c4 = (undefined1  [16])0x0;
    do {
      uVar9 = iVar8 << 0xe;
      uVar7 = 0;
      do {
        lVar12 = (ulonglong)uVar9 * (ulonglong)uVar9 + 0x8000;
        uVar5 = (int)((ulonglong)lVar12 >> 0x20) << 0x10 | (uint)lVar12 >> 0x10;
        lVar12 = ((ulonglong)uVar5 * (ulonglong)uVar11 << 0x20) +
                 (ulonglong)uVar5 * (ulonglong)uVar33;
        lVar15 = ((ulonglong)uVar5 * (ulonglong)uVar14 << 0x20) +
                 (ulonglong)uVar5 * (ulonglong)uVar34;
        iVar16 = (int)(lVar12 >> 0x3f);
        auVar19._0_8_ = CONCAT44(iVar16,iVar16);
        auVar19._8_4_ = (int)(lVar15 >> 0x3f);
        auVar19._12_4_ = auVar19._8_4_;
        lVar15 = lVar15 + _UNK_004d7418 + auVar19._8_8_;
        lVar18 = ((ulonglong)uVar9 * (ulonglong)-(uint)((int)uVar2 < 0) << 0x20) +
                 (ulonglong)uVar9 * (ulonglong)uVar2;
        lVar23 = ((ulonglong)uVar9 * (ulonglong)-(uint)((int)uVar3 < 0) << 0x20) +
                 (ulonglong)uVar9 * (ulonglong)uVar3;
        iVar16 = (int)(lVar18 >> 0x3f);
        auVar26._0_8_ = CONCAT44(iVar16,iVar16);
        auVar26._8_4_ = (int)(lVar23 >> 0x3f);
        auVar26._12_4_ = auVar26._8_4_;
        lVar23 = lVar23 + _UNK_004d7418 + auVar26._8_8_;
        iVar16 = (int)((ulonglong)lVar15 >> 0x10);
        iVar17 = (int)((ulonglong)lVar23 >> 0x10);
        iVar25 = (int)((ulonglong)(lVar18 + _DAT_004d7410 + auVar26._0_8_) >> 0x10) + iVar4 +
                 (int)((ulonglong)(lVar12 + _DAT_004d7410 + auVar19._0_8_) >> 0x10);
        iVar29 = iVar17 + iVar1 + iVar16;
        local_24._0_4_ = (iVar25 - param_2) * 0x400;
        local_24._4_4_ = (iVar29 - param_3) * 0x400;
        uVar5 = FUN_00421279((uint *)&local_24);
        if ((int)uVar5 < (int)local_f0) {
          local_c4._4_4_ = iVar29 * 0x400;
          local_c4._0_4_ = iVar25 * 0x400;
          local_c4._8_4_ = (iVar17 + iVar16) * 0x400;
          local_c4._12_4_ =
               ((uint)(ushort)((ulonglong)lVar23 >> 0x30) +
               (uint)(ushort)((ulonglong)lVar15 >> 0x30)) * 0x400;
          uVar6 = uVar9;
          local_f0 = uVar5;
        }
        iVar16 = (int)(((uint)((int)(uint)local_24 >> 0x1f) >> 0x16) + (uint)local_24) >> 10;
        iVar25 = (int)(((uint)(local_24._4_4_ >> 0x1f) >> 0x16) + local_24._4_4_) >> 10;
        local_24 = CONCAT44(iVar25,iVar16);
        lVar12 = ((ulonglong)(uVar9 * 2) * (ulonglong)uVar11 << 0x20) +
                 (ulonglong)(uVar9 * 2) * (ulonglong)uVar33;
        lVar15 = ((ulonglong)(uVar9 * 2) * (ulonglong)uVar14 << 0x20) +
                 (ulonglong)(uVar9 * 2) * (ulonglong)uVar34;
        iVar17 = (int)(lVar12 >> 0x3f);
        auVar20._0_8_ = CONCAT44(iVar17,iVar17);
        auVar20._8_4_ = (int)(lVar15 >> 0x3f);
        auVar20._12_4_ = auVar20._8_4_;
        iVar29 = (int)((ulonglong)(lVar12 + _DAT_004d7410 + auVar20._0_8_) >> 0x10) + uVar2;
        iVar32 = (int)((ulonglong)(lVar15 + _UNK_004d7418 + auVar20._8_8_) >> 0x10) + uVar3;
        iVar30 = uVar34 * 2 * iVar25;
        iVar17 = iVar16 * uVar33 * 2;
        iVar16 = FUN_0041eaa0(((int)(((uint)(iVar32 * iVar25 >> 0x1f) >> 0x1a) + iVar32 * iVar25) >>
                              6) + ((int)(((uint)(iVar16 * iVar29 >> 0x1f) >> 0x1a) +
                                         iVar16 * iVar29) >> 6),
                              ((int)(((uint)(iVar30 >> 0x1f) >> 0x1a) + iVar30) >> 6) +
                              ((int)(((uint)(iVar17 >> 0x1f) >> 0x1a) + iVar17) >> 6) +
                              ((uint)(iVar32 * iVar32) >> 6) + ((uint)(iVar29 * iVar29) >> 6));
        uVar9 = uVar9 - iVar16;
      } while ((uVar9 < 0x10001) && (bVar10 = uVar7 < 3, uVar7 = uVar7 + 1, bVar10));
      iVar8 = iVar8 + 1;
    } while (iVar8 != 5);
    uVar2 = (uint)((ulonglong)uVar33 * (ulonglong)uVar6);
    iVar8 = uVar11 * uVar6 + (int)((ulonglong)uVar33 * (ulonglong)uVar6 >> 0x20) +
            uVar33 * ((int)uVar6 >> 0x1f);
    uVar33 = iVar8 >> 0x1f;
    uVar3 = uVar2 + uVar33;
    uVar11 = (uint)((ulonglong)uVar34 * (ulonglong)uVar6);
    iVar4 = uVar14 * uVar6 + (int)((ulonglong)uVar34 * (ulonglong)uVar6 >> 0x20) +
            ((int)uVar6 >> 0x1f) * uVar34;
    iVar8 = (iVar24 + ((uVar33 + iVar8 + (uint)CARRY4(uVar2,uVar33) + (uint)(0xffff7fff < uVar3)) *
                       0x10000 | uVar3 + 0x8000 >> 0x10)) * 2;
    uVar14 = iVar4 >> 0x1f;
    uVar2 = uVar11 + uVar14;
    uVar3 = local_c4._0_4_ + param_2 * -0x400;
    iVar28 = (iVar28 + ((uVar14 + iVar4 + (uint)CARRY4(uVar11,uVar14) + (uint)(0xffff7fff < uVar2))
                        * 0x10000 | uVar2 + 0x8000 >> 0x10)) * 2;
    lVar12 = (longlong)(int)uVar3 * (longlong)iVar28;
    iVar4 = (int)(lVar12 >> 0x3f);
    lVar15 = lVar12 + CONCAT44(iVar4,iVar4) + 0x8000;
    uVar11 = local_c4._4_4_ + param_3 * -0x400;
    lVar12 = (longlong)(int)uVar11 * (longlong)iVar8;
    iVar4 = (int)(lVar12 >> 0x3f);
    lVar12 = lVar12 + CONCAT44(iVar4,iVar4) + 0x8000;
    local_24 = CONCAT44(iVar28,iVar8);
    *param_4 = local_f0;
    *(byte *)(param_4 + 2) =
         -((int)((int)((ulonglong)lVar12 >> 0x20) * 0x10000 | (uint)lVar12 >> 0x10) <=
          (int)((int)((ulonglong)lVar15 >> 0x20) * 0x10000 | (uint)lVar15 >> 0x10)) | 1;
    uVar2 = 0x10000;
    if ((uVar6 & 0xfffeffff) == 0) {
      local_1c = uVar3;
      uStack_18 = uVar11;
      FUN_0041ff88((uint *)&local_24);
      FUN_0041ff88(&local_1c);
      auVar31._0_4_ = -(uint)((int)local_24 < 0);
      auVar31._4_4_ = -(uint)((longlong)local_24 < 0);
      auVar31._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar21._8_4_ = (int)(local_24 >> 0x20);
      auVar21._0_8_ = local_24;
      auVar21._12_4_ = auVar31._4_4_;
      auVar13._4_4_ = local_1c;
      auVar13._0_4_ = uStack_18;
      auVar27._0_4_ = -(uint)((int)uStack_18 < 0);
      auVar27._4_4_ = -(uint)((int)local_1c < 0);
      auVar27._12_4_ = -(uint)(0 < SUB124(SUB1612((undefined1  [16])0x0,4),8));
      auVar13._8_4_ = local_1c;
      auVar13._12_4_ = auVar27._4_4_;
      auVar31._8_4_ = auVar31._4_4_;
      auVar27._8_4_ = auVar27._4_4_;
      lVar12 = (ulonglong)uStack_18 * (local_24 & 0xffffffff) +
               ((ulonglong)auVar27._0_4_ * (local_24 & 0xffffffff) +
                (ulonglong)auVar31._0_4_ * (ulonglong)uStack_18 << 0x20);
      lVar15 = (auVar13._8_8_ & 0xffffffff) * (auVar21._8_8_ & 0xffffffff) +
               ((auVar27._8_8_ & 0xffffffff) * (auVar21._8_8_ & 0xffffffff) +
                (auVar31._8_8_ & 0xffffffff) * (auVar13._8_8_ & 0xffffffff) << 0x20);
      iVar8 = (int)(lVar12 >> 0x3f);
      auVar22._0_8_ = CONCAT44(iVar8,iVar8);
      auVar22._8_4_ = (int)(lVar15 >> 0x3f);
      auVar22._12_4_ = auVar22._8_4_;
      uVar2 = (int)((ulonglong)(auVar22._0_8_ + lVar12 + _DAT_004d7410) >> 0x10) -
              (int)((ulonglong)(auVar22._8_8_ + lVar15 + _UNK_004d7418) >> 0x10);
    }
    param_4[1] = uVar2;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&stack0xffffff08)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xffffff08);
}


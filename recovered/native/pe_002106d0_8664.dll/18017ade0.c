/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017ade0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18017ade0(longlong param_1,int param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  char cVar3;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 auVar26 [16];
  short sVar27;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_1f8 [40];
  longlong local_1d0;
  uint *local_1c8;
  int local_1bc;
  int aiStack_1b8 [16];
  int aiStack_178 [8];
  int aiStack_158 [8];
  int aiStack_138 [8];
  int aiStack_118 [8];
  int aiStack_f8 [8];
  int aiStack_d8 [10];
  ulonglong local_b0;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar28;
  undefined6 uVar29;
  
  auVar9 = _DAT_1802e1320;
  auVar8 = _DAT_1802b7c50;
  auVar7 = _DAT_1802b0ce0;
  local_b0 = DAT_180402640 ^ (ulonglong)auStack_1f8;
  lVar11 = 0;
  do {
    sVar1 = *(short *)(param_3 + 0x10 + lVar11 * 2);
    iVar12 = (int)sVar1;
    sVar17 = *(short *)(param_3 + 0x20 + lVar11 * 2);
    if (sVar17 == 0 && sVar1 == 0) {
      if ((((*(short *)(param_3 + 0x30 + lVar11 * 2) != 0) ||
           (*(short *)(param_3 + 0x40 + lVar11 * 2) != 0)) ||
          (*(short *)(param_3 + 0x50 + lVar11 * 2) != 0)) ||
         ((*(short *)(param_3 + 0x60 + lVar11 * 2) != 0 ||
          (*(short *)(param_3 + 0x70 + lVar11 * 2) != 0)))) {
        sVar17 = 0;
        goto LAB_18017ae93;
      }
      iVar12 = (int)*(short *)(param_3 + lVar11 * 2) << 2;
      aiStack_d8[lVar11] = iVar12;
      aiStack_f8[lVar11] = iVar12;
      aiStack_118[lVar11] = iVar12;
      aiStack_138[lVar11] = iVar12;
      aiStack_158[lVar11] = iVar12;
      aiStack_178[lVar11] = iVar12;
      aiStack_1b8[lVar11 + 8] = iVar12;
      aiStack_1b8[lVar11] = iVar12;
    }
    else {
LAB_18017ae93:
      iVar21 = (int)*(short *)(param_3 + 0x60 + lVar11 * 2);
      iVar16 = (iVar21 + sVar17) * 0x8a9;
      iVar13 = iVar21 * -0x1d8f + iVar16;
      iVar16 = sVar17 * 0xc3f + iVar16;
      iVar22 = (int)*(short *)(param_3 + lVar11 * 2);
      iVar18 = (int)*(short *)(param_3 + 0x40 + lVar11 * 2);
      iVar19 = (int)*(short *)(param_3 + 0x70 + lVar11 * 2);
      iVar25 = (int)*(short *)(param_3 + 0x50 + lVar11 * 2);
      iVar23 = (int)*(short *)(param_3 + 0x30 + lVar11 * 2);
      iVar21 = (iVar25 + iVar12 + iVar23 + iVar19) * 0x12d0;
      iVar20 = (iVar19 + iVar12) * -0xe65 + iVar21;
      iVar21 = (iVar23 + iVar25) * -0x2901 + iVar21;
      iVar14 = (iVar25 + iVar12) * -0x63d;
      iVar15 = (iVar23 + iVar19) * -0x1f62;
      iVar24 = iVar23 * 0x312a + iVar15 + iVar21;
      iVar21 = iVar25 * 0x20da + iVar14 + iVar21;
      iVar23 = (iVar18 + iVar22) * 0x1000;
      iVar18 = (iVar22 - iVar18) * 0x1000;
      iVar22 = iVar12 * 0x1805 + iVar14 + iVar20;
      iVar20 = iVar19 * 0x4c7 + iVar15 + iVar20;
      iVar12 = iVar23 - iVar16;
      iVar16 = iVar23 + 0x200 + iVar16;
      iVar14 = iVar18 - iVar13;
      iVar13 = iVar18 + 0x200 + iVar13;
      aiStack_1b8[lVar11] = iVar22 + iVar16 >> 10;
      aiStack_d8[lVar11] = iVar16 - iVar22 >> 10;
      aiStack_1b8[lVar11 + 8] = iVar24 + iVar13 >> 10;
      aiStack_f8[lVar11] = iVar13 - iVar24 >> 10;
      aiStack_178[lVar11] = iVar21 + iVar14 + 0x200 >> 10;
      aiStack_118[lVar11] = (iVar14 + 0x200) - iVar21 >> 10;
      aiStack_158[lVar11] = iVar12 + iVar20 + 0x200 >> 10;
      aiStack_138[lVar11] = (iVar12 + 0x200) - iVar20 >> 10;
    }
    lVar11 = lVar11 + 1;
    if ((int)lVar11 == 8) {
      local_1d0 = (longlong)param_2;
      lVar11 = 0;
      puVar10 = (uint *)(param_1 + 4);
      do {
        local_1c8 = puVar10;
        iVar12 = *(int *)((longlong)aiStack_1b8 + lVar11 + 8);
        iVar21 = *(int *)((longlong)aiStack_1b8 + lVar11 + 0x18);
        iVar19 = (iVar21 + iVar12) * 0x8a9;
        iVar13 = *(int *)((longlong)aiStack_1b8 + lVar11 + 0x10);
        iVar14 = *(int *)((longlong)aiStack_1b8 + lVar11 + 4);
        iVar15 = *(int *)((longlong)aiStack_1b8 + lVar11 + 0x1c);
        iVar16 = *(int *)((longlong)aiStack_1b8 + lVar11 + 0x14);
        iVar20 = *(int *)((longlong)aiStack_1b8 + lVar11 + 0xc);
        iVar22 = iVar12 * 0xc3f + iVar19;
        iVar19 = iVar21 * -0x1d8f + iVar19;
        iVar12 = (iVar14 + iVar16 + iVar20 + iVar15) * 0x12d0;
        iVar18 = (iVar20 + iVar16) * -0x2901 + iVar12;
        iVar12 = (iVar14 + iVar15) * -0xe65 + iVar12;
        iVar21 = (iVar14 + iVar16) * -0x63d;
        iVar23 = (iVar20 + iVar15) * -0x1f62;
        iVar20 = iVar20 * 0x312a + iVar23 + iVar18;
        iVar18 = iVar16 * 0x20da + iVar21 + iVar18;
        iVar16 = (*(int *)((longlong)aiStack_1b8 + lVar11) - iVar13) * 0x1000;
        iVar13 = (iVar13 + *(int *)((longlong)aiStack_1b8 + lVar11)) * 0x1000;
        iVar14 = iVar14 * 0x1805 + iVar21 + iVar12;
        iVar12 = iVar15 * 0x4c7 + iVar23 + iVar12;
        iVar21 = iVar13 - iVar22;
        iVar22 = iVar13 + 0x1010000 + iVar22;
        iVar13 = iVar16 - iVar19;
        iVar19 = iVar16 + 0x1010000 + iVar19;
        auVar26._0_4_ = iVar14 + iVar22 >> 0x11;
        auVar26._4_4_ = iVar20 + iVar19 >> 0x11;
        auVar26._8_4_ = iVar13 + iVar18 + 0x1010000 >> 0x11;
        auVar26._12_4_ = iVar21 + 0x1010000 + iVar12 >> 0x11;
        auVar30 = auVar26 ^ auVar7;
        auVar31._0_4_ = -(uint)(auVar9._0_4_ < auVar30._0_4_);
        auVar31._4_4_ = -(uint)(auVar9._4_4_ < auVar30._4_4_);
        auVar31._8_4_ = -(uint)(auVar9._8_4_ < auVar30._8_4_);
        auVar31._12_4_ = -(uint)(auVar9._12_4_ < auVar30._12_4_);
        auVar30 = packssdw(auVar31,auVar31);
        auVar32 = packsswb(auVar30,auVar30);
        auVar30 = auVar26 & auVar8;
        sVar1 = auVar30._0_2_;
        cVar3 = (0 < sVar1) * (sVar1 < 0x100) * auVar30[0] - (0xff < sVar1);
        sVar1 = auVar30._2_2_;
        sVar27 = CONCAT11((0 < sVar1) * (sVar1 < 0x100) * auVar30[2] - (0xff < sVar1),cVar3);
        sVar1 = auVar30._4_2_;
        cVar4 = (0 < sVar1) * (sVar1 < 0x100) * auVar30[4] - (0xff < sVar1);
        sVar1 = auVar30._6_2_;
        uVar28 = CONCAT13((0 < sVar1) * (sVar1 < 0x100) * auVar30[6] - (0xff < sVar1),
                          CONCAT12(cVar4,sVar27));
        sVar1 = auVar30._8_2_;
        cVar5 = (0 < sVar1) * (sVar1 < 0x100) * auVar30[8] - (0xff < sVar1);
        sVar1 = auVar30._10_2_;
        uVar29 = CONCAT15((0 < sVar1) * (sVar1 < 0x100) * auVar30[10] - (0xff < sVar1),
                          CONCAT14(cVar5,uVar28));
        sVar1 = auVar30._12_2_;
        cVar6 = (0 < sVar1) * (sVar1 < 0x100) * auVar30[0xc] - (0xff < sVar1);
        sVar2 = auVar30._14_2_;
        sVar1 = (short)((uint)uVar28 >> 0x10);
        sVar17 = (short)((uint6)uVar29 >> 0x20);
        sVar2 = (short)(CONCAT17((0 < sVar2) * (sVar2 < 0x100) * auVar30[0xe] - (0xff < sVar2),
                                 CONCAT16(cVar6,uVar29)) >> 0x30);
        auVar30._0_4_ = -(uint)(-1 < auVar26._0_4_);
        auVar30._4_4_ = -(uint)(-1 < auVar26._4_4_);
        auVar30._8_4_ = -(uint)(-1 < auVar26._8_4_);
        auVar30._12_4_ = -(uint)(-1 < auVar26._12_4_);
        auVar26 = packssdw(auVar30,auVar30);
        auVar26 = packsswb(auVar26,auVar26);
        local_1c8[-1] =
             ~auVar32._0_4_ &
             CONCAT13((0 < sVar2) * (sVar2 < 0x100) * cVar6 - (0xff < sVar2),
                      CONCAT12((0 < sVar17) * (sVar17 < 0x100) * cVar5 - (0xff < sVar17),
                               CONCAT11((0 < sVar1) * (sVar1 < 0x100) * cVar4 - (0xff < sVar1),
                                        (0 < sVar27) * (sVar27 < 0x100) * cVar3 - (0xff < sVar27))))
             | auVar26._0_4_ & auVar32._0_4_;
        auVar33._0_4_ = (iVar21 + 0x1010000) - iVar12 >> 0x11;
        auVar33._4_4_ = (iVar13 + 0x1010000) - iVar18 >> 0x11;
        auVar33._8_4_ = iVar19 - iVar20 >> 0x11;
        auVar33._12_4_ = iVar22 - iVar14 >> 0x11;
        auVar26 = auVar33 ^ auVar7;
        auVar32._0_4_ = -(uint)(auVar9._0_4_ < auVar26._0_4_);
        auVar32._4_4_ = -(uint)(auVar9._4_4_ < auVar26._4_4_);
        auVar32._8_4_ = -(uint)(auVar9._8_4_ < auVar26._8_4_);
        auVar32._12_4_ = -(uint)(auVar9._12_4_ < auVar26._12_4_);
        auVar26 = packssdw(auVar32,auVar32);
        auVar26 = packsswb(auVar26,auVar26);
        auVar30 = auVar33 & auVar8;
        sVar1 = auVar30._0_2_;
        cVar3 = (0 < sVar1) * (sVar1 < 0x100) * auVar30[0] - (0xff < sVar1);
        sVar1 = auVar30._2_2_;
        sVar27 = CONCAT11((0 < sVar1) * (sVar1 < 0x100) * auVar30[2] - (0xff < sVar1),cVar3);
        sVar1 = auVar30._4_2_;
        cVar4 = (0 < sVar1) * (sVar1 < 0x100) * auVar30[4] - (0xff < sVar1);
        sVar1 = auVar30._6_2_;
        uVar28 = CONCAT13((0 < sVar1) * (sVar1 < 0x100) * auVar30[6] - (0xff < sVar1),
                          CONCAT12(cVar4,sVar27));
        sVar1 = auVar30._8_2_;
        cVar5 = (0 < sVar1) * (sVar1 < 0x100) * auVar30[8] - (0xff < sVar1);
        sVar1 = auVar30._10_2_;
        uVar29 = CONCAT15((0 < sVar1) * (sVar1 < 0x100) * auVar30[10] - (0xff < sVar1),
                          CONCAT14(cVar5,uVar28));
        sVar1 = auVar30._12_2_;
        cVar6 = (0 < sVar1) * (sVar1 < 0x100) * auVar30[0xc] - (0xff < sVar1);
        sVar2 = auVar30._14_2_;
        sVar1 = (short)((uint)uVar28 >> 0x10);
        sVar17 = (short)((uint6)uVar29 >> 0x20);
        sVar2 = (short)(CONCAT17((0 < sVar2) * (sVar2 < 0x100) * auVar30[0xe] - (0xff < sVar2),
                                 CONCAT16(cVar6,uVar29)) >> 0x30);
        auVar34._0_4_ = -(uint)(-1 < auVar33._0_4_);
        auVar34._4_4_ = -(uint)(-1 < auVar33._4_4_);
        auVar34._8_4_ = -(uint)(-1 < auVar33._8_4_);
        auVar34._12_4_ = -(uint)(-1 < auVar33._12_4_);
        auVar30 = packssdw(auVar34,auVar34);
        auVar30 = packsswb(auVar30,auVar30);
        *local_1c8 = ~auVar26._0_4_ &
                     CONCAT13((0 < sVar2) * (sVar2 < 0x100) * cVar6 - (0xff < sVar2),
                              CONCAT12((0 < sVar17) * (sVar17 < 0x100) * cVar5 - (0xff < sVar17),
                                       CONCAT11((0 < sVar1) * (sVar1 < 0x100) * cVar4 -
                                                (0xff < sVar1),
                                                (0 < sVar27) * (sVar27 < 0x100) * cVar3 -
                                                (0xff < sVar27)))) | auVar30._0_4_ & auVar26._0_4_;
        lVar11 = lVar11 + 0x20;
        puVar10 = (uint *)((longlong)local_1c8 + local_1d0);
      } while ((int)lVar11 != 0x100);
      if (DAT_180402640 == (local_b0 ^ (ulonglong)auStack_1f8)) {
        return;
      }
      local_1bc = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_b0 ^ (ulonglong)auStack_1f8);
    }
  } while( true );
}


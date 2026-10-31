/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400add9a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400add9a(undefined8 *param_1,undefined4 param_2,uint param_3,longlong *param_4,
                       longlong param_5,longlong param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ushort uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Db;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  uint local_144;
  longlong local_140;
  longlong *local_138;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11a;
  char local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  lVar4 = DAT_140f2a910;
  fVar29 = DAT_1401c86c8;
  local_f0 = DAT_140f17b40 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if (*(char *)(lVar1 + 0x10e) == '\0') {
    fVar24 = (float)param_1[1] - (float)*param_1;
    fVar26 = (float)((ulonglong)param_1[1] >> 0x20) - (float)((ulonglong)*param_1 >> 0x20);
    auVar22._4_4_ = -(uint)(fVar24 <= 0.0);
    auVar22._0_4_ = -(uint)(fVar24 <= 0.0);
    auVar22._8_4_ = -(uint)(fVar26 <= 0.0);
    auVar22._12_4_ = -(uint)(fVar26 <= 0.0);
    iVar9 = movmskpd((int)local_f0,auVar22);
    if (iVar9 == 0) {
      if ((param_3 == 1) && (fVar26 < fVar24)) {
        fVar24 = (float)FUN_14007b71f(CONCAT44(fVar26,fVar24 + fVar24),DAT_1401c86c8);
        fVar26 = fVar26 / fVar24;
        uVar14 = 0;
        if (fVar26 < 0.0) goto LAB_1400adf3d;
        if (fVar26 <= fVar29) {
          fVar29 = fVar26;
        }
        if (fVar29 <= 0.0) goto LAB_1400adf3d;
      }
      local_108 = *param_1;
      uStack_100 = param_1[1];
      FUN_14004863e();
      fVar24 = (float)FUN_14004863e();
      fVar26 = DAT_1401c86c8;
      fVar16 = (float)(int)fVar24;
      fVar27 = (float)local_108 + fVar16;
      fVar28 = (float)((ulonglong)local_108 >> 0x20) + fVar16;
      fVar25 = (float)uStack_100 - fVar16;
      fVar16 = (float)((ulonglong)uStack_100 >> 0x20) - fVar16;
      local_108 = CONCAT44(fVar28,fVar27);
      uStack_100 = CONCAT44(fVar16,fVar25);
      fVar30 = fVar16 - fVar28;
      fVar24 = fVar25 - fVar27;
      if (param_3 != 0) {
        fVar24 = fVar30;
      }
      if (DAT_1401c86c8 <= fVar24) {
        local_138 = param_4;
        uVar12 = FUN_1400ae3ff(param_6,param_5);
        lVar13 = FUN_1400ae3ff(uVar12,1);
        local_118 = CONCAT44(fVar30,fVar25 - fVar27);
        local_140 = (longlong)(int)param_3;
        uVar17 = FUN_14004863e();
        fVar32 = (float)param_5;
        auVar19._4_4_ = unaff_XMM13_Db;
        auVar19._0_4_ = fVar32;
        auVar19._8_4_ = unaff_XMM13_Dc;
        auVar19._12_4_ = unaff_XMM13_Dd;
        auVar20._4_12_ = auVar19._4_12_;
        auVar20._0_4_ = (fVar32 / (float)lVar13) * fVar24;
        uVar12 = FUN_140090d06(auVar20._0_8_,uVar17,fVar24);
        fVar31 = (float)(int)(float)uVar12;
        local_118 = *param_1;
        uStack_110 = param_1[1];
        local_144 = param_3;
        FUN_1400adba0(lVar1,&local_118,*(undefined4 *)(lVar4 + 0xdc8),param_3 ^ 1);
        local_119 = '\0';
        local_11a = 0;
        FUN_14008a9ce(param_1,param_2,0,2);
        local_158 = 0x40000;
        FUN_1400ac79b(&local_118,param_2,&local_11a,&local_119);
        lVar13 = FUN_1400ae3ff(1,param_6 - param_5);
        cVar6 = local_119;
        plVar5 = local_138;
        auVar21._4_4_ = (float)*local_138;
        auVar21._0_4_ = fVar31;
        auVar21._8_4_ = (float)(int)(float)((ulonglong)uVar12 >> 0x20);
        auVar21._12_4_ = 0;
        auVar2._4_4_ = (float)lVar13;
        auVar2._0_4_ = fVar24;
        auVar2._8_4_ = fVar30;
        auVar2._12_4_ = unaff_XMM14_Db;
        auVar22 = divps(auVar21,auVar2);
        fVar18 = auVar22._0_4_;
        fVar23 = auVar22._4_4_;
        auVar3._4_4_ = -(uint)(fVar18 < DAT_1401c86c8);
        auVar3._0_4_ = -(uint)(fVar18 < DAT_1401c86c8);
        auVar3._8_4_ = -(uint)(fVar23 < 0.0);
        auVar3._12_4_ = -(uint)(fVar23 < 0.0);
        uVar10 = movmskpd((int)lVar13,auVar3);
        fVar30 = 0.0;
        if (((uVar10 & 2) == 0) && (fVar30 = fVar26, fVar23 <= fVar26)) {
          fVar30 = fVar23;
        }
        uVar14 = CONCAT71((int7)((ulonglong)&local_118 >> 8),local_119);
        fVar30 = (fVar30 * (fVar24 - fVar31)) / fVar24;
        if (((fVar26 <= fVar29) && (local_119 != '\0')) && ((uVar10 & 1) != 0)) {
          fVar24 = (*(float *)(lVar4 + 0x118 + local_140 * 4) -
                   *(float *)((longlong)&local_108 + local_140 * 4)) / fVar24;
          fVar23 = fVar26;
          if (fVar24 <= fVar26) {
            fVar23 = fVar24;
          }
          fVar23 = (float)(~-(uint)(fVar24 < 0.0) & (uint)fVar23);
          uVar15 = 0xffff;
          if (fVar30 <= fVar23) {
            uVar15 = (ushort)(fVar18 + fVar30 < fVar23);
          }
          if (*(char *)(lVar4 + 0x1688) == '\0') {
            uVar8 = *(ushort *)(lVar4 + 0x2846);
          }
          else {
            uVar8 = 0;
            if ((*(char *)(lVar4 + 0x95) != '\0') && (uVar8 = 0, *(char *)(lVar4 + 0x139) == '\0'))
            {
              uVar8 = uVar15;
            }
            *(ushort *)(lVar4 + 0x2846) = uVar8;
            fVar24 = 0.0;
            if ((uVar15 == 0) && (*(char *)(lVar4 + 0x139) == '\0')) {
              fVar24 = DAT_1402115a8 * fVar18 + (fVar23 - fVar30);
            }
            *(float *)(lVar4 + 0x2848) = fVar24;
          }
          if (uVar8 == 0) {
            fVar24 = (fVar18 * DAT_1402115a8 + (fVar23 - *(float *)(lVar4 + 0x2848))) /
                     (fVar26 - fVar18);
            if (fVar24 <= fVar26) {
              fVar26 = fVar24;
            }
            lVar13 = (longlong)((float)(~-(uint)(fVar24 < 0.0) & (uint)fVar26) * (float)lVar13);
LAB_1400ae285:
            *plVar5 = lVar13;
          }
          else {
            cVar7 = FUN_140081ebc(0,1,0);
            if (cVar7 != '\0') {
              if (uVar15 == *(ushort *)(lVar4 + 0x2846)) {
                if ((short)*(ushort *)(lVar4 + 0x2846) < 1) {
                  fVar32 = (float)((uint)fVar32 ^ _DAT_1401c8590);
                }
                lVar13 = FUN_1400ae40a(*plVar5 + (longlong)fVar32,0,lVar13);
                goto LAB_1400ae285;
              }
            }
          }
        }
        uVar17 = FUN_14007a557(0xe,DAT_1401c86c8);
        iVar9 = 0x11;
        if (cVar6 == '\0') {
          iVar9 = local_11a + 0xf;
        }
        uVar11 = FUN_14007a557(iVar9,fVar29);
        local_158 = *(undefined4 *)(lVar1 + 0x98);
        local_150 = param_7;
        FUN_1400de294(*(undefined8 *)(lVar1 + 800),param_1,param_1 + 1,uVar17);
        if (local_144 == 0) {
          fVar25 = (float)FUN_140048631();
          fVar25 = fVar25 + fVar31;
          fVar27 = (float)FUN_140048631();
        }
        else {
          fVar16 = (float)FUN_140048631();
          fVar16 = fVar16 + fVar31;
          fVar28 = (float)FUN_140048631();
        }
        local_158 = *(undefined4 *)(lVar4 + 0xe30);
        local_150 = 0;
        local_12c = fVar27;
        local_128 = fVar28;
        local_124 = fVar25;
        local_120 = fVar16;
        FUN_1400de294(*(undefined8 *)(lVar1 + 800),&local_12c,&local_124,uVar11);
        goto LAB_1400adf3d;
      }
    }
  }
  uVar14 = 0;
LAB_1400adf3d:
  if (DAT_140f17b40 == (local_f0 ^ (ulonglong)auStack_178)) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_f0 ^ (ulonglong)auStack_178);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008cee6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14008cee6(longlong param_1,uint *param_2,uint *param_3,uint param_4,undefined4 *param_5,
                  float *param_6)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  longlong lVar6;
  uint *puVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  float extraout_XMM0_Da;
  int iVar22;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar29;
  float fVar30;
  float fVar33;
  uint uVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  uint local_16c;
  undefined4 local_168;
  uint local_164;
  uint *local_160;
  undefined8 *local_158;
  uint *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_130;
  char local_121;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  byte local_101;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  lVar6 = DAT_140f2a910;
  local_f0 = DAT_140f17b40 ^ (ulonglong)auStack_198;
  uVar20 = 0;
  if ((((((*(uint *)(param_1 + 0x14) & 2) != 0) || ('\0' < *(char *)(param_1 + 0x128))) ||
       ('\0' < *(char *)(param_1 + 0x129))) ||
      ((uVar20 = 0, (*(uint *)(param_1 + 0x14) & 0x40) != 0 &&
       ((*(byte *)(param_1 + 0x1c) & 0xc) == 0)))) || (*(char *)(param_1 + 0x10a) == '\0'))
  goto LAB_14008da6e;
  local_160 = param_3;
  local_150 = param_2;
  uVar11 = FUN_14007b71f(*(float *)(DAT_140f2a910 + 0x1320) * _DAT_140211580);
  fVar44 = (float)(int)((float)(int)extraout_XMM0_Da * DAT_140211584);
  fVar43 = param_6[1];
  if (((*(byte *)(param_1 + 0x130) & 1) == 0) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) {
    fVar43 = fVar43 - *(float *)(param_1 + 0xa0);
    local_168 = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
  }
  else {
    local_168 = 0;
  }
  fVar30 = *(float *)(lVar6 + 0x15fc);
  fVar41 = *param_6;
  local_148 = *(undefined8 *)(param_6 + 2);
  uStack_140 = 0;
  local_f8 = DAT_140211280;
  local_100 = DAT_140211280;
  if ((((*(byte *)(lVar6 + 0x35) & 0x10) == 0) ||
      (*(int *)(lVar6 + 0x134) != *(int *)(param_1 + 0x50))) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x48) + 4) & 8) == 0)) {
    uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8);
    uVar16 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10);
    *(undefined8 *)(param_1 + 0x2b8) = uVar11;
    *(ulonglong *)(param_1 + 0x2c0) =
         CONCAT44((float)((ulonglong)uVar16 >> 0x20) + (float)((ulonglong)uVar11 >> 0x20),
                  (float)uVar16 + (float)uVar11);
  }
  *(undefined4 *)(param_1 + 0x1b0) = 1;
  FUN_1400912b0("#RESIZE");
  if (param_4 == 0) {
    local_16c = 0;
  }
  else {
    fVar47 = (float)(_DAT_1401c8590 ^ (uint)fVar44);
    fVar48 = (float)(_UNK_1401c8594 ^ (uint)fVar44);
    fVar49 = (float)(_UNK_1401c8598 ^ (uint)fVar44);
    fVar50 = (float)(_UNK_1401c859c ^ (uint)fVar44);
    uVar15 = 0;
    puVar19 = &DAT_140210da0;
    local_16c = 0;
    do {
      fVar53 = (float)*puVar19;
      fVar54 = (float)((ulonglong)*puVar19 >> 0x20);
      fVar51 = (float)puVar19[1];
      fVar52 = (float)((ulonglong)puVar19[1] >> 0x20);
      fVar45 = fVar30 * fVar51;
      fVar46 = fVar30 * fVar52;
      fVar35 = (float)*(undefined8 *)(param_1 + 0x60);
      fVar40 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
      fVar35 = (((float)*(undefined8 *)(param_1 + 0x68) + fVar35) - fVar35) * fVar53 + fVar35;
      fVar40 = (((float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) + fVar40) - fVar40) *
               fVar54 + fVar40;
      auVar1._8_4_ = fVar40;
      auVar1._4_4_ = fVar35;
      fVar33 = fVar40 - fVar46;
      local_118 = CONCAT44(fVar33,fVar35 - fVar45);
      fVar27 = fVar51 * fVar44 + fVar35;
      fVar28 = fVar52 * fVar44 + fVar40;
      auVar1._0_4_ = fVar46 + fVar40;
      auVar25._0_8_ = auVar1._0_8_ << 0x20;
      auVar25._8_4_ = fVar27;
      auVar25._12_4_ = fVar28;
      uStack_110 = auVar25._8_8_;
      if (fVar27 < fVar35 - fVar45) {
        FUN_140078833(&local_118,&uStack_110);
        fVar28 = uStack_110._4_4_;
        fVar33 = local_118._4_4_;
      }
      if (fVar28 < fVar33) {
        FUN_140078833((longlong)&local_118 + 4,(longlong)&uStack_110 + 4);
      }
      uVar9 = FUN_1400911b6(param_1,uVar15 & 0xffffffff);
      FUN_14008a9ce(&local_118,uVar9,0,2);
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x40800);
      FUN_1400ac79b(&local_118,uVar9,&local_130,&local_101);
      if ((((byte)local_130 != '\0') || (local_101 != 0)) &&
         (FUN_14009224e((uVar15 == 0) + '\x05'), local_101 == 1)) {
        if (*(char *)(lVar6 + 0xb55) == '\x01') {
          FUN_14008adfe(&local_120,param_1,param_1 + 0x80,0xffffffff);
          FUN_14008b19e(&local_100,param_1);
          FUN_14008076e();
          local_16c = 3;
        }
        else {
          fVar28 = fVar41;
          if (uVar15 != 0) {
            fVar28 = DAT_1402112e0;
          }
          auVar31._0_4_ = (int)((uint)((uint)uVar15 - 1 < 2) << 0x1f) >> 0x1f;
          auVar31._4_4_ = (int)((uint)(((uint)uVar15 & 0x7ffffffe) == 2) << 0x1f) >> 0x1f;
          auVar31._8_8_ = 0;
          auVar3._8_8_ = uStack_140;
          auVar3._0_8_ = local_148;
          auVar38._8_8_ = _UNK_140211288;
          auVar38._0_8_ = DAT_140211280;
          auVar36._0_4_ =
               ((float)*(undefined8 *)(lVar6 + 0x118) - (float)*(undefined8 *)(lVar6 + 0x1694)) +
               (fVar51 * fVar47 - fVar45) * fVar53 + fVar45;
          auVar36._4_4_ =
               ((float)((ulonglong)*(undefined8 *)(lVar6 + 0x118) >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(lVar6 + 0x1694) >> 0x20)) +
               (fVar52 * fVar48 - fVar46) * fVar54 + fVar46;
          auVar36._8_4_ = (fVar49 * 0.0 - fVar30 * 0.0) * 0.0 + fVar30 * 0.0 + 0.0;
          auVar36._12_4_ = (fVar50 * 0.0 - fVar30 * 0.0) * 0.0 + fVar30 * 0.0 + 0.0;
          auVar25 = minps(~auVar31 & auVar38 | auVar3 & auVar31,auVar36);
          local_120 = CONCAT44(~-(uint)(auVar36._4_4_ < fVar43) & auVar25._4_4_,
                               ~-(uint)(auVar36._0_4_ < fVar28) & auVar25._0_4_) |
                      CONCAT44((uint)fVar43 & -(uint)(auVar36._4_4_ < fVar43),
                               (uint)fVar28 & -(uint)(auVar36._0_4_ < fVar28));
          local_178 = &local_100;
          FUN_1400a53fb(param_1,&local_120,puVar19,&local_f8);
        }
      }
      if ((((local_101 | (byte)local_130) & 1) != 0) ||
         ((uVar15 == 0 && ((*(byte *)(param_1 + 0x17) & 1) == 0)))) {
        iVar10 = (byte)local_130 + 0x1f;
        if (local_101 != 0) {
          iVar10 = 0x21;
        }
        uVar9 = FUN_14007a557(iVar10);
        param_5[uVar15] = uVar9;
      }
      uVar15 = uVar15 + 1;
      puVar19 = puVar19 + 3;
    } while (param_4 != uVar15);
  }
  uVar21 = _UNK_140211594;
  uVar20 = _DAT_140211590;
  fVar44 = DAT_140211588;
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
    uVar14 = 0xf;
    if (*(char *)(lVar6 + 0x92) == '\0') {
      uVar14 = 0;
    }
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x1c) & 8 | *(uint *)(param_1 + 0x1c) >> 1 & 2;
  }
  local_158 = (undefined8 *)(lVar6 + 0x2834);
  puVar13 = (ulonglong *)&DAT_140210e10;
  auVar2._8_8_ = _UNK_140211288;
  auVar2._0_8_ = DAT_140211280;
  uVar15 = 0;
  local_164 = uVar14;
  do {
    uVar18 = (uint)uVar15;
    if ((uVar14 >> (uVar18 & 0x1f) & 1) != 0) {
      local_178._0_4_ = *(undefined4 *)(lVar6 + 0x15fc);
      FUN_1400a5614(&local_118,param_1,uVar15 & 0xffffffff);
      uVar9 = FUN_1400911b6(param_1,uVar18 | 4);
      FUN_14008a9ce(&local_118,uVar9,0,2);
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x40800);
      FUN_1400ac79b(&local_118,uVar9,&local_101,&local_121);
      if (local_101 == 1) {
        if (*(float *)(lVar6 + 0x1670) <= fVar44) {
          local_101 = 0;
          goto LAB_14008d48f;
        }
LAB_14008d49a:
        FUN_14009224e((uVar15 < 2) + '\x03');
        if (local_121 == '\x01') {
          if (*(char *)(lVar6 + 0xb55) == '\x01') {
            if ((uVar18 | 2) == 3) {
              FUN_14008adfe(&local_120,param_1,param_1 + 0x80,1 << (1 < uVar15));
              uVar14 = local_164;
              FUN_14008b19e(&local_130,param_1,&local_120);
              lVar12 = (ulonglong)(1 < uVar15) * 4;
              *(undefined4 *)((longlong)&local_100 + lVar12) =
                   *(undefined4 *)((longlong)&local_130 + lVar12);
              local_16c = local_16c | 1 << (1 < uVar15);
              local_121 = '\0';
              local_101 = 0;
            }
            FUN_14008076e();
          }
          else {
            if ((*(longlong *)(lVar6 + 0x1630) == 0) ||
               (*(int *)(lVar6 + 0x1644) != *(int *)(lVar6 + 4))) {
              cVar8 = '\0';
            }
            else {
              cVar8 = FUN_14008fb00(param_1,*(longlong *)(lVar6 + 0x1630),0,1);
            }
            if ((cVar8 != '\0') || (*(char *)(lVar6 + 0x1688) != '\0')) {
              *(undefined8 *)(lVar6 + 0x2834) = local_118;
              *(undefined8 *)(lVar6 + 0x283c) = uStack_110;
              *(undefined1 *)(lVar6 + 0x2844) = 0;
            }
            if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
              auVar23[0] = -(*(char *)(lVar6 + 0x2834) == (char)local_118);
              auVar23[1] = -(*(char *)(lVar6 + 0x2835) == local_118._1_1_);
              auVar23[2] = -(*(char *)(lVar6 + 0x2836) == local_118._2_1_);
              auVar23[3] = -(*(char *)(lVar6 + 0x2837) == local_118._3_1_);
              auVar23[4] = -(*(char *)(lVar6 + 0x2838) == local_118._4_1_);
              auVar23[5] = -(*(char *)(lVar6 + 0x2839) == local_118._5_1_);
              auVar23[6] = -(*(char *)(lVar6 + 0x283a) == local_118._6_1_);
              auVar23[7] = -(*(char *)(lVar6 + 0x283b) == local_118._7_1_);
              auVar23[8] = -(*(char *)(lVar6 + 0x283c) == (char)uStack_110);
              auVar23[9] = -(*(char *)(lVar6 + 0x283d) == uStack_110._1_1_);
              auVar23[10] = -(*(char *)(lVar6 + 0x283e) == uStack_110._2_1_);
              auVar23[0xb] = -(*(char *)(lVar6 + 0x283f) == uStack_110._3_1_);
              auVar23[0xc] = -(*(char *)(lVar6 + 0x2840) == uStack_110._4_1_);
              auVar23[0xd] = -(*(char *)(lVar6 + 0x2841) == uStack_110._5_1_);
              auVar23[0xe] = -(*(char *)(lVar6 + 0x2842) == uStack_110._6_1_);
              auVar23[0xf] = -(*(char *)(lVar6 + 0x2843) == uStack_110._7_1_);
              if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar23[0xf] >> 7) << 0xf) != 0xffff) {
                *(undefined1 *)(lVar6 + 0x2844) = 1;
              }
            }
            auVar24._8_8_ = 0;
            auVar24._0_8_ = puVar13[-1];
            auVar32._8_8_ = 0;
            auVar32._0_8_ = *puVar13;
            auVar25 = minps(auVar24,auVar32);
            if (1 < uVar15) {
              fVar30 = auVar25._4_4_ * *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 100);
            }
            else {
              fVar30 = *(float *)(param_1 + 0x68) * auVar25._0_4_ + *(float *)(param_1 + 0x60);
            }
            lVar12 = (ulonglong)(1 < uVar15) * 4;
            fVar47 = *(float *)(lVar6 + 0x104 + lVar12);
            fVar48 = (*(float *)(lVar6 + 0x118 + lVar12) - *(float *)(lVar6 + 0x1694 + lVar12)) +
                     *(float *)(lVar6 + 0x15fc);
            local_120 = *(ulonglong *)(param_1 + 0x60);
            *(float *)((longlong)&local_120 + lVar12) = fVar48;
            if (*(char *)(lVar6 + 0x2844) == '\x01') {
              *(float *)((longlong)&local_120 + lVar12) = fVar30 + fVar47;
              if (((fVar47 != 0.0) || (NAN(fVar47))) && (0.0 < fVar47 == fVar30 + fVar47 <= fVar48))
              goto LAB_14008d675;
              bVar5 = true;
            }
            else {
LAB_14008d675:
              bVar5 = false;
            }
            uVar29 = (int)((uint)(uVar15 == 1) << 0x1f) >> 0x1f;
            uVar34 = (int)((uint)(byte)((byte)local_168 & uVar15 == 2 | uVar15 == 3) << 0x1f) >>
                     0x1f;
            fVar30 = (float)(~uVar29 & uVar20 | (uint)fVar41 & uVar29);
            fVar47 = (float)(~uVar34 & uVar21 | (uint)fVar43 & uVar34);
            auVar37._0_4_ = (int)((uint)(uVar15 == 0) << 0x1f) >> 0x1f;
            auVar37._4_4_ = (int)((uint)(uVar15 == 2) << 0x1f) >> 0x1f;
            auVar37._8_8_ = 0;
            auVar4._8_8_ = uStack_140;
            auVar4._0_8_ = local_148;
            auVar42._8_8_ = 0;
            auVar42._0_8_ = local_120;
            auVar38 = minps(~auVar37 & auVar2 | auVar4 & auVar37,auVar42);
            uVar29 = -(uint)((float)local_120 < fVar30);
            uVar34 = -(uint)((float)(local_120 >> 0x20) < fVar47);
            local_120 = CONCAT44(~uVar34 & auVar38._4_4_,~uVar29 & auVar38._0_4_) |
                        CONCAT44((uint)fVar47 & uVar34,(uint)fVar30 & uVar29);
            if (!bVar5) {
              local_178 = &local_100;
              local_130 = auVar25._0_8_;
              FUN_1400a53fb(param_1,&local_120,&local_130,&local_f8);
            }
          }
        }
      }
      else {
LAB_14008d48f:
        if (local_121 == '\x01') goto LAB_14008d49a;
      }
      if (local_101 == 1) {
        *local_150 = uVar18;
      }
      if (local_121 == '\x01') {
        *local_160 = uVar18;
      }
    }
    uVar15 = uVar15 + 1;
    puVar13 = (ulonglong *)((longlong)puVar13 + 0x1c);
  } while (uVar15 != 4);
  FUN_140091667();
  puVar7 = local_160;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if ((*(longlong *)(lVar6 + 0x23e8) != 0) &&
     (*(longlong *)(*(longlong *)(lVar6 + 0x23e8) + 0x428) == param_1)) {
    if (*(int *)(lVar6 + 0x2250) == 3) {
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x281);
      uVar11 = 0x27e;
      uVar16 = 0x27f;
      uVar17 = 0x280;
LAB_14008d809:
      FUN_1400918c3(&local_118,uVar11,uVar16,uVar17);
      uVar11 = local_118;
    }
    else {
      uVar11 = 0;
      if ((*(int *)(lVar6 + 0x2250) == 2) && (*(char *)(lVar6 + 0x139) == '\x01')) {
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0x204);
        uVar11 = 0x201;
        uVar16 = 0x202;
        uVar17 = 0x203;
        goto LAB_14008d809;
      }
    }
    fVar44 = (float)((ulonglong)uVar11 >> 0x20);
    if ((((float)uVar11 != 0.0) || (fVar44 != 0.0)) || (NAN(fVar44))) {
      fVar30 = *(float *)(lVar6 + 0x48) * DAT_1402115a0 * *(float *)(DAT_140f2a910 + 0x12ec);
      fVar47 = (float)*(undefined8 *)(lVar6 + 0x241c) + (float)uVar11 * fVar30;
      fVar44 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x241c) >> 0x20) + fVar44 * fVar30;
      *(ulonglong *)(lVar6 + 0x241c) = CONCAT44(fVar44,fVar47);
      fVar30 = (fVar41 - (float)*(undefined8 *)(param_1 + 0x60)) -
               (float)*(undefined8 *)(param_1 + 0x68);
      fVar43 = (fVar43 - (float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20)) -
               (float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
      uVar20 = -(uint)(fVar30 <= fVar47);
      uVar21 = -(uint)(fVar43 <= fVar44);
      *(ulonglong *)(lVar6 + 0x241c) =
           CONCAT44(~uVar21 & (uint)fVar43,~uVar20 & (uint)fVar30) |
           CONCAT44((uint)fVar44 & uVar21,(uint)fVar47 & uVar20);
      *(undefined1 *)(lVar6 + 0x240c) = 0;
      *(undefined1 *)(lVar6 + 0x21f5) = 1;
      uVar9 = FUN_14007a557(0x21);
      *param_5 = uVar9;
      iVar22 = (int)(float)*(undefined8 *)(lVar6 + 0x241c);
      iVar26 = (int)(float)((ulonglong)*(undefined8 *)(lVar6 + 0x241c) >> 0x20);
      auVar39._0_4_ = -(uint)(iVar22 == 0);
      auVar39._4_4_ = -(uint)(iVar22 == 0);
      auVar39._8_4_ = -(uint)(iVar26 == 0);
      auVar39._12_4_ = -(uint)(iVar26 == 0);
      iVar10 = movmskpd(uVar9,auVar39);
      if (iVar10 != 3) {
        local_118 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x70) >> 0x20) +
                             (float)iVar26,(float)*(undefined8 *)(param_1 + 0x70) + (float)iVar22);
        FUN_14008b19e(&local_100,param_1);
        *(ulonglong *)(lVar6 + 0x241c) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar6 + 0x241c) >> 0x20) - (float)iVar26,
                      (float)*(undefined8 *)(lVar6 + 0x241c) - (float)iVar22);
      }
    }
  }
  fVar43 = *(float *)(param_1 + 0x70);
  fVar44 = fVar43;
  if (((float)local_100 != DAT_1402112e4) || (NAN((float)local_100) || NAN(DAT_1402112e4))) {
    if (*(float *)(param_1 + 0x68) == (float)local_100) {
      if ((fVar43 == (float)local_100) && (!NAN(fVar43) && !NAN((float)local_100)))
      goto LAB_14008d95a;
    }
    *(float *)(param_1 + 0x70) = (float)local_100;
    *(float *)(param_1 + 0x68) = (float)local_100;
    fVar44 = (float)local_100;
  }
LAB_14008d95a:
  fVar30 = *(float *)(param_1 + 0x74);
  fVar41 = fVar30;
  if ((local_100._4_4_ != DAT_1402112e4) || (NAN(local_100._4_4_) || NAN(DAT_1402112e4))) {
    if (*(float *)(param_1 + 0x6c) == local_100._4_4_) {
      if ((fVar30 == local_100._4_4_) && (!NAN(fVar30) && !NAN(local_100._4_4_)))
      goto LAB_14008d999;
    }
    *(float *)(param_1 + 0x74) = local_100._4_4_;
    *(float *)(param_1 + 0x6c) = local_100._4_4_;
    fVar41 = local_100._4_4_;
  }
LAB_14008d999:
  fVar47 = *(float *)(param_1 + 0x60);
  fVar48 = fVar47;
  if (((float)local_f8 != DAT_1402112e4) || (NAN((float)local_f8) || NAN(DAT_1402112e4))) {
    fVar49 = (float)(int)(float)local_f8;
    if ((fVar47 != fVar49) || (NAN(fVar47) || NAN(fVar49))) {
      *(float *)(param_1 + 0x60) = fVar49;
      fVar48 = fVar49;
    }
  }
  fVar49 = *(float *)(param_1 + 100);
  fVar50 = fVar49;
  if ((local_f8._4_4_ != DAT_1402112e4) || (NAN(local_f8._4_4_) || NAN(DAT_1402112e4))) {
    fVar28 = (float)(int)local_f8._4_4_;
    if ((fVar49 != fVar28) || (NAN(fVar49) || NAN(fVar28))) {
      *(float *)(param_1 + 100) = fVar28;
      fVar50 = fVar28;
    }
  }
  if (((((fVar47 != fVar48) || (NAN(fVar47) || NAN(fVar48))) || (fVar49 != fVar50)) ||
      ((NAN(fVar49) || NAN(fVar50) || (fVar43 != fVar44)))) || (NAN(fVar43) || NAN(fVar44))) {
LAB_14008da29:
    FUN_14008c560(param_1);
  }
  else if ((fVar30 != fVar41) || (NAN(fVar30) || NAN(fVar41))) goto LAB_14008da29;
  uVar20 = local_16c;
  if (*puVar7 != 0xffffffff) {
    local_178 = (undefined8 *)CONCAT44(local_178._4_4_,*(undefined4 *)(lVar6 + 0x15fc));
    FUN_1400a5614(&local_118,param_1);
    *local_158 = local_118;
    local_158[1] = uStack_110;
    uVar20 = local_16c;
  }
LAB_14008da6e:
  if (DAT_140f17b40 != (local_f0 ^ (ulonglong)auStack_198)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_f0 ^ (ulonglong)auStack_198);
  }
  return uVar20;
}


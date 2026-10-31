/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010ee11 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall
FUN_1010ee11(int param_1,uint *param_2,uint *param_3,uint param_4,undefined4 *param_5,uint *param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulonglong *puVar13;
  uint uVar14;
  float10 fVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar23;
  undefined8 uVar19;
  int iVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uVar28;
  float fVar29;
  float fVar33;
  uint uVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  int local_f8;
  uint local_f4;
  int local_f0;
  undefined4 local_ec;
  ulonglong *local_e8;
  ulonglong *local_e4;
  ulonglong *puStack_e0;
  ulonglong *puStack_dc;
  ulonglong *puStack_d8;
  undefined1 local_d4 [4];
  undefined1 auStack_d0 [8];
  float fStack_c8;
  uint *local_c4;
  float local_c0;
  undefined1 local_bc [16];
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  char *local_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint local_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  char local_41;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_25;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  
  iVar12 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_f8;
  uVar14 = 0;
  local_f8 = param_1;
  if ((((((*(uint *)(param_1 + 0xc) & 2) != 0) || ('\0' < *(char *)(param_1 + 0x118))) ||
       ('\0' < *(char *)(param_1 + 0x119))) ||
      (((*(uint *)(param_1 + 0xc) & 0x40) != 0 && ((*(byte *)(param_1 + 0x14) & 0xc) == 0)))) ||
     (*(char *)(param_1 + 0xfa) == '\0')) goto LAB_1010ee4d;
  fVar15 = (float10)FUN_100fdbca(*(float *)(DAT_1039d74c + 0x1228) * _DAT_102b8d10,
                                 DAT_102b8c70 * *(float *)(DAT_1039d74c + 0x1228) +
                                 *(float *)(param_1 + 0x88) + DAT_1028b430);
  local_c0 = (float)fVar15;
  local_e4 = (ulonglong *)(float)(int)((float)(int)fVar15 * DAT_102b8d14);
  puStack_e0 = (ulonglong *)0x0;
  puStack_dc = (ulonglong *)0x0;
  puStack_d8 = (ulonglong *)0x0;
  local_e8 = (ulonglong *)0x0;
  if (param_4 != 0) {
    local_e8 = local_e4;
  }
  local_8c = (float)param_6[1];
  if (((*(byte *)(local_f8 + 0x120) & 1) == 0) && ((*(byte *)(local_f8 + 0xc) & 1) == 0)) {
    local_8c = local_8c - *(float *)(local_f8 + 0x90);
    local_ec = CONCAT31((int3)((uint)local_f8 >> 8),1);
  }
  else {
    local_ec = 0;
  }
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  local_ac = *(float *)(iVar12 + 0x14c4);
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  fStack_a0 = 0.0;
  local_bc = ZEXT416(*param_6);
  local_5c = param_6[2];
  uStack_58 = param_6[3];
  uStack_54 = 0;
  uStack_50 = 0;
  local_1c = DAT_102b8950;
  local_24 = DAT_102b8950;
  if ((((*(byte *)(iVar12 + 0x35) & 0x10) == 0) ||
      (*(int *)(iVar12 + 0x100) != *(int *)(local_f8 + 0x40))) ||
     ((*(byte *)(*(int *)(local_f8 + 0x3c) + 4) & 8) == 0)) {
    uVar19 = *(undefined8 *)(*(int *)(local_f8 + 0x3c) + 8);
    uVar1 = *(undefined8 *)(*(int *)(local_f8 + 0x3c) + 0x10);
    *(undefined8 *)(local_f8 + 0x28c) = uVar19;
    *(ulonglong *)(local_f8 + 0x294) =
         CONCAT44((float)((ulonglong)uVar1 >> 0x20) + (float)((ulonglong)uVar19 >> 0x20),
                  (float)uVar1 + (float)uVar19);
  }
  local_f0 = iVar12;
  *(undefined4 *)(local_f8 + 0x19c) = 1;
  local_c4 = param_2;
  FUN_101131fa("#RESIZE");
  if (param_4 == 0) {
    local_f4 = 0;
  }
  else {
    puStack_e0 = local_e4;
    puStack_dc = local_e4;
    puStack_d8 = local_e4;
    local_6c = (float)(_DAT_1028f620 ^ (uint)local_e4);
    fStack_68 = (float)(_UNK_1028f624 ^ (uint)local_e4);
    fStack_64 = (float)(_UNK_1028f628 ^ (uint)local_e4);
    fStack_60 = (float)(_UNK_1028f62c ^ (uint)local_e4);
    fStack_a8 = local_ac;
    fStack_a4 = local_ac;
    fStack_a0 = local_ac;
    local_f4 = 0;
    puVar13 = &DAT_102b85ac;
    uVar14 = 0;
    do {
      uVar2 = *puVar13;
      register0x000012c8 = 0;
      _local_d4 = uVar2;
      local_7c = *(float *)(puVar13 + 1);
      fStack_78 = *(float *)((int)puVar13 + 0xc);
      local_9c = (char *)(local_ac * local_7c);
      fStack_98 = fStack_a8 * fStack_78;
      fStack_94 = fStack_a4 * 0.0;
      fStack_90 = fStack_a0 * 0.0;
      fVar35 = (float)*(undefined8 *)(local_f8 + 0x50);
      fVar39 = (float)((ulonglong)*(undefined8 *)(local_f8 + 0x50) >> 0x20);
      fVar35 = (((float)*(undefined8 *)(local_f8 + 0x58) + fVar35) - fVar35) * (float)uVar2 + fVar35
      ;
      fVar39 = (((float)((ulonglong)*(undefined8 *)(local_f8 + 0x58) >> 0x20) + fVar39) - fVar39) *
               (float)(uVar2 >> 0x20) + fVar39;
      auVar3._8_4_ = fVar39;
      auVar3._4_4_ = fVar35;
      fStack_74 = 0.0;
      fStack_70 = 0.0;
      fVar33 = fVar39 - fStack_98;
      local_38 = CONCAT44(fVar33,fVar35 - (float)local_9c);
      fVar25 = local_7c * (float)local_e4 + fVar35;
      fVar27 = fStack_78 * (float)puStack_e0 + fVar39;
      auVar3._0_4_ = fStack_98 + fVar39;
      auVar22._0_8_ = auVar3._0_8_ << 0x20;
      auVar22._8_4_ = fVar25;
      auVar22._12_4_ = fVar27;
      uStack_30 = auVar22._8_8_;
      if (fVar25 < fVar35 - (float)local_9c) {
        FUN_100faec4(&local_38,&uStack_30);
        fVar27 = uStack_30._4_4_;
        fVar33 = local_38._4_4_;
      }
      if (fVar27 < fVar33) {
        FUN_100faec4((int)&local_38 + 4,(int)&uStack_30 + 4);
      }
      uVar10 = FUN_10113122(uVar14);
      FUN_1010c9d8(&local_38,uVar10,0,2);
      FUN_1012d77e(&local_38,uVar10,&local_4c,&local_25,0x40800);
      if ((((byte)local_4c != '\0') || (local_25 != 0)) &&
         (FUN_10114115((uVar14 == 0) + '\x05'), local_25 == 1)) {
        if (*(char *)(local_f0 + 0xb1d) == '\x01') {
          FUN_1010cea8(local_f8 + 0x70,0xffffffff);
          FUN_1010d23f(&local_40);
          FUN_101028d8();
          local_f4 = 3;
        }
        else {
          fVar27 = (float)local_bc._0_4_;
          if (uVar14 != 0) {
            fVar27 = DAT_102b89b0;
          }
          auVar30._0_4_ = (int)((uint)(uVar14 - 1 < 2) << 0x1f) >> 0x1f;
          auVar30._4_4_ = (int)((uint)((uVar14 & 0x7ffffffe) == 2) << 0x1f) >> 0x1f;
          auVar30._8_8_ = 0;
          auVar5._4_4_ = uStack_58;
          auVar5._0_4_ = local_5c;
          auVar5._8_4_ = uStack_54;
          auVar5._12_4_ = uStack_50;
          auVar41._8_8_ = _UNK_102b8958;
          auVar41._0_8_ = DAT_102b8950;
          auVar36._0_4_ =
               ((float)*(undefined8 *)(local_f0 + 0xe4) - (float)*(undefined8 *)(local_f0 + 0x1540))
               + (local_7c * local_6c - (float)local_9c) * (float)local_d4 + (float)local_9c;
          auVar36._4_4_ =
               ((float)((ulonglong)*(undefined8 *)(local_f0 + 0xe4) >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(local_f0 + 0x1540) >> 0x20)) +
               (fStack_78 * fStack_68 - fStack_98) * (float)auStack_d0._0_4_ + fStack_98;
          auVar36._8_4_ =
               (fStack_74 * fStack_64 - fStack_94) * (float)auStack_d0._4_4_ + fStack_94 + 0.0;
          auVar36._12_4_ = (fStack_70 * fStack_60 - fStack_90) * fStack_c8 + fStack_90 + 0.0;
          auVar22 = minps(~auVar30 & auVar41 | auVar5 & auVar30,auVar36);
          local_40 = CONCAT44(~-(uint)(auVar36._4_4_ < local_8c) & auVar22._4_4_,
                              ~-(uint)(auVar36._0_4_ < fVar27) & auVar22._0_4_) |
                     CONCAT44((uint)local_8c & -(uint)(auVar36._4_4_ < local_8c),
                              (uint)fVar27 & -(uint)(auVar36._0_4_ < fVar27));
          FUN_1012655b(puVar13,&local_1c,&local_24);
        }
      }
      if ((((local_25 | (byte)local_4c) & 1) != 0) ||
         ((uVar14 == 0 && ((*(byte *)(local_f8 + 0xf) & 1) == 0)))) {
        iVar12 = (byte)local_4c + 0x1f;
        if (local_25 != 0) {
          iVar12 = 0x21;
        }
        uVar10 = FUN_100fcb39(iVar12,0x3f800000);
        param_5[uVar14] = uVar10;
      }
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + 3;
    } while (param_4 != uVar14);
  }
  if ((*(byte *)(local_f8 + 0xf) & 1) == 0) {
    local_7c = 2.10195e-44;
    if (*(char *)(local_f0 + 0x7e) == '\0') {
      local_7c = 0.0;
    }
  }
  else {
    local_7c = (float)(*(uint *)(local_f8 + 0x14) & 8 | *(uint *)(local_f8 + 0x14) >> 1 & 2);
  }
  local_9c = (char *)(local_f0 + 0x25b8);
  local_6c = (float)(local_f8 + 0x70);
  auVar20._8_4_ = SUB84(local_bc._0_8_,4);
  auVar20._0_8_ = local_bc._0_8_;
  auVar20._12_4_ = uStack_88;
  local_bc._8_8_ = auVar20._8_8_;
  local_bc._4_4_ = local_8c;
  puVar13 = &DAT_102b861c;
  uVar14 = 0;
  iVar12 = local_f0;
  do {
    if (((uint)local_7c >> (uVar14 & 0x1f) & 1) != 0) {
      local_d4[0] = 1 < uVar14;
      local_e4 = puVar13;
      FUN_101267b2(uVar14);
      uVar10 = FUN_10113122(uVar14 + 4);
      FUN_1010c9d8(&local_38,uVar10,0,2);
      puVar13 = local_e4;
      iVar12 = local_f0;
      FUN_1012d77e(&local_38,uVar10,&local_25,&local_41,0x40800);
      if (local_25 == 1) {
        if (*(float *)(iVar12 + 0x151c) <= DAT_102b8d18) {
          local_25 = 0;
          goto LAB_1010f425;
        }
LAB_1010f433:
        FUN_10114115((uVar14 < 2) + '\x03');
        auVar22 = _local_d4;
        if (local_41 == '\x01') {
          bVar8 = local_d4[0];
          fVar27 = (float)(uint)local_d4[0];
          if (*(char *)(iVar12 + 0xb1d) == '\x01') {
            if ((uVar14 | 2) == 3) {
              local_d4._1_3_ = 0;
              local_d4[0] = 1 < uVar14;
              _auStack_d0 = auVar22._4_12_;
              local_ac = fVar27;
              FUN_1010cea8(local_6c,1 << (bVar8 & 0x1f));
              FUN_1010d23f(&local_40);
              *(undefined4 *)((int)&local_24 + (int)local_d4 * 4) =
                   *(undefined4 *)((int)&local_4c + (int)local_d4 * 4);
              local_f4 = local_f4 | 1 << ((uint)local_ac & 0x1f);
              local_41 = '\0';
              local_25 = 0;
            }
            FUN_101028d8();
          }
          else {
            if ((*(int *)(iVar12 + 0x14e0) == 0) ||
               (*(int *)(iVar12 + 0x14f0) != *(int *)(iVar12 + 4))) {
              cVar9 = '\0';
            }
            else {
              cVar9 = FUN_10111ac1(local_f8,*(int *)(iVar12 + 0x14e0),0,1);
            }
            if ((cVar9 != '\0') || (*(char *)(iVar12 + 0x1534) != '\0')) {
              *(undefined4 *)local_9c = (undefined4)local_38;
              *(float *)(local_9c + 4) = local_38._4_4_;
              *(undefined4 *)(local_9c + 8) = (undefined4)uStack_30;
              *(float *)(local_9c + 0xc) = uStack_30._4_4_;
              *(undefined1 *)(iVar12 + 0x25c8) = 0;
            }
            if ((*(byte *)(local_f8 + 0xf) & 1) != 0) {
              auVar31[0] = -((char)local_38 == *local_9c);
              auVar31[1] = -(local_38._1_1_ == local_9c[1]);
              auVar31[2] = -(local_38._2_1_ == local_9c[2]);
              auVar31[3] = -(local_38._3_1_ == local_9c[3]);
              auVar31[4] = -(local_38._4_1_ == local_9c[4]);
              auVar31[5] = -(local_38._5_1_ == local_9c[5]);
              auVar31[6] = -(local_38._6_1_ == local_9c[6]);
              auVar31[7] = -(local_38._7_1_ == local_9c[7]);
              auVar31[8] = -((char)uStack_30 == local_9c[8]);
              auVar31[9] = -(uStack_30._1_1_ == local_9c[9]);
              auVar31[10] = -(uStack_30._2_1_ == local_9c[10]);
              auVar31[0xb] = -(uStack_30._3_1_ == local_9c[0xb]);
              auVar31[0xc] = -(uStack_30._4_1_ == local_9c[0xc]);
              auVar31[0xd] = -(uStack_30._5_1_ == local_9c[0xd]);
              auVar31[0xe] = -(uStack_30._6_1_ == local_9c[0xe]);
              auVar31[0xf] = -(uStack_30._7_1_ == local_9c[0xf]);
              if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar31[0xf] >> 7) << 0xf) != 0xffff) {
                *(undefined1 *)(iVar12 + 0x25c8) = 1;
              }
            }
            auVar21._8_8_ = 0;
            auVar21._0_8_ = puVar13[-1];
            auVar32._8_8_ = 0;
            auVar32._0_8_ = *puVar13;
            auVar22 = minps(auVar21,auVar32);
            if (1 < uVar14) {
              fVar33 = auVar22._4_4_ * *(float *)(local_f8 + 0x5c) + *(float *)(local_f8 + 0x54);
            }
            else {
              fVar33 = *(float *)(local_f8 + 0x58) * auVar22._0_4_ + *(float *)(local_f8 + 0x50);
            }
            fVar35 = *(float *)(iVar12 + 0xd8 + (int)fVar27 * 4);
            fVar27 = (*(float *)(iVar12 + 0xe4 + (int)fVar27 * 4) -
                     *(float *)(iVar12 + 0x1540 + (int)fVar27 * 4)) + *(float *)(iVar12 + 0x14c4);
            local_40 = *(ulonglong *)(local_f8 + 0x50);
            uVar16 = (uint)(1 < uVar14);
            *(float *)((int)&local_40 + uVar16 * 4) = fVar27;
            if (*(char *)(iVar12 + 0x25c8) == '\x01') {
              *(float *)((int)&local_40 + uVar16 * 4) = fVar33 + fVar35;
              if (((fVar35 != 0.0) || (NAN(fVar35))) && (0.0 < fVar35 == fVar33 + fVar35 <= fVar27))
              goto LAB_1010f636;
              local_d4 = (undefined1  [4])0x1;
            }
            else {
LAB_1010f636:
              auVar7._12_4_ = 0;
              auVar7._0_12_ = _auStack_d0;
              _local_d4 = auVar7 << 0x20;
            }
            uVar16 = (uint)(uVar14 == _UNK_1028f5a4);
            uVar17 = (int)((uint)(uVar14 == _DAT_1028f5a0) * -0x80000000) >> 0x1f;
            uVar34 = (int)((uint)(byte)((byte)local_ec & uVar14 == 2 | uVar14 == 3) << 0x1f) >> 0x1f
            ;
            fVar27 = (float)(~uVar17 & _DAT_102b8d20 | local_bc._0_4_ & uVar17);
            fVar33 = (float)(~uVar34 & _UNK_102b8d24 | local_bc._4_4_ & uVar34);
            auVar40._0_4_ = (int)(uVar16 * -0x80000000) >> 0x1f;
            auVar40._4_4_ = (int)((uint)(uVar14 == 2) << 0x1f) >> 0x1f;
            auVar40._8_4_ = (int)(uVar16 * -0x80000000) >> 0x1f;
            auVar40._12_4_ = (int)(uVar16 * -0x80000000) >> 0x1f;
            auVar6._4_4_ = uStack_58;
            auVar6._0_4_ = local_5c;
            auVar6._8_4_ = uStack_54;
            auVar6._12_4_ = uStack_50;
            auVar4._8_8_ = _UNK_102b8958;
            auVar4._0_8_ = DAT_102b8950;
            auVar37._8_8_ = 0;
            auVar37._0_8_ = local_40;
            auVar41 = minps(~auVar40 & auVar4 | auVar6 & auVar40,auVar37);
            uVar16 = -(uint)((float)local_40 < fVar27);
            uVar17 = -(uint)((float)(local_40 >> 0x20) < fVar33);
            local_40 = CONCAT44(~uVar17 & auVar41._4_4_,~uVar16 & auVar41._0_4_) |
                       CONCAT44((uint)fVar33 & uVar17,(uint)fVar27 & uVar16);
            if (local_d4[0] == '\0') {
              local_4c = auVar22._0_8_;
              FUN_1012655b(&local_4c,&local_1c,&local_24);
            }
          }
        }
      }
      else {
LAB_1010f425:
        if (local_41 == '\x01') goto LAB_1010f433;
      }
      if (local_25 == 1) {
        *local_c4 = uVar14;
      }
      if (local_41 == '\x01') {
        *param_3 = uVar14;
      }
    }
    uVar14 = uVar14 + 1;
    puVar13 = (ulonglong *)((int)puVar13 + 0x1c);
  } while (uVar14 != 4);
  FUN_10113568();
  uVar14 = local_f4;
  *(undefined4 *)(local_f8 + 0x19c) = 0;
  if ((*(int *)(iVar12 + 0x221c) != 0) && (*(int *)(*(int *)(iVar12 + 0x221c) + 0x3b0) == local_f8))
  {
    uVar10 = _DAT_102b8d30;
    uVar23 = _UNK_102b8d34;
    uVar26 = _UNK_102b8d38;
    uVar28 = _UNK_102b8d3c;
    if ((*(int *)(iVar12 + 0x208c) == 3) ||
       ((uVar19 = 0, *(int *)(iVar12 + 0x208c) == 2 &&
        (uVar10 = _DAT_102b8d40, uVar23 = _UNK_102b8d44, uVar26 = _UNK_102b8d48,
        uVar28 = _UNK_102b8d4c, *(char *)(iVar12 + 0x105) == '\x01')))) {
      FUN_101137c8(&local_38,uVar10,uVar23,uVar26,uVar28);
      uVar19 = local_38;
    }
    fVar27 = (float)((ulonglong)uVar19 >> 0x20);
    if ((((float)uVar19 != 0.0) || (fVar27 != 0.0)) || (NAN(fVar27))) {
      fVar33 = *(float *)(iVar12 + 0x48) * _DAT_102b8d50 * *(float *)(DAT_1039d74c + 0x1204);
      fVar35 = (float)*(undefined8 *)(iVar12 + 0x2244) + (float)uVar19 * fVar33;
      fVar27 = (float)((ulonglong)*(undefined8 *)(iVar12 + 0x2244) >> 0x20) + fVar27 * fVar33;
      *(ulonglong *)(iVar12 + 0x2244) = CONCAT44(fVar27,fVar35);
      fVar33 = ((float)local_bc._0_4_ - (float)*(undefined8 *)(local_f8 + 0x50)) -
               (float)*(undefined8 *)(local_f8 + 0x58);
      fVar39 = ((float)local_bc._4_4_ - (float)((ulonglong)*(undefined8 *)(local_f8 + 0x50) >> 0x20)
               ) - (float)((ulonglong)*(undefined8 *)(local_f8 + 0x58) >> 0x20);
      uVar16 = -(uint)(fVar33 <= fVar35);
      uVar17 = -(uint)(fVar39 <= fVar27);
      *(ulonglong *)(iVar12 + 0x2244) =
           CONCAT44(~uVar17 & (uint)fVar39,~uVar16 & (uint)fVar33) |
           CONCAT44((uint)fVar27 & uVar17,(uint)fVar35 & uVar16);
      *(undefined1 *)(iVar12 + 0x2234) = 0;
      *(undefined1 *)(iVar12 + 0x2041) = 1;
      uVar10 = FUN_100fcb39(0x21,0x3f800000);
      *param_5 = uVar10;
      iVar18 = (int)(float)*(undefined8 *)(iVar12 + 0x2244);
      iVar24 = (int)(float)((ulonglong)*(undefined8 *)(iVar12 + 0x2244) >> 0x20);
      auVar38._0_4_ = -(uint)(iVar18 == 0);
      auVar38._4_4_ = -(uint)(iVar18 == 0);
      auVar38._8_4_ = -(uint)(iVar24 == 0);
      auVar38._12_4_ = -(uint)(iVar24 == 0);
      iVar11 = movmskpd(uVar10,auVar38);
      if (iVar11 != 3) {
        local_e4 = (ulonglong *)(float)iVar18;
        puStack_e0 = (ulonglong *)(float)iVar24;
        puStack_dc = (ulonglong *)0x0;
        puStack_d8 = (ulonglong *)0x0;
        local_38 = CONCAT44((float)((ulonglong)*(undefined8 *)(local_f8 + 0x60) >> 0x20) +
                            (float)puStack_e0,
                            (float)*(undefined8 *)(local_f8 + 0x60) + (float)local_e4);
        FUN_1010d23f(&local_38);
        *(ulonglong *)(iVar12 + 0x2244) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(iVar12 + 0x2244) >> 0x20) -
                      (float)puStack_e0,(float)*(undefined8 *)(iVar12 + 0x2244) - (float)local_e4);
      }
    }
  }
  fVar27 = *(float *)(local_f8 + 0x60);
  local_e4 = (ulonglong *)fVar27;
  if (((float)local_24 != DAT_102b89b4) || (NAN((float)local_24) || NAN(DAT_102b89b4))) {
    if (*(float *)(local_f8 + 0x58) == (float)local_24) {
      if ((fVar27 == (float)local_24) && (!NAN(fVar27) && !NAN((float)local_24))) goto LAB_1010f92a;
    }
    *(float *)(local_f8 + 0x60) = (float)local_24;
    *(float *)(local_f8 + 0x58) = (float)local_24;
    local_e4 = (ulonglong *)(float)local_24;
  }
LAB_1010f92a:
  fVar33 = *(float *)(local_f8 + 100);
  fVar35 = fVar33;
  if ((local_24._4_4_ != DAT_102b89b4) || (NAN(local_24._4_4_) || NAN(DAT_102b89b4))) {
    if (*(float *)(local_f8 + 0x5c) == local_24._4_4_) {
      if ((fVar33 == local_24._4_4_) && (!NAN(fVar33) && !NAN(local_24._4_4_))) goto LAB_1010f978;
    }
    *(float *)(local_f8 + 100) = local_24._4_4_;
    *(float *)(local_f8 + 0x5c) = local_24._4_4_;
    fVar35 = local_24._4_4_;
  }
LAB_1010f978:
  fVar39 = *(float *)(local_f8 + 0x50);
  fVar25 = fVar39;
  if (((float)local_1c != DAT_102b89b4) || (NAN((float)local_1c) || NAN(DAT_102b89b4))) {
    fVar42 = (float)(int)(float)local_1c;
    if ((fVar39 != fVar42) || (NAN(fVar39) || NAN(fVar42))) {
      *(float *)(local_f8 + 0x50) = fVar42;
      fVar25 = fVar42;
    }
  }
  fVar42 = *(float *)(local_f8 + 0x54);
  fVar43 = fVar42;
  if ((local_1c._4_4_ != DAT_102b89b4) || (NAN(local_1c._4_4_) || NAN(DAT_102b89b4))) {
    fVar29 = (float)(int)local_1c._4_4_;
    if ((fVar42 != fVar29) || (NAN(fVar42) || NAN(fVar29))) {
      *(float *)(local_f8 + 0x54) = fVar29;
      fVar43 = fVar29;
    }
  }
  if (((((fVar39 != fVar25) || (NAN(fVar39) || NAN(fVar25))) || (fVar42 != fVar43)) ||
      ((NAN(fVar42) || NAN(fVar43) || (fVar27 != (float)local_e4)))) ||
     (NAN(fVar27) || NAN((float)local_e4))) {
LAB_1010fa0c:
    FUN_1010e508(local_f8);
  }
  else if ((fVar33 != fVar35) || (NAN(fVar33) || NAN(fVar35))) goto LAB_1010fa0c;
  if (*param_3 != 0xffffffff) {
    FUN_101267b2(*param_3);
    *(undefined4 *)local_9c = (undefined4)local_38;
    *(float *)(local_9c + 4) = local_38._4_4_;
    *(undefined4 *)(local_9c + 8) = (undefined4)uStack_30;
    *(float *)(local_9c + 0xc) = uStack_30._4_4_;
  }
LAB_1010ee4d:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_f8)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10145288 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10145288(int param_1,float *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  float fVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  byte local_254;
  byte local_24c;
  byte local_248;
  undefined8 local_1c0;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  float fStack_9c;
  float fStack_98;
  undefined8 local_94;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined8 local_64;
  float local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float local_4c;
  float fStack_48;
  undefined8 local_44;
  float fStack_3c;
  float fStack_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [16];
  uint local_18;
  undefined1 auVar40 [16];
  
  iVar9 = DAT_1039d74c;
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar14 = *(int *)(iVar9 + 0x14cc);
  uVar19 = 0;
  if (*(char *)(iVar14 + 0xfe) != '\0') goto LAB_101472f5;
  iVar4 = *(int *)(iVar14 + 0x2e8);
  fVar22 = (float10)FUN_10115533();
  uVar12 = *(uint *)(iVar9 + 0x1e40) | *(uint *)(iVar9 + 0x1e4c);
  *(undefined4 *)(iVar9 + 0x1e48) = 0;
  *(undefined4 *)(iVar9 + 0x1e4c) = 0;
  FUN_101131fa(param_1);
  iVar5 = *(int *)(iVar9 + 0x2564);
  if (iVar5 == 0) {
    *(undefined4 *)(iVar9 + 0x2564) =
         *(undefined4 *)(*(int *)(iVar14 + 0x140) + -4 + *(int *)(iVar14 + 0x138) * 4);
  }
  FUN_10115649();
  uVar18 = ~param_3 >> 4 & 0x10 | param_3;
  if ((param_3 & 8) == 0) {
    FUN_1014739f(param_2,uVar18);
  }
  if ((param_3 & 0x6000000) == 0) {
    uVar13 = *(uint *)(iVar9 + 0x2560) & 0x6000000;
    uVar17 = 0x2000000;
    if (uVar13 != 0) {
      uVar17 = uVar13;
    }
    uVar18 = uVar18 | uVar17;
  }
  if ((uVar18 & 0x18000000) == 0) {
    uVar13 = *(uint *)(iVar9 + 0x2560) & 0x18000000;
    uVar17 = 0x8000000;
    if (uVar13 != 0) {
      uVar17 = uVar13;
    }
    uVar18 = uVar18 | uVar17;
  }
  if ((uVar18 & 8) == 0) {
    uVar18 = uVar18 | *(uint *)(iVar9 + 0x2560) & 0x40000;
  }
  uVar17 = uVar18 & 0x40002;
  local_4c = *(float *)(iVar14 + 0x144);
  fVar33 = *(float *)(iVar14 + 0x144);
  fVar43 = *(float *)(iVar14 + 0x148);
  fVar32 = *(float *)(iVar14 + 0x148);
  fStack_48 = fVar32;
  fVar23 = (float10)FUN_101155f9();
  fVar2 = (float)fVar23;
  fVar22 = (float10)FUN_100fdbca(fVar2,(float)fVar22 -
                                       (*(float *)(iVar9 + 0xd24) + fVar2) *
                                       (float)(byte)((uVar17 == 0x40000) + 1));
  fVar3 = (float)fVar22;
  fVar31 = *(float *)(iVar9 + 0xd24);
  cVar1 = ((uVar18 & 2) == 0) * '\x04' + '\f';
  FUN_1025b2d0(local_28,param_2,cVar1);
  fVar27 = DAT_102b95e4 * fVar3;
  fVar38 = DAT_102b70e0 * fVar3;
  fVar39 = fVar38 - fVar27;
  fVar45 = fVar3 + fVar33 + fVar31;
  fVar28 = (fVar2 + fVar3) * (float)DAT_102b89c0 + fVar33;
  fVar37 = fVar3 * DAT_102b89c0._4_4_ + fVar43;
  local_5c = fVar39 - (float)(int)(DAT_102b95e8 * fVar3);
  local_6c = local_5c * _DAT_102b95f0;
  local_64 = CONCAT44(local_5c * _UNK_102b95f4,local_6c);
  local_58 = 0.0;
  local_68 = local_5c * _DAT_102b9600;
  local_7c = *param_2;
  local_80 = param_2[1];
  local_84 = param_2[2];
  local_78 = local_84;
  local_74 = local_80;
  local_70 = local_7c;
  local_54 = fVar28;
  fStack_50 = fVar37;
  if ((uVar18 >> 0x1b & 1) == 0) {
    if ((uVar18 >> 0x1c & 1) != 0) {
      FUN_100faedd(local_7c,local_80,local_84,&local_7c,&local_80,&local_84);
    }
  }
  else {
    FUN_100fadb2(local_7c,local_80,local_84,&local_70,&local_74,&local_78);
    FUN_10144ac4(&local_74,&local_78);
  }
  fVar29 = fVar2 + fVar45;
  FUN_1011177d(2,1);
  if ((uVar18 >> 0x1a & 1) == 0) {
    if ((uVar18 >> 0x19 & 1) == 0) {
      local_248 = 0;
      local_24c = 0;
      local_254 = 0;
    }
    else {
      uVar12 = uVar12 & 0x800;
      local_44 = CONCAT44(fVar3,fVar3);
      FUN_1012e242(&DAT_10330e24,&local_44,0);
      cVar10 = FUN_1010bee1();
      local_248 = 0;
      if ((cVar10 != '\0') && (uVar12 == 0)) {
        auVar36._0_4_ = DAT_102b8a50 + fVar3;
        auVar35._0_4_ = (float)*(undefined8 *)(iVar9 + 0xe4) - fVar33;
        auVar35._4_4_ = (float)((ulonglong)*(undefined8 *)(iVar9 + 0xe4) >> 0x20) - fVar43;
        auVar35._8_8_ = 0;
        auVar36._4_4_ = auVar36._0_4_;
        auVar36._8_4_ = auVar36._0_4_;
        auVar36._12_4_ = auVar36._0_4_;
        auVar36 = divps(auVar35,auVar36);
        fVar28 = auVar36._4_4_;
        iVar14 = -(uint)((float)DAT_102b70a0 < auVar36._0_4_);
        iVar26 = -(uint)(DAT_102b70a0._4_4_ < fVar28);
        auVar41._4_4_ = iVar26;
        auVar41._0_4_ = iVar14;
        auVar41._8_4_ = iVar26;
        auVar41._12_4_ = iVar26;
        auVar40._8_8_ = auVar41._8_8_;
        auVar40._4_4_ = iVar14;
        auVar40._0_4_ = iVar14;
        uVar13 = movmskpd(iVar9,auVar40);
        auVar35 = ZEXT416((uint)DAT_1028b430);
        if ((uVar13 & 1) == 0) {
          auVar35 = auVar36;
        }
        local_74 = (float)(~-(uint)(auVar36._0_4_ < 0.0) & auVar35._0_4_);
        fVar37 = 0.0;
        if ((uVar13 & 2) == 0) {
          fVar37 = DAT_1028b430 - fVar28;
        }
        local_78 = (float)(-(uint)(fVar28 < 0.0) & (uint)DAT_1028b430 |
                          ~-(uint)(fVar28 < 0.0) & (uint)fVar37);
        FUN_101475ea();
        local_248 = 1;
      }
      if ((uVar18 & 8) == 0) {
        FUN_101169c1("context",8);
      }
      local_44 = CONCAT44(fVar32,fVar45);
      FUN_10114fbc(&local_44);
      local_44 = CONCAT44(fVar3,fVar2);
      FUN_1012e242(&DAT_10338b6e,&local_44,0);
      cVar10 = FUN_1010bee1();
      local_24c = 0;
      local_254 = local_248;
      if ((cVar10 != '\0') && (uVar12 == 0)) {
        fVar28 = (*(float *)(iVar9 + 0xe8) - fVar43) / (DAT_102b8a50 + fVar3);
        local_70 = DAT_1028b430;
        if (fVar28 <= DAT_1028b430) {
          local_70 = fVar28;
        }
        local_70 = (float)(~-(uint)(fVar28 < 0.0) & (uint)local_70);
        local_24c = 1;
        local_254 = 1;
      }
    }
  }
  else {
    local_44 = CONCAT44(fVar3,*(float *)(iVar9 + 0xd24) + fVar3 + fVar2);
    FUN_1012e242(&DAT_10330e23,&local_44,0);
    cVar10 = FUN_1010bee1();
    local_248 = 0;
    if (cVar10 == '\0') {
      local_24c = 0;
      local_254 = 0;
    }
    else {
      local_24c = 0;
      local_254 = 0;
      if ((uVar12 & 0x800) == 0) {
        fVar46 = *(float *)(iVar9 + 0xacc) - fVar37;
        fVar47 = *(float *)(iVar9 + 0xac8) - fVar28;
        fVar37 = *(float *)(iVar9 + 0xe8) - fVar37;
        fVar28 = *(float *)(iVar9 + 0xe4) - fVar28;
        fVar30 = fVar47 * fVar47 + fVar46 * fVar46;
        if ((fVar30 < (DAT_102b8a50 + fVar39) * (DAT_102b8a50 + fVar39)) ||
           ((DAT_1028b430 + fVar38) * (DAT_1028b430 + fVar38) < fVar30)) {
          local_24c = 0;
        }
        else {
          fVar22 = (float10)FUN_1026cb50((double)fVar37,(double)fVar28);
          fVar30 = ((float)fVar22 / DAT_102b9604) * DAT_102b70e0;
          local_70 = (float)(~-(uint)(fVar30 < 0.0) & (uint)fVar30 |
                            (uint)(DAT_1028b430 + fVar30) & -(uint)(fVar30 < 0.0));
          local_24c = 1;
        }
        dVar34 = (double)(local_70 * _DAT_102b9554 * DAT_102b9604);
        fVar22 = (float10)FUN_1026d4b0(dVar34);
        fVar23 = (float10)FUN_102704b0(dVar34);
        fVar42 = (float)fVar22;
        fVar44 = (float)fVar23;
        fVar30 = (float)(_UNK_1028f624 ^ (uint)fVar44);
        local_44 = CONCAT44(fVar47 * fVar44 + fVar46 * fVar42,fVar47 * fVar42 + fVar46 * fVar30);
        cVar10 = FUN_100f9edd(&local_5c,&local_64,&local_6c,&local_44);
        if (cVar10 == '\0') {
          local_248 = 0;
          local_254 = local_24c;
        }
        else {
          local_44 = CONCAT44(fVar28 * fVar44 + fVar37 * fVar42,fVar28 * fVar42 + fVar37 * fVar30);
          cVar10 = FUN_100f9edd(&local_5c,&local_64,&local_6c,&local_44);
          if (cVar10 == '\0') {
            FUN_100fa061(&local_94,&local_5c,&local_64,&local_6c,&local_44);
            local_44 = local_94;
          }
          FUN_100f9fa6(&local_5c,&local_64,&local_6c,&local_44,&local_94,&local_a4,&local_ac);
          fVar22 = (float10)FUN_10112cc4(DAT_1028b430 - (float)local_a4,0x38d1b717,0x3f800000);
          local_78 = (float)fVar22;
          fVar22 = (float10)FUN_10112cc4((float)local_94 / local_78,0x38d1b717,0x3f800000);
          local_74 = (float)fVar22;
          local_248 = 1;
          local_254 = 1;
        }
      }
    }
    if ((uVar18 & 8) == 0) {
      FUN_101169c1("context",8);
    }
  }
  fVar31 = fVar31 + fVar29;
  if (uVar17 == 0x40000) {
    local_44 = CONCAT44(fVar32,fVar31);
    FUN_10114fbc(&local_44);
    local_44 = CONCAT44(fVar3,fVar2);
    FUN_1012e242("alpha",&local_44,0);
    cVar10 = FUN_1010bee1();
    if (cVar10 != '\0') {
      fVar28 = (*(float *)(iVar9 + 0xe8) - fVar43) / (DAT_102b8a50 + fVar3);
      fVar32 = DAT_1028b430;
      if (fVar28 <= DAT_1028b430) {
        fVar32 = fVar28;
      }
      param_2[3] = (float)(-(uint)(fVar28 < 0.0) & (uint)DAT_1028b430 |
                          ~-(uint)(fVar28 < 0.0) & (uint)(DAT_1028b430 - fVar32));
      local_254 = 1;
    }
  }
  FUN_10111839();
  if ((uVar18 >> 8 & 1) == 0) {
    FUN_10114a0e(0,*(undefined4 *)(iVar9 + 0xd24));
    FUN_10115649();
  }
  if ((-1 < (char)uVar18) && (iVar14 = FUN_100fd57d(param_1,0), param_1 != iVar14)) {
    if ((uVar18 >> 8 & 1) != 0) {
      FUN_10114a0e(0,*(undefined4 *)(iVar9 + 0xd24));
    }
    FUN_1012cbcc(param_1,iVar14,0);
  }
  fVar32 = DAT_102b8c70 * fVar2;
  if ((uVar18 >> 8 & 1) == 0) {
    FUN_1011177d(4,1);
    fStack_38 = DAT_1028b430;
    if ((uVar18 & 2) == 0) {
      fStack_38 = param_2[3];
    }
    fStack_3c = param_2[2];
    local_44 = *(undefined8 *)param_2;
    if ((char)uVar18 < '\0') {
      FUN_1012d08c("Current");
    }
    local_1c0 = CONCAT44(fVar2 * _UNK_102b9614,fVar2 * _DAT_102b9610);
    local_94 = CONCAT44(fVar2 * _UNK_102b9614,fVar2 * _DAT_102b9610);
    FUN_10144b9b("##current",&local_44,uVar18 & 0x18087042,&local_94);
    if (param_4 != (undefined8 *)0x0) {
      FUN_1012d08c("Original");
      local_88 = DAT_1028b430;
      if ((uVar18 & 2) == 0) {
        local_88 = *(float *)((int)param_4 + 0xc);
      }
      local_8c = *(undefined4 *)(param_4 + 1);
      local_94 = *param_4;
      local_a4 = local_1c0;
      cVar10 = FUN_10144b9b("##original",&local_94,uVar18 & 0x18087042,&local_a4);
      if (cVar10 != '\0') {
        FUN_1025b2d0(param_2,param_4,cVar1);
        local_254 = 1;
      }
    }
    FUN_10111839();
    FUN_1011462f();
  }
  if (local_24c != 0 || local_248 != 0) {
    if ((uVar18 >> 0x1b & 1) == 0) {
      if ((uVar18 >> 0x1c & 1) != 0) {
        *param_2 = local_70;
        param_2[1] = local_74;
        param_2[2] = local_78;
      }
    }
    else {
      FUN_100faedd(local_70,local_74,local_78,param_2,param_2 + 1,param_2 + 2);
      *(float *)(iVar9 + 0x256c) = local_70;
      *(float *)(iVar9 + 0x2570) = local_74;
      *(undefined4 *)(iVar9 + 0x2568) = *(undefined4 *)(iVar9 + 0x2564);
      fStack_3c = param_2[2];
      local_44 = *(undefined8 *)param_2;
      fStack_38 = 0.0;
      uVar19 = FUN_100fad3d(&local_44);
      *(undefined4 *)(iVar9 + 0x2574) = uVar19;
    }
  }
  if ((uVar18 & 0x20) == 0) {
    fVar28 = fVar31;
    if (uVar17 != 0x40000) {
      fVar28 = fVar45;
    }
    FUN_1011520a((fVar28 + fVar2) - fVar33);
    uVar12 = uVar18 & 0x1988705a;
    bVar16 = 1;
    if (((uVar18 >> 0x14 & 1) != 0 || (uVar18 & 0x600000) == 0) &&
       (cVar10 = FUN_101438ec("##rgb",param_2,uVar12 | 0x100004), cVar10 != '\0')) {
      local_254 = 1;
      if (*(int *)(iVar9 + 0x1528) == 0) {
        bVar16 = 1;
      }
      else {
        bVar16 = (uVar18 >> 0x1b & 1) == 0 | *(byte *)(iVar9 + 0x1535);
      }
    }
    if ((uVar18 >> 0x15 & 1) != 0 || (uVar18 & 0x500000) == 0) {
      bVar11 = FUN_101438ec(&DAT_10330e21,param_2,uVar12 | 0x200004);
      local_254 = local_254 | bVar11;
    }
    if ((uVar18 >> 0x16 & 1) != 0 || (uVar18 & 0x300000) == 0) {
      bVar11 = FUN_101438ec("##hex",param_2,uVar12 | 0x400004);
      local_254 = local_254 | bVar11;
    }
    FUN_101154f4();
    if (bVar16 == 0) {
      FUN_100fadb2(*param_2,param_2[1],param_2[2],&local_44,&local_94,&local_a4);
      if (((float)local_44 <= 0.0) && (0.0 < local_70)) {
        if (0.0 < (float)local_a4) {
LAB_101462fd:
          if (0.0 < (float)local_94) goto LAB_10146340;
          fVar37 = local_74 * DAT_102b70e0;
          fVar28 = (float)local_a4;
        }
        else {
          if ((local_78 == (float)local_a4) && (!NAN(local_78) && !NAN((float)local_a4)))
          goto LAB_101462fd;
          fVar37 = local_74;
          fVar28 = local_78 * DAT_102b70e0;
        }
        FUN_100faedd(local_70,fVar37,CONCAT44(param_2,fVar28),param_2 + 1,param_2 + 2);
      }
    }
  }
LAB_10146340:
  if (local_254 != 0) {
    if ((uVar18 >> 0x1b & 1) == 0) {
      if ((uVar18 >> 0x1c & 1) != 0) {
        local_70 = *param_2;
        local_74 = param_2[1];
        local_78 = param_2[2];
        FUN_100faedd(local_70,local_74,local_78,&local_7c,&local_80,&local_84);
      }
    }
    else {
      local_7c = *param_2;
      local_80 = param_2[1];
      local_84 = param_2[2];
      FUN_100fadb2(local_7c,local_80,local_84,&local_70,&local_74,&local_78);
      FUN_10144ac4(&local_74,&local_78);
    }
  }
  local_88 = *(float *)(iVar9 + 0xccc);
  fVar28 = DAT_1028b430;
  if (local_88 <= DAT_1028b430) {
    fVar28 = local_88;
  }
  local_94 = CONCAT44(DAT_102b70a0._4_4_,(float)DAT_102b70a0);
  local_8c = 0x3f800000;
  iVar14 = (int)(float)(-(uint)(local_88 < 0.0) & (uint)DAT_102b70e0 |
                       ~-(uint)(local_88 < 0.0) & (uint)(fVar28 * DAT_102b7090 + DAT_102b70e0));
  iVar21 = iVar14 * 0x1000000;
  local_34 = iVar21 + 0xff0000;
  fStack_3c = (float)(iVar14 << 0x18 | _UNK_102b9628);
  fStack_38 = (float)(iVar14 << 0x18 | _UNK_102b962c);
  local_44 = CONCAT44(iVar14 << 0x18 | _UNK_102b9624,iVar14 << 0x18 | _DAT_102b9620);
  local_30 = iVar21 + 0xff00ff;
  iVar14 = iVar21 + 0xff;
  iVar26 = iVar21 + 0xffffff;
  local_2c = iVar14;
  FUN_100faedd(local_70,0x3f800000,0x3f800000,&local_94,(int)&local_94 + 4,&local_8c);
  uVar19 = FUN_100fad3d(&local_94);
  fStack_98 = *(float *)(iVar9 + 0xccc);
  local_a4 = CONCAT44(local_80,local_7c);
  fStack_9c = local_84;
  uVar12 = FUN_100fad3d(&local_a4);
  local_ac = 0;
  if ((uVar18 >> 0x1a & 1) == 0) {
    if ((uVar18 >> 0x19 & 1) != 0) {
      local_a4 = CONCAT44(fVar43 + fVar3,fVar3 + fVar33);
      FUN_1018b8f0(&local_4c,&local_a4,iVar21 + 0xffffff,uVar19,uVar19,iVar21 + 0xffffff);
      local_a4 = CONCAT44(fVar3 + fStack_48,fVar3 + local_4c);
      FUN_1018b8f0(&local_4c,&local_a4,0,0,iVar21,iVar21);
      FUN_100fe07c(local_4c,fStack_48,fVar3 + local_4c,fVar3 + fStack_48,0);
      fVar33 = DAT_1028b430;
      if (local_74 <= DAT_1028b430) {
        fVar33 = local_74;
      }
      fVar22 = (float10)FUN_10112cc4((float)(int)((float)(~-(uint)(local_74 < 0.0) & (uint)fVar33) *
                                                  fVar3 + local_4c + DAT_102b70e0),
                                     local_4c + DAT_102b8ac0,fVar3 + local_4c + _DAT_102b9554);
      fVar43 = DAT_1028b430 - local_78;
      fVar33 = DAT_1028b430;
      if (fVar43 <= DAT_1028b430) {
        fVar33 = fVar43;
      }
      local_ac = CONCAT44(local_ac._4_4_,(float)fVar22);
      fVar22 = (float10)FUN_10112cc4((float)(int)((float)(~-(uint)(fVar43 < 0.0) & (uint)fVar33) *
                                                  fVar3 + fStack_48 + DAT_102b70e0),
                                     DAT_102b8ac0 + fStack_48,fVar3 + fStack_48 + _DAT_102b9554);
      local_ac = CONCAT44((float)fVar22,(undefined4)local_ac);
      fVar33 = fVar3 / DAT_102b8a58;
      iVar20 = 1;
      do {
        iVar6 = *(int *)((int)&local_44 + iVar20 * 4);
        local_a4 = CONCAT44((float)iVar20 * fVar33 + fStack_48,fVar29);
        local_b4 = CONCAT44((float)(iVar20 + -1) * fVar33 + fStack_48,fVar45);
        FUN_1018b8f0(&local_b4,&local_a4,iVar14,iVar14,iVar6,iVar6);
        iVar20 = iVar20 + 1;
        iVar14 = iVar6;
      } while (iVar20 != 7);
      FUN_100fe07c(fVar45,fStack_48,fVar29,fVar3 + fStack_48,0);
      FUN_1014766d((float)(int)fVar32,DAT_102b8ac0 + fVar2,*(undefined4 *)(iVar9 + 0xccc));
    }
  }
  else {
    fVar28 = DAT_102b70e0 / fVar38;
    uVar15 = FUN_100fbc6a(4,(int)fVar38 / 0xc);
    fVar33 = (float)(_DAT_1028f620 ^ (uint)fVar28);
    fVar38 = fVar38 + fVar39;
    fVar43 = fVar38 * DAT_102b70e0;
    iVar20 = 0;
    do {
      fVar37 = (float)iVar20 / DAT_102b8a58;
      fVar37 = (fVar37 + fVar37) * DAT_102b9604 + fVar33;
      fVar45 = ((float)iVar20 + DAT_1028b430) / DAT_102b8a58;
      fVar29 = (fVar45 + fVar45) * DAT_102b9604 + fVar28;
      uVar7 = *(undefined4 *)(iVar4 + 0x18);
      FUN_10189cf2(&local_54,fVar43,fVar37,fVar29,uVar15);
      FUN_101888a4(*(undefined4 *)(iVar4 + 0x40),*(undefined4 *)(iVar4 + 0x38),iVar26,fVar27,0);
      fVar45 = fStack_50;
      *(undefined4 *)(iVar4 + 0x38) = 0;
      uVar8 = *(undefined4 *)(iVar4 + 0x18);
      dVar34 = (double)fVar37;
      fVar22 = (float10)FUN_102704b0(dVar34);
      fVar37 = local_54;
      fVar23 = (float10)FUN_1026d4b0(dVar34);
      dVar34 = (double)fVar29;
      fVar24 = (float10)FUN_102704b0(dVar34);
      fVar25 = (float10)FUN_1026d4b0(dVar34);
      iVar6 = *(int *)((int)&local_44 + iVar20 * 4 + 4);
      iVar20 = iVar20 + 1;
      FUN_1018e08d(iVar4,uVar7,uVar8,(float)fVar23 * fVar39 + fVar37,(float)fVar22 * fVar39 + fVar45
                   ,(float)fVar25 * fVar39 + fVar37,(float)fVar24 * fVar39 + fVar45,iVar14,iVar6);
      iVar14 = iVar6;
    } while (iVar20 != 6);
    dVar34 = (double)((local_70 + local_70) * DAT_102b9604);
    fVar22 = (float10)FUN_1026d4b0(dVar34);
    fVar23 = (float10)FUN_102704b0(dVar34);
    fVar43 = (float)fVar22;
    fVar28 = (float)fVar23;
    local_a4 = CONCAT44(fVar38 * fVar28 * DAT_102b89c0._4_4_ + fStack_50,
                        fVar38 * fVar43 * (float)DAT_102b89c0 + local_54);
    fVar33 = DAT_102b8c94;
    if (local_24c == 0) {
      fVar33 = DAT_102b8d54;
    }
    fVar33 = fVar33 * fVar27;
    uVar15 = FUN_101880ee(fVar33);
    FUN_1018c0fc(&local_a4,fVar33,uVar19,uVar15);
    FUN_1018bfde(&local_a4,fVar33 + DAT_1028b430,iVar21 + 0x808080,uVar15,0x3f800000);
    FUN_1018bfde(&local_a4,fVar33,iVar21 + 0xffffff,uVar15,0x3f800000);
    fVar33 = (float)(_UNK_1028f624 ^ (uint)fVar28);
    local_b4 = CONCAT44(local_5c * fVar28 + local_58 * fVar43 + fStack_50,
                        local_5c * fVar43 + local_58 * fVar33 + local_54);
    uStack_bc = CONCAT44((float)local_64 * fVar28 + local_64._4_4_ * fVar43 + fStack_50,
                         (float)local_64 * fVar43 + local_64._4_4_ * fVar33 + local_54);
    uStack_c4 = CONCAT44(local_6c * fVar28 + local_68 * fVar43 + fStack_50,
                         local_6c * fVar43 + local_68 * fVar33 + local_54);
    FUN_10111f2c(&uStack_cc);
    FUN_10188516(3,3);
    **(undefined2 **)(iVar4 + 0x34) = *(undefined2 *)(iVar4 + 0x28);
    *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + 2;
    **(undefined8 **)(iVar4 + 0x30) = local_b4;
    *(undefined8 *)(*(int *)(iVar4 + 0x30) + 8) = uStack_cc;
    *(undefined4 *)(*(int *)(iVar4 + 0x30) + 0x10) = uVar19;
    *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 0x14;
    iVar14 = *(int *)(iVar4 + 0x28) + 1;
    *(int *)(iVar4 + 0x28) = iVar14;
    **(undefined2 **)(iVar4 + 0x34) = (short)iVar14;
    *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + 2;
    **(undefined8 **)(iVar4 + 0x30) = uStack_bc;
    *(undefined8 *)(*(int *)(iVar4 + 0x30) + 8) = uStack_cc;
    *(int *)(*(int *)(iVar4 + 0x30) + 0x10) = iVar21;
    *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 0x14;
    iVar14 = *(int *)(iVar4 + 0x28) + 1;
    *(int *)(iVar4 + 0x28) = iVar14;
    **(undefined2 **)(iVar4 + 0x34) = (short)iVar14;
    *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + 2;
    **(undefined8 **)(iVar4 + 0x30) = uStack_c4;
    *(undefined8 *)(*(int *)(iVar4 + 0x30) + 8) = uStack_cc;
    *(int *)(*(int *)(iVar4 + 0x30) + 0x10) = iVar26;
    *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 0x14;
    *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + 1;
    FUN_1018bc68(&local_b4,&uStack_bc,&uStack_c4,iVar21 + 0x808080,0x3fc00000);
    fVar43 = DAT_1028b430 - local_78;
    fVar33 = DAT_1028b430;
    if (fVar43 <= DAT_1028b430) {
      fVar33 = fVar43;
    }
    fVar33 = (float)(~-(uint)(fVar43 < 0.0) & (uint)fVar33);
    fVar43 = DAT_1028b430;
    if (local_74 <= DAT_1028b430) {
      fVar43 = local_74;
    }
    fVar43 = (float)(~-(uint)(local_74 < 0.0) & (uint)fVar43);
    fVar38 = (float)((ulonglong)uStack_c4 >> 0x20);
    fVar28 = fVar43 * ((float)local_b4 - (float)uStack_c4) + (float)uStack_c4;
    fVar38 = fVar43 * ((float)((ulonglong)local_b4 >> 0x20) - fVar38) + fVar38;
    local_ac = CONCAT44(fVar33 * ((float)((ulonglong)uStack_bc >> 0x20) - fVar38) + fVar38,
                        fVar33 * ((float)uStack_bc - fVar28) + fVar28);
  }
  fVar33 = DAT_102b8d54;
  if (local_248 == 0) {
    fVar33 = DAT_102b8e90;
  }
  fVar27 = fVar27 * fVar33;
  uVar19 = FUN_101880ee(fVar27);
  FUN_1018c0fc(&local_ac,fVar27,uVar12,uVar19);
  FUN_1018bfde(&local_ac,DAT_1028b430 + fVar27,iVar21 + 0x808080,uVar19,0x3f800000);
  FUN_1018bfde(&local_ac,fVar27,iVar26,uVar19,0x3f800000);
  if (uVar17 == 0x40000) {
    fStack_98 = fVar3 + fStack_48;
    fStack_9c = fVar2 + fVar31;
    local_a4 = CONCAT44(fStack_48,fVar31);
    FUN_10194f91(iVar4,fVar31,fStack_48,fStack_9c,fStack_98,0,(fStack_9c - fVar31) * DAT_102b70e0,0,
                 0,0,0);
    FUN_1018b8f0(&local_a4,&fStack_9c,uVar12,uVar12,uVar12 & 0xffffff,uVar12 & 0xffffff);
    FUN_100fe07c((int)local_a4,local_a4._4_4_,fStack_9c,fStack_98,0);
    FUN_1014766d((float)(int)fVar32,fVar2 + DAT_102b8ac0,*(undefined4 *)(iVar9 + 0xccc));
  }
  FUN_1011462f();
  if ((local_254 == 0) || (iVar14 = FUN_102595e0(local_28,param_2,cVar1), iVar14 == 0)) {
    uVar19 = 0;
  }
  else {
    uVar19 = CONCAT31((int3)((uint)iVar4 >> 8),1);
    if (*(int *)(iVar9 + 0x1e80) != 0) {
      FUN_10102913(*(int *)(iVar9 + 0x1e80));
    }
  }
  if (iVar5 == 0) {
    *(undefined4 *)(iVar9 + 0x2564) = 0;
  }
  FUN_10113568();
LAB_101472f5:
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


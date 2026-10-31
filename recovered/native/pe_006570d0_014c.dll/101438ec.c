/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101438ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101438ec(int param_1,undefined1 (*param_2) [12],uint param_3)

{
  undefined1 auVar1 [8];
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int iVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  float10 fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  uint local_f8;
  int local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  uint local_c4;
  float local_c0;
  undefined4 local_bc;
  uint local_b8;
  int local_b4;
  undefined4 local_b0;
  uint local_ac;
  int local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 local_24 [8];
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar20 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_f8;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar17 = *(int *)(iVar20 + 0x14cc);
  uVar14 = 0;
  if (*(char *)(iVar17 + 0xfe) == '\0') {
    fVar23 = (float10)FUN_101155f9();
    local_c0 = (float)fVar23;
    local_88 = local_c0;
    local_ec = FUN_100fd57d(param_1,0);
    fVar23 = (float10)FUN_10115533();
    local_a0 = (float)fVar23;
    *(undefined4 *)(iVar20 + 0x1e48) = 0;
    *(undefined4 *)(iVar20 + 0x1e4c) = 0;
    local_8c = local_a0;
    FUN_10115649();
    FUN_101131fa(param_1);
    local_f4 = iVar20;
    local_a8 = *(int *)(iVar20 + 0x2564);
    if (local_a8 == 0) {
      *(undefined4 *)(iVar20 + 0x2564) =
           *(undefined4 *)(*(int *)(iVar17 + 0x140) + -4 + *(int *)(iVar17 + 0x138) * 4);
    }
    uVar14 = param_3 & 0xff8ffff7 | 0x100008;
    if ((param_3 & 0x20) == 0) {
      uVar14 = param_3;
    }
    if ((uVar14 & 8) == 0) {
      FUN_10144686(param_2,uVar14);
    }
    if ((uVar14 & 0x700000) == 0) {
      uVar14 = uVar14 | *(uint *)(local_f4 + 0x2560) & 0x700000;
    }
    if ((uVar14 & 0x1800000) == 0) {
      uVar14 = uVar14 | *(uint *)(local_f4 + 0x2560) & 0x1800000;
    }
    if ((uVar14 & 0x6000000) == 0) {
      uVar14 = uVar14 | *(uint *)(local_f4 + 0x2560) & 0x6000000;
    }
    uVar15 = *(uint *)(local_f4 + 0x2560) & 0x18000000;
    if ((uVar14 & 0x18000000) != 0) {
      uVar15 = 0;
    }
    uVar15 = uVar15 | uVar14;
    local_f0 = *(uint *)(local_f4 + 0x2560) & 0xe00fffff | uVar15;
    uVar4 = (uint)((local_f0 & 2) == 0);
    iVar20 = uVar4 + 3;
    local_cc = 0.0;
    if ((local_f0 & 0x10) == 0) {
      local_cc = *(float *)(local_f4 + 0xd24) + local_c0;
    }
    local_f8 = uVar14;
    fVar23 = (float10)FUN_100fdbca(local_a0 - local_cc,0x3f800000);
    local_e0 = (float)fVar23;
    fStack_18 = (float)DAT_1028b430;
    if ((local_f0 & 2) == 0) {
      fStack_18 = (float)*(undefined4 *)param_2[1];
    }
    _local_24 = *param_2;
    local_ac = uVar15 & 0x10100000;
    uVar10 = (undefined4)*(undefined8 *)*param_2;
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)*param_2 >> 0x20);
    local_c4 = uVar15;
    local_90 = local_e0;
    if (local_ac == 0x10100000) {
      FUN_100faedd(uVar10,uVar8,*(undefined4 *)(*param_2 + 8),local_24,local_24 + 4,local_24 + 8);
    }
    else if ((~uVar15 & 0x8200000) == 0) {
      FUN_100fadb2(uVar10,uVar8,*(undefined4 *)(*param_2 + 8),local_24,local_24 + 4,local_24 + 8);
      FUN_10144ac4(local_24 + 4,local_24 + 8);
    }
    uVar15 = local_f0;
    uVar14 = local_f8;
    local_34 = (int)((float)local_24._0_4_ * _DAT_102b8a20 +
                    (float)(-(uint)(0.0 <= (float)local_24._0_4_) & _DAT_102b8a30 |
                           ~-(uint)(0.0 <= (float)local_24._0_4_) & _DAT_102b9590));
    iStack_30 = (int)((float)local_24._4_4_ * _UNK_102b8a24 +
                     (float)(-(uint)(0.0 <= (float)local_24._4_4_) & _UNK_102b8a34 |
                            ~-(uint)(0.0 <= (float)local_24._4_4_) & _UNK_102b9594));
    iStack_2c = (int)(fStack_1c * _UNK_102b8a28 +
                     (float)(-(uint)(0.0 <= fStack_1c) & _UNK_102b8a38 |
                            ~-(uint)(0.0 <= fStack_1c) & _UNK_102b9598));
    iStack_28 = (int)(fStack_18 * _UNK_102b8a2c +
                     (float)(-(uint)(0.0 <= fStack_18) & _UNK_102b8a3c |
                            ~-(uint)(0.0 <= fStack_18) & _UNK_102b959c));
    local_c8 = *(float *)(iVar17 + 0x144);
    fVar24 = local_cc;
    if (*(int *)(local_f4 + 0xdac) != 0) {
      fVar24 = 0.0;
    }
    local_b0 = *(undefined4 *)(iVar17 + 0x148);
    *(float *)(iVar17 + 0x144) = fVar24 + local_c8;
    local_d0 = iVar17;
    local_b4 = iVar20;
    if (((local_f8 & 0x300000) == 0) || ((local_f0 & 0x20) != 0)) {
      local_e4 = 0;
      uVar14 = 0;
      if (((local_f8 >> 0x16 & 1) != 0) && ((local_f0 & 0x20) == 0)) {
        if ((local_f0 & 2) == 0) {
          local_f8 = FUN_10125d9a(iStack_28,0,0xff);
          uVar10 = FUN_10125d9a(iStack_2c,0,0xff);
          uVar8 = FUN_10125d9a(iStack_30,0,0xff);
          uVar9 = FUN_10125d9a(local_34,0,0xff);
          FUN_100fa4b1(&local_74,0x40,"#%02X%02X%02X%02X",uVar9,uVar8,uVar10,local_f8);
        }
        else {
          uVar10 = FUN_10125d9a(iStack_2c,0,0xff);
          uVar8 = FUN_10125d9a(iStack_30,0,0xff);
          uVar9 = FUN_10125d9a(local_34,0,0xff);
          FUN_100fa4b1(&local_74,0x40,&DAT_1033beec,uVar9,uVar8,uVar10);
        }
        FUN_100fb68f(local_e0);
        pbVar19 = (byte *)&local_74;
        cVar7 = FUN_10141729("##Text",pbVar19,(undefined4)DAT_102b95a0,DAT_102b95a0._4_4_,0,0);
        if (cVar7 == '\0') {
          local_f8 = 0;
        }
        else {
          while ((*pbVar19 - 9 < 0x1b && ((0x4800001U >> (*pbVar19 - 9 & 0x1f) & 1) != 0))) {
            pbVar19 = pbVar19 + 1;
          }
          local_34 = _DAT_102b95b0;
          iStack_30 = _UNK_102b95b4;
          iStack_2c = _UNK_102b95b8;
          iStack_28 = _UNK_102b95bc;
          if ((local_f0 & 2) == 0) {
            uVar10 = FUN_10125a29(pbVar19,"%02X%02X%02X%02X",&local_34,&iStack_30,&iStack_2c,
                                  &iStack_28);
          }
          else {
            uVar10 = FUN_10125a29(pbVar19,"%02X%02X%02X",&local_34,&iStack_30,&iStack_2c);
          }
          local_f8 = CONCAT31((int3)((uint)uVar10 >> 8),1);
        }
        iVar17 = local_d0;
        if ((local_f0 & 8) == 0) {
          FUN_101169c1("context",8);
        }
        local_e4 = 0;
        uVar14 = local_f8;
      }
    }
    else {
      local_d4 = local_e0 - (float)(uVar4 + 2) * *(float *)(local_f4 + 0xd24);
      local_d8 = (float)iVar20;
      if ((local_f0 & 0x200800) == 0) {
        local_b8 = local_f8 & 0x1000000;
        local_e8 = 0;
        local_dc = 0x1000;
      }
      else {
        local_a0 = (float)(int)(local_d4 / local_d8);
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        local_b8 = local_f8 & 0x1000000;
        pcVar13 = "M:0.000";
        if (local_b8 == 0) {
          pcVar13 = "M:000";
        }
        local_dc = 0;
        FUN_100fdb2e(&local_74,pcVar13,0,0,0xbf800000);
        if (local_a0 <= (float)local_74) {
          local_e8 = 0;
        }
        else {
          local_dc = 0;
          local_e8 = ((uVar14 >> 0x15 & 1) != 0) + 1;
        }
      }
      bVar22 = (uVar15 >> 0x13 & 1) != 0;
      local_a0 = 0.0;
      local_bc = DAT_1028b430;
      if (bVar22) {
        local_bc = 0;
      }
      local_a4 = 0xff;
      local_f8 = 0;
      if (bVar22) {
        local_a4 = 0;
      }
      local_e8 = local_e8 << 4;
      piVar16 = &local_34;
      puVar18 = local_24;
      local_e4 = 0;
      iVar21 = 1;
      do {
        if (iVar21 != 1) {
          FUN_10114a0e(0,*(undefined4 *)(local_f4 + 0xd24));
        }
        fVar24 = (float)(int)(((float)iVar21 * local_d4) / local_d8);
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        fVar25 = fVar24 - local_a0;
        local_a0 = fVar24;
        fVar23 = (float10)FUN_100fdbca(fVar25,0x3f800000);
        FUN_100fb68f((float)fVar23);
        iVar17 = DAT_1039d74c;
        if ((local_f0 & 0x200800) == 0) {
          puVar2 = (&PTR_s__s_103344ba_0x2f_102b9384)[iVar21];
          *(uint *)(DAT_1039d74c + 0x1e48) = *(uint *)(DAT_1039d74c + 0x1e48) | 0x20;
          *(undefined **)(iVar17 + 0x1e7c) = puVar2;
        }
        if (local_b8 == 0) {
          bVar6 = FUN_1013838a(*(undefined4 *)(&UNK_102b93ac + iVar21 * 4),piVar16,0x3f800000,0,
                               local_a4,*(undefined4 *)
                                         ((int)&PTR_DAT_102b93bc + iVar21 * 4 + local_e8),local_dc);
          local_f8 = CONCAT31((int3)(local_f8 >> 8),(byte)local_f8 | bVar6);
        }
        else {
          bVar6 = FUN_10137f3c(*(undefined4 *)(&UNK_102b93ac + iVar21 * 4),puVar18,0x3b808081,0,
                               local_bc,*(undefined4 *)
                                         ((int)&PTR_DAT_102b93ec + iVar21 * 4 + local_e8),local_dc);
          bVar6 = (byte)local_f8 | bVar6;
          local_f8 = CONCAT31((int3)(local_f8 >> 8),bVar6);
          local_e4 = CONCAT31((int3)(local_e4 >> 8),(byte)local_e4 | bVar6);
        }
        if ((local_f0 & 8) == 0) {
          FUN_101169c1("context",8);
        }
        piVar16 = piVar16 + 1;
        puVar18 = puVar18 + 4;
        bVar22 = iVar21 != iVar20;
        uVar14 = local_f8;
        iVar17 = local_d0;
        iVar21 = iVar21 + 1;
      } while (bVar22);
    }
    uVar4 = local_f0;
    iVar20 = local_f4;
    uVar15 = 0;
    if ((local_f0 & 0x10) == 0) {
      fVar24 = 0.0;
      if (((local_f0 & 0x20) == 0) && (*(int *)(local_f4 + 0xdac) != 0)) {
        fVar24 = *(float *)(local_f4 + 0xd24) + local_e0;
      }
      *(float *)(iVar17 + 0x144) = fVar24 + local_c8;
      *(undefined4 *)(iVar17 + 0x148) = local_b0;
      uStack_68 = DAT_1028b430;
      if ((local_f0 & 2) == 0) {
        uStack_68 = *(undefined4 *)param_2[1];
      }
      uStack_6c = *(undefined4 *)(*param_2 + 8);
      local_74 = *(undefined8 *)*param_2;
      local_7c = 0;
      local_f8 = uVar14;
      cVar7 = FUN_10144b9b("##ColorButton",&local_74,local_f0,&local_7c);
      if (((uVar4 & 4) == 0) && (cVar7 != '\0')) {
        *(float *)(iVar20 + 0x2578) = (float)local_74;
        *(undefined4 *)(iVar20 + 0x257c) = local_74._4_4_;
        *(undefined4 *)(iVar20 + 0x2580) = uStack_6c;
        *(undefined4 *)(iVar20 + 0x2584) = uStack_68;
        FUN_10115ea4("picker",0);
        local_7c = 0;
        local_80 = *(float *)(local_f4 + 0xd20) + *(float *)(local_f4 + 0x1e98);
        local_84 = *(float *)(local_f4 + 0x1e8c) + 0.0;
        FUN_10111d56(&local_84,0,&local_7c);
      }
      uVar14 = local_f8;
      if ((local_f0 & 8) == 0) {
        FUN_101169c1("context",8);
      }
      uVar15 = 0;
      cVar7 = FUN_10116736("picker",0);
      iVar17 = local_d0;
      if (cVar7 != '\0') {
        uVar15 = *(uint *)(local_f4 + 0x14cc);
        if (*(short *)(uVar15 + 0x108) == 1) {
          if (param_1 != local_ec) {
            FUN_1012cbcc(param_1,local_ec,0);
            FUN_10131d29();
          }
          FUN_100fb68f(local_c0 * DAT_102b8f14);
          bVar6 = FUN_10145288("##picker",param_2,param_3 & 0x1f8c0002 | 0x704080,local_f4 + 0x2578)
          ;
          uVar14 = CONCAT31((int3)(uVar14 >> 8),(byte)uVar14 | bVar6);
        }
        else {
          uVar15 = 0;
        }
        FUN_101165cb();
      }
    }
    iVar20 = local_f4;
    if ((param_1 != local_ec) && ((local_f0 & 0x80) == 0)) {
      local_f8 = uVar15;
      FUN_10114a0e(0,*(undefined4 *)(local_f4 + 0xd24));
      fVar24 = local_cc;
      if ((local_f0 & 0x20) == 0) {
        fVar24 = local_cc + local_e0 + *(float *)(iVar20 + 0xd24);
      }
      *(float *)(iVar17 + 0x144) = local_c8 + fVar24;
      FUN_1012cbcc(param_1,local_ec,0);
      uVar15 = local_f8;
    }
    if ((uVar15 == 0) && ((uVar14 & 1) != 0)) {
      if ((local_e4 & 1) == 0) {
        auVar26._0_4_ = (float)local_34;
        auVar26._4_4_ = (float)iStack_30;
        auVar26._8_4_ = (float)iStack_2c;
        auVar26._12_4_ = (float)iStack_28;
        auVar5._4_4_ = _UNK_102b8a24;
        auVar5._0_4_ = _DAT_102b8a20;
        auVar5._8_4_ = _UNK_102b8a28;
        auVar5._12_4_ = _UNK_102b8a2c;
        _local_24 = divps(auVar26,auVar5);
      }
      if ((~local_c4 & 0x8200000) == 0) {
        *(undefined1 (*) [8])(local_f4 + 0x256c) = local_24;
        FUN_100faedd(local_24._0_4_,local_24._4_4_,fStack_1c,local_24,local_24 + 4,local_24 + 8);
        *(undefined4 *)(local_f4 + 0x2568) = *(undefined4 *)(local_f4 + 0x2564);
        local_74 = local_24;
        uStack_6c = fStack_1c;
        uStack_68 = 0;
        uVar10 = FUN_100fad3d(&local_74);
        *(undefined4 *)(local_f4 + 0x2574) = uVar10;
      }
      auVar1 = local_24;
      fVar24 = fStack_1c;
      if (local_ac == 0x10100000) {
        FUN_100fadb2(SUB84(local_24,0),(int)((ulonglong)local_24 >> 0x20),fStack_1c,local_24,
                     local_24 + 4,local_24 + 8);
        auVar1 = local_24;
        fVar24 = fStack_1c;
      }
      *(undefined1 (*) [8])*param_2 = auVar1;
      *(float *)(*param_2 + 8) = fVar24;
      if ((local_f0 & 2) == 0) {
        *(float *)param_2[1] = fStack_18;
      }
    }
    if (local_a8 == 0) {
      *(undefined4 *)(local_f4 + 0x2564) = 0;
    }
    FUN_10113568();
    FUN_1011462f();
    iVar17 = local_f4;
    if ((((*(byte *)(local_f4 + 0x1e88) & 1) != 0) &&
        ((local_f0 & 0x200) == 0 && (*(uint *)(local_f4 + 0x1e84) & 0x800) == 0)) &&
       (cVar7 = FUN_10117e47(), iVar17 = local_f4, cVar7 != '\0')) {
      local_f8 = uVar14;
      puVar11 = (undefined4 *)FUN_10117f03("_COL3F",0);
      if (puVar11 != (undefined4 *)0x0) {
        puVar3 = (undefined8 *)*puVar11;
        *(undefined4 *)(*param_2 + 8) = *(undefined4 *)(puVar3 + 1);
        *(undefined8 *)*param_2 = *puVar3;
        local_f8 = CONCAT31((int3)((uint)puVar3 >> 8),1);
      }
      puVar12 = (undefined4 *)FUN_10117f03("_COL4F",0);
      if (puVar12 != (undefined4 *)0x0) {
        uVar10 = FUN_1025b2d0(param_2,*puVar12,local_b4 << 2);
        local_f8 = CONCAT31((int3)((uint)uVar10 >> 8),1);
      }
      if ((puVar12 != (undefined4 *)0x0 || puVar11 != (undefined4 *)0x0) &&
          (local_c4 >> 0x1c & 1) != 0) {
        FUN_100fadb2(*(undefined4 *)*param_2,*(undefined4 *)(*param_2 + 4),
                     *(undefined4 *)(*param_2 + 8),param_2,*param_2 + 4,*param_2 + 8);
      }
      FUN_101182df();
      uVar14 = local_f8;
    }
    if (((uVar15 != 0) && (*(int *)(iVar17 + 0x1528) != 0)) &&
       (*(uint *)(iVar17 + 0x154c) == uVar15)) {
      *(int *)(iVar17 + 0x1e80) = *(int *)(iVar17 + 0x1528);
    }
    if (((char)uVar14 == '\x01') && (*(int *)(iVar17 + 0x1e80) != 0)) {
      FUN_10102913(*(int *)(iVar17 + 0x1e80));
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar14 & 0xffffff01;
}


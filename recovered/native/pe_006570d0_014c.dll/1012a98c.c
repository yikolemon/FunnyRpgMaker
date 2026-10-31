/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012a98c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1012a98c(undefined4 *param_1,int param_2)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  byte bVar9;
  char cVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  float *pfVar16;
  undefined4 uVar17;
  char *pcVar18;
  int iVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  undefined1 auStack_120 [3];
  byte local_11d;
  uint local_11c;
  undefined4 *local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined1 local_105;
  int local_104;
  uint local_100;
  uint local_fc;
  undefined4 *local_f8;
  int local_f4;
  undefined4 *puStack_f0;
  int local_ec;
  uint uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float local_a4 [36];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_120;
  local_f4 = param_1[0x24];
  local_114 = DAT_1039d74c;
  local_ec = *(int *)(DAT_1039d74c + 4);
  bVar2 = *(byte *)(param_1 + 0x2b);
  *(byte *)(param_1 + 0x2b) = bVar2 & 0xbf;
  param_1[0x28] = 0;
  puVar20 = param_1;
  do {
    puVar11 = puVar20;
    puVar20 = (undefined4 *)puVar11[6];
  } while ((undefined4 *)puVar11[6] != (undefined4 *)0x0);
  local_110 = param_2;
  bVar9 = FUN_1012b652();
  if ((param_1[4] & 0x3000) != 0) {
    if ((int)param_1[9] < 1) {
      param_1[0x1f] = 0;
      *(byte *)(param_1 + 0x2b) = bVar2 & 0xbd | bVar9 * '\x02';
      if (bVar9 != 0) {
        param_1[0x25] = *(undefined4 *)(local_114 + 4);
      }
      goto LAB_1012b317;
    }
    iVar22 = *(int *)param_1[0xb];
    param_1[0x1f] = iVar22;
    *(byte *)(param_1 + 0x2b) = bVar2 & 0xbd | bVar9 * '\x02';
    if (bVar9 == 0) {
      if (iVar22 == 0) goto LAB_1012b317;
      if (puVar11[0x1f] == 0) goto LAB_1012ab6a;
    }
    else {
      param_1[0x25] = *(undefined4 *)(local_114 + 4);
      if (iVar22 == 0) goto LAB_1012b317;
LAB_1012ab6a:
      puVar11[0x1f] = iVar22;
    }
    if (param_1[0xc] != 0) {
      *(undefined4 *)(param_1[0xc] + 0x24) = *(undefined4 *)(param_1[0x1f] + 0xb8);
    }
    goto LAB_1012b317;
  }
  local_105 = *(undefined1 *)(local_110 + 0xfe);
  if (((uint)param_1[4] >> 10 & 1) == 0) {
    *(undefined1 *)(local_110 + 0xfe) = 0;
    *(undefined4 *)(local_110 + 0x19c) = 1;
  }
  local_11d = bVar9;
  local_f8 = puVar11;
  FUN_10113406(*param_1);
  iVar22 = local_114;
  local_11c = param_1[0xc];
  local_fc = local_11c;
  if (local_11c == 0) {
    FUN_10129a64();
    local_11c = param_1[0xc];
  }
  uVar21 = CONCAT31((int3)(local_11c >> 8),*(undefined1 *)(param_1 + 0x2b)) & 0xfffffffd;
  *(byte *)(param_1 + 0x2b) = (byte)uVar21 | local_11d * '\x02';
  if (((*(byte *)((int)param_1 + 0x11) & 0x40) == 0) &&
     (local_104 = 0, *(int *)(iVar22 + 0xcf8) != -1)) {
    local_118 = (undefined4 *)CONCAT31((int3)(uVar21 >> 8),1);
    cVar10 = FUN_10115db9("#WindowMenu",0);
    if (cVar10 != '\0') {
      iVar22 = *(int *)(local_11c + 0x1c);
      FUN_1012b6d1();
      iVar14 = *(int *)(local_11c + 0x1c);
      local_104 = 0;
      if (iVar14 != iVar22) {
        local_104 = iVar14;
      }
      if (iVar14 == 0) {
        local_104 = iVar14;
      }
      local_11d = local_11d | (*(byte *)(param_1 + 0x2b) & 2) >> 1;
    }
  }
  else {
    local_104 = 0;
    local_118 = (undefined4 *)0x0;
  }
  uVar21 = local_11c;
  local_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  local_cc = 0;
  local_d4 = 0;
  FUN_1012b7db(&local_c4,&local_cc,&local_d4);
  local_100 = *(uint *)(uVar21 + 4);
  if (0 < (int)param_1[9]) {
    iVar22 = 0;
    do {
      iVar14 = *(int *)(param_1[0xb] + iVar22 * 4);
      iVar12 = FUN_1014f645(local_11c,*(undefined4 *)(iVar14 + 0xb8));
      if (iVar12 == 0) {
        FUN_1014f6d0(local_11c,0x800000,iVar14);
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 < (int)param_1[9]);
  }
  iVar14 = local_110;
  iVar22 = local_114;
  uVar13 = 10;
  if (local_11d != 0) {
    param_1[0x25] = *(undefined4 *)(local_114 + 4);
    uVar13 = 0xb;
  }
  uVar17 = 0xc;
  if (*(char *)(local_110 + 0xfc) == '\0') {
    uVar17 = uVar13;
  }
  local_10c = FUN_100fcb39(uVar17,0x3f800000);
  local_a4[0] = *(float *)(iVar14 + 0x50);
  local_a4[1] = *(float *)(iVar14 + 0x54);
  local_a4[2] = (float)*(undefined8 *)(iVar14 + 0x58) + local_a4[0];
  local_a4[3] = (float)((ulonglong)*(undefined8 *)(iVar14 + 0x58) >> 0x20) + local_a4[1];
  uVar13 = FUN_10194f0c(&local_b4,local_a4,*(undefined4 *)(iVar22 + 0xdec));
  FUN_1018b85a(&local_b4,&uStack_ac,local_10c,*(undefined4 *)(iVar14 + 0x88),uVar13);
  uVar21 = local_11c;
  if ((char)local_118 != '\0') {
    uVar13 = FUN_101021d4("#COLLAPSE",0);
    cVar10 = FUN_1012e8bb(uVar13,&local_cc,param_1);
    if (cVar10 != '\0') {
      FUN_10115ea4("#WindowMenu",0);
    }
    cVar10 = FUN_1010bee1();
    uVar21 = local_11c;
    if (cVar10 != '\0') {
      local_104 = *(int *)(local_11c + 0x18);
    }
    cVar10 = FUN_10102a1a(0x11000);
    if ((cVar10 != '\0') && (DAT_102b70e0 < *(float *)(iVar22 + 0x151c))) {
      pcVar18 = "*Missing Text*";
      if (*(char **)(DAT_1039d74c + 0x2744) != (char *)0x0) {
        pcVar18 = *(char **)(DAT_1039d74c + 0x2744);
      }
      FUN_10103022("%s",pcVar18);
    }
  }
  uVar23 = *(uint *)(uVar21 + 4);
  local_118 = param_1;
  if (0 < (int)uVar23) {
    iVar14 = uVar23 * 0x30 + -0x2c;
    do {
      uVar15 = *(uint *)(*(int *)(uVar21 + 0xc) + iVar14);
      if ((uVar15 >> 0x17 & 1) == 0) goto LAB_1012ada7;
      *(uint *)(*(int *)(uVar21 + 0xc) + iVar14) = uVar15 & 0xff7fffff;
      iVar14 = iVar14 + -0x30;
      bVar4 = 1 < uVar23;
      uVar23 = uVar23 - 1;
    } while (bVar4);
    uVar23 = 0;
LAB_1012ada7:
    uVar15 = *(uint *)(uVar21 + 4);
    if (uVar15 - uVar23 != 0 && (int)uVar23 <= (int)uVar15) {
      if ((*(byte *)(iVar22 + 0x27b5) & 4) != 0) {
        pcVar18 = "";
        if (uVar23 + 1 < uVar15) {
          pcVar18 = " (will sort)";
        }
        FUN_100f99e6("[docking] In node 0x%08X: %d new appearing tabs:%s\n",*param_1,uVar15 - uVar23
                     ,pcVar18);
        uVar15 = *(uint *)(uVar21 + 4);
      }
      if ((int)uVar23 < (int)uVar15) {
        iVar14 = uVar23 * 0x30;
        uVar21 = uVar23;
        do {
          if ((*(byte *)(iVar22 + 0x27b5) & 4) != 0) {
            iVar22 = *(int *)(*(int *)(local_11c + 0xc) + 8 + iVar14);
            local_10c = -1;
            if (iVar22 != 0) {
              local_10c = (int)*(short *)(iVar22 + 0x40a);
            }
            puVar20 = (undefined4 *)(*(int *)(local_11c + 0xc) + iVar14);
            uVar13 = FUN_1014f6a8(local_11c,puVar20);
            FUN_100f99e6("[docking] - Tab 0x%08X \'%s\' Order %d\n",*puVar20,uVar13,local_10c);
            uVar15 = *(uint *)(local_11c + 4);
            iVar22 = local_114;
          }
          uVar21 = uVar21 + 1;
          iVar14 = iVar14 + 0x30;
        } while ((int)uVar21 < (int)uVar15);
      }
      param_1 = local_118;
      uVar21 = local_11c;
      if ((*(byte *)(iVar22 + 0x27b5) & 4) != 0) {
        if (*(int *)(iVar22 + 0x2048) == 0) {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = *(undefined4 *)(*(int *)(iVar22 + 0x2048) + 0xb8);
        }
        FUN_100f99e6("[docking] SelectedTabId = 0x%08X, NavWindow->TabId = 0x%08X\n",local_118[0x27]
                     ,uVar13);
        uVar15 = *(uint *)(uVar21 + 4);
      }
      if (((int)(uVar23 + 1) < (int)uVar15) && (1 < uVar15 - uVar23)) {
        FUN_1026fb00(uVar23 * 0x30 + *(int *)(uVar21 + 0xc),uVar15 - uVar23,0x30,&LAB_1012b90e);
      }
    }
  }
  if ((*(int *)(iVar22 + 0x2048) != 0) &&
     (iVar14 = *(int *)(*(int *)(iVar22 + 0x2048) + 0x3a8),
     *(undefined4 **)(iVar14 + 0x430) == param_1)) {
    *(undefined4 *)(uVar21 + 0x18) = *(undefined4 *)(iVar14 + 0xb8);
  }
  if ((local_fc == 0) && (iVar14 = FUN_1014f645(uVar21,param_1[0x27]), iVar14 != 0)) {
    puVar20 = param_1 + 0x27;
LAB_1012af11:
    uVar13 = *puVar20;
    *(undefined4 *)(uVar21 + 0x1c) = uVar13;
    *(undefined4 *)(uVar21 + 0x18) = uVar13;
  }
  else if ((int)local_100 < *(int *)(uVar21 + 4)) {
    puVar20 = (undefined4 *)
              (*(int *)(*(int *)(uVar21 + 0xc) + -0x28 + *(int *)(uVar21 + 4) * 0x30) + 0xb8);
    goto LAB_1012af11;
  }
  local_f4 = local_f4 + 1;
  uVar23 = (*(byte *)(local_110 + 0xfc) ^ 1) << 0x15 | 0x5000c3;
  if (local_11d == 0) {
    uVar23 = 0x5000c3;
  }
  *(undefined4 *)(uVar21 + 0x14) = *param_1;
  *(float *)(uVar21 + 0x6c) = (float)param_1[0xd] + *(float *)(local_110 + 0x8c);
  *(float *)(uVar21 + 0x70) =
       ((float)param_1[0xd] + (float)param_1[0xf]) - *(float *)(local_110 + 0x8c);
  FUN_1014e42d(uVar21,&local_c4,uVar23);
  _memset(local_a4,0,0x90);
  pfVar1 = (float *)(iVar22 + 0xe00);
  iVar14 = 0;
  do {
    pfVar16 = pfVar1 + *(int *)((int)&DAT_102b86b8 + iVar14) * 4;
    fVar5 = pfVar16[1];
    fVar6 = pfVar16[2];
    fVar7 = pfVar16[3];
    local_a4[iVar14] = *pfVar16;
    local_a4[iVar14 + 1] = fVar5;
    local_a4[iVar14 + 2] = fVar6;
    local_a4[iVar14 + 3] = fVar7;
    iVar14 = iVar14 + 4;
  } while (iVar14 != 0x24);
  param_1[0x1f] = 0;
  iVar14 = param_1[9];
  iVar12 = iVar22;
  if (0 < iVar14) {
    puStack_f0 = (undefined4 *)(iVar22 + 0x1e8c);
    iVar19 = 0;
    do {
      iVar3 = *(int *)(param_1[0xb] + iVar19 * 4);
      if ((*(int *)(iVar12 + 4) <= *(int *)(iVar3 + 0x2b4) + 1) || (local_f4 != local_ec)) {
        local_100 = *(uint *)(iVar3 + 0xc);
        uStack_e8 = *(uint *)(iVar3 + 0x2c);
        local_fc = *(uint *)(uVar21 + 0x10);
        iVar14 = 0x40c;
        local_10c = iVar19;
        do {
          FUN_100faced(&fStack_e4,*(undefined4 *)(iVar3 + iVar14));
          uVar21 = local_11c;
          pfVar16 = pfVar1 + *(int *)((int)&PTR_s_CapsLock_102b82ac + iVar14) * 4;
          *pfVar16 = fStack_e4;
          pfVar16[1] = fStack_e0;
          pfVar16[2] = fStack_dc;
          pfVar16[3] = fStack_d8;
          iVar14 = iVar14 + 4;
        } while (iVar14 != 0x430);
        fStack_e4 = (float)CONCAT31(fStack_e4._1_3_,1);
        pfVar16 = (float *)0x0;
        if (*(char *)(iVar3 + 0x104) != '\0') {
          pfVar16 = &fStack_e4;
        }
        FUN_1014fb74(local_11c,*(undefined4 *)(iVar3 + 4),pfVar16,
                     local_fc >> 1 & 4 | local_100 >> 0x12 & 1 | uStack_e8,iVar3);
        iVar14 = *(int *)(iVar3 + 0xb8);
        if (fStack_e4._0_1_ == '\0') {
          local_118[0x28] = iVar14;
        }
        if (*(int *)(uVar21 + 0x24) == iVar14) {
          local_118[0x1f] = iVar3;
        }
        *(undefined4 *)(iVar3 + 0x204) = *(undefined4 *)(local_114 + 0x1e88);
        uVar13 = puStack_f0[1];
        uVar17 = puStack_f0[2];
        uVar8 = puStack_f0[3];
        *(undefined4 *)(iVar3 + 0x208) = *puStack_f0;
        *(undefined4 *)(iVar3 + 0x20c) = uVar13;
        *(undefined4 *)(iVar3 + 0x210) = uVar17;
        *(undefined4 *)(iVar3 + 0x214) = uVar8;
        if (((*(int *)(local_114 + 0x2048) != 0) &&
            (*(int *)(*(int *)(local_114 + 0x2048) + 0x3a8) == iVar3)) &&
           ((*(byte *)(iVar3 + 0x1a0) & 2) == 0)) {
          *(undefined4 *)(local_110 + 0x3c8) = *(undefined4 *)(iVar3 + 0xb8);
        }
        iVar14 = local_118[9];
        iVar19 = local_10c;
        iVar12 = local_114;
      }
      iVar19 = iVar19 + 1;
      param_1 = local_118;
    } while (iVar19 < iVar14);
  }
  iVar14 = 0;
  do {
    iVar19 = *(int *)((int)&DAT_102b86b8 + iVar14);
    fVar5 = local_a4[iVar14 + 1];
    fVar6 = local_a4[iVar14 + 2];
    fVar7 = local_a4[iVar14 + 3];
    pfVar16 = pfVar1 + iVar19 * 4;
    *pfVar16 = local_a4[iVar14];
    pfVar16[1] = fVar5;
    pfVar16[2] = fVar6;
    pfVar16[3] = fVar7;
    iVar14 = iVar14 + 4;
  } while (iVar14 != 0x24);
  puVar20 = (undefined4 *)(iVar19 * 0x10);
  if ((param_1[0x1f] != 0) && ((puVar20 = local_f8, local_11d != 0 || (local_f8[0x1f] == 0)))) {
    local_f8[0x1f] = param_1[0x1f];
  }
  if ((*(byte *)(param_1 + 0x2b) & 8) != 0) {
    if ((param_1[0x1f] == 0) ||
       (iVar14 = CONCAT31((int3)((uint)puVar20 >> 8),1), *(char *)(param_1[0x1f] + 0x104) == '\0'))
    {
      FUN_1011177d(0x40,1);
      fStack_e4 = *pfVar1 * _DAT_102b9140;
      fStack_e0 = *(float *)(iVar22 + 0xe04) * _UNK_102b9144;
      fStack_dc = *(float *)(iVar22 + 0xe08) * _UNK_102b9148;
      fStack_d8 = *(float *)(iVar22 + 0xe0c) * _UNK_102b914c;
      FUN_100fcd80(0,&fStack_e4);
      iVar14 = 0;
    }
    local_10c = iVar14;
    uVar13 = FUN_101021d4("#CLOSE",0);
    cVar10 = FUN_1012e639(uVar13,&local_d4);
    uVar21 = local_11c;
    if ((cVar10 != '\0') &&
       (*(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 0x40, 0 < *(int *)(local_11c + 4)))
    {
      iVar22 = 0;
      iVar14 = 0;
      do {
        FUN_1014f84b(uVar21,*(int *)(uVar21 + 0xc) + iVar22);
        iVar14 = iVar14 + 1;
        iVar22 = iVar22 + 0x30;
      } while (iVar14 < *(int *)(uVar21 + 4));
    }
    iVar12 = local_114;
    if ((char)local_10c == '\0') {
      FUN_100fce8e(1);
      FUN_10111839();
    }
  }
  iVar22 = FUN_101021d4("#TITLEBAR",0);
  if (((*(int *)(iVar12 + 0x1510) == 0) || (*(int *)(iVar12 + 0x1510) == iVar22)) ||
     (puVar20 = local_118, iVar14 = local_104, *(int *)(iVar12 + 0x1528) == iVar22)) {
    FUN_10103c09(iVar22);
    FUN_1012d77e(&local_b4,iVar22,0,&fStack_e4,0x1000);
    if (*(int *)(iVar12 + 0x1510) == iVar22) {
      *(int *)(iVar12 + 0x1e80) = iVar22;
    }
    puVar20 = local_118;
    iVar14 = local_104;
    if (fStack_e4._0_1_ == '\x01') {
      cVar10 = FUN_1010377a(0,0);
      iVar14 = local_104;
      if (cVar10 != '\0') {
        iVar14 = *(int *)(uVar21 + 0x18);
      }
      iVar22 = FUN_1014f645(uVar21,*(int *)(uVar21 + 0x18));
      puVar20 = local_118;
      if (iVar22 != 0) {
        iVar22 = *(int *)(iVar22 + 8);
        if (iVar22 == 0) {
          iVar22 = local_118[0x1e];
        }
        FUN_101036bb(iVar22,local_118,0);
      }
    }
  }
  if (*(int *)(local_11c + 0x1c) != 0) {
    iVar14 = *(int *)(local_11c + 0x1c);
  }
  if (((iVar14 != 0) && (iVar22 = FUN_1014f645(local_11c,iVar14), iVar22 != 0)) &&
     ((*(int *)(iVar22 + 8) != 0 &&
      (FUN_101034e2(*(int *)(iVar22 + 8),0), *(int *)(local_114 + 0x2044) == 0)))) {
    FUN_1010c53d(*(undefined4 *)(iVar22 + 8),0);
  }
  FUN_1014e72b();
  FUN_10113568();
  if ((*(byte *)((int)puVar20 + 0x11) & 4) == 0) {
    *(undefined4 *)(local_110 + 0x19c) = 0;
    *(undefined1 *)(local_110 + 0xfe) = local_105;
  }
LAB_1012b317:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_120)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}


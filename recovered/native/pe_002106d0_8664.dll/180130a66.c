/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180130a66 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180130a66(undefined4 *param_1,longlong param_2)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  float *pfVar21;
  char *pcVar22;
  int iVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  byte bVar26;
  longlong lVar27;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 local_180;
  int local_170;
  undefined1 local_169;
  longlong local_168;
  ulonglong local_160;
  undefined4 *local_158;
  longlong local_150;
  int local_144;
  longlong local_140;
  longlong local_138;
  int local_12c;
  undefined4 *local_128;
  undefined4 *local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8 [36];
  ulonglong local_48;
  
  lVar20 = DAT_180419160;
  local_48 = DAT_180402640 ^ (ulonglong)auStack_1a8;
  local_144 = param_1[0x2e];
  local_12c = *(int *)(DAT_180419160 + 4);
  bVar2 = *(byte *)(param_1 + 0x35);
  *(byte *)(param_1 + 0x35) = bVar2 & 0xbf;
  param_1[0x32] = 0;
  puVar25 = param_1;
  do {
    puVar13 = puVar25;
    puVar25 = *(undefined4 **)(puVar13 + 6);
  } while (*(undefined4 **)(puVar13 + 6) != (undefined4 *)0x0);
  local_140 = param_2;
  uVar11 = FUN_18013185f(param_1,puVar13);
  lVar18 = local_140;
  bVar26 = (byte)uVar11;
  if ((param_1[4] & 0x3000) != 0) {
    if ((int)param_1[0xc] < 1) {
      *(undefined8 *)(param_1 + 0x26) = 0;
      *(byte *)(param_1 + 0x35) = bVar2 & 0xbd | bVar26 * '\x02';
      if (bVar26 != 0) {
        param_1[0x2f] = *(undefined4 *)(lVar20 + 4);
      }
      goto LAB_1801314c9;
    }
    lVar18 = **(longlong **)(param_1 + 0xe);
    *(longlong *)(param_1 + 0x26) = lVar18;
    *(byte *)(param_1 + 0x35) = bVar2 & 0xbd | bVar26 * '\x02';
    if (bVar26 == 0) {
      if (lVar18 == 0) goto LAB_1801314c9;
      if (*(longlong *)(puVar13 + 0x26) == 0) goto LAB_180130c5c;
    }
    else {
      param_1[0x2f] = *(undefined4 *)(lVar20 + 4);
      if (lVar18 == 0) goto LAB_1801314c9;
LAB_180130c5c:
      *(longlong *)(puVar13 + 0x26) = lVar18;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x2c) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x26) + 200);
    }
    goto LAB_1801314c9;
  }
  local_169 = *(undefined1 *)(local_140 + 0x10e);
  if (((uint)param_1[4] >> 10 & 1) == 0) {
    *(undefined1 *)(local_140 + 0x10e) = 0;
    *(undefined4 *)(local_140 + 0x1b0) = 1;
  }
  local_128 = puVar13;
  FUN_1801181c5(*param_1);
  lVar27 = *(longlong *)(param_1 + 0x10);
  local_138 = lVar27;
  if (lVar27 == 0) {
    FUN_18012fbcb(param_1);
    lVar27 = *(longlong *)(param_1 + 0x10);
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xfd | bVar26 * '\x02';
  local_150 = lVar20;
  local_160 = (ulonglong)uVar11;
  if (((*(byte *)((longlong)param_1 + 0x11) & 0x40) == 0) && (*(int *)(lVar20 + 0xde0) != -1)) {
    local_170 = 0;
    cVar10 = FUN_18011ab75("#WindowMenu",0);
    bVar5 = true;
    if (cVar10 != '\0') {
      iVar19 = *(int *)(lVar27 + 0x24);
      FUN_1801318f1(param_1,lVar27);
      iVar23 = *(int *)(lVar27 + 0x24);
      local_170 = 0;
      if (iVar23 != iVar19) {
        local_170 = iVar23;
      }
      if (iVar23 == 0) {
        local_170 = iVar23;
      }
      local_160 = (ulonglong)
                  CONCAT31((int3)(uVar11 >> 8),bVar26 | (*(byte *)(param_1 + 0x35) & 2) >> 1);
    }
  }
  else {
    bVar5 = false;
    local_170 = 0;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_100 = 0;
  local_188 = &local_108;
  local_108 = 0;
  FUN_180131a0e(param_1);
  local_158 = (undefined4 *)CONCAT44(local_158._4_4_,*(undefined4 *)(lVar27 + 8));
  if (0 < (int)param_1[0xc]) {
    lVar20 = 0;
    do {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xe) + lVar20 * 8);
      lVar14 = FUN_1801537ff(lVar27,*(undefined4 *)(lVar15 + 200));
      if (lVar14 == 0) {
        FUN_180153888(lVar27,0x800000,lVar15);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < (int)param_1[0xc]);
  }
  lVar20 = local_150;
  uVar12 = 10;
  if ((char)local_160 != '\0') {
    param_1[0x2f] = *(undefined4 *)(local_150 + 4);
    uVar12 = 0xb;
  }
  uVar17 = 0xc;
  if (*(char *)(lVar18 + 0x10c) == '\0') {
    uVar17 = uVar12;
  }
  local_168 = lVar27;
  uVar12 = FUN_18010129b(uVar17,DAT_1802ac570);
  local_d8[0] = *(float *)(lVar18 + 0x60);
  local_d8[1] = *(float *)(lVar18 + 100);
  local_d8[2] = (float)*(undefined8 *)(lVar18 + 0x68) + local_d8[0];
  local_d8[3] = (float)((ulonglong)*(undefined8 *)(lVar18 + 0x68) >> 0x20) + local_d8[1];
  local_180 = FUN_18019c9e3(&local_e8,local_d8,*(undefined4 *)(lVar20 + 0xed4));
  local_188 = (undefined8 *)CONCAT44(local_188._4_4_,*(undefined4 *)(lVar18 + 0x98));
  FUN_180192d20(*(undefined8 *)(lVar18 + 800),&local_e8,&uStack_e0,uVar12);
  lVar27 = local_168;
  if (bVar5) {
    uVar12 = FUN_180106d4e(lVar18,"#COLLAPSE",0);
    cVar10 = FUN_180134936(uVar12,&local_100,param_1);
    lVar27 = local_168;
    if (cVar10 != '\0') {
      FUN_18011ac8e("#WindowMenu",0);
    }
    cVar10 = FUN_180110b56();
    if (cVar10 != '\0') {
      local_170 = *(int *)(lVar27 + 0x20);
    }
    cVar10 = FUN_18010759c(0x11000);
    if ((cVar10 != '\0') && (DAT_1802dbb2c < *(float *)(lVar20 + 0x1670))) {
      pcVar22 = "*Missing Text*";
      if (*(char **)(DAT_180419160 + 0x2a38) != (char *)0x0) {
        pcVar22 = *(char **)(DAT_180419160 + 0x2a38);
      }
      FUN_180107bf7("%s",pcVar22);
    }
  }
  uVar24 = (ulonglong)*(int *)(lVar27 + 8);
  if (0 < (longlong)uVar24) {
    lVar15 = uVar24 * 0x38 + -0x34;
    do {
      uVar11 = *(uint *)(*(longlong *)(lVar27 + 0x10) + lVar15);
      if ((uVar11 >> 0x17 & 1) == 0) goto LAB_180130ea9;
      *(uint *)(*(longlong *)(lVar27 + 0x10) + lVar15) = uVar11 & 0xff7fffff;
      lVar15 = lVar15 + -0x38;
      bVar5 = 1 < uVar24;
      uVar24 = uVar24 - 1;
    } while (bVar5);
    uVar24 = 0;
LAB_180130ea9:
    iVar19 = *(int *)(lVar27 + 8);
    iVar23 = (int)uVar24;
    if (iVar19 - iVar23 != 0 && iVar23 <= iVar19) {
      if ((*(byte *)(lVar20 + 0x2acd) & 4) != 0) {
        pcVar22 = "";
        if (iVar23 + 1 < iVar19) {
          pcVar22 = " (will sort)";
        }
        FUN_1800fdfea("[docking] In node 0x%08X: %d new appearing tabs:%s\n",*param_1,
                      iVar19 - iVar23,pcVar22);
        iVar19 = *(int *)(lVar27 + 8);
      }
      if (iVar23 < iVar19) {
        lVar15 = (longlong)iVar23;
        lVar18 = lVar15 * 0x38;
        do {
          lVar14 = local_168;
          if ((*(byte *)(lVar20 + 0x2acd) & 4) != 0) {
            lVar4 = *(longlong *)(*(longlong *)(lVar27 + 0x10) + 8 + lVar18);
            if (lVar4 == 0) {
              iVar19 = -1;
            }
            else {
              iVar19 = (int)*(short *)(lVar4 + 0x496);
            }
            puVar25 = (undefined4 *)(*(longlong *)(lVar27 + 0x10) + lVar18);
            uVar16 = FUN_180153860(local_168,puVar25);
            FUN_1800fdfea("[docking] - Tab 0x%08X \'%s\' Order %d\n",*puVar25,uVar16,iVar19);
            iVar19 = *(int *)(lVar14 + 8);
            lVar27 = lVar14;
          }
          lVar15 = lVar15 + 1;
          lVar18 = lVar18 + 0x38;
        } while (lVar15 < iVar19);
      }
      lVar18 = local_140;
      if ((*(byte *)(lVar20 + 0x2acd) & 4) != 0) {
        if (*(longlong *)(lVar20 + 0x2200) == 0) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = *(undefined4 *)(*(longlong *)(lVar20 + 0x2200) + 200);
        }
        FUN_1800fdfea("[docking] SelectedTabId = 0x%08X, NavWindow->TabId = 0x%08X\n",param_1[0x31],
                      uVar12);
        iVar19 = *(int *)(lVar27 + 8);
      }
      if ((iVar23 + 1 < iVar19) && (1 < (uint)(iVar19 - iVar23))) {
        FUN_180289570((longlong)iVar23 * 0x38 + *(longlong *)(lVar27 + 0x10),
                      (longlong)(iVar19 - iVar23),0x38,&LAB_180131b5d);
      }
    }
  }
  uVar24 = local_160;
  if ((*(longlong *)(lVar20 + 0x2200) != 0) &&
     (lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x2200) + 0x418),
     *(undefined4 **)(lVar20 + 0x4c0) == param_1)) {
    *(undefined4 *)(lVar27 + 0x20) = *(undefined4 *)(lVar20 + 200);
  }
  if ((local_138 == 0) && (lVar20 = FUN_1801537ff(lVar27,param_1[0x31]), lVar20 != 0)) {
    puVar25 = param_1 + 0x31;
LAB_180131038:
    uVar12 = *puVar25;
    *(undefined4 *)(lVar27 + 0x24) = uVar12;
    *(undefined4 *)(lVar27 + 0x20) = uVar12;
  }
  else if ((int)local_158 < *(int *)(lVar27 + 8)) {
    puVar25 = (undefined4 *)
              (*(longlong *)
                (*(longlong *)(lVar27 + 0x10) + -0x30 + (longlong)*(int *)(lVar27 + 8) * 0x38) + 200
              );
    goto LAB_180131038;
  }
  local_144 = local_144 + 1;
  uVar11 = (*(byte *)(lVar18 + 0x10c) ^ 1) << 0x15 | 0x5000c3;
  if ((char)uVar24 == '\0') {
    uVar11 = 0x5000c3;
  }
  *(undefined4 *)(lVar27 + 0x1c) = *param_1;
  *(float *)(lVar27 + 0x74) = (float)param_1[0x12] + *(float *)(lVar18 + 0x9c);
  *(float *)(lVar27 + 0x78) =
       ((float)param_1[0x12] + (float)param_1[0x14]) - *(float *)(lVar18 + 0x9c);
  FUN_1801526fb(lVar27,&local_f8,uVar11);
  lVar18 = 0;
  FUN_1802a89a0(local_d8,0,0x90);
  lVar20 = local_150;
  pfVar1 = (float *)(local_150 + 0xee8);
  do {
    pfVar21 = pfVar1 + (longlong)*(int *)((longlong)&DAT_1802de130 + lVar18) * 4;
    fVar6 = pfVar21[1];
    fVar7 = pfVar21[2];
    fVar8 = pfVar21[3];
    local_d8[lVar18] = *pfVar21;
    local_d8[lVar18 + 1] = fVar6;
    local_d8[lVar18 + 2] = fVar7;
    local_d8[lVar18 + 3] = fVar8;
    lVar18 = lVar18 + 4;
  } while (lVar18 != 0x24);
  *(undefined8 *)(param_1 + 0x26) = 0;
  iVar19 = param_1[0xc];
  lVar18 = local_150;
  local_158 = param_1;
  if (0 < iVar19) {
    local_120 = (undefined4 *)(local_150 + 0x1fec);
    lVar27 = 0;
    do {
      lVar15 = *(longlong *)(*(longlong *)(param_1 + 0xe) + lVar27 * 8);
      if ((*(int *)(lVar18 + 4) <= *(int *)(lVar15 + 0x2e0) + 1) || (local_144 != local_12c)) {
        uVar11 = *(uint *)(lVar15 + 0x14);
        local_138 = CONCAT44(local_138._4_4_,*(undefined4 *)(lVar15 + 0x34));
        uVar3 = *(uint *)(local_168 + 0x18);
        lVar18 = 0;
        do {
          FUN_1800ff38b(&local_118,*(undefined4 *)(lVar15 + 0x498 + lVar18));
          pfVar21 = pfVar1 + (longlong)*(int *)((longlong)&DAT_1802de130 + lVar18) * 4;
          *pfVar21 = local_118;
          pfVar21[1] = fStack_114;
          pfVar21[2] = fStack_110;
          pfVar21[3] = fStack_10c;
          lVar18 = lVar18 + 4;
        } while (lVar18 != 0x24);
        local_118 = (float)CONCAT31(local_118._1_3_,1);
        pfVar21 = (float *)0x0;
        if (*(char *)(lVar15 + 0x114) != '\0') {
          pfVar21 = &local_118;
        }
        local_188 = (undefined8 *)lVar15;
        FUN_180153d48(local_168,*(undefined8 *)(lVar15 + 8),pfVar21,
                      uVar3 >> 1 & 4 | uVar11 >> 0x12 & 1 | (uint)local_138);
        iVar19 = *(int *)(lVar15 + 200);
        if (local_118._0_1_ == '\0') {
          local_158[0x32] = iVar19;
        }
        if (*(int *)(local_168 + 0x2c) == iVar19) {
          *(longlong *)(local_158 + 0x26) = lVar15;
        }
        *(undefined4 *)(lVar15 + 0x228) = *(undefined4 *)(local_150 + 0x1fe8);
        uVar12 = local_120[1];
        uVar17 = local_120[2];
        uVar9 = local_120[3];
        *(undefined4 *)(lVar15 + 0x22c) = *local_120;
        *(undefined4 *)(lVar15 + 0x230) = uVar12;
        *(undefined4 *)(lVar15 + 0x234) = uVar17;
        *(undefined4 *)(lVar15 + 0x238) = uVar9;
        if (((*(longlong *)(local_150 + 0x2200) != 0) &&
            (*(longlong *)(*(longlong *)(local_150 + 0x2200) + 0x418) == lVar15)) &&
           ((*(byte *)(lVar15 + 0x1b4) & 2) == 0)) {
          *(undefined4 *)(local_140 + 0x454) = *(undefined4 *)(lVar15 + 200);
        }
        iVar19 = local_158[0xc];
        lVar18 = local_150;
        param_1 = local_158;
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < iVar19);
  }
  lVar27 = local_140;
  lVar15 = 0;
  do {
    fVar6 = local_d8[lVar15 + 1];
    fVar7 = local_d8[lVar15 + 2];
    fVar8 = local_d8[lVar15 + 3];
    pfVar21 = pfVar1 + (longlong)*(int *)((longlong)&DAT_1802de130 + lVar15) * 4;
    *pfVar21 = local_d8[lVar15];
    pfVar21[1] = fVar6;
    pfVar21[2] = fVar7;
    pfVar21[3] = fVar8;
    lVar15 = lVar15 + 4;
  } while (lVar15 != 0x24);
  if ((*(longlong *)(param_1 + 0x26) != 0) &&
     (((char)local_160 != '\0' || (*(longlong *)(local_128 + 0x26) == 0)))) {
    *(longlong *)(local_128 + 0x26) = *(longlong *)(param_1 + 0x26);
  }
  if ((*(byte *)(param_1 + 0x35) & 8) != 0) {
    if ((*(longlong *)(param_1 + 0x26) == 0) ||
       (bVar5 = true, *(char *)(*(longlong *)(param_1 + 0x26) + 0x114) == '\0')) {
      FUN_18011648a(0x40,1);
      local_118 = *pfVar1 * _DAT_1802deb40;
      fStack_114 = *(float *)(lVar20 + 0xeec) * _UNK_1802deb44;
      fStack_110 = *(float *)(lVar20 + 0xef0) * _UNK_1802deb48;
      fStack_10c = *(float *)(lVar20 + 0xef4) * _UNK_1802deb4c;
      bVar5 = false;
      FUN_1801014f9(0);
    }
    uVar12 = FUN_180106d4e(lVar27,"#CLOSE",0);
    cVar10 = FUN_180134687(uVar12,&local_108);
    lVar20 = local_168;
    if ((cVar10 != '\0') &&
       (*(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | 0x40, 0 < *(int *)(local_168 + 8)))
    {
      lVar15 = 0;
      lVar18 = 0;
      do {
        FUN_180153a0e(lVar20,*(longlong *)(lVar20 + 0x10) + lVar15);
        lVar18 = lVar18 + 1;
        lVar15 = lVar15 + 0x38;
      } while (lVar18 < *(int *)(lVar20 + 8));
    }
    lVar18 = local_150;
    if (!bVar5) {
      FUN_180101625(1);
      FUN_180116548();
    }
  }
  iVar19 = FUN_180106d4e(lVar27,"#TITLEBAR",0);
  if (((*(int *)(lVar18 + 0x1664) == 0) || (*(int *)(lVar18 + 0x1664) == iVar19)) ||
     (puVar25 = local_158, lVar20 = local_168, iVar23 = local_170,
     *(int *)(lVar18 + 0x167c) == iVar19)) {
    FUN_1801088af(iVar19);
    local_188 = (undefined8 *)CONCAT44(local_188._4_4_,0x1000);
    FUN_18013386b(&local_e8,iVar19,0,&local_118);
    lVar20 = local_168;
    if (*(int *)(lVar18 + 0x1664) == iVar19) {
      *(int *)(lVar18 + 0x1fe0) = iVar19;
    }
    puVar25 = local_158;
    iVar23 = local_170;
    if (local_118._0_1_ == '\x01') {
      cVar10 = FUN_1801083d6(0,0);
      iVar23 = local_170;
      if (cVar10 != '\0') {
        iVar23 = *(int *)(lVar20 + 0x20);
      }
      lVar18 = FUN_1801537ff(lVar20);
      puVar25 = local_158;
      if (lVar18 != 0) {
        lVar18 = *(longlong *)(lVar18 + 8);
        if (lVar18 == 0) {
          lVar18 = *(longlong *)(local_158 + 0x24);
        }
        FUN_1801082f9(lVar18,local_158,0);
      }
    }
  }
  if (*(int *)(lVar20 + 0x24) != 0) {
    iVar23 = *(int *)(lVar20 + 0x24);
  }
  if (((iVar23 != 0) && (lVar20 = FUN_1801537ff(lVar20,iVar23), lVar20 != 0)) &&
     ((*(longlong *)(lVar20 + 8) != 0 &&
      (FUN_1801080ec(*(longlong *)(lVar20 + 8),0), *(int *)(local_150 + 0x21f8) == 0)))) {
    FUN_18011120b(*(undefined8 *)(lVar20 + 8),0);
  }
  FUN_180152a30();
  FUN_18011834f();
  if ((*(byte *)((longlong)puVar25 + 0x11) & 4) == 0) {
    *(undefined4 *)(lVar27 + 0x1b0) = 0;
    *(undefined1 *)(lVar27 + 0x10e) = local_169;
  }
LAB_1801314c9:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_1a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_1a8);
  }
  return;
}


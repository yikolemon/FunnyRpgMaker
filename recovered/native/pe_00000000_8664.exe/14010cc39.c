/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010cc39 */

ulonglong FUN_14010cc39(undefined8 param_1,int param_2,uint param_3,uint param_4,undefined8 *param_5
                       ,float param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined8 uVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  short sVar21;
  int iVar22;
  longlong lVar23;
  undefined2 uVar24;
  int iVar25;
  longlong lVar26;
  bool bVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_b8;
  undefined1 local_ac [8];
  int local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint local_90;
  int local_8c;
  ulonglong local_88;
  undefined8 *local_80;
  uint local_74;
  longlong local_70;
  bool local_61;
  undefined8 local_60;
  
  local_70 = DAT_140f2a910;
  local_60 = 0xfffffffffffffffe;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  local_80 = *(undefined8 **)(local_70 + 0x1608);
  if (*(char *)((longlong)local_80 + 0x10e) != '\0') {
    uVar9 = 0;
    goto LAB_14010dbe9;
  }
  local_b8 = param_1;
  local_74 = param_3;
  FUN_14008a381(local_ac);
  if ((param_4 & 0x3000000) != 0) {
    FUN_14007b71f();
  }
  FUN_14007b71f();
  FUN_14008a3c7(&local_148,*param_5);
  local_a0 = *(float *)((longlong)local_80 + 0x158);
  fStack_9c = *(float *)((longlong)local_80 + 0x15c);
  fStack_98 = (float)(int)(float)local_148 + local_a0;
  fStack_94 = (float)(int)(float)((ulonglong)local_148 >> 0x20) + fStack_9c;
  local_61 = true;
  if (*(char *)((longlong)local_80 + 0x128) < '\x01') {
    local_61 = '\0' < *(char *)((longlong)local_80 + 0x129);
  }
  if (((param_4 & 0x3000000) != 0) &&
     (bVar5 = FUN_14008104a(&local_a0,0), ((~bVar5 | local_61) & 1) == 0)) {
    local_148 = CONCAT44(fStack_94 - fStack_9c,fStack_98 - local_a0);
    FUN_14008a82c(&local_148,DAT_1401c86a4);
    uVar9 = 0;
    FUN_14008a9ce(&local_a0,param_2,0,0);
    *(undefined4 *)(local_70 + 0x2030) = 0;
    goto LAB_14010dbe9;
  }
  lVar12 = local_70;
  if (*(int *)(local_70 + 0x2500) == param_2) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return uVar9;
  }
  local_88 = CONCAT44(local_88._4_4_,param_4);
  local_8c = param_2;
  piVar10 = (int *)FUN_14010dd18(local_70 + 0x2518,param_2);
  lVar3 = *(longlong *)(lVar12 + 0x2520);
  iVar25 = *(int *)(lVar12 + 0x2504);
  iVar22 = iVar25 + 1;
  *(int *)(lVar12 + 0x2504) = iVar22;
  if (*(int *)(lVar12 + 0x2508) <= iVar25) {
    FUN_14010dd5c(&local_148);
    iVar22 = *(int *)(local_70 + 0x2504);
    iVar25 = *(int *)(local_70 + 0x250c);
    if (iVar25 < iVar22) {
      if (iVar25 == 0) {
        iVar25 = 8;
      }
      else {
        iVar25 = iVar25 / 2 + iVar25;
      }
      if (iVar25 <= iVar22) {
        iVar25 = iVar22;
      }
      uVar11 = FUN_140077ab4((longlong)iVar25 * 0x88);
      lVar12 = local_70;
      if (*(longlong *)(local_70 + 0x2510) != 0) {
        FUN_1401c5180(uVar11,*(longlong *)(local_70 + 0x2510),
                      (longlong)*(int *)(local_70 + 0x2508) * 0x88);
        FUN_140077b90(*(undefined8 *)(lVar12 + 0x2510));
      }
      *(undefined8 *)(local_70 + 0x2510) = uVar11;
      *(int *)(local_70 + 0x250c) = iVar25;
    }
    lVar12 = local_70;
    iVar25 = *(int *)(local_70 + 0x2508);
    if (iVar25 < iVar22) {
      lVar26 = (longlong)iVar22 - (longlong)iVar25;
      lVar23 = (longlong)iVar25 * 0x88;
      do {
        FUN_1401c5180(*(longlong *)(lVar12 + 0x2510) + lVar23,&local_148,0x88);
        lVar23 = lVar23 + 0x88;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    *(int *)(lVar12 + 0x2508) = iVar22;
    FUN_1400da5e2(&uStack_120);
    if (CONCAT44(uStack_10c,uStack_110) != 0) {
      FUN_140077b90();
    }
    if (lStack_130 != 0) {
      FUN_140077b90();
    }
    iVar22 = *(int *)(local_70 + 0x2504);
    lVar12 = local_70;
  }
  iVar25 = (int)((longlong)piVar10 - lVar3 >> 4) * -0x6eb3e453;
  lVar23 = *(longlong *)(lVar12 + 0x2510);
  lVar3 = lVar23 + (longlong)iVar22 * 0x88;
  *(longlong *)(piVar10 + 4) = lVar3 + -0x88;
  *(int *)(lVar3 + -0x84) = iVar25;
  *(longlong *)(piVar10 + 0x68) = *(longlong *)(piVar10 + 4) + 0x28;
  *(undefined8 *)(*(longlong *)(piVar10 + 4) + 0x28) = 0x100000000;
  uVar14 = (uint)local_88 & 0xe000;
  bVar27 = (local_88 & 0xe000) == 0;
  *(bool *)((longlong)piVar10 + 0x246) = bVar27;
  uVar16 = (uint)local_88;
  if (bVar27) {
    uVar14 = 0x2000;
    if ((((uint)local_88 >> 0x18 & 1) == 0) &&
       (uVar14 = 0x2000, (*(byte *)((longlong)local_80 + 0x14) & 0x40) == 0)) {
      uVar14 = 0x8000;
    }
    uVar16 = uVar14 | (uint)local_88;
    lVar12 = local_70;
  }
  lVar23 = lVar23 + (longlong)iVar22 * 0x88;
  uVar6 = uVar16 | 0x40000;
  if (uVar14 != 0x4000) {
    uVar6 = uVar16;
  }
  uVar16 = uVar6 & 0xfffcffff;
  if ((uVar6 & 0x3000000) == 0) {
    uVar16 = uVar6;
  }
  uVar14 = uVar16 & 0xfffff7ff;
  if ((uVar16 >> 0xc & 1) == 0) {
    uVar14 = uVar16;
  }
  uVar16 = (uVar6 & 1) << 9 | uVar14;
  uVar6 = uVar16 | 0x10;
  if ((uVar14 & 0xf) == 0) {
    uVar16 = uVar6;
  }
  if ((*(byte *)(*(longlong *)((longlong)local_80 + 0x418) + 0x15) & 1) != 0) {
    uVar16 = uVar6;
  }
  local_a4 = piVar10[0x1a];
  iVar22 = 0;
  if (local_a4 == *(int *)(lVar12 + 4)) {
    iVar22 = (short)piVar10[0x1e] + 1;
  }
  local_90 = piVar10[1];
  *piVar10 = local_8c;
  piVar10[1] = uVar16;
  piVar10[0x1a] = *(int *)(local_70 + 4);
  *(undefined8 **)(piVar10 + 0x62) = local_80;
  *(undefined8 **)(piVar10 + 0x60) = local_80;
  piVar10[0x1b] = local_74;
  *(undefined1 *)((longlong)piVar10 + 0x239) = 0;
  piVar10[0x33] = (int)param_6;
  *(undefined1 *)(piVar10 + 0x8e) = *(undefined1 *)((longlong)local_80 + 0x1b0);
  *(undefined8 *)(lVar23 + -0x68) = *param_5;
  sVar21 = (short)iVar22;
  *(short *)(piVar10 + 0x1e) = sVar21;
  iVar8 = local_8c;
  if (0 < iVar22) {
    iVar8 = piVar10[0x70];
    if (iVar8 < iVar22) {
      if (iVar8 == piVar10[0x71]) {
        if (iVar8 == 0) {
          iVar15 = 8;
        }
        else {
          iVar15 = iVar8 / 2 + iVar8;
        }
        iVar17 = iVar8 + 1;
        if (iVar8 + 1 < iVar15) {
          iVar17 = iVar15;
        }
        lVar12 = FUN_140077ab4((longlong)iVar17 * 0x18);
        if (*(longlong *)(piVar10 + 0x72) != 0) {
          FUN_1401c5180(lVar12,*(longlong *)(piVar10 + 0x72),(longlong)piVar10[0x70] * 0x18);
          FUN_140077b90(*(undefined8 *)(piVar10 + 0x72));
        }
        *(longlong *)(piVar10 + 0x72) = lVar12;
        piVar10[0x71] = iVar17;
        iVar8 = piVar10[0x70];
      }
      else {
        lVar12 = *(longlong *)(piVar10 + 0x72);
      }
      puVar20 = (undefined8 *)(lVar12 + (longlong)iVar8 * 0x18);
      *puVar20 = 0;
      puVar20[1] = 0;
      *(undefined8 *)(lVar12 + 0x10 + (longlong)iVar8 * 0x18) = 0xffffffffffffffff;
      piVar10[0x70] = piVar10[0x70] + 1;
    }
    uVar7 = FUN_1400915a5("##Instances",0,local_8c);
    iVar8 = FUN_1400915ee(iVar22,uVar7);
    sVar21 = (short)piVar10[0x1e];
  }
  if (sVar21 == 0) {
    piVar13 = piVar10 + 0x6a;
  }
  else {
    piVar13 = (int *)(*(longlong *)(piVar10 + 0x72) + (longlong)sVar21 * 0x18 + -0x18);
  }
  *piVar13 = iVar8;
  if ((local_88 & 0x3000000) == 0) {
    *(ulonglong *)(piVar10 + 0x40) = CONCAT44(fStack_9c,local_a0);
    *(ulonglong *)(piVar10 + 0x42) = CONCAT44(fStack_94,fStack_98);
    *(ulonglong *)(piVar10 + 0x3c) = CONCAT44(fStack_9c,local_a0);
    *(ulonglong *)(piVar10 + 0x3e) = CONCAT44(fStack_94,fStack_98);
    *(ulonglong *)(piVar10 + 0x44) = CONCAT44(fStack_9c,local_a0);
    *(ulonglong *)(piVar10 + 0x46) = CONCAT44(fStack_94,fStack_98);
    *(undefined2 *)((longlong)piVar10 + 0x249) = 0;
    *(int *)(*(longlong *)(piVar10 + 0x62) + 0x1e0) =
         *(int *)(*(longlong *)(piVar10 + 0x62) + 0x1e0) + 1;
  }
  else {
    bVar27 = 0.0 < param_6;
    if ((uVar16 & 0x1000000) == 0) {
      param_6 = DAT_1402112e4;
    }
    fVar30 = (float)(~-(uint)bVar27 & (uint)DAT_1402112e4 | (uint)param_6 & -(uint)bVar27);
    if (fVar30 != DAT_1402112e4 || (uVar16 & 0x3000000) == 0x1000000) {
      uVar7 = DAT_140211ef0;
      if ((uVar16 & 0x3000000) != 0x1000000) {
        uVar7 = 0;
      }
      local_148 = CONCAT44(uVar7,-(uint)(DAT_1402112e4 != fVar30) & (uint)fVar30);
      FUN_14008fe0a();
    }
    if (((local_90 & 0x3000000) == 0) && ((*(byte *)(local_70 + 0x2030) & 0x80) == 0)) {
      local_148 = 0;
      FUN_14008fe2b();
    }
    uVar14 = 0;
    uVar7 = 0;
    if ((*(uint *)(local_70 + 0x2030) >> 9 & 1) != 0) {
      uVar7 = *(undefined4 *)(local_70 + 0x2070);
    }
    if ((*(uint *)(local_70 + 0x2030) >> 8 & 1) != 0) {
      uVar14 = *(uint *)(local_70 + 0x206c);
    }
    local_148 = CONCAT44(fStack_94 - fStack_9c,fStack_98 - local_a0);
    FUN_14008a084(local_b8,iVar8,&local_148,uVar7,(uVar16 & 0x1000000) >> 0xd | uVar14);
    lVar12 = *(longlong *)(local_70 + 0x1608);
    *(longlong *)(piVar10 + 0x62) = lVar12;
    uVar11 = *(undefined8 *)(lVar12 + 0x2a0);
    *(undefined8 *)(piVar10 + 0x44) = *(undefined8 *)(lVar12 + 0x298);
    *(undefined8 *)(piVar10 + 0x46) = uVar11;
    uVar11 = *(undefined8 *)(lVar12 + 0x60);
    uVar2 = *(undefined8 *)(lVar12 + 0x68);
    *(undefined8 *)(piVar10 + 0x3c) = uVar11;
    *(ulonglong *)(piVar10 + 0x3e) =
         CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar11 >> 0x20),
                  (float)uVar2 + (float)uVar11);
    uVar11 = *(undefined8 *)(lVar12 + 0x280);
    *(undefined8 *)(piVar10 + 0x40) = *(undefined8 *)(lVar12 + 0x278);
    *(undefined8 *)(piVar10 + 0x42) = uVar11;
    if ((local_61 & *(byte *)(lVar12 + 0x10e)) == 1) {
      *(undefined1 *)(lVar12 + 0x10e) = 0;
    }
    bVar5 = *(byte *)((longlong)piVar10 + 0x249);
    if (iVar22 == 0) {
      *(byte *)((longlong)piVar10 + 0x24a) = bVar5;
      *(undefined1 *)((longlong)piVar10 + 0x249) = 0;
      bVar5 = 0;
    }
    *(byte *)((longlong)piVar10 + 0x249) = bVar5 | *(byte *)(*(longlong *)(piVar10 + 0x62) + 0x105);
  }
  FUN_1400914dd(local_8c);
  if (0 < iVar22) {
    FUN_1400914dd(iVar8);
  }
  local_88 = *(ulonglong *)(piVar10 + 0x62);
  piVar10[0x2d] = *(int *)(local_88 + 0x19c);
  uVar11 = *(undefined8 *)(local_88 + 0x2c0);
  *(undefined8 *)(piVar10 + 0x58) = *(undefined8 *)(local_88 + 0x2b8);
  *(undefined8 *)(piVar10 + 0x5a) = uVar11;
  *(undefined1 *)(piVar10 + 0x93) = *(undefined1 *)(local_88 + 0x10e);
  *(undefined4 *)(lVar23 + -0x88) = *(undefined4 *)(local_88 + 0x10);
  uVar11 = *(undefined8 *)(local_88 + 0x2a0);
  *(undefined8 *)(lVar23 + -0x48) = *(undefined8 *)(local_88 + 0x298);
  *(undefined8 *)(lVar23 + -0x40) = uVar11;
  uVar11 = *(undefined8 *)(local_88 + 0x2b0);
  *(undefined8 *)(lVar23 + -0x38) = *(undefined8 *)(local_88 + 0x2a8);
  *(undefined8 *)(lVar23 + -0x30) = uVar11;
  *(undefined4 *)(lVar23 + -0x10) = *(undefined4 *)((longlong)local_80 + 0x1a0);
  *(undefined8 *)(lVar23 + -0x28) = *(undefined8 *)(local_88 + 0x188);
  *(undefined8 *)(lVar23 + -0x20) = *(undefined8 *)(local_88 + 0x180);
  *(undefined8 *)(lVar23 + -0x18) = *(undefined8 *)(local_88 + 0x170);
  *(undefined4 *)(lVar23 + -0xc) = *(undefined4 *)((longlong)local_80 + 0x23c);
  *(undefined4 *)(lVar23 + -8) = *(undefined4 *)((longlong)local_80 + 0x248);
  *(undefined8 *)(local_88 + 0x180) = 0;
  *(undefined8 *)(local_88 + 0x188) = 0;
  if ((undefined8 *)local_88 != local_80) {
    if ((uVar16 >> 10 & 1) != 0) {
      iVar22 = FUN_14004863e((float)piVar10[0x58] + DAT_1401c86c8,piVar10[0x5a]);
      piVar10[0x58] = iVar22;
      if ((*(float *)(local_88 + 0xb0) == 0.0) && (!NAN(*(float *)(local_88 + 0xb0)))) {
        iVar22 = FUN_14007b71f((float)piVar10[0x5a] + DAT_1401c86a4);
        piVar10[0x5a] = iVar22;
      }
    }
    if ((uVar16 >> 8 & 1) != 0) {
      iVar22 = FUN_14004863e((float)piVar10[0x59] + DAT_1401c86c8,piVar10[0x5b]);
      piVar10[0x59] = iVar22;
      if ((*(float *)(local_88 + 0xb4) == 0.0) && (!NAN(*(float *)(local_88 + 0xb4)))) {
        iVar22 = FUN_14007b71f((float)piVar10[0x5b] + DAT_1401c86a4);
        piVar10[0x5b] = iVar22;
      }
    }
  }
  fVar30 = 0.0;
  fVar33 = 0.0;
  if ((uVar16 >> 9 & 1) != 0) {
    fVar33 = DAT_1401c86c8;
  }
  if ((uVar16 & 0x800200) == 0x200) {
    fVar30 = *(float *)(local_70 + 0xe14);
LAB_14010d5d3:
    fVar32 = 0.0;
  }
  else {
    if ((uVar16 & 0x800200) != 0) goto LAB_14010d5d3;
    fVar32 = *(float *)(local_70 + 0xe14);
  }
  piVar10[0x31] = (int)(fVar33 + fVar32);
  piVar10[0x32] = (int)fVar32;
  piVar10[0x30] = (int)fVar30;
  fVar33 = 0.0;
  fVar32 = 0.0;
  if ((uVar16 >> 10 & 1) != 0) {
    fVar32 = DAT_1401c86c8;
  }
  if ((uVar16 >> 0x16 & 1) == 0 && (uVar16 & 0x200400) != 0) {
    fVar33 = *(float *)(local_70 + 0xe14);
  }
  piVar10[0x2f] = (int)((fVar32 + fVar33) - fVar30);
  piVar10[0x1c] = -1;
  piVar10[0x1d] = -1;
  piVar10[0x26] = 0;
  piVar13 = (int *)(local_88 + 0x2b8);
  if ((undefined8 *)local_88 == local_80) {
    piVar13 = piVar10 + 0x44;
  }
  piVar10[0x25] = (uint)*(ushort *)(piVar10 + 0x25);
  uVar11 = *(undefined8 *)(piVar13 + 2);
  *(undefined8 *)(piVar10 + 0x48) = *(undefined8 *)piVar13;
  *(undefined8 *)(piVar10 + 0x4a) = uVar11;
  uVar14 = -(uint)((float)piVar10[0x44] <= (float)piVar10[0x48]);
  uVar6 = -(uint)((float)piVar10[0x45] <= (float)piVar10[0x49]);
  uVar28 = -(uint)((float)piVar10[0x4a] < (float)piVar10[0x46]);
  uVar29 = -(uint)((float)piVar10[0x4b] < (float)piVar10[0x47]);
  auVar31._0_4_ = piVar10[0x48] & uVar14;
  auVar31._4_4_ = piVar10[0x49] & uVar6;
  auVar31._8_4_ = piVar10[0x4a] & uVar28;
  auVar31._12_4_ = piVar10[0x4b] & uVar29;
  auVar34._0_4_ = ~uVar14 & piVar10[0x44];
  auVar34._4_4_ = ~uVar6 & piVar10[0x45];
  auVar34._8_4_ = ~uVar28 & piVar10[0x46];
  auVar34._12_4_ = ~uVar29 & piVar10[0x47];
  *(undefined1 (*) [16])(piVar10 + 0x48) = auVar34 | auVar31;
  FUN_14008db02(piVar10 + 0x48,piVar10 + 0x58);
  if ((uVar16 >> 0x11 & 1) == 0) {
    iVar22 = piVar10[0x5b];
  }
  else {
    iVar22 = FUN_14004863e();
  }
  piVar10[0x4b] = iVar22;
  piVar10[0x20] = piVar10[0x45];
  piVar10[0x1f] = piVar10[0x45];
  piVar10[0x22] = 0;
  piVar10[0x23] = 0;
  piVar10[0x8a] = 0;
  piVar10[0x8b] = 0;
  *(undefined1 *)((longlong)piVar10 + 0x245) = 1;
  *(undefined4 *)((longlong)piVar10 + 0x206) = 0;
  if (local_a4 + 1 < *(int *)(local_70 + 4)) {
    *(undefined1 *)(piVar10 + 0x92) = 0;
  }
  piVar10[0x3a] = 0;
  *(undefined4 *)(lVar23 + -0x7c) = 0;
  iVar22 = FUN_14007a557(0x31,DAT_1401c86c8);
  piVar10[0x29] = iVar22;
  iVar22 = FUN_14007a557(0x32);
  piVar10[0x2a] = iVar22;
  *(int **)(local_70 + 0x24f8) = piVar10;
  *(undefined1 *)(local_88 + 0x1b8) = 0;
  *(int *)((longlong)local_80 + 0x210) = iVar25;
  if ((undefined8 *)local_88 != local_80) {
    *(int *)(local_88 + 0x210) = iVar25;
  }
  if (((uVar16 & 2) == 0) && (local_90 = local_90 & 2, local_90 != 0)) {
    *(undefined1 *)(piVar10 + 0x91) = 1;
  }
  iVar22 = *(int *)(local_70 + 0x2540);
  if (iVar22 <= iVar25) {
    iVar15 = iVar25 + 1;
    iVar8 = *(int *)(local_70 + 0x2544);
    if (iVar8 <= iVar25) {
      if (iVar8 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar8 / 2 + iVar8;
      }
      if (iVar8 <= iVar15) {
        iVar8 = iVar15;
      }
      uVar11 = FUN_140077ab4((longlong)iVar8 << 2);
      lVar12 = local_70;
      if (*(longlong *)(local_70 + 0x2548) != 0) {
        FUN_1401c5180(uVar11,*(longlong *)(local_70 + 0x2548),
                      (longlong)*(int *)(local_70 + 0x2540) << 2);
        FUN_140077b90(*(undefined8 *)(lVar12 + 0x2548));
      }
      *(undefined8 *)(lVar12 + 0x2548) = uVar11;
      *(int *)(lVar12 + 0x2544) = iVar8;
      iVar22 = *(int *)(lVar12 + 0x2540);
    }
    if (iVar22 <= iVar25) {
      lVar12 = (longlong)iVar22;
      do {
        *(undefined4 *)(*(longlong *)(local_70 + 0x2548) + lVar12 * 4) = 0xbf800000;
        lVar12 = lVar12 + 1;
      } while (iVar15 != lVar12);
    }
    *(int *)(local_70 + 0x2540) = iVar15;
  }
  *(float *)(*(longlong *)(local_70 + 0x2548) + (longlong)iVar25 * 4) =
       (float)*(double *)(local_70 + 0x18);
  *(float *)(lVar23 + -0x80) = (float)*(double *)(local_70 + 0x18);
  *(undefined1 *)((longlong)piVar10 + 0x24b) = 0;
  puVar20 = *(undefined8 **)(piVar10 + 2);
  local_80 = *(undefined8 **)(piVar10 + 6);
  uVar16 = (int)(*(longlong *)(piVar10 + 8) - (longlong)local_80 >> 2) * 0x4f72c235;
  if ((uVar16 == 0) || (local_74 == uVar16)) {
    local_80 = (undefined8 *)0x0;
    puVar18 = (undefined8 *)0x0;
    bVar27 = puVar20 == (undefined8 *)0x0;
    puVar20 = (undefined8 *)0x0;
    if (bVar27) goto code_r0x00014010d931;
  }
  else {
    piVar10[2] = 0;
    piVar10[3] = 0;
code_r0x00014010d931:
    puVar18 = local_80;
    FUN_14010deea(piVar10,local_74);
    *(undefined1 *)(piVar10 + 0x90) = 1;
    *(undefined1 *)((longlong)piVar10 + 0x23b) = 1;
    local_80 = puVar20;
  }
  puVar20 = local_80;
  if (*(char *)((longlong)piVar10 + 0x243) == '\x01') {
    FUN_14010e016(piVar10);
  }
  if (*(char *)((longlong)piVar10 + 0x23b) == '\x01') {
    piVar10[0x19] = -1;
    *(undefined1 *)(piVar10 + 0x8f) = 1;
    *(undefined1 *)((longlong)piVar10 + 0x241) = 1;
    *(undefined2 *)((longlong)piVar10 + 0x7a) = 0xffff;
    *(undefined2 *)((longlong)piVar10 + 0x226) = 0xffff;
    *(undefined2 *)(piVar10 + 0x85) = 0xffff;
    *(undefined4 *)((longlong)piVar10 + 0x21a) = 0xffffffff;
    piVar10[0x84] = -1;
    *(undefined4 *)((longlong)piVar10 + 0x20a) = 0xffffffff;
    if (0 < (int)local_74) {
      lVar12 = 0x6d;
      uVar9 = 0;
      do {
        lVar3 = *(longlong *)(piVar10 + 6);
        puVar20 = (undefined8 *)(lVar3 + -0x6d + lVar12);
        if ((puVar18 == (undefined8 *)0x0) || ((longlong)(int)uVar16 <= (longlong)uVar9)) {
          uVar7 = *(undefined4 *)(lVar3 + -0x59 + lVar12);
          local_118 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          lStack_130 = 0;
          local_148 = 0;
          uStack_140 = 0;
          uStack_10c = 0xffffffff;
          uStack_114 = 0xffffffff;
          uStack_110 = 0xffffffff;
          *puVar20 = 0;
          puVar20[1] = 0;
          *(undefined4 *)(lVar3 + -0x5d + lVar12) = 0xbf800000;
          *(undefined8 *)(lVar3 + -0x59 + lVar12) = 0;
          *(undefined4 *)(lVar3 + -0x51 + lVar12) = 0xbf800000;
          puVar1 = (undefined8 *)(lVar3 + -0x4d + lVar12);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined1 (*) [16])(lVar3 + -0x3d + lVar12) = ZEXT816(0);
          puVar1 = (undefined8 *)(lVar3 + -0x2d + lVar12);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar3 + -0x1d + lVar12);
          *puVar1 = 0xffffffff00000000;
          puVar1[1] = 0xffffffffffffffff;
          *(undefined4 *)(lVar3 + -0xd + lVar12) = 0xff00ff;
          *(undefined2 *)(lVar3 + -9 + lVar12) = 0xff;
          *(undefined8 *)(lVar3 + -5 + lVar12) = 0;
          *(undefined4 *)(lVar3 + 3 + lVar12) = 0;
          *(undefined4 *)(lVar3 + -0x59 + lVar12) = uVar7;
          *(undefined1 *)(lVar3 + lVar12) = 1;
          *(undefined1 *)(lVar3 + -5 + lVar12) = 1;
          *(undefined2 *)(lVar3 + -7 + lVar12) = 0x101;
          uVar24 = (undefined2)uVar9;
          *(undefined2 *)(lVar3 + -0x17 + lVar12) = uVar24;
        }
        else {
          puVar19 = (undefined4 *)((longlong)puVar18 + lVar12 + -0x6d);
          for (lVar23 = 0x1d; lVar23 != 0; lVar23 = lVar23 + -1) {
            *(undefined4 *)puVar20 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar20 = (undefined8 *)((longlong)puVar20 + 4);
          }
          uVar24 = *(undefined2 *)(lVar3 + -0x17 + lVar12);
        }
        *(undefined2 *)(*(longlong *)(piVar10 + 10) + uVar9 * 2) = uVar24;
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 0x74;
      } while (local_74 != uVar9);
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    FUN_140077b90();
  }
  if ((char)piVar10[0x90] == '\x01') {
    FUN_14010e035();
  }
  fVar30 = *(float *)(local_70 + 0x1320);
  fVar33 = (float)piVar10[0x39];
  if ((fVar33 != 0.0) || (NAN(fVar33))) {
    if (((fVar33 != fVar30) || (NAN(fVar33) || NAN(fVar30))) && (0 < (int)local_74)) {
      lVar12 = 0;
      do {
        *(float *)(*(longlong *)(piVar10 + 6) + 0x10 + lVar12) =
             *(float *)(*(longlong *)(piVar10 + 6) + 0x10 + lVar12) * (fVar30 / fVar33);
        lVar12 = lVar12 + 0x74;
      } while ((ulonglong)local_74 * 0x74 - lVar12 != 0);
    }
  }
  piVar10[0x39] = (int)fVar30;
  *(undefined1 *)(local_88 + 0x10e) = 1;
  if (0 < piVar10[100]) {
    if (piVar10[0x65] < 0) {
      uVar11 = FUN_140077ab4(0);
      if (*(longlong *)(piVar10 + 0x66) != 0) {
        FUN_1401c5180(uVar11,*(longlong *)(piVar10 + 0x66),(longlong)piVar10[100]);
        FUN_140077b90(*(undefined8 *)(piVar10 + 0x66));
      }
      *(undefined8 *)(piVar10 + 0x66) = uVar11;
      piVar10[0x65] = 0;
    }
    piVar10[100] = 0;
  }
  FUN_14010e1f9(piVar10);
  uVar9 = CONCAT71((int7)((ulonglong)puVar20 >> 8),1);
LAB_14010dbe9:
  return uVar9 & 0xffffffff;
}


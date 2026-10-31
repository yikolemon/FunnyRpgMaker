/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ccc78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400ccc78(longlong param_1,char *param_2,char *param_3,ulonglong param_4,
                       longlong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  size_t sVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  int *piVar20;
  undefined7 uVar21;
  uint uVar22;
  char cVar23;
  int *piVar24;
  float fVar25;
  float extraout_XMM0_Da;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_188 [32];
  char *local_168;
  int local_160;
  int local_158;
  undefined1 local_150;
  undefined8 *local_148;
  float *local_140;
  byte local_135;
  int local_134;
  byte local_12d;
  uint local_12c;
  int *local_128;
  int *local_120;
  longlong local_118;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  char *local_100;
  char *local_f8;
  undefined8 local_f0;
  byte local_e2;
  byte local_e1;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  lVar5 = DAT_140f2a910;
  local_90 = DAT_140f17b40 ^ (ulonglong)auStack_188;
  if (*(char *)(param_1 + 0x83) == '\x01') {
    local_98 = *(undefined8 *)(DAT_140f2a910 + 0x1fd8);
    local_c8 = *(undefined8 *)(DAT_140f2a910 + 0x1fa8);
    uStack_c0 = *(undefined8 *)(DAT_140f2a910 + 0x1fb0);
    local_b8 = *(undefined8 *)(DAT_140f2a910 + 0x1fb8);
    uStack_b0 = *(undefined8 *)(DAT_140f2a910 + 0x1fc0);
    local_a8 = *(undefined4 *)(DAT_140f2a910 + 0x1fc8);
    uStack_a4 = *(undefined4 *)(DAT_140f2a910 + 0x1fcc);
    uStack_a0 = *(undefined4 *)(DAT_140f2a910 + 0x1fd0);
    uStack_9c = *(undefined4 *)(DAT_140f2a910 + 0x1fd4);
    FUN_1400cba69(param_1);
    *(undefined8 *)(lVar5 + 0x1fd8) = local_98;
    *(undefined4 *)(lVar5 + 0x1fc8) = local_a8;
    *(undefined4 *)(lVar5 + 0x1fcc) = uStack_a4;
    *(undefined4 *)(lVar5 + 0x1fd0) = uStack_a0;
    *(undefined4 *)(lVar5 + 0x1fd4) = uStack_9c;
    *(undefined8 *)(lVar5 + 0x1fb8) = local_b8;
    *(undefined8 *)(lVar5 + 0x1fc0) = uStack_b0;
    *(float *)(lVar5 + 0x1fa8) = (float)local_c8;
    *(float *)(lVar5 + 0x1fac) = local_c8._4_4_;
    *(float *)(lVar5 + 0x1fb0) = (float)uStack_c0;
    *(float *)(lVar5 + 0x1fb4) = uStack_c0._4_4_;
  }
  lVar19 = *(longlong *)(lVar5 + 0x1608);
  if (*(char *)(lVar19 + 0x10e) != '\0') {
    piVar20 = (int *)0x0;
    goto LAB_1400cdaea;
  }
  iVar8 = FUN_1400cc97b(param_2,param_5);
  if ((param_3 != (char *)0x0) && (*param_3 == '\0')) {
    local_c8 = 0;
    uStack_c0 = 0;
    piVar20 = (int *)0x0;
    FUN_14008a9ce(&local_c8,iVar8,0,2);
    goto LAB_1400cdaea;
  }
  uVar16 = (uint)param_4;
  uVar17 = (ulonglong)(uVar16 | 0x100000);
  if ((uVar16 >> 0x14 & 1) != 0) {
    uVar17 = param_4 & 0xffffffff;
  }
  if (param_3 != (char *)0x0) {
    uVar17 = param_4 & 0xffffffff;
  }
  local_134 = iVar8;
  piVar10 = (int *)FUN_1400cc72f(param_1);
  piVar20 = piVar10;
  local_100 = param_3;
  if (piVar10 == (int *)0x0) {
    iVar8 = *(int *)(param_1 + 8);
    if (iVar8 == *(int *)(param_1 + 0xc)) {
      if (iVar8 == 0) {
        iVar15 = 8;
      }
      else {
        iVar15 = iVar8 / 2 + iVar8;
      }
      iVar18 = iVar8 + 1;
      if (iVar8 + 1 < iVar15) {
        iVar18 = iVar15;
      }
      local_118 = lVar19;
      lVar11 = FUN_140077ab4((longlong)iVar18 * 0x38);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1401c5180(lVar11,*(longlong *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 8) * 0x38);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x10));
      }
      *(longlong *)(param_1 + 0x10) = lVar11;
      *(int *)(param_1 + 0xc) = iVar18;
      iVar8 = *(int *)(param_1 + 8);
      lVar19 = local_118;
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x10);
    }
    lVar12 = (longlong)iVar8 * 0x38;
    *(undefined8 *)(lVar11 + lVar12) = 0;
    ((undefined8 *)(lVar11 + lVar12))[1] = 0;
    *(undefined8 *)(lVar11 + 0x10 + lVar12) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x18 + lVar12) = 0;
    *(undefined8 *)(lVar11 + 0x20 + lVar12) = 0xbf80000000000000;
    *(undefined8 *)(lVar11 + 0x28 + lVar12) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x30 + lVar12) = 0;
    iVar8 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar8 + 1;
    lVar11 = (longlong)iVar8 * 0x38;
    piVar20 = (int *)(lVar11 + *(longlong *)(param_1 + 0x10));
    *(int *)(lVar11 + *(longlong *)(param_1 + 0x10)) = local_134;
    *(undefined1 *)(param_1 + 0x85) = 1;
  }
  *(short *)(param_1 + 0x8a) =
       (short)((uint)((int)piVar20 - *(int *)(param_1 + 0x10)) >> 3) * 0x6db7;
  local_12d = local_100 != (char *)0x0 && (uVar16 >> 0x14 & 1) == 0;
  uVar16 = (uint)uVar17;
  uVar21 = (undefined7)(uVar17 >> 8);
  FUN_1400cdbef(&local_d0,param_2,CONCAT71(uVar21,(byte)uVar17 | local_12d) & 0xffffffffffffff01);
  piVar20[9] = -0x40800000;
  if ((*(byte *)(lVar5 + 0x1fa8) & 1) != 0) {
    local_d0 = *(float *)(lVar5 + 0x1fc0);
    piVar20[9] = (int)local_d0;
  }
  fVar25 = local_d0;
  local_f8 = param_2;
  if (piVar10 == (int *)0x0) {
    iVar8 = FUN_14007b71f(DAT_1401c86c8);
    piVar20[7] = iVar8;
  }
  pcVar6 = local_f8;
  piVar20[8] = (int)fVar25;
  iVar8 = *(int *)(param_1 + 0x88);
  iVar15 = iVar8 + 1;
  *(short *)(param_1 + 0x88) = (short)iVar15;
  *(short *)(piVar20 + 0xb) = (short)iVar8;
  uVar22 = *(uint *)(lVar5 + 4);
  if ((uVar17 & 1) == 0) {
    local_108 = 0;
  }
  else {
    local_108 = CONCAT31((int3)((uint)iVar15 >> 8),(*(byte *)(piVar20 + 1) & 1) == 0);
  }
  iVar8 = *(int *)(param_1 + 0x34);
  iVar15 = piVar20[4];
  local_12c = *(uint *)(param_1 + 0x18);
  piVar20[4] = uVar22;
  piVar20[1] = uVar16;
  *(longlong *)(piVar20 + 2) = param_5;
  if (param_5 == 0) {
    local_118 = param_1 + 0xa0;
    piVar20[10] = *(int *)(param_1 + 0xa0) + -1 + (uint)(*(int *)(param_1 + 0xa0) == 0);
    local_128 = piVar10;
    local_120 = piVar20;
    sVar13 = strlen(local_f8);
    FUN_1400792d0(local_118,pcVar6,pcVar6 + sVar13 + 1);
    piVar20 = local_120;
    piVar10 = local_128;
  }
  else {
    piVar20[10] = -1;
  }
  iVar8 = iVar8 + 1;
  iVar15 = iVar15 + 1;
  if ((uVar16 >> 0x15 & 1) == 0) {
    if ((((iVar15 < (int)uVar22) && ((*(byte *)(param_1 + 0x18) & 2) != 0)) &&
        (*(int *)(param_1 + 0x24) == 0)) &&
       (((int)uVar22 <= iVar8 || (*(int *)(param_1 + 0x20) == 0)))) {
      local_128 = piVar10;
      local_120 = piVar20;
      FUN_1400cc975(param_1,piVar20);
      piVar20 = local_120;
      piVar10 = local_128;
    }
    if (((uVar17 & 2) != 0) && (*(int *)(param_1 + 0x20) != local_134)) {
      local_128 = piVar10;
      local_120 = piVar20;
      FUN_1400cc975(param_1,piVar20);
      piVar20 = local_120;
      piVar10 = local_128;
    }
  }
  if (*(int *)(param_1 + 0x2c) == local_134) {
    *(undefined1 *)(param_1 + 0x84) = 1;
    piVar24 = (int *)CONCAT71((int7)((ulonglong)param_5 >> 8),1);
  }
  else if ((param_5 == 0) && (*(int *)(param_1 + 0x20) == 0)) {
    piVar24 = (int *)0x0;
    if (iVar8 < (int)uVar22) {
      if (*(int *)(param_1 + 8) != 1) goto LAB_1400cd142;
      piVar24 = (int *)(ulonglong)((*(byte *)(param_1 + 0x18) & 2) == 0);
    }
  }
  else {
LAB_1400cd142:
    piVar24 = (int *)0x0;
  }
  if ((iVar15 < (int)uVar22) && (piVar10 == (int *)0x0 || (int)uVar22 <= iVar8)) {
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_14008a9ce(&local_c8,local_134,0,2);
    piVar20 = (int *)CONCAT71(uVar21,(uVar16 >> 0x15 & 1) == 0 & (byte)piVar24);
    goto LAB_1400cdaea;
  }
  if (*(int *)(param_1 + 0x20) == local_134) {
    piVar20[5] = *(int *)(lVar5 + 4);
  }
  uVar2 = *(undefined8 *)(lVar19 + 0x158);
  uVar1 = piVar20[1];
  local_d0 = (float)piVar20[7];
  fVar25 = (float)piVar20[6];
  if ((uVar1 & 0xc0) == 0) {
    fVar25 = (float)(int)(fVar25 - *(float *)(param_1 + 0x5c));
  }
  fVar25 = fVar25 + *(float *)(param_1 + 0x38);
  fVar26 = *(float *)(param_1 + 0x3c) + 0.0;
  *(float *)(lVar19 + 0x158) = fVar25;
  *(float *)(lVar19 + 0x15c) = fVar26;
  uStack_c0 = CONCAT44(local_cc + fVar26,local_d0 + fVar25);
  local_c8 = CONCAT44(fVar26,fVar25);
  local_118 = CONCAT44(local_118._4_4_,iVar15);
  local_120 = piVar24;
  local_10c = uVar22;
  if (((uVar1 & 0xc0) != 0) ||
     ((*(float *)(param_1 + 0x6c) <= fVar25 && (local_d0 + fVar25 <= *(float *)(param_1 + 0x70)))))
  {
    local_128 = (int *)((ulonglong)local_128 & 0xffffffff00000000);
    iVar8 = local_134;
  }
  else {
    local_d8 = CONCAT44(local_cc + fVar26,*(float *)(param_1 + 0x70));
    fVar26 = fVar26 + DAT_1401c86a4;
    uVar14 = FUN_140090d06();
    iVar8 = local_134;
    local_128 = (int *)CONCAT44(local_128._4_4_,(int)CONCAT71((int7)((ulonglong)uVar14 >> 8),1));
    local_e0 = extraout_XMM0_Da;
    local_dc = fVar26;
    FUN_1400883a6(&local_e0,&local_d8,1);
  }
  local_d8 = CONCAT44((float)((ulonglong)uStack_c0 >> 0x20) - (float)((ulonglong)local_c8 >> 0x20),
                      (float)uStack_c0 - (float)local_c8);
  uVar14 = *(undefined8 *)(lVar19 + 0x170);
  FUN_14008a82c();
  *(undefined8 *)(lVar19 + 0x170) = uVar14;
  cVar7 = FUN_14008a9ce(&local_c8,iVar8,0,0);
  if (cVar7 == '\0') {
    if ((char)local_128 != '\0') {
      FUN_140088407();
    }
    *(undefined8 *)(lVar19 + 0x158) = uVar2;
    piVar20 = local_120;
    goto LAB_1400cdaea;
  }
  uVar22 = ((uint)(uVar17 >> 0x11) & 0x10) + 0x1010;
  if (*(char *)(lVar5 + 0x2428) == '\x01') {
    if (*(int *)(lVar5 + 0x244c) == -1) {
      uVar22 = uVar22 | 0x200;
    }
    else {
      iVar15 = strcmp("_IMWINDOW",(char *)(lVar5 + 0x2450));
      if (iVar15 != 0) {
        uVar22 = uVar22 | 0x200;
      }
    }
  }
  if ((uVar16 >> 0x16 & 1) == 0) {
    local_168 = (char *)CONCAT44(local_168._4_4_,uVar22);
    local_104 = FUN_1400ac79b(&local_c8,iVar8,&local_e1,&local_e2);
    if (((char)local_104 != '\0') && ((uVar17 & 0x200000) == 0)) {
      uVar14 = FUN_1400cc975(param_1,piVar20);
      local_104 = (undefined4)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    }
  }
  else {
    local_104 = 0;
    local_e2 = 0;
    local_e1 = 0;
  }
  local_135 = local_e2;
  local_f0 = uVar2;
  if (local_e2 == 1 && param_5 != 0) {
    if ((*(int *)(lVar5 + 0x167c) == iVar8) && (*(char *)(lVar5 + 0x1688) == '\x01')) {
      *(longlong *)(lVar5 + 0x16a0) = param_5;
    }
LAB_1400cd428:
    lVar11 = *(longlong *)(param_5 + 0x4c0);
    if (lVar11 == 0) goto LAB_1400cd475;
    if ((((*(longlong *)(lVar11 + 0x18) != 0) || ((*(uint *)(lVar11 + 0x10) & 0x400) != 0)) ||
        (local_e2 == 0)) ||
       ((*(int *)(lVar11 + 0x30) != 1 || (cVar7 = FUN_1400816f9(0), cVar7 == '\0'))))
    goto LAB_1400cd480;
    FUN_14008135a(param_5);
  }
  else {
    if (param_5 != 0) goto LAB_1400cd428;
LAB_1400cd475:
    lVar11 = 0;
LAB_1400cd480:
    if ((local_135 != 0) &&
       (((int)local_10c <= (int)local_118 && (cVar7 = FUN_1400816f9(0), cVar7 != '\0')))) {
      if (*(char *)(lVar5 + 0x2428) != '\0') goto LAB_1400cd4c4;
      if ((param_5 == 0) && ((*(uint *)(param_1 + 0x18) & 1) == 0)) goto LAB_1400cd700;
      if (0.0 <= *(float *)(lVar5 + 0x104)) {
LAB_1400cd644:
        if (0.0 < *(float *)(lVar5 + 0x104)) {
          if ((float)uStack_c0 < *(float *)(lVar5 + 0x118)) {
            fVar25 = *(float *)(lVar5 + 0x118) - (float)uStack_c0;
            bVar4 = true;
            bVar3 = false;
            goto LAB_1400cd67c;
          }
        }
LAB_1400cd4c4:
        fVar25 = 0.0;
        bVar3 = false;
        bVar4 = false;
      }
      else {
        if ((float)local_c8 <= *(float *)(lVar5 + 0x118)) goto LAB_1400cd644;
        fVar25 = (float)local_c8 - *(float *)(lVar5 + 0x118);
        bVar3 = true;
        bVar4 = false;
LAB_1400cd67c:
        FUN_1400cc9c9(param_1,piVar20,*(undefined8 *)(lVar5 + 0x118));
      }
      if (((param_5 != 0) && ((*(byte *)(param_5 + 0x14) & 4) == 0)) &&
         ((*(byte *)(lVar11 + 0x10) & 0x80) == 0)) {
        if ((*(char *)(lVar5 + 0x2428) != '\x01') || (*(int *)(lVar5 + 0x2444) != local_134)) {
          fVar26 = *(float *)(lVar5 + 0x1320);
          fVar28 = DAT_140211ed8 * fVar26;
          fVar27 = (float)FUN_140090d06(((float)(*(uint *)(lVar5 + 0xbd4) & _DAT_1401ced40) -
                                        (fVar26 + fVar26)) * DAT_14021001c);
          fVar27 = fVar26 * DAT_1402118c0 + fVar27;
          fVar26 = (float)FUN_14007b71f(local_c8._4_4_ - *(float *)(lVar5 + 0x11c),
                                        *(float *)(lVar5 + 0x11c) - uStack_c0._4_4_);
          if (fVar25 <= fVar28) {
LAB_1400cd694:
            if (fVar26 < fVar27) goto LAB_1400cd700;
          }
          else if ((!bVar3) ||
                  ((int)((ulonglong)((longlong)piVar20 - *(longlong *)(param_1 + 0x10)) >> 3) *
                   -0x49249249 != 0)) {
            if (!bVar4) goto LAB_1400cd694;
            if ((fVar26 < fVar27) &&
               (*(int *)(param_1 + 8) + -1 !=
                (int)((ulonglong)((longlong)piVar20 - *(longlong *)(param_1 + 0x10)) >> 3) *
                -0x49249249)) goto LAB_1400cd700;
          }
        }
        FUN_140099cad(lVar5,param_5);
        *(longlong *)(lVar5 + 0x1628) = param_5;
        FUN_140080508(*(undefined4 *)(param_5 + 0xc4),param_5);
        uVar2 = *(undefined8 *)(*(longlong *)(lVar5 + 0x1628) + 0x60);
        *(ulonglong *)(lVar5 + 0x1694) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar5 + 0x1694) >> 0x20) -
                      ((float)((ulonglong)uVar2 >> 0x20) - (float)((ulonglong)local_c8 >> 0x20)),
                      (float)*(undefined8 *)(lVar5 + 0x1694) - ((float)uVar2 - (float)local_c8));
        *(undefined1 *)(lVar5 + 0x168a) = 1;
        FUN_1400815f4();
      }
    }
  }
LAB_1400cd700:
  uVar2 = local_f0;
  if (((uVar16 >> 0x16 & 1) == 0) && ((*(uint *)(lVar5 + 0x1fe8) & 0x100) != 0)) {
    lVar11 = *(longlong *)(lVar19 + 800);
    local_10c = CONCAT31(local_10c._1_3_,local_e1);
    cVar7 = '#';
    cVar23 = (char)local_120;
    if (((local_135 | local_e1) & 1) == 0) {
      if (cVar23 == '\0') {
        cVar7 = ((local_12c >> 0x15 & 1) == 0) * '\x03' + '$';
      }
      else {
        cVar7 = ((local_12c >> 0x15 & 1) == 0) * '\x03' + '%';
      }
    }
    local_118 = lVar19;
    uVar9 = FUN_14007a557(cVar7);
    FUN_1400cdcda(lVar11,&local_c8,uVar17,uVar9);
    if (((cVar23 != '\0') && ((*(byte *)(param_1 + 0x18) & 0x40) != 0)) &&
       (0.0 < *(float *)(lVar5 + 0xe68))) {
      fVar26 = (float)local_c8 + 0.0;
      fVar27 = *(float *)(lVar5 + 0x1330) + (float)((ulonglong)local_c8 >> 0x20);
      fVar28 = (float)uStack_c0 + 0.0;
      uVar22 = FUN_14007a557(((local_12c >> 0x15 & 1) == 0) * '\x03' + '&');
      fVar25 = *(float *)(lVar5 + 0xe4c);
      if (fVar25 <= 0.0) {
        local_dc = fVar27 + _UNK_140211da4;
        local_d8 = CONCAT44(local_dc,fVar28 + _DAT_140211da0);
        local_e0 = fVar26 + DAT_1402115a8;
        local_168 = (char *)CONCAT44(local_168._4_4_,*(undefined4 *)(lVar5 + 0xe68));
        FUN_1400ddd04(lVar11,&local_e0,&local_d8,uVar22);
      }
      else {
        fVar27 = fVar27 + fVar25;
        local_d8 = CONCAT44(fVar27,fVar26 + fVar25);
        local_168._0_4_ = 9;
        local_12c = uVar22;
        FUN_1400dc632(lVar11,&local_d8,fVar25,7);
        local_d8 = CONCAT44(fVar27,fVar28 - fVar25);
        local_168._0_4_ = 0xb;
        FUN_1400dc632(lVar11,&local_d8,fVar25,9);
        local_160 = 0;
        local_168 = (char *)CONCAT44(local_168._4_4_,*(undefined4 *)(lVar5 + 0xe68));
        FUN_1400db1c8(lVar11,*(undefined8 *)(lVar11 + 0x58),*(undefined4 *)(lVar11 + 0x50),local_12c
                     );
        *(undefined4 *)(lVar11 + 0x50) = 0;
      }
    }
    iVar8 = 0;
    FUN_14007bdca(&local_c8,local_134,0);
    cVar7 = FUN_1400808b4(0x20);
    if ((cVar7 != '\0') && (*(int *)(param_1 + 0x20) != *piVar20)) {
      cVar7 = FUN_1400816ee(1,0);
      if (cVar7 == '\0') {
        cVar7 = FUN_140092089(1);
        if ((cVar7 != '\0') && ((uVar17 & 0x200000) == 0)) goto LAB_1400cd975;
      }
      else if ((uVar16 >> 0x15 & 1) == 0) {
LAB_1400cd975:
        FUN_1400cc975(param_1,piVar20);
      }
    }
    uVar22 = *(uint *)(param_1 + 0x18);
    if (local_12d != 0) {
      iVar8 = local_134;
      if (param_5 != 0) {
        iVar8 = *(int *)(param_5 + 0x10);
      }
      iVar8 = FUN_1400915a5("#CLOSE",0,iVar8);
    }
    pcVar6 = local_f8;
    uVar1 = uVar16 & 0xffbffffe;
    if ((char)local_108 == '\0') {
      uVar1 = uVar16;
    }
    local_140 = &local_e0;
    local_148 = &local_d8;
    local_150 = SUB81(local_120,0);
    local_160 = local_134;
    local_168 = local_f8;
    local_158 = iVar8;
    FUN_1400ce112(lVar11,&local_c8,uVar22 >> 1 & 4 | uVar1,*(undefined8 *)(param_1 + 0x90));
    if ((local_12d & (byte)local_d8) == 1) {
      *local_100 = '\0';
      FUN_1400cc93e(param_1,piVar20);
    }
    if ((param_5 != 0) && (((local_10c & 1) != 0 || (*(int *)(lVar5 + 0x1664) == iVar8)))) {
      *(byte *)(lVar5 + 0x1fe8) = *(byte *)(lVar5 + 0x1fe8) | 0x80;
    }
    lVar19 = local_118;
    if ((((local_e0._0_1_ == '\x01') && (*(int *)(lVar5 + 0x1664) == local_134 && local_135 == 0))
        && ((*(byte *)(param_1 + 0x18) & 0x20) == 0)) && ((*(byte *)(piVar20 + 1) & 0x10) == 0)) {
      iVar8 = FUN_14007b050(pcVar6,0);
      FUN_140093dc2(&DAT_140ec5c2a,iVar8 - (int)pcVar6,pcVar6);
      lVar19 = local_118;
    }
  }
  if ((char)local_128 != '\0') {
    FUN_140088407();
  }
  *(undefined8 *)(lVar19 + 0x158) = uVar2;
  piVar20 = (int *)((ulonglong)local_120 & 0xff);
  if ((uVar17 & 0x200000) != 0) {
    piVar20 = (int *)(ulonglong)(byte)local_104;
  }
LAB_1400cdaea:
  if (DAT_140f17b40 != (local_90 ^ (ulonglong)auStack_188)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_90 ^ (ulonglong)auStack_188);
  }
  return (ulonglong)piVar20 & 0xffffffff;
}


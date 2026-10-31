/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078f47e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14078f47e(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  byte bVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  char cVar24;
  ulonglong uVar23;
  ulonglong unaff_RBX;
  float *pfVar25;
  int iVar26;
  undefined4 *puVar27;
  ulonglong uVar28;
  undefined4 *puVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  undefined4 *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined4 *puVar40;
  undefined1 *puVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  uint *puVar44;
  undefined1 *puVar45;
  float *pfVar46;
  ulonglong uVar47;
  longlong unaff_RSI;
  bool bVar48;
  bool bVar49;
  float10 fVar50;
  float fVar51;
  float fVar52;
  ulonglong uVar29;
  
  puVar27 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xa0);
  pcVar15 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffff9c);
  cVar10 = (char)pcVar15;
  *pcVar15 = *pcVar15 + cVar10;
  pbVar1 = (byte *)(unaff_RBX + 0x39d74c35);
  bVar2 = *pbVar1;
  bVar20 = (byte)param_1;
  *pbVar1 = *pbVar1 + bVar20;
  *(char *)(unaff_RBX + 0x14cc86) = *(char *)(unaff_RBX + 0x14cc86) + bVar20 + CARRY1(bVar2,bVar20);
  cVar24 = (char)((ulonglong)param_2 >> 8) + cVar10;
  lVar19 = (ulonglong)CONCAT61((int6)((ulonglong)param_2 >> 0x10),cVar24) << 8;
  *pcVar15 = *pcVar15 + cVar10;
  *(int *)(unaff_RBX + 0x14cc8e) = *(int *)(unaff_RBX + 0x14cc8e) + (int)param_1;
  *param_1 = *param_1 + cVar24;
  fVar50 = (float10)*(int *)(pcVar15 + 0xfeb9);
  *pcVar15 = *pcVar15 + cVar10;
  if (*pcVar15 != '\0') goto LAB_14078fa1a;
  puVar27[1] = (int)param_1;
  *(undefined8 *)(puVar27 + -2) = 0;
  *(undefined8 *)(puVar27 + -4) = *(undefined8 *)(puVar27 + 0x2c);
  *(undefined8 *)(puVar27 + -6) = 0x14078f4d0;
  uVar12 = FUN_14075a0a4();
  puVar27[1] = uVar12;
  *(undefined8 *)(puVar27 + -6) = 0x14078f4d9;
  FUN_14076d403();
  puVar27[2] = (float)fVar50;
  *(undefined1 (*) [16])(puVar27 + 3) = ZEXT416((uint)puVar27[2]);
  if ((*(byte *)(unaff_RSI + 0x1e48) & 0x20) != 0) {
    unaff_RBX = (ulonglong)*(uint *)(unaff_RSI + 0x1e7c);
  }
  *puVar27 = (int)unaff_RBX;
  *(undefined8 *)(puVar27 + -6) = 0;
  uVar13 = puVar27[0x28];
  *(ulonglong *)(puVar27 + -8) = (ulonglong)uVar13;
  *(undefined8 *)(puVar27 + -10) = 0x14078f50b;
  uVar16 = FUN_14075544d();
  uVar28 = (ulonglong)((int)(puVar27 + -8) + 8);
  pfVar25 = (float *)(uVar28 + 0x54 & 0xffffffff);
  *(undefined8 *)(uVar28 - 8) = 0xffffffffbf800000;
  *(undefined8 *)(uVar28 - 0x10) = 0;
  *(int *)(uVar28 + 4) = (int)uVar16;
  *(undefined8 *)(uVar28 - 0x18) = uVar16;
  *(ulonglong *)(uVar28 - 0x20) = (ulonglong)uVar13;
  *(float **)(uVar28 - 0x28) = pfVar25;
  *(undefined8 *)(uVar28 - 0x30) = 0x14078f524;
  FUN_1407559fe();
  iVar26 = (int)(uVar28 - 0x28);
  uVar29 = (ulonglong)(iVar26 + 0x14);
  fVar3 = *(float *)(unaff_RSI + 0xd10);
  fVar4 = *(float *)((ulonglong)*(uint *)(uVar29 + 4) + 0x144);
  fVar5 = *(float *)((ulonglong)*(uint *)(uVar29 + 4) + 0x148);
  fVar52 = fVar3 + fVar3 + pfVar25[1] + fVar5;
  *(float *)(uVar29 + 0x44) = fVar4;
  *(float *)(uVar29 + 0x48) = fVar5;
  *(float *)(uVar29 + 0x4c) = *(float *)(uVar29 + 0x1c) + fVar4;
  *(float *)(uVar29 + 0x50) = fVar52;
  fVar51 = 0.0;
  if (0.0 < *pfVar25) {
    fVar51 = *pfVar25 + *(float *)(unaff_RSI + 0xd24);
  }
  fVar51 = fVar51 + *(float *)(uVar29 + 0x1c) + fVar4;
  fVar52 = fVar52 + 0.0;
  pfVar25 = (float *)(uVar29 + 0x34 & 0xffffffff);
  *pfVar25 = fVar4;
  pfVar25[1] = fVar5;
  pfVar25[2] = fVar51;
  pfVar25[3] = fVar52;
  uVar12 = *(undefined4 *)(uVar29 + 0xd0);
  *(ulonglong *)(uVar29 + 0x5c & 0xffffffff) = CONCAT44(fVar52 - fVar5,fVar51 - fVar4);
  puVar30 = (undefined4 *)(ulonglong)(iVar26 + 0xc);
  puVar30[1] = fVar3;
  *puVar30 = (int)(uVar29 + 0x5c);
  *(undefined8 *)(puVar30 + -2) = 0x14078f5b4;
  FUN_1407646e0();
  uVar31 = (ulonglong)(iVar26 + 0x14);
  *(ulonglong *)(uVar31 - 8) = (ulonglong)(-1 < (char)uVar12) << 0x14;
  *(ulonglong *)(uVar31 - 0x10) = uVar31 + 0x44 & 0xffffffff;
  uVar13 = *(uint *)(uVar31 + 0xc);
  uVar47 = (ulonglong)uVar13;
  *(ulonglong *)(uVar31 - 0x18) = uVar47;
  *(float **)(uVar31 - 0x20) = pfVar25;
  *(undefined8 *)(uVar31 - 0x28) = 0x14078f5cb;
  cVar10 = FUN_1407648a8();
  puVar27 = (undefined4 *)(ulonglong)((int)(uVar31 - 0x20) + 0x10);
  if (cVar10 == '\0') {
    unaff_RBX = 0;
    goto LAB_14078fa1a;
  }
  uVar22 = (ulonglong)*(uint *)((longlong)puVar27 + 0xb8);
  *(int *)((longlong)puVar27 + 0x1c) = *(int *)((longlong)puVar27 + 0xcc);
  if (*(int *)((longlong)puVar27 + 0xcc) == 0) {
    *(ulonglong *)((longlong)puVar27 + -8) = uVar22;
    *(undefined8 *)((longlong)puVar27 + -0x10) = 0x14078f5f2;
    lVar17 = FUN_14078bd99();
    puVar27 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar27 + -8) + 4);
    *(undefined4 *)((longlong)puVar27 + 0x1c) = *(undefined4 *)(lVar17 + 8);
  }
  *(undefined8 *)((longlong)puVar27 + -8) = *(undefined8 *)(unaff_RSI + 0x1e84);
  *(ulonglong *)((longlong)puVar27 + -0x10) = uVar47;
  *(ulonglong *)((longlong)puVar27 + -0x18) = (ulonglong)((longlong)puVar27 + 0x3c) & 0xffffffff;
  *(undefined8 *)((longlong)puVar27 + -0x20) = 0x14078f60d;
  uVar11 = FUN_14075abc2();
  puVar32 = (undefined1 *)(ulonglong)((int)(undefined1 *)((longlong)puVar27 + -0x18) + 0xc);
  puVar32[3] = uVar11;
  if ((char)*(undefined4 *)(puVar32 + 0xd0) < '\0') {
LAB_14078f638:
    cVar10 = '\0';
    if (puVar32[3] == '\0') {
      cVar24 = '\0';
    }
    else {
      *(ulonglong *)(puVar32 + -8) = uVar47;
      *(undefined8 *)(puVar32 + -0x10) = 0;
      *(undefined8 *)(puVar32 + -0x18) = 0;
      *(undefined8 *)(puVar32 + -0x20) = 0x14078f649;
      cVar24 = FUN_14075bdbe();
      puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -0x18) + 0xc);
      if (*(short *)(unaff_RSI + 0xb22) == 2) {
        *(ulonglong *)(puVar32 + -8) = uVar47;
        *(undefined8 *)(puVar32 + -0x10) = 0x290;
        *(undefined8 *)(puVar32 + -0x18) = 0x14078f663;
        cVar10 = FUN_14076bb6d();
        puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -0x10) + 8);
      }
    }
    if (cVar24 == '\0' && cVar10 == '\0') {
      bVar48 = *(uint *)(unaff_RSI + 0x2058) == uVar13;
      uVar23 = CONCAT71((int7)((ulonglong)lVar19 >> 8),!bVar48);
    }
    else {
      *(undefined8 *)(puVar32 + -8) = 0;
      *(ulonglong *)(puVar32 + -0x10) = uVar47;
      *(undefined8 *)(puVar32 + -0x18) = 0x290;
      *(undefined8 *)(puVar32 + -0x20) = 0x14078f688;
      FUN_14076c284();
      puVar32 = (undefined1 *)(ulonglong)((int)(puVar32 + -0x18) + 0xc);
      bVar48 = true;
      uVar23 = 0;
    }
    if (((char)*(undefined4 *)(puVar32 + 0xd0) < '\0') || (!bVar48)) {
LAB_14078f6de:
      if ((char)*(undefined4 *)(puVar32 + 0xd0) < '\0') {
LAB_14078f74c:
        bVar49 = false;
      }
      else {
        bVar49 = false;
        if (*(char *)(unaff_RSI + 0x7d) != '\0') {
          if ((puVar32[3] != '\x01' || *(uint *)(unaff_RSI + 0x1528) != uVar13) ||
             (*(char *)(unaff_RSI + 0xb36) != '\x01')) goto LAB_14078f74c;
          uVar23 = uVar23 & 0xffffffff;
          puVar33 = (undefined4 *)(ulonglong)((int)puVar32 - 8);
          puVar33[1] = *(float *)(unaff_RSI + 0x90) * _DAT_150a46805;
          *puVar33 = 0;
          *(undefined8 *)(puVar33 + -2) = 0x14078f73a;
          cVar10 = FUN_14076be7e();
          bVar49 = cVar10 == '\0';
          if (bVar49) {
            *(uint *)(unaff_RSI + 0x2058) = uVar13;
            *(undefined4 *)(unaff_RSI + 0x2064) = 1;
          }
        }
      }
    }
    else if (cVar24 == '\0') {
      bVar49 = true;
      if (cVar10 == '\0') goto LAB_14078f6cb;
    }
    else {
      bVar49 = true;
      if (cVar10 == '\0' && *(char *)(unaff_RSI + 0x104) == '\0') {
LAB_14078f6cb:
        if ((*(uint *)(unaff_RSI + 0x2058) != uVar13) ||
           (bVar49 = true, (*(byte *)(unaff_RSI + 0x2064) & 1) == 0)) goto LAB_14078f6de;
      }
    }
    uVar22 = (ulonglong)*(uint *)(puVar32 + 0xb8);
    if (bVar48) {
      *(ulonglong *)(puVar32 + -8) = uVar22;
      *(int *)(puVar32 + 4) = (int)uVar23;
      *(undefined8 *)(puVar32 + -0x10) = 0x14078f765;
      puVar18 = (undefined8 *)FUN_14078bd99();
      uVar34 = (ulonglong)((int)(puVar32 + -8) + 4);
      *(undefined8 *)(uVar34 - 8) = *puVar18;
      *(undefined8 *)(uVar34 - 0x10) = *(undefined8 *)(uVar34 + 0xb8);
      *(ulonglong *)(uVar34 - 0x18) = (ulonglong)((int)unaff_RSI + 0x1560);
      *(undefined8 *)(uVar34 - 0x20) = 0x14078f77d;
      FUN_1408b31a0();
      uVar23 = (ulonglong)*(uint *)(uVar34 - 4);
      puVar32 = (undefined1 *)(ulonglong)((int)(uVar34 - 0x18) + 0xc);
    }
    if ((char)uVar23 == '\0' && !bVar49) {
      uVar22 = (ulonglong)*(uint *)(puVar32 + 4);
      *(ulonglong *)(puVar32 + -8) = uVar22;
      *(ulonglong *)(puVar32 + -0x10) = uVar47;
      *(undefined8 *)(puVar32 + -0x18) = 0x14078f7f2;
      FUN_14075a58a();
      uVar36 = (ulonglong)((int)(puVar32 + -0x10) + 8);
      *(ulonglong *)(uVar36 - 8) = uVar22;
      *(ulonglong *)(uVar36 - 0x10) = uVar47;
      *(undefined8 *)(uVar36 - 0x18) = 0x14078f7fc;
      FUN_14076f087();
      uVar37 = (ulonglong)((int)(uVar36 - 0x10) + 8);
      *(undefined8 *)(uVar37 - 8) = 0;
      *(ulonglong *)(uVar37 - 0x10) = uVar22;
      *(undefined8 *)(uVar37 - 0x18) = 0x14078f807;
      FUN_14075b3b2();
      puVar32 = (undefined1 *)(ulonglong)((int)(uVar37 - 0x10) + 8);
      *(undefined4 *)(unaff_RSI + 0x1e30) = 3;
    }
    else if (bVar49) goto LAB_14078f792;
    uVar22 = 9;
    if (*(uint *)(unaff_RSI + 0x1528) != uVar13) {
      uVar22 = (ulonglong)((byte)puVar32[3] + 7);
    }
    *(undefined8 *)(puVar32 + -8) = 0x3f800000;
    *(ulonglong *)(puVar32 + -0x10) = uVar22;
    *(undefined8 *)(puVar32 + -0x18) = 0x14078f835;
    uVar14 = FUN_140754a09();
    uVar38 = (ulonglong)((int)(puVar32 + -0x10) + 8);
    *(undefined8 *)(uVar38 - 8) = 0;
    *(ulonglong *)(uVar38 - 0x10) = uVar47;
    *(ulonglong *)(uVar38 - 0x18) = uVar38 + 0x3c & 0xffffffff;
    *(undefined8 *)(uVar38 - 0x20) = 0x14078f848;
    FUN_14075612e();
    iVar26 = (int)(uVar38 - 0x18);
    uVar39 = (ulonglong)(iVar26 + 0xc);
    uVar12 = *(undefined4 *)(uVar39 + 0x44);
    uVar7 = *(undefined4 *)(uVar39 + 0x48);
    uVar8 = *(undefined4 *)(uVar39 + 0x4c);
    uVar9 = *(undefined4 *)(uVar39 + 0x50);
    puVar40 = (undefined4 *)(ulonglong)(iVar26 - 0x10);
    puVar40[6] = *(undefined4 *)(unaff_RSI + 0xd14);
    puVar40[5] = 0;
    puVar40[4] = uVar14;
    *puVar40 = uVar12;
    puVar40[1] = uVar7;
    puVar40[2] = uVar8;
    puVar40[3] = uVar9;
    *(undefined8 *)(puVar40 + -2) = 0x14078f872;
    FUN_140755db9();
    puVar41 = (undefined1 *)(ulonglong)(iVar26 + 0xc);
    if ((*(uint *)(puVar41 + 0x10) != 0) && (0.0 < *(float *)(unaff_RSI + 0xda8))) {
      *(undefined4 *)(puVar41 + 4) = *(undefined4 *)(unaff_RSI + 0xd14);
      *(undefined8 *)(puVar41 + -8) = 0x3f800000;
      *(ulonglong *)(puVar41 + -0x10) = (ulonglong)*(uint *)(puVar41 + 0x10);
      *(undefined8 *)(puVar41 + -0x18) = 0x14078f8a6;
      uVar12 = FUN_140754ae2();
      puVar42 = (undefined4 *)(ulonglong)((int)(puVar41 + -0x10) - 4);
      puVar42[2] = puVar42[4];
      puVar42[1] = uVar12;
      *puVar42 = (int)(puVar42 + 0x14);
      *(undefined8 *)(puVar42 + -2) = 0x14078f8c5;
      FUN_1407560ac();
      puVar41 = (undefined1 *)(ulonglong)((int)(puVar41 + -0x10) + 8);
    }
    uVar12 = *(undefined4 *)(puVar41 + 0x44);
    uVar7 = *(undefined4 *)(puVar41 + 0x48);
    uVar8 = *(undefined4 *)(puVar41 + 0x4c);
    uVar9 = *(undefined4 *)(puVar41 + 0x50);
    puVar43 = (undefined4 *)(ulonglong)((int)puVar41 - 0x14);
    puVar43[4] = *(undefined4 *)(unaff_RSI + 0xd14);
    *puVar43 = uVar12;
    puVar43[1] = uVar7;
    puVar43[2] = uVar8;
    puVar43[3] = uVar9;
    *(undefined8 *)(puVar43 + -2) = 0x14078f8e7;
    FUN_140755f4c();
    puVar44 = (uint *)(ulonglong)((int)puVar41 - 0x20);
    puVar44[7] = puVar44[0x3c];
    puVar44[6] = puVar44[0xf];
    puVar44[5] = puVar44[0x3a];
    puVar44[4] = puVar44[0x39];
    puVar44[3] = puVar44[0x38];
    puVar44[2] = puVar44[0x37];
    uVar6 = puVar44[0x36];
    puVar44[1] = uVar6;
    *puVar44 = uVar13;
    puVar44[-2] = 0x4078f940;
    puVar44[-1] = 1;
    uVar13 = FUN_14078ca05();
    unaff_RBX = (ulonglong)uVar13;
    if ((char)uVar13 != '\0') {
      *(ulonglong *)(puVar41 + -8) = uVar47;
      *(undefined8 *)(puVar41 + -0x10) = 0x14078f951;
      FUN_14075a7e3();
      puVar41 = (undefined1 *)(ulonglong)((int)(puVar41 + -8) + 4);
    }
    *(undefined8 *)(puVar41 + -8) = *(undefined8 *)(puVar41 + 0x1c);
    *(undefined8 *)(puVar41 + -0x10) = *(undefined8 *)(puVar41 + 0xb8);
    *(ulonglong *)(puVar41 + -0x18) = (ulonglong)uVar6;
    *(undefined8 *)(puVar41 + -0x20) = 0x40;
    *(ulonglong *)(puVar41 + -0x28) = (ulonglong)(puVar41 + 0x4c) & 0xffffffff;
    *(undefined8 *)(puVar41 + -0x30) = 0x14078f970;
    lVar19 = FUN_14078bda7();
    puVar45 = (undefined1 *)(ulonglong)((int)(puVar41 + -0x28) + 0x14);
    lVar19 = (longlong)puVar45 + lVar19;
    if (*(char *)(unaff_RSI + 0x2748) == '\x01') {
      *(undefined8 *)(puVar45 + -8) = 0x10330329;
      *(undefined8 *)(puVar45 + -0x10) = 0x10330345;
      *(undefined8 *)(puVar45 + -0x18) = 0x14078f991;
      FUN_140770236();
      puVar45 = (undefined1 *)(ulonglong)((int)(puVar45 + -0x10) + 8);
    }
    *(undefined8 *)((ulonglong)(puVar45 + 0x2c) & 0xffffffff) = _DAT_150a4835c;
    *(undefined8 *)(puVar45 + -8) = 0;
    *(undefined8 **)(puVar45 + -0x10) = (undefined8 *)((ulonglong)(puVar45 + 0x2c) & 0xffffffff);
    *(undefined8 *)(puVar45 + -0x18) = 0;
    *(ulonglong *)(puVar45 + -0x20) = (ulonglong)((int)lVar19 + 0x5c);
    *(ulonglong *)(puVar45 + -0x28) = (ulonglong)(puVar45 + 0x4c) & 0xffffffff;
    *(ulonglong *)(puVar45 + -0x30) = (ulonglong)(puVar41 + 0x4c) & 0xffffffff;
    *(ulonglong *)(puVar45 + -0x38) = (ulonglong)(puVar45 + 0x2c) & 0xffffffff;
    *(undefined8 *)(puVar45 + -0x40) = 0x14078f9ba;
    FUN_140755ac2();
    iVar26 = (int)(puVar45 + -0x38);
    puVar27 = (undefined4 *)(ulonglong)(iVar26 + 0x1c);
    if (0.0 < *(float *)((longlong)puVar27 + 0x54)) {
      fVar3 = *(float *)((longlong)puVar27 + 0x48);
      fVar4 = *(float *)((longlong)puVar27 + 0x4c);
      fVar5 = *(float *)(unaff_RSI + 0xd10);
      fVar51 = *(float *)(unaff_RSI + 0xd24);
      pfVar46 = (float *)(ulonglong)(iVar26 + 8);
      pfVar46[3] = pfVar46[8];
      pfVar46[2] = pfVar46[0x32];
      pfVar46[1] = fVar3 + fVar5;
      *pfVar46 = fVar4 + fVar51;
      pfVar46[4] = 0.0;
      pfVar46[-2] = 3.8902638;
      pfVar46[-1] = 1.4013e-45;
      FUN_14075547e();
      puVar27 = (undefined4 *)(ulonglong)(iVar26 + 0x1c);
    }
  }
  else {
    pcVar15 = (char *)(ulonglong)_DAT_1528a8391039d74c;
    *pcVar15 = *pcVar15 + (char)_DAT_1528a8391039d74c;
    if ((*pcVar15 != '\0') || (*(uint *)(pcVar15 + 0x254c) != uVar13)) goto LAB_14078f638;
LAB_14078f792:
    uVar23 = (ulonglong)*(uint *)(puVar32 + 200);
    *(ulonglong *)(puVar32 + -8) = uVar23;
    uVar13 = *(uint *)(puVar32 + 0xc0);
    *(ulonglong *)(puVar32 + -0x10) = (ulonglong)uVar13;
    *(undefined8 *)(puVar32 + -0x18) = 0x14078f7b0;
    cVar10 = FUN_14078fa63(*(undefined4 *)(puVar32 + 0xd0),uVar22);
    uVar35 = (ulonglong)((int)(puVar32 + -0x10) + 8);
    if (cVar10 == '\0') {
      uVar23 = 0;
    }
    uVar21 = 0;
    if (cVar10 != '\0') {
      uVar21 = (ulonglong)uVar13;
    }
    *(ulonglong *)(uVar35 - 8) = uVar23;
    *(ulonglong *)(uVar35 - 0x10) = uVar21;
    *(undefined8 *)(uVar35 - 0x18) = *(undefined8 *)(uVar35 + 0x14);
    *(undefined8 *)(uVar35 - 0x20) = *(undefined8 *)(uVar35 + 0xb0);
    *(ulonglong *)(uVar35 - 0x28) = uVar22;
    *(undefined8 *)(uVar35 - 0x30) = *(undefined8 *)(uVar35 + 0xa0);
    *(ulonglong *)(uVar35 - 0x38) = uVar47;
    *(ulonglong *)(uVar35 - 0x40) = uVar35 + 0x28 & 0xffffffff;
    *(undefined8 *)(uVar35 - 0x48) = 0x14078f7dd;
    uVar13 = FUN_14078faca();
    puVar27 = (undefined4 *)(ulonglong)((int)(uVar35 - 0x40) + 0x20);
    unaff_RBX = (ulonglong)uVar13;
  }
LAB_14078fa1a:
  if (_DAT_150b18729 != (*(uint *)((longlong)puVar27 + 0x9c) ^ (uint)puVar27)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((longlong)puVar27 + -8) = FUN_14078fa63;
    FUN_1408802b0(*(uint *)((longlong)puVar27 + 0x9c) ^ (uint)puVar27);
  }
  return unaff_RBX & 0xffffffff;
}


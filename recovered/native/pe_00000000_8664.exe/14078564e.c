/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078564e */

/* WARNING: Removing unreachable block (ram,0x00014078585c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14078564e(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined7 uVar16;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  uint *puVar22;
  uint *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 *puVar28;
  int iVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  byte in_R11B;
  int unaff_R13D;
  undefined8 unaff_R14;
  
  uVar7 = _DAT_150b22daf;
  puVar22 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x30);
  uVar10 = puVar22[0x12];
  uVar2 = puVar22[0x15];
  uVar15 = (ulonglong)_DAT_150b22daf;
  *(undefined1 *)((ulonglong)*(uint *)(uVar15 + 0x14cc) + 0xfb) = 1;
  uVar4 = uVar7 + 0x1e40;
  if (*(uint *)(uVar15 + 0x1e80) == uVar10) {
    uVar4 = uVar7 + 0x1e84;
  }
  uVar10 = *(uint *)(ulonglong)uVar4;
  uVar4 = uVar2 | 0x440000;
  if ((uVar10 >> 0x11 & 1) == 0) {
    uVar4 = uVar2;
  }
  *(bool *)(puVar22 + 1) = (uVar4 & 7) == 0;
  puVar22[7] = uVar10;
  puVar22[6] = 0;
  uVar6 = (uint)((uVar10 & 8) == 0) * 0x10 + 0x10;
  if ((uVar4 & 0x3f0) != 0) {
    uVar6 = 0;
  }
  puVar22[3] = uVar4;
  *puVar22 = *(undefined4 *)(uVar15 + 0x14cc);
  uVar3 = *(uint *)(uVar15 + 0x14d0);
  if (((uVar4 >> 0xb & 1) != 0) && (uVar3 != 0)) {
    uVar4 = *puVar22;
    if (*(int *)((ulonglong)uVar3 + 0x3b0) == *(int *)((ulonglong)uVar4 + 0x3b0)) {
      *(uint *)(uVar15 + 0x14d0) = uVar4;
      puVar22[6] = (uint)CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
    }
    else {
      puVar22[6] = 0;
    }
  }
  uVar4 = puVar22[1];
  uVar18 = (ulonglong)(byte)uVar4;
  *(ulonglong *)(puVar22 + -2) = (ulonglong)(uVar2 * 4 & 0x4000 | uVar10);
  *(undefined8 *)(puVar22 + -4) = *(undefined8 *)(puVar22 + 0x11);
  *(undefined8 *)(puVar22 + -6) = *(undefined8 *)(puVar22 + 0xf);
  puVar22[-8] = 0x4078572d;
  puVar22[-7] = 1;
  uVar13 = uVar18;
  uVar9 = FUN_14075abc2();
  puVar23 = (uint *)(ulonglong)((int)(puVar22 + -6) + 0xc);
  *(undefined4 *)((longlong)puVar23 + 0x14) = uVar9;
  if (*(char *)(uVar15 + 0x2250) == '\x01') {
    if (((*(uint *)((longlong)puVar23 + 0xc) >> 9 & 1) == 0) ||
       ((*(byte *)(uVar15 + 0x2254) & 4) != 0)) {
LAB_1407857d4:
      *(undefined4 *)((longlong)puVar23 + 8) = 0;
    }
    else {
      *(undefined8 *)((longlong)puVar23 + -8) = 0x80;
      *(undefined8 *)((longlong)puVar23 + -0x10) = 0x140785760;
      cVar8 = FUN_14075a8ea();
      puVar23 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar23 + -8) + 4);
      if (cVar8 == '\0') goto LAB_1407857d4;
      *(undefined8 *)((longlong)puVar23 + -8) = *(undefined8 *)((longlong)puVar23 + 0x48);
      *(undefined8 *)((longlong)puVar23 + -0x10) = 0x140785770;
      uVar11 = FUN_14075a7b5();
      puVar23 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar23 + -8) + 4);
      fVar1 = *(float *)(uVar15 + 0x151c);
      *(undefined4 *)((longlong)puVar23 + 8) = 0;
      bVar5 = _DAT_150a3c95e <= fVar1;
      *(int *)((longlong)puVar23 + 0x14) = (int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      if ((bVar5) && (fVar1 - *(float *)(uVar15 + 0x48) <= _DAT_150a3c973)) {
        *(undefined4 *)(uVar15 + 0x22d8) = *(undefined4 *)((longlong)puVar23 + 0x48);
        *(undefined8 *)((longlong)puVar23 + -8) = 0;
        *(undefined8 *)((longlong)puVar23 + -0x10) = *(undefined8 *)((longlong)puVar23 + -4);
        *(undefined8 *)((longlong)puVar23 + -0x18) = 0x1407857b9;
        uVar11 = FUN_14075b3b2();
        puVar23 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar23 + -0x10) + 8);
        uVar16 = (undefined7)((ulonglong)uVar11 >> 8);
        *(int *)((longlong)puVar23 + 0x14) = (int)CONCAT71(uVar16,1);
        *(int *)((longlong)puVar23 + 8) = (int)CONCAT71(uVar16,1);
      }
    }
    if (*(int *)(uVar15 + 0x22d0) == *(int *)((longlong)puVar23 + 0x48)) {
      uVar10 = *(uint *)((longlong)puVar23 + 0x14) & 0xff;
      if ((*(byte *)(uVar15 + 0x22c5) & 0x20) != 0) {
        uVar10 = 0;
      }
      uVar13 = 0;
      *(uint *)((longlong)puVar23 + 0x14) = uVar10;
    }
  }
  else {
    *(undefined4 *)((longlong)puVar23 + 8) = 0;
  }
  uVar20 = (ulonglong)*puVar23;
  if ((char)puVar23[6] != '\0') {
    *(uint *)(uVar15 + 0x14d0) = uVar3;
  }
  puVar23[1] = uVar7;
  uVar10 = puVar23[3];
  uVar15 = (ulonglong)uVar10;
  puVar23[6] = uVar6 | (byte)uVar4 | uVar10;
  uVar31 = 0;
  if ((uVar10 >> 0x15 & 1) == 0) {
    uVar31 = (ulonglong)puVar23[0x12];
  }
  if ((char)puVar23[5] == '\0') {
    uVar30 = (ulonglong)puVar23[0x12];
  }
  else {
    do {
      if ((*(uint *)((longlong)puVar23 + 0x18) & 1) != 0) {
        *(ulonglong *)((longlong)puVar23 + -8) = uVar31;
        *(undefined8 *)((longlong)puVar23 + -0x10) = 0;
        *(undefined8 *)((longlong)puVar23 + -0x18) = 0;
        *(undefined8 *)((longlong)puVar23 + -0x20) = 0x140785854;
        FUN_14075bdbe();
        uVar24 = (ulonglong)((int)(undefined1 *)((longlong)puVar23 + -0x18) + 0xc);
        *(ulonglong *)(uVar24 - 8) = uVar31;
        *(undefined8 *)(uVar24 - 0x10) = 0;
        *(undefined8 *)(uVar24 - 0x18) = 0x14078586b;
        cVar8 = FUN_14076be2b();
        puVar23 = (uint *)(ulonglong)((int)(uVar24 - 0x10) + 8);
        uVar13 = uVar18;
        if ((int)uVar18 == -1) {
          uVar13 = 0;
        }
        if (cVar8 != '\0') {
          uVar18 = uVar13;
        }
      }
    } while (unaff_R13D != 3);
    uVar10 = *(uint *)((longlong)puVar23 + 0x48);
    uVar30 = (ulonglong)uVar10;
    if (((*(uint *)((longlong)puVar23 + 0xc) >> 0x10 & 1) == 0) ||
       (((uVar12 = (ulonglong)*(uint *)((longlong)puVar23 + 4), *(char *)(uVar12 + 0x104) == '\0' &&
         (*(char *)(uVar12 + 0x105) == '\0')) && (*(char *)(uVar12 + 0x106) == '\0')))) {
      uVar12 = (ulonglong)*(uint *)((longlong)puVar23 + 4);
      if (*(uint *)(uVar12 + 0x1528) != uVar10) {
        if ((*(uint *)((longlong)puVar23 + 0xc) >> 0x14 & 1) == 0) {
          *(undefined8 *)((longlong)puVar23 + -8) = 0;
          *(ulonglong *)((longlong)puVar23 + -0x10) = uVar30;
          *(undefined8 *)((longlong)puVar23 + -0x18) = 0x290;
          *(undefined8 *)((longlong)puVar23 + -0x20) = 0x1407858bd;
          FUN_14076c284();
          puVar23 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar23 + -0x18) + 0xc);
        }
        if ((*(byte *)((longlong)puVar23 + 0x18) & 0x60) != 0) {
          *(undefined8 *)((longlong)puVar23 + -8) = *(undefined8 *)puVar23;
          *(ulonglong *)((longlong)puVar23 + -0x10) = uVar30;
          *(undefined8 *)((longlong)puVar23 + -0x18) = 0x1407858d0;
          FUN_14075a58a();
          puVar23 = (uint *)(ulonglong)((int)(undefined8 *)((longlong)puVar23 + -0x10) + 8);
          *(undefined1 *)((ulonglong)*(uint *)((longlong)puVar23 + 4) + 0x153b) = 0;
          if ((*(uint *)((longlong)puVar23 + 0xc) >> 0x12 & 1) == 0) {
            *(undefined8 *)((longlong)puVar23 + -8) = *(undefined8 *)puVar23;
            *(ulonglong *)((longlong)puVar23 + -0x10) = uVar30;
            *(undefined8 *)((longlong)puVar23 + -0x18) = 0x1407858f0;
            FUN_14076f087();
            puVar23 = (uint *)(ulonglong)((int)(undefined8 *)((longlong)puVar23 + -0x10) + 8);
            *(undefined8 *)((longlong)puVar23 + -8) = 0;
          }
          else {
            if ((*(uint *)((longlong)puVar23 + 0xc) >> 0x16 & 1) != 0) goto LAB_140785942;
            *(undefined8 *)((longlong)puVar23 + -8) = 0;
          }
          *(undefined8 *)((longlong)puVar23 + -0x10) = *(undefined8 *)((longlong)puVar23 + -4);
          *(undefined8 *)((longlong)puVar23 + -0x18) = 0x14078593f;
          FUN_14075b3b2();
          puVar23 = (uint *)(ulonglong)((int)puVar23 - 8);
        }
LAB_140785942:
        if (((*(byte *)((longlong)puVar23 + 0x18) & 0x10) != 0) ||
           (((*(uint *)((longlong)puVar23 + 0xc) >> 8 & 1) != 0 &&
            (*(short *)((ulonglong)*(uint *)((longlong)puVar23 + 4) + 0xb22) == 2)))) {
          if ((*(uint *)((longlong)puVar23 + 0xc) >> 0x11 & 1) == 0) {
            *(undefined8 *)((longlong)puVar23 + -8) = *(undefined8 *)puVar23;
            *(ulonglong *)((longlong)puVar23 + -0x10) = uVar30;
            *(undefined8 *)((longlong)puVar23 + -0x18) = 0x140785971;
            FUN_14075a58a();
            puVar23 = (uint *)(ulonglong)((int)(undefined8 *)((longlong)puVar23 + -0x10) + 8);
          }
          else {
            *(undefined8 *)((longlong)puVar23 + -8) = 0x14078597b;
            FUN_14075a7a8();
          }
          *(undefined1 *)((ulonglong)puVar23[1] + 0x153b) = 0;
          if ((puVar23[3] >> 0x12 & 1) == 0) {
            *(undefined8 *)(puVar23 + -2) = *(undefined8 *)puVar23;
            *(ulonglong *)(puVar23 + -4) = uVar30;
            puVar23[-6] = 0x40785998;
            puVar23[-5] = 1;
            FUN_14076f087();
            uVar2 = puVar23[-2];
            puVar23 = (uint *)(ulonglong)((int)(puVar23 + -4) + 8);
          }
          else {
            puVar23[2] = (uint)CONCAT71((int7)(uVar13 >> 8),1);
            if ((puVar23[3] >> 0x16 & 1) != 0) goto LAB_1407859c5;
            uVar2 = *puVar23;
          }
          *(undefined8 *)((longlong)puVar23 + -8) = 0;
          *(ulonglong *)((longlong)puVar23 + -0x10) = (ulonglong)uVar2;
          *(undefined8 *)((longlong)puVar23 + -0x18) = 0x1407859bc;
          uVar11 = FUN_14075b3b2();
          puVar23 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar23 + -0x10) + 8);
          *(int *)((longlong)puVar23 + 8) = (int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        }
LAB_1407859c5:
        uVar2 = *(uint *)((longlong)puVar23 + 0xc);
        uVar12 = (ulonglong)uVar2;
        if ((char)uVar2 < '\0') {
          if ((uVar2 >> 0x11 & 1) == 0) {
            *(undefined8 *)((longlong)puVar23 + -8) = *(undefined8 *)puVar23;
            *(ulonglong *)((longlong)puVar23 + -0x10) = uVar30;
            *(undefined8 *)((longlong)puVar23 + -0x18) = 0x1407859dc;
            FUN_14075a58a();
            puVar23 = (uint *)(ulonglong)((int)(undefined8 *)((longlong)puVar23 + -0x10) + 8);
          }
          uVar12 = (ulonglong)*(uint *)((longlong)puVar23 + 4);
          *(undefined1 *)(uVar12 + 0x153b) = 0;
        }
      }
      cVar8 = (char)puVar23[2];
      if (((char)puVar23[3] < '\0') && ((int)uVar18 != -1)) {
        cVar8 = '\x01';
        if (((puVar23[7] & 8) != 0) &&
           (cVar8 = (char)puVar23[2],
           *(float *)((ulonglong)puVar23[1] + 0xb88 + uVar18 * 4) <
           *(float *)((ulonglong)puVar23[1] + 0x94))) {
          cVar8 = '\0';
        }
        uVar20 = (ulonglong)*puVar23;
        if ((puVar23[3] >> 0x12 & 1) == 0) {
          *(ulonglong *)(puVar23 + -2) = uVar20;
          *(ulonglong *)(puVar23 + -4) = uVar30;
          puVar23[-6] = 0x40785a33;
          puVar23[-5] = 1;
          FUN_14076f087();
          puVar23 = (uint *)(ulonglong)((int)(puVar23 + -4) + 8);
        }
        *(undefined8 *)((longlong)puVar23 + -8) = 0x140785a3b;
        uVar12 = FUN_14075a7a8();
      }
      else {
        uVar20 = (ulonglong)*puVar23;
      }
      if ((((*(byte *)((longlong)puVar23 + 0x1c) & 8) != 0) &&
          (uVar15 = (ulonglong)*(uint *)((longlong)puVar23 + 4),
          *(uint *)(uVar15 + 0x1528) == uVar10)) &&
         (uVar12 = (ulonglong)(uint)(int)*(char *)(uVar15 + 0x153b),
         0.0 < *(float *)(uVar15 + 0xb74 + uVar12 * 4))) {
        *(undefined8 *)((longlong)puVar23 + -8) = unaff_R14;
        *(undefined8 *)((longlong)puVar23 + -0x10) = 0;
        *(ulonglong *)((longlong)puVar23 + -0x18) = uVar12;
        *(undefined8 *)((longlong)puVar23 + -0x20) = 0x140785a78;
        uVar12 = FUN_14075bdbe();
        puVar23 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar23 + -0x18) + 0xc);
        if ((char)uVar12 != '\0') {
          cVar8 = '\0';
        }
        goto LAB_140785a83;
      }
    }
    else {
      cVar8 = (char)*(undefined4 *)((longlong)puVar23 + 8);
LAB_140785a83:
      uVar20 = (ulonglong)*puVar23;
    }
    uVar15 = (ulonglong)*(uint *)((longlong)puVar23 + 0xc);
    if (cVar8 == '\0') {
      *(undefined4 *)((longlong)puVar23 + 8) = 0;
    }
    else {
      *(int *)((longlong)puVar23 + 8) = (int)CONCAT71((int7)(uVar12 >> 8),1);
      if (*(char *)((ulonglong)*(uint *)((longlong)puVar23 + 4) + 0x6a) == '\x01') {
        *(undefined1 *)((ulonglong)*(uint *)((longlong)puVar23 + 4) + 0x2040) = 0;
      }
    }
  }
  iVar29 = (int)uVar30;
  if ((*(byte *)((longlong)puVar23 + 0x1c) & 0x40) == 0) {
    uVar13 = (ulonglong)*(uint *)((longlong)puVar23 + 4);
    if ((*(int *)(uVar13 + 0x2044) == iVar29) && (*(char *)(uVar13 + 0x2040) == '\x01')) {
      uVar10 = 0;
      if (*(char *)(uVar13 + 0x2041) == '\0') {
        uVar10 = (uint)*(byte *)((longlong)puVar23 + 0x14);
      }
      if (((uint)uVar15 >> 0x13 & 1) != 0) {
        uVar10 = (uint)*(byte *)((longlong)puVar23 + 0x14);
      }
      *(uint *)((longlong)puVar23 + 0x14) = uVar10;
    }
    *(undefined1 *)((longlong)puVar23 + 0x13) = 1;
    uVar13 = (ulonglong)*(uint *)((longlong)puVar23 + 4);
    if (*(int *)(uVar13 + 0x205c) != iVar29) goto LAB_140785c73;
    iVar17 = *(int *)(uVar13 + 0x2058);
    if (((*(byte *)((longlong)puVar23 + 0x1c) & 8) != 0) && (*(int *)(uVar13 + 0x2060) != iVar29)) {
      *(undefined8 *)((longlong)puVar23 + -8) = 0x20c;
      *(undefined8 *)((longlong)puVar23 + -0x10) = _DAT_150b23284;
      *(int *)((longlong)puVar23 + 0x20) = iVar17;
      *(undefined8 *)((longlong)puVar23 + -0x18) = 0x140785b41;
      uVar9 = FUN_140751460();
      uVar25 = (ulonglong)((int)(undefined1 *)((longlong)puVar23 + -0x10) + 8);
      *(undefined4 *)(uVar25 + 0x24) = uVar9;
      *(undefined8 *)(uVar25 - 8) = 0x20d;
      *(undefined8 *)(uVar25 - 0x10) = _DAT_150b2329f;
      *(undefined8 *)(uVar25 - 0x18) = 0x140785b58;
      uVar10 = FUN_140751460();
      uVar26 = (ulonglong)((int)(uVar25 - 0x10) + 8);
      *(ulonglong *)(uVar26 - 8) =
           (ulonglong)((*(byte *)((ulonglong)*(uint *)(uVar26 + 4) + 0x65) ^ 1) * 2 + 0x27b);
      *(undefined8 *)(uVar26 - 0x10) = _DAT_150b232c2;
      *(undefined8 *)(uVar26 - 0x18) = 0x140785b7b;
      lVar14 = FUN_140751460();
      uVar27 = (ulonglong)((int)(uVar26 - 0x10) + 8);
      *(undefined4 *)(uVar27 + 0x20) = *(undefined4 *)(lVar14 + 4);
      uVar9 = *(undefined4 *)((ulonglong)*(uint *)(uVar27 + 0x24) + 4);
      puVar28 = (undefined4 *)(uVar26 - 0x10 & 0xffffffff);
      puVar28[1] = *(undefined4 *)((ulonglong)uVar10 + 4);
      *puVar28 = uVar9;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar28 + -2) = &UNK_140785bad;
      FUN_140755a9a();
    }
    if ((iVar17 != iVar29) && (*(int *)(uVar13 + 0x2060) != iVar29)) goto LAB_140785c73;
    *(ulonglong *)((longlong)puVar23 + -8) = uVar20;
    *(ulonglong *)((longlong)puVar23 + -0x10) = uVar30;
    *(undefined8 *)((longlong)puVar23 + -0x18) = 0x140785c24;
    FUN_14075a58a();
    puVar23 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar23 + -0x10) + 8);
    uVar13 = (ulonglong)*(uint *)((longlong)puVar23 + 4);
    *(undefined4 *)(uVar13 + 0x1548) = *(undefined4 *)(uVar13 + 0x208c);
    if ((((uint)uVar15 >> 0x12 & 1) == 0) && ((*(byte *)(uVar13 + 0x2064) & 0x10) == 0)) {
      *(undefined8 *)((longlong)puVar23 + -8) = *(undefined8 *)puVar23;
      *(ulonglong *)((longlong)puVar23 + -0x10) = uVar30;
      *(undefined8 *)((longlong)puVar23 + -0x18) = 0x140785c4f;
      FUN_14076f087();
      puVar23 = (uint *)(ulonglong)((int)(undefined8 *)((longlong)puVar23 + -0x10) + 8);
    }
    *(undefined1 *)((longlong)puVar23 + 0x13) = 1;
    if ((*(byte *)(uVar13 + 0x2064) & 0x10) != 0) {
      *(undefined1 *)(uVar13 + 0x153a) = 1;
    }
    uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
  }
  else {
    *(char *)((longlong)puVar23 + 0x13) = (char)*(undefined4 *)((longlong)puVar23 + 0x14);
LAB_140785c73:
    uVar15 = (ulonglong)*(uint *)((longlong)puVar23 + 8);
  }
  uVar10 = *(uint *)((longlong)puVar23 + 0x4c);
  uVar13 = (ulonglong)*(uint *)((longlong)puVar23 + 4);
  if (*(int *)(uVar13 + 0x1528) != iVar29) {
    uVar21 = 0;
    goto LAB_140785d65;
  }
  if (*(int *)(uVar13 + 0x1548) - 2U < 2) {
    uVar21 = 1;
    if (*(int *)(uVar13 + 0x205c) != iVar29) {
      *(undefined8 *)((longlong)puVar23 + -8) = 0x140785caa;
      FUN_14075a7a8();
LAB_140785d48:
      uVar21 = 0;
    }
  }
  else {
    if (*(int *)(uVar13 + 0x1548) != 1) goto LAB_140785d48;
    uVar13 = (ulonglong)*(uint *)((longlong)puVar23 + 4);
    if (*(char *)(uVar13 + 0x1534) == '\x01') {
      *(ulonglong *)(uVar13 + 0x1540) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(uVar13 + 0xe4) >> 0x20) -
                    (float)((ulonglong)*(undefined8 *)(ulonglong)*(uint *)((longlong)puVar23 + 0x44)
                           >> 0x20),
                    (float)*(undefined8 *)(uVar13 + 0xe4) -
                    (float)*(undefined8 *)(ulonglong)*(uint *)((longlong)puVar23 + 0x44));
    }
    uVar10 = (uint)*(char *)(uVar13 + 0x153b);
    if (uVar10 == 0xffffffff) {
LAB_140785dfc:
      *(undefined8 *)((longlong)puVar23 + -8) = 0x140785e01;
      FUN_14075a7a8();
      uVar21 = 0;
    }
    else {
      uVar21 = 1;
      *(ulonglong *)((longlong)puVar23 + -8) = uVar31;
      *(uint *)((longlong)puVar23 + -4) = uVar10;
      *(ulonglong *)((longlong)puVar23 + -0x10) = (ulonglong)uVar10;
      *(undefined8 *)((longlong)puVar23 + -0x18) = 0x140785d05;
      cVar8 = FUN_14076bdd9();
      puVar23 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar23 + -0x10) + 8);
      if (cVar8 == '\0') {
        if ((((puVar23[3] & 0x40) != 0) || (((byte)puVar23[6] >> 5 & *(byte *)(puVar23 + 5)) != 0))
           && (*(char *)((ulonglong)puVar23[1] + 0x2250) == '\0')) {
          if ((puVar23[3] >> 8 & 1) == 0) {
            iVar17 = *puVar23;
          }
          else {
            iVar17 = *puVar23;
          }
          *(ulonglong *)(puVar23 + -2) = uVar31;
          *(ulonglong *)(puVar23 + -4) = (ulonglong)(iVar17 + 0x290);
          puVar23[-6] = 0x40785de6;
          puVar23[-5] = 1;
          cVar8 = FUN_14076bb6d();
          puVar23 = (uint *)(ulonglong)((int)(puVar23 + -4) + 8);
          uVar13 = uVar15 & 0xff;
          uVar15 = 0;
          if ((in_R11B & 1) != 0) {
            uVar15 = uVar13;
          }
          if (cVar8 == '\0') {
            uVar15 = uVar13;
          }
        }
        goto LAB_140785dfc;
      }
    }
    if (((*(uint *)((longlong)puVar23 + 0xc) >> 0x12 & 1) == 0) &&
       (*(char *)((ulonglong)*(uint *)((longlong)puVar23 + 4) + 0x6a) == '\x01')) {
      *(undefined1 *)((ulonglong)*(uint *)((longlong)puVar23 + 4) + 0x2040) = 0;
    }
  }
  if ((char)uVar15 == '\0') {
    uVar15 = 0;
  }
  else {
    uVar10 = *(uint *)((longlong)puVar23 + 4);
    *(undefined1 *)((ulonglong)uVar10 + 0x1537) = 1;
    uVar15 = CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
  }
  uVar10 = *(uint *)((longlong)puVar23 + 0x4c);
LAB_140785d65:
  uVar2 = *(uint *)((longlong)puVar23 + 0x50);
  if (uVar10 != 0) {
    uVar19 = *(undefined1 *)((longlong)puVar23 + 0x14);
    if (*(int *)((ulonglong)*(uint *)((longlong)puVar23 + 4) + 0x2074) == iVar29) {
      uVar19 = *(undefined1 *)((longlong)puVar23 + 0x13);
    }
    *(undefined1 *)(ulonglong)uVar10 = uVar19;
  }
  if (uVar2 != 0) {
    *(undefined1 *)(ulonglong)uVar2 = uVar21;
  }
  return uVar15;
}


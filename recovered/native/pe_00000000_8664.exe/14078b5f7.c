/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078b5f7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14078b5f7(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  float *pfVar11;
  ulonglong uVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  int iVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 *puVar28;
  float *pfVar29;
  float *pfVar30;
  ulonglong uVar31;
  bool bVar32;
  float10 in_ST0;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  ulonglong uVar27;
  
  puVar20 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x8c);
  cVar6 = *(char *)((longlong)puVar20 + 0xa4);
  pcVar9 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffff88);
  *pcVar9 = *pcVar9 + (char)pcVar9;
  pcVar9[0x87248c] = pcVar9[0x87248c] + cVar6;
  *pcVar9 = *pcVar9 + (char)pcVar9;
  uVar2 = _DAT_150b28d6f;
  uVar16 = (ulonglong)_DAT_150b28d6f;
  *(undefined1 *)((ulonglong)*(uint *)(uVar16 + 0x14cc) + 0xfb) = 1;
  uVar1 = *(uint *)(uVar16 + 0x14cc);
  uVar16 = (ulonglong)uVar1;
  uVar7 = 0;
  if (*(char *)(uVar16 + 0xfe) != '\0') goto LAB_14078bcb8;
  *(uint *)((longlong)puVar20 + 0x2c) = uVar2;
  uVar17 = (ulonglong)*(uint *)((longlong)puVar20 + 0xa0);
  *(undefined8 *)((longlong)puVar20 + -8) = 0;
  *(ulonglong *)((longlong)puVar20 + -0x10) = uVar17;
  *(undefined8 *)((longlong)puVar20 + -0x18) = 0x14078b65b;
  uVar7 = FUN_14075a0a4(uVar16);
  *(undefined4 *)((longlong)puVar20 + -0x10) = uVar7;
  *(undefined8 *)((longlong)puVar20 + -0x18) = 0;
  *(ulonglong *)((longlong)puVar20 + -0x20) = uVar17;
  *(undefined8 *)((longlong)puVar20 + -0x28) = 0x14078b665;
  uVar10 = FUN_14075544d();
  uVar21 = (ulonglong)((int)(undefined1 *)((longlong)puVar20 + -0x20) + 8);
  *(undefined8 *)(uVar21 - 8) = 0xffffffffbf800000;
  *(undefined8 *)(uVar21 - 0x10) = 0;
  *(int *)(uVar21 + 0x20) = (int)uVar10;
  *(undefined8 *)(uVar21 - 0x18) = uVar10;
  *(ulonglong *)(uVar21 - 0x20) = uVar17;
  uVar2 = *(uint *)(uVar21 + 0x9c);
  *(undefined8 **)(uVar21 - 0x28) = (undefined8 *)(uVar21 + 0x7c & 0xffffffff);
  *(undefined8 *)(uVar21 - 0x30) = 0x14078b685;
  FUN_1407559fe();
  uVar22 = (ulonglong)((int)(uVar21 - 0x28) + 0x14);
  uVar10 = *(undefined8 *)(ulonglong)uVar2;
  fVar35 = (float)uVar10;
  fVar37 = (float)((ulonglong)uVar10 >> 0x20);
  uVar33 = -(uint)(fVar35 != 0.0);
  uVar34 = -(uint)(fVar37 != 0.0);
  uVar10 = *(undefined8 *)(uVar21 + 0x7c & 0xffffffff);
  *(ulonglong *)(uVar22 + 0x74 & 0xffffffff) =
       CONCAT44(~uVar34 & (uint)((ulonglong)uVar10 >> 0x20),~uVar33 & (uint)uVar10) |
       CONCAT44((uint)fVar37 & uVar34,(uint)fVar35 & uVar33);
  fVar37 = *(float *)(uVar16 + 0x144);
  fVar35 = *(float *)(uVar16 + 0x148);
  pfVar30 = (float *)(uVar22 + 0x6c & 0xffffffff);
  pfVar30[1] = *(float *)(uVar16 + 0x148);
  *(float *)(uVar22 + 0x24) = fVar37;
  *pfVar30 = fVar37;
  fVar35 = fVar35 + *(float *)(uVar16 + 0x17c);
  *(undefined1 (*) [16])(uVar22 + 0x34) = ZEXT416((uint)fVar35);
  pfVar30[1] = fVar35;
  *(undefined8 *)(uVar22 - 8) = 0;
  *(ulonglong **)(uVar22 - 0x10) = (ulonglong *)(uVar22 + 0x74 & 0xffffffff);
  *(undefined8 *)(uVar22 - 0x18) = 0x14078b6e2;
  FUN_1407646e0();
  uVar23 = (ulonglong)((int)(uVar22 - 0x10) + 8);
  uVar33 = *(uint *)(uVar23 + 0xa8);
  uVar17 = (ulonglong)uVar33;
  pfVar11 = (float *)(ulonglong)(uVar1 + 0x27c);
  if ((uVar33 & 2) == 0) {
    pfVar11 = pfVar30;
  }
  fVar35 = *pfVar11;
  if (((uVar33 >> 0x18 & 1) != 0) ||
     ((fVar37 = *(float *)(ulonglong)uVar2, fVar37 == 0.0 && (!NAN(fVar37))))) {
    uVar2 = uVar1 + 0x284;
    if ((*(uint *)(uVar23 + 0xa8) & 2) == 0) {
      uVar2 = uVar1 + 0x274;
    }
    uVar7 = *(undefined4 *)(uVar23 + 0x7c);
    puVar24 = (undefined4 *)(uVar22 - 0x10 & 0xffffffff);
    puVar24[1] = *(float *)(ulonglong)uVar2 - fVar35;
    *puVar24 = uVar7;
    *(undefined1 (*) [16])(puVar24 + 6) = ZEXT416((uint)fVar35);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar24 + -2) = &UNK_14078b75f;
    FUN_140755a9a();
  }
  uVar2 = *(uint *)(uVar23 + 0xa8);
  fVar37 = *(float *)(uVar23 + 0x34);
  *(float *)(uVar23 + 0x5c) = fVar35;
  *(float *)(uVar23 + 0x60) = fVar37;
  *(ulonglong *)(uVar23 + 100) =
       CONCAT44(*(float *)(uVar23 + 0x78) + fVar37,*(float *)(uVar23 + 0x74) + fVar35);
  uVar33 = *(uint *)(uVar23 + 0x2c);
  uVar31 = (ulonglong)uVar33;
  if ((uVar2 >> 0x1a & 1) == 0) {
    fVar38 = 0.0;
    if ((uVar2 & 2) == 0) {
      fVar38 = *(float *)(uVar31 + 0xd1c);
    }
    fVar36 = *(float *)(uVar31 + 0xd20);
    fVar39 = _DAT_150a4418b * fVar38;
    fVar40 = (float)(int)(fRam0000000150a4418f * fVar36);
    *(ulonglong *)(uVar23 + 0x5c) = CONCAT44(fVar37 - fVar40,fVar35 - (float)(int)fVar39);
    *(ulonglong *)(uVar23 + 100) =
         CONCAT44(*(float *)(uVar23 + 0x78) + fVar37 + (fVar36 - fVar40),
                  *(float *)(uVar23 + 0x74) + fVar35 + (fVar38 - (float)(int)fVar39));
  }
  uVar12 = (ulonglong)((uVar2 & 8) * 8);
  if ((uVar2 & 2) == 0) {
    *(ulonglong *)(uVar23 - 8) = uVar12;
    *(undefined8 *)(uVar23 - 0x10) = 0;
    *(undefined8 *)(uVar23 - 0x18) = *(undefined8 *)(uVar23 - 8);
    *(ulonglong *)(uVar23 - 0x20) = uVar23 + 0x5c & 0xffffffff;
    *(undefined8 *)(uVar23 - 0x28) = 0x14078b808;
    cVar6 = FUN_1407648a8();
    puVar20 = (uint *)(ulonglong)((int)(uVar23 - 0x20) + 0x10);
  }
  else {
    *(undefined4 *)(uVar23 + 0x10) = *(undefined4 *)(uVar16 + 0x28c);
    *(undefined4 *)(uVar23 + 4) = *(undefined4 *)(uVar16 + 0x294);
    *(undefined4 *)(uVar16 + 0x28c) = *(undefined4 *)(uVar16 + 0x27c);
    *(undefined4 *)(uVar16 + 0x294) = *(undefined4 *)(uVar16 + 0x284);
    *(ulonglong *)(uVar23 - 8) = uVar12;
    *(undefined8 *)(uVar23 - 0x10) = 0;
    *(undefined8 *)(uVar23 - 0x18) = *(undefined8 *)(uVar23 - 8);
    *(ulonglong *)(uVar23 - 0x20) = uVar23 + 0x5c & 0xffffffff;
    *(undefined8 *)(uVar23 - 0x28) = 0x14078b85a;
    cVar6 = FUN_1407648a8();
    puVar20 = (uint *)(ulonglong)((int)(uVar23 - 0x20) + 0x10);
    *(undefined4 *)(uVar16 + 0x28c) = *(undefined4 *)((longlong)puVar20 + 0x10);
    *(undefined4 *)(uVar16 + 0x294) = *(undefined4 *)((longlong)puVar20 + 4);
  }
  bVar32 = (*(byte *)(uVar31 + 0x1e86) & 0x40) == 0;
  *(uint *)((longlong)puVar20 + 0xc) = uVar33 + 0x1e84;
  uVar18 = (undefined4)CONCAT71((int7)(uVar17 >> 8),bVar32);
  *(int *)((longlong)puVar20 + 0x10) = (int)CONCAT71((uint7)(uint3)(uVar33 + 0x1e84 >> 8),1);
  if (cVar6 == '\0') {
    if ((((bVar32) || (*(char *)(uVar31 + 0x23c0) != '\x01')) ||
        (*(float *)(uVar31 + 0x23d0) < *(float *)((longlong)puVar20 + 0x60) ||
         *(float *)(uVar31 + 0x23d0) == *(float *)((longlong)puVar20 + 0x60))) ||
       ((*(float *)((longlong)puVar20 + 0x68) < *(float *)(uVar31 + 0x23c8) ||
         *(float *)((longlong)puVar20 + 0x68) == *(float *)(uVar31 + 0x23c8) ||
        (*(float *)(uVar31 + 0x23cc) < *(float *)((longlong)puVar20 + 0x5c) ||
         *(float *)(uVar31 + 0x23cc) == *(float *)((longlong)puVar20 + 0x5c))))) {
      uVar7 = 0;
      goto LAB_14078bcb8;
    }
    uVar18 = 0;
    fVar35 = *(float *)(uVar31 + 0x23c4);
    fVar37 = *(float *)(uVar31 + 0x23c4);
    *(undefined4 *)((longlong)puVar20 + 0x10) = 0;
    uVar7 = 0;
    if (*(float *)((longlong)puVar20 + 100) < fVar37 ||
        *(float *)((longlong)puVar20 + 100) == fVar35) goto LAB_14078bcb8;
  }
  *(undefined4 *)((longlong)puVar20 + 4) = uVar18;
  bVar13 = (byte)((*(uint *)(uVar31 + 0x1e40) & 0x40) >> 6) | (uVar2 & 8) == 0;
  *(uint *)((longlong)puVar20 + 0x20) = (uint)bVar13;
  if (bVar13 == 0) {
    *(undefined8 *)((longlong)puVar20 + -8) = 1;
    *(undefined8 *)((longlong)puVar20 + -0x10) = 0x14078b8bb;
    FUN_140769741();
    puVar20 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar20 + -8) + 4);
  }
  uVar2 = *(uint *)((longlong)puVar20 + 0xa8);
  if ((uVar2 & 2) != 0) {
    if (*(int *)(uVar31 + 0x2308) == 0) {
      if (*(int *)(uVar16 + 0x1e8) != 0) {
        *(undefined8 *)((longlong)puVar20 + -8) = 0x14078b954;
        FUN_1407c11b8();
      }
    }
    else {
      *(undefined8 *)((longlong)puVar20 + -8) = 0x14078b8dc;
      FUN_1407bd779();
    }
    *(byte *)(uVar31 + 0x1e89) = *(byte *)(uVar31 + 0x1e89) | 2;
    uVar7 = *(undefined4 *)(uVar16 + 0x290);
    uVar18 = *(undefined4 *)(uVar16 + 0x294);
    uVar3 = *(undefined4 *)(uVar16 + 0x298);
    *(undefined4 *)(uVar31 + 0x1ebc) = *(undefined4 *)(uVar16 + 0x28c);
    *(undefined4 *)(uVar31 + 0x1ec0) = uVar7;
    *(undefined4 *)(uVar31 + 0x1ec4) = uVar18;
    *(undefined4 *)(uVar31 + 0x1ec8) = uVar3;
  }
  uVar15 = uVar2 >> 0x10 & 0x80;
  uVar34 = uVar15 + 0x120;
  if ((uVar2 & 4) == 0) {
    uVar34 = uVar15;
  }
  uVar34 = uVar34 + (uVar2 >> 0x12 & 0x10 | uVar2 >> 7 & 0x100000 | uVar2 >> 3 & 0x20000);
  *(uint *)((longlong)puVar20 + 0x58) = uVar34;
  if (((uVar2 & 0x10) != 0) ||
     ((*(byte *)((ulonglong)*(uint *)((longlong)puVar20 + 0xc) + 1) & 0x40) != 0)) {
    uVar34 = uVar34 | 0x1000;
    *(uint *)((longlong)puVar20 + 0x58) = uVar34;
  }
  if ((char)*(undefined4 *)((longlong)puVar20 + 4) == '\0') {
    *(undefined8 **)((longlong)puVar20 + -8) =
         (undefined8 *)((ulonglong)((longlong)puVar20 + 0x58) & 0xffffffff);
    *(ulonglong *)((longlong)puVar20 + -0x10) = (ulonglong)((longlong)puVar20 + 0x87) & 0xffffffff;
    uVar17 = (ulonglong)*(uint *)((longlong)puVar20 + -8);
    *(ulonglong *)((longlong)puVar20 + -0x18) = uVar17;
    *(undefined8 *)((longlong)puVar20 + -0x20) = 0x14078ba4a;
    FUN_14078840e();
    uVar25 = (ulonglong)((int)(undefined1 *)((longlong)puVar20 + -0x18) + 0xc);
    *(undefined8 *)(uVar25 - 8) =
         *(undefined8 *)((ulonglong)((longlong)puVar20 + 0x58) & 0xffffffff);
    *(ulonglong *)(uVar25 - 0x10) = uVar25 + 0x52 & 0xffffffff;
    *(ulonglong *)(uVar25 - 0x18) = uVar25 + 0x57 & 0xffffffff;
    *(ulonglong *)(uVar25 - 0x20) = uVar17;
    *(ulonglong *)(uVar25 - 0x28) = uVar25 + 0x5c & 0xffffffff;
    *(undefined8 *)(uVar25 - 0x30) = 0x14078ba64;
    cVar6 = FUN_14078564e();
    uVar26 = (ulonglong)((int)(uVar25 - 0x28) + 0x14);
    pcVar9 = (char *)(uVar26 + 0x55 & 0xffffffff);
    *pcVar9 = cVar6;
    *(char **)(uVar26 - 8) = pcVar9;
    *(ulonglong *)(uVar26 - 0x10) = uVar26 + 0x83 & 0xffffffff;
    *(ulonglong *)(uVar26 - 0x18) = uVar17;
    *(undefined8 *)(uVar26 - 0x20) = 0x14078ba7c;
    uVar10 = FUN_140788520();
    puVar20 = (uint *)(ulonglong)((int)(uVar26 - 0x18) + 0xc);
    *(int *)((longlong)puVar20 + 8) = (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    bVar32 = true;
    if (*pcVar9 == '\0') goto LAB_14078ba9a;
LAB_14078babe:
    if (((*(char *)(uVar31 + 0x2041) == '\0') && (*(uint *)(uVar31 + 0x2048) == uVar1)) &&
       (uVar2 = *(uint *)(uVar31 + 0x2050), uVar2 == *(uint *)(uVar16 + 0x19c))) {
      fVar36 = (float)*(undefined8 *)(uVar16 + 0x154);
      fVar39 = (float)((ulonglong)*(undefined8 *)(uVar16 + 0x154) >> 0x20);
      fVar35 = *(float *)((longlong)puVar20 + 0x60);
      fVar37 = *(float *)((longlong)puVar20 + 100);
      fVar38 = *(float *)((longlong)puVar20 + 0x68);
      pfVar11 = (float *)((ulonglong)((longlong)puVar20 + 0x44) & 0xffffffff);
      *pfVar11 = *(float *)((longlong)puVar20 + 0x5c) - fVar36;
      pfVar11[1] = fVar35 - fVar39;
      pfVar11[2] = fVar37 - fVar36;
      pfVar11[3] = fVar38 - fVar39;
      *(float **)((longlong)puVar20 + -8) = pfVar11;
      *(undefined8 *)((longlong)puVar20 + -0x10) = *(undefined8 *)(uVar31 + 0x1e3c);
      *(ulonglong *)((longlong)puVar20 + -0x18) = (ulonglong)uVar2;
      *(undefined8 *)((longlong)puVar20 + -0x20) = *(undefined8 *)((longlong)puVar20 + -0xc);
      *(undefined8 *)((longlong)puVar20 + -0x28) = 0x14078bb08;
      FUN_14076f01e();
      puVar20 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar20 + -0x20) + 0x10);
      if (*(char *)(uVar31 + 0x6a) == '\x01') {
        *(undefined1 *)(uVar31 + 0x2040) = 0;
      }
    }
    if (bVar32) {
      *(undefined8 *)((longlong)puVar20 + -8) = *(undefined8 *)puVar20;
      *(undefined8 *)((longlong)puVar20 + -0x10) = 0x14078bb24;
      uVar10 = FUN_14075a7e3();
      puVar20 = (uint *)(ulonglong)((int)(undefined8 *)((longlong)puVar20 + -8) + 4);
      uVar7 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
    }
    else {
LAB_14078bb2b:
      uVar7 = 0;
    }
  }
  else {
    uVar17 = (ulonglong)((longlong)puVar20 + 0x57) & 0xffffffff;
    *(ulonglong *)((longlong)puVar20 + -8) = (ulonglong)uVar34;
    *(ulonglong *)((longlong)puVar20 + -0x10) = (ulonglong)((longlong)puVar20 + 0x56) & 0xffffffff;
    *(ulonglong *)((longlong)puVar20 + -0x18) = uVar17;
    *(undefined8 *)((longlong)puVar20 + -0x20) = *(undefined8 *)((longlong)puVar20 + -0xc);
    *(ulonglong *)((longlong)puVar20 + -0x28) = (ulonglong)((longlong)puVar20 + 0x5c) & 0xffffffff;
    *(undefined8 *)((longlong)puVar20 + -0x30) = 0x14078b9e2;
    cVar6 = FUN_14078564e();
    puVar20 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar20 + -0x28) + 0x14);
    if ((uVar2 & 0x40) != 0) {
      uVar2 = *(uint *)(uVar31 + 0x2204);
      uVar17 = (ulonglong)uVar2;
      if ((((uVar2 != 0) && (uVar2 == *puVar20)) &&
          (uVar17 = (ulonglong)*(uint *)(uVar31 + 0x1e3c),
          *(uint *)(uVar31 + 0x2208) == *(uint *)(uVar31 + 0x1e3c))) &&
         ((*(byte *)(uVar31 + 0x220d) & 0x10) == 0)) {
        *(undefined1 *)((longlong)puVar20 + 0x87) = 1;
        bVar32 = true;
        puVar20[2] = 0;
        goto LAB_14078babe;
      }
    }
    puVar20[2] = (uint)CONCAT71((int7)(uVar17 >> 8),1);
    bVar32 = true;
    if (cVar6 != '\0') goto LAB_14078babe;
LAB_14078ba9a:
    *(undefined4 *)((longlong)puVar20 + 8) = 0;
    if ((*(uint *)((longlong)puVar20 + 0xa8) >> 0x19 & 1) == 0) goto LAB_14078bb2b;
    bVar32 = false;
    uVar7 = 0;
    if (*(char *)((longlong)puVar20 + 0x57) != '\0') goto LAB_14078babe;
  }
  bVar13 = *(byte *)((longlong)puVar20 + 0x87);
  if (bVar13 != *(byte *)((longlong)puVar20 + 0xa4)) {
    *(byte *)(uVar31 + 0x1e88) = *(byte *)(uVar31 + 0x1e88) | 8;
  }
  uVar2 = *(uint *)((longlong)puVar20 + 0xa8);
  uVar34 = *(uint *)((longlong)puVar20 + 4);
  if (*(char *)((longlong)puVar20 + 0x10) != '\0') {
    bVar14 = (byte)((uVar2 & 0x20) >> 5) | *(byte *)((longlong)puVar20 + 0x57);
    if (((bVar13 | bVar14) & 1) != 0) {
      uVar17 = 0x19;
      if (bVar14 != 0) {
        uVar17 = (ulonglong)(*(byte *)((longlong)puVar20 + 0x56) | 0x1a);
      }
      *(undefined8 *)((longlong)puVar20 + -8) = 0x3f800000;
      *(ulonglong *)((longlong)puVar20 + -0x10) = uVar17;
      *(undefined8 *)((longlong)puVar20 + -0x18) = 0x14078bb8b;
      uVar8 = FUN_140754a09();
      iVar19 = (int)(undefined1 *)((longlong)puVar20 + -0x10);
      uVar27 = (ulonglong)(iVar19 + 8);
      uVar18 = *(undefined4 *)(uVar27 + 0x5c);
      uVar3 = *(undefined4 *)(uVar27 + 0x60);
      uVar4 = *(undefined4 *)(uVar27 + 100);
      uVar5 = *(undefined4 *)(uVar27 + 0x68);
      puVar28 = (undefined4 *)(ulonglong)(iVar19 - 0x14);
      puVar28[6] = 0;
      puVar28[5] = 0;
      puVar28[4] = uVar8;
      *puVar28 = uVar18;
      puVar28[1] = uVar3;
      puVar28[2] = uVar4;
      puVar28[3] = uVar5;
      *(undefined8 *)(puVar28 + -2) = 0x14078bbad;
      FUN_140755db9();
      uVar34 = puVar28[8];
      puVar20 = (uint *)(ulonglong)(iVar19 + 8);
    }
    if (*(int *)(uVar31 + 0x2044) == *puVar20) {
      *(ulonglong *)(puVar20 + -2) = (ulonglong)(((uVar34 ^ 1) & 0xff) * 4 + 10);
      *(undefined8 *)(puVar20 + -4) = *(undefined8 *)(puVar20 + -1);
      *(ulonglong *)(puVar20 + -6) = (ulonglong)(puVar20 + 0x17) & 0xffffffff;
      puVar20[-8] = 0x4078bbdb;
      puVar20[-7] = 1;
      FUN_14075612e();
      puVar20 = (uint *)(ulonglong)((int)(puVar20 + -6) + 0xc);
    }
  }
  if ((uVar2 & 2) != 0) {
    if (*(int *)(uVar31 + 0x2308) == 0) {
      if (*(int *)(uVar16 + 0x1e8) != 0) {
        *(undefined8 *)((longlong)puVar20 + -8) = 0x14078bc01;
        FUN_1407c11fe();
      }
    }
    else {
      *(undefined8 *)((longlong)puVar20 + -8) = 0x14078bbf1;
      FUN_1407bd7c6();
    }
  }
  if (*(char *)((longlong)puVar20 + 0x10) != '\0') {
    fVar35 = *(float *)((longlong)puVar20 + 0x24);
    *(float *)((longlong)puVar20 + 0x34) =
         *(float *)((longlong)puVar20 + 0x34) + *(float *)((longlong)puVar20 + 0x78);
    *(undefined4 *)((longlong)puVar20 + 0x38) = *(undefined4 *)((longlong)puVar20 + 0x38);
    *(undefined4 *)((longlong)puVar20 + 0x3c) = *(undefined4 *)((longlong)puVar20 + 0x3c);
    *(undefined4 *)((longlong)puVar20 + 0x40) = *(undefined4 *)((longlong)puVar20 + 0x40);
    fVar37 = *(float *)((longlong)puVar20 + 0x74);
    pfVar29 = (float *)(ulonglong)((int)puVar20 - 8);
    pfVar29[1] = *(float *)(ulonglong)(uVar1 + 0x274);
    *pfVar29 = fVar35 + fVar37;
    pfVar29[-2] = 3.8864915;
    pfVar29[-1] = 1.4013e-45;
    FUN_14074225a();
    *(float *)((longlong)puVar20 + 0x44) = (float)in_ST0;
    *(undefined4 *)(((ulonglong)((longlong)puVar20 + 0x44) & 0xffffffff) + 4) =
         *(undefined4 *)((longlong)puVar20 + 0x34);
    *(ulonglong *)((longlong)puVar20 + -8) = (ulonglong)((longlong)puVar20 + 0x5c) & 0xffffffff;
    *(ulonglong *)((longlong)puVar20 + -0x10) = (ulonglong)(uVar33 + 0xdb8);
    *(ulonglong *)((longlong)puVar20 + -0x18) = (ulonglong)((longlong)puVar20 + 0x74) & 0xffffffff;
    *(undefined8 *)((longlong)puVar20 + -0x20) = *(undefined8 *)((longlong)puVar20 + 0x1c);
    *(undefined8 *)((longlong)puVar20 + -0x28) = *(undefined8 *)((longlong)puVar20 + 0x90);
    *(ulonglong *)((longlong)puVar20 + -0x30) = (ulonglong)((longlong)puVar20 + 0x44) & 0xffffffff;
    *(ulonglong *)((longlong)puVar20 + -0x38) = (ulonglong)((longlong)puVar20 + 0x54) & 0xffffffff;
    *(undefined8 *)((longlong)puVar20 + -0x40) = 0x14078bc83;
    FUN_140755ac2();
    puVar20 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar20 + -0x38) + 0x1c);
  }
  if (((*(char *)((longlong)puVar20 + 8) != '\0') && ((uVar2 & 1) == 0)) &&
     (((*(uint *)(uVar16 + 0xc) & 0x4000000) != 0 &&
      ((*(byte *)(ulonglong)*(uint *)((longlong)puVar20 + 0xc) & 0x10) != 0)))) {
    *(undefined8 *)((longlong)puVar20 + -8) = 0x14078bcaa;
    FUN_14076e35c();
  }
  if (*(char *)((longlong)puVar20 + 0x20) == '\0') {
    *(undefined8 *)((longlong)puVar20 + -8) = 0x14078bcb6;
    FUN_140769831();
  }
LAB_14078bcb8:
  if (_DAT_150b149c7 != (*(uint *)((longlong)puVar20 + 0x88) ^ (uint)puVar20)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar20 + -8) = &UNK_14078bce4;
    FUN_1408802b0(*(uint *)((longlong)puVar20 + 0x88) ^ (uint)puVar20);
  }
  return uVar7;
}


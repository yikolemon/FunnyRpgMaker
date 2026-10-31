/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140786509 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140786509(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  ulonglong uVar13;
  ulonglong uVar19;
  
  uVar11 = (int)&stack0xffffffffffffffe0 - 0x70;
  uVar13 = (ulonglong)uVar11;
  puVar8 = (undefined8 *)(ulonglong)*(uint *)(uVar13 + 0x88);
  *(uint *)(uVar13 + 0x6c) = _DAT_150b0f21d ^ uVar11;
  uVar23 = (ulonglong)_DAT_150b23c75;
  uVar11 = *(uint *)(uVar23 + 0x14cc);
  uVar2 = *(undefined4 *)puVar8;
  uVar3 = *(undefined4 *)((longlong)puVar8 + 4);
  uVar9 = *puVar8;
  *(uint *)(uVar13 + 8) = _DAT_150b23c75;
  fVar25 = *(float *)(uVar23 + 0x1228);
  *(undefined4 *)(uVar13 + 0x60) = uVar3;
  *(undefined4 *)(uVar13 + 0x5c) = uVar2;
  fVar26 = (float)uVar9;
  fVar24 = fVar25 + fVar26;
  fVar28 = (float)((ulonglong)uVar9 >> 0x20);
  fVar25 = fVar25 + fVar28;
  *(ulonglong *)(uVar13 + 100) = CONCAT44(fVar25,fVar24);
  *(undefined8 *)(uVar13 + 0x4c) = *(undefined8 *)(uVar13 + 0x5c);
  *(undefined8 *)(uVar13 + 0x54) = *(undefined8 *)(uVar13 + 100);
  uVar9 = *(undefined8 *)((ulonglong)uVar11 + 0x23c);
  *(uint *)(uVar13 + 4) = uVar11;
  uVar1 = *(undefined8 *)((ulonglong)uVar11 + 0x244);
  if ((((float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar9 >> 0x20)) *
      ((float)uVar1 - (float)uVar9)) / ((fVar25 - fVar28) * (fVar24 - fVar26)) < _DAT_150a3f6ee) {
    fVar25 = *(float *)(uVar13 + 0x4c);
    fVar24 = *(float *)(uVar13 + 0x50);
    fVar26 = *(float *)(uVar13 + 0x54);
    fVar28 = *(float *)(uVar13 + 0x58);
    fVar27 = fRam0000000150a3fa73 * (fVar28 - fVar24);
    fVar29 = _DAT_150a3fa6f * (fVar26 - fVar25);
    fVar30 = fRam0000000150a3fa73 * (fVar28 - fVar24);
    *(float *)(uVar13 + 0x4c) = fVar25 - (float)(int)(_DAT_150a3fa6f * (fVar26 - fVar25));
    *(float *)(uVar13 + 0x50) = fVar24 - (float)(int)fVar27;
    *(float *)(uVar13 + 0x54) = fVar26 + (float)(int)fVar29;
    *(float *)(uVar13 + 0x58) = fVar28 + (float)(int)fVar30;
  }
  *(undefined8 *)(uVar13 - 8) = 0;
  *(undefined8 *)(uVar13 - 0x10) = 0;
  uVar11 = *(uint *)(uVar13 + 0x7c);
  *(ulonglong *)(uVar13 - 0x18) = (ulonglong)uVar11;
  *(ulonglong *)(uVar13 - 0x20) = uVar13 + 0x4c & 0xffffffff;
  *(undefined8 *)(uVar13 - 0x28) = 0x1407865f5;
  cVar5 = FUN_1407648a8();
  uVar14 = (ulonglong)((int)(uVar13 - 0x20) + 0x10);
  *(undefined8 *)(uVar14 - 8) = 0;
  *(ulonglong *)(uVar14 - 0x10) = uVar14 + 0x4a & 0xffffffff;
  *(ulonglong *)(uVar14 - 0x18) = uVar14 + 0x4b & 0xffffffff;
  *(ulonglong *)(uVar14 - 0x20) = (ulonglong)uVar11;
  *(ulonglong *)(uVar14 - 0x28) = uVar13 + 0x4c & 0xffffffff;
  *(undefined8 *)(uVar14 - 0x30) = 0x14078660c;
  uVar6 = FUN_14078564e();
  puVar15 = (undefined4 *)(ulonglong)((int)(uVar14 - 0x28) + 0x14);
  if (cVar5 != '\0') {
    *(undefined1 *)((longlong)puVar15 + 3) = uVar6;
    *(undefined8 *)((longlong)puVar15 + -8) = 0x3f800000;
    *(ulonglong *)((longlong)puVar15 + -0x10) =
         (ulonglong)(*(byte *)((longlong)puVar15 + 0x4a) + 0x17);
    *(undefined8 *)((longlong)puVar15 + -0x18) = 0x14078662e;
    uVar9 = FUN_140754a09();
    puVar16 = (undefined1 *)(ulonglong)((int)(undefined1 *)((longlong)puVar15 + -0x10) + 8);
    puVar17 = puVar16;
    if (puVar16[0x4b] == '\x01') {
      uVar2 = *(undefined4 *)((ulonglong)*(uint *)(puVar16 + 4) + 0x2e8);
      *(undefined8 *)(puVar16 + -8) = 0;
      *(undefined8 *)(puVar16 + -0x10) = 0;
      *(undefined8 *)(puVar16 + -0x18) = uVar9;
      *(ulonglong *)(puVar16 + -0x20) = (longlong)puVar16 + 100U & 0xffffffff;
      puVar17 = puVar16 + -0x28;
      *(ulonglong *)(puVar16 + -0x28) = (longlong)puVar16 + 0x5cU & 0xffffffff;
      *(undefined8 *)(puVar16 + -0x30) = 0x140786656;
      FUN_1407e372a(uVar2);
    }
    puVar8 = (undefined8 *)((ulonglong)(puVar17 + 0x5c) & 0xffffffff);
    *(undefined8 *)(puVar17 + -8) = 2;
    *(undefined8 *)(puVar17 + -0x10) = *(undefined8 *)(puVar17 + 0x80);
    *(undefined8 **)(puVar17 + -0x18) = puVar8;
    *(undefined8 *)(puVar17 + -0x20) = 0x140786669;
    FUN_14075612e();
    uVar18 = (ulonglong)((int)(puVar17 + -0x18) + 0xc);
    *(undefined8 *)(uVar18 - 8) = 0x3f800000;
    *(undefined8 *)(uVar18 - 0x10) = 0;
    *(undefined8 *)(uVar18 - 0x18) = 0x140786678;
    uVar7 = FUN_140754a09();
    iVar12 = (int)(uVar18 - 0x10);
    uVar19 = (ulonglong)(iVar12 + 8);
    fVar30 = *(float *)((ulonglong)*(uint *)(uVar19 + 8) + 0x1228) * _DAT_150a3d76f * _DAT_150a3fb67
             + _DAT_150a3f0ef;
    fVar31 = (float)(int)*(float *)((ulonglong)*(uint *)(uVar19 + 8) + 0x1204);
    *(undefined1 (*) [16])(uVar19 + 8) = ZEXT416((uint)fVar31);
    uVar11 = *(uint *)(uVar19 + 4);
    uVar2 = *(undefined4 *)((ulonglong)uVar11 + 0x2e8);
    fVar26 = ((float)puVar8[1] + (float)*puVar8) * _DAT_150a3f092 + _DAT_150a3fbb9;
    fVar28 = ((float)((ulonglong)puVar8[1] >> 0x20) + (float)((ulonglong)*puVar8 >> 0x20)) *
             fRam0000000150a3f096 + fRam0000000150a3fbbd;
    fVar27 = fRam0000000150a3f09a * 0.0 + fRam0000000150a3fbc1;
    fVar29 = fRam0000000150a3f09e * 0.0 + fRam0000000150a3fbc5;
    fVar25 = fVar26 - fVar30;
    fVar24 = fVar28 - fVar30;
    *(float *)(uVar19 + 0x28) = fVar25;
    *(float *)(uVar19 + 0x2c) = fVar24;
    *(float *)(uVar19 + 0x30) = fVar27 - fVar30;
    *(float *)(uVar19 + 0x34) = fVar29 - fVar30;
    puVar22 = (undefined8 *)(uVar19 + 0x40 & 0xffffffff);
    *puVar22 = CONCAT44(fVar24,fVar25);
    fVar26 = fVar30 + fVar26;
    fVar28 = fVar30 + fVar28;
    *(float *)(uVar19 + 0x18) = fVar26;
    *(float *)(uVar19 + 0x1c) = fVar28;
    *(float *)(uVar19 + 0x20) = fVar30 + fVar27;
    *(float *)(uVar19 + 0x24) = fVar30 + fVar29;
    puVar8 = (undefined8 *)(uVar19 + 0x38 & 0xffffffff);
    *puVar8 = CONCAT44(fVar28,fVar26);
    puVar20 = (undefined4 *)(ulonglong)(iVar12 - 8);
    puVar20[3] = fVar31;
    puVar20[2] = uVar7;
    uVar21 = (undefined4)(uVar19 + 0x40);
    puVar20[1] = uVar21;
    uVar10 = (undefined4)(uVar19 + 0x38);
    *puVar20 = uVar10;
    *(undefined8 *)(puVar20 + -2) = 0x140786718;
    FUN_1407e31ae(uVar2);
    uVar2 = *(undefined4 *)((ulonglong)uVar11 + 0x2e8);
    uVar3 = puVar20[0xb];
    *(undefined4 *)puVar22 = puVar20[10];
    uVar4 = puVar20[6];
    *(undefined4 *)((longlong)puVar22 + 4) = puVar20[7];
    *(undefined4 *)puVar8 = uVar4;
    *(undefined4 *)((longlong)puVar8 + 4) = uVar3;
    puVar15 = (undefined4 *)(ulonglong)(iVar12 - 0x18);
    puVar15[3] = puVar15[6];
    puVar15[2] = uVar7;
    puVar15[1] = uVar21;
    *puVar15 = uVar10;
    *(undefined8 *)(puVar15 + -2) = 0x140786764;
    FUN_1407e31ae(uVar2);
    uVar6 = *(undefined1 *)((longlong)puVar15 + 3);
  }
  if (_DAT_150b0f474 == (*(uint *)((longlong)puVar15 + 0x6c) ^ (uint)puVar15)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar15 + -8) = FUN_14078678b;
  FUN_1408802b0(*(uint *)((longlong)puVar15 + 0x6c) ^ (uint)puVar15);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bb89e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bb89e(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  puVar13 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x5c);
  uVar10 = *(uint *)((longlong)puVar13 + 0x70);
  uVar21 = (ulonglong)uVar10;
  uVar11 = (ulonglong)_DAT_150b59006;
  uVar19 = *(uint *)(uVar11 + 0x14cc);
  if (*(int *)(uVar21 + 0x48) != -1) {
    *(ulonglong *)((longlong)puVar13 + -8) = uVar21;
    *(undefined8 *)((longlong)puVar13 + -0x10) = 0x1407bb8cc;
    FUN_1407bd3c7();
    puVar13 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar13 + -8) + 4);
    *(undefined4 *)(uVar21 + 0x48) = 0xffffffff;
  }
  if (*(char *)(uVar11 + 0x2748) == '\x01') {
    *(undefined8 *)((longlong)puVar13 + -8) = 0;
    *(undefined8 *)((longlong)puVar13 + -0x10) = 0x1033032c;
    *(undefined8 *)((longlong)puVar13 + -0x18) = 0;
    *(undefined8 *)((longlong)puVar13 + -0x20) = 0x1407bb8ed;
    FUN_140755578();
    puVar13 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar13 + -0x18) + 0xc);
  }
  fVar26 = *(float *)(uVar21 + 0x54);
  *(float *)((ulonglong)uVar19 + 0x148) = fVar26;
  sVar5 = *(short *)(uVar21 + 0x4c);
  *puVar13 = uVar19;
  if (sVar5 == 0) {
    uVar10 = uVar10 + 0x16c;
  }
  else {
    uVar10 = (*(int *)(uVar21 + 0x18c) + sVar5 * 0x18) - 0x18;
  }
  puVar13[1] = uVar10;
  uVar10 = *(uint *)(uVar21 + 0x44);
  fVar1 = *(float *)(uVar21 + 0x50);
  sVar5 = *(short *)(uVar21 + 0x1de);
  uVar19 = (uint)*(short *)(uVar21 + 0x1dc);
  if (((*(uint *)(uVar21 + 0x68) & 1) != 0) &&
     (uVar10 == 0 || (*(uint *)(uVar21 + 0x68) >> 0x10 & 1) != 0)) {
    *(float *)((ulonglong)puVar13[1] + 8) = (fVar26 - fVar1) + *(float *)((ulonglong)puVar13[1] + 8)
    ;
  }
  if ((*(float *)(uVar21 + 0xf8) <= fVar26) && (fVar1 <= *(float *)(uVar21 + 0x100))) {
    if ((*(short *)(uVar21 + 0x1be) != -1) &&
       (((fVar1 <= *(float *)(uVar11 + 0xe8) && (*(float *)(uVar11 + 0xe8) < fVar26)) &&
        (*(int *)((ulonglong)puVar13[1] + 0x14) < 0)))) {
      *(undefined4 *)((ulonglong)puVar13[1] + 0x14) = *(undefined4 *)(uVar21 + 0x44);
    }
    uVar22 = *(uint *)(uVar21 + 0x70);
    uVar11 = (ulonglong)uVar22;
    *(undefined1 (*) [16])(puVar13 + 0xe) = ZEXT416((uint)fVar26);
    *(undefined1 (*) [16])(puVar13 + 10) = ZEXT416((uint)fVar1);
    if ((uVar22 == 0x1000000) && (uVar11 = 0, (*(byte *)(uVar21 + 4) & 0x40) != 0)) {
      uVar22 = *(uint *)(uVar21 + 0x6c);
      puVar13[-2] = 0x3f800000;
      puVar13[-1] = 0;
      *(ulonglong *)(puVar13 + -4) = (ulonglong)((uVar22 & 1) + 0x33);
      puVar13[-6] = 0x407bb9e8;
      puVar13[-5] = 1;
      uVar11 = FUN_140754a09();
      puVar13 = (uint *)(ulonglong)((int)(puVar13 + -4) + 8);
      uVar11 = uVar11 & 0xffffffff;
    }
    uVar22 = *(uint *)(uVar21 + 0x74);
    puVar13[2] = 0;
    if (uVar22 == 0x1000000) {
      uVar22 = 0;
    }
    puVar13[3] = uVar22;
    if ((0 < *(int *)(uVar21 + 0x44)) && ((*(byte *)(uVar21 + 4) & 0x80) != 0)) {
      puVar13[2] = *(uint *)(uVar21 + 0x78 + (ulonglong)((*(byte *)(uVar21 + 0x6a) & 1) == 0) * 4);
    }
    puVar13[6] = uVar19;
    puVar13[5] = uVar10;
    puVar13[7] = (int)sVar5;
    sVar6 = *(short *)(uVar21 + 0x1e4);
    *(short *)((longlong)puVar13 + 0x12) = sVar6;
    uVar19 = puVar13[3];
    iVar20 = (int)uVar11;
    puVar14 = puVar13;
    if ((-1 < sVar6 || uVar10 == (int)sVar5) || (puVar13[2] != 0 || (uVar19 != 0 || iVar20 != 0))) {
      if ((*(byte *)(uVar21 + 6) & 0x10) == 0) {
        uVar12 = (ulonglong)*(uint *)((ulonglong)*puVar13 + 0x2e8);
        uVar2 = *(undefined4 *)(uVar21 + 0x118);
        uVar3 = *(undefined4 *)(uVar21 + 0x11c);
        uVar9 = *(undefined4 *)(uVar21 + 0x120);
        *(undefined4 *)(uVar12 + 0x48) = *(undefined4 *)(uVar21 + 0x114);
        *(undefined4 *)(uVar12 + 0x4c) = uVar2;
        *(undefined4 *)(uVar12 + 0x50) = uVar3;
        *(undefined4 *)(uVar12 + 0x54) = uVar9;
      }
      puVar13[-2] = 0;
      puVar13[-1] = 0;
      puVar14 = puVar13 + -4;
      *(undefined8 *)(puVar13 + -4) = *(undefined8 *)((ulonglong)puVar13[-1] + 0x2e8);
      puVar13[-6] = 0x407bba94;
      puVar13[-5] = 1;
      FUN_1407e5d3c();
    }
    puVar13 = puVar14;
    if (uVar19 != 0 || iVar20 != 0) {
      uVar12 = (ulonglong)((longlong)puVar14 + 0x50) & 0xffffffff;
      uVar10 = -(uint)(*(float *)(uVar21 + 0x104) <= *(float *)(uVar21 + 0xe4));
      uVar22 = -(uint)(*(float *)(uVar21 + 0x108) <= *(float *)((longlong)puVar14 + 0x28));
      uVar23 = -(uint)(*(float *)(uVar21 + 0xec) < *(float *)(uVar21 + 0x10c));
      uVar24 = -(uint)(*(float *)((longlong)puVar14 + 0x38) < *(float *)(uVar21 + 0x110));
      auVar27._0_4_ = ~uVar10 & (uint)*(float *)(uVar21 + 0x104);
      auVar27._4_4_ = ~uVar22 & (uint)*(float *)(uVar21 + 0x108);
      auVar27._8_4_ = ~uVar23 & (uint)*(float *)(uVar21 + 0x10c);
      auVar27._12_4_ = ~uVar24 & (uint)*(float *)(uVar21 + 0x110);
      auVar7._4_4_ = (uint)*(float *)((longlong)puVar14 + 0x28) & uVar22;
      auVar7._0_4_ = (uint)*(float *)(uVar21 + 0xe4) & uVar10;
      auVar7._8_4_ = (uint)*(float *)(uVar21 + 0xec) & uVar23;
      auVar7._12_4_ = (uint)*(float *)((longlong)puVar14 + 0x38) & uVar24;
      auVar27 = auVar27 | auVar7;
      *(undefined1 (*) [16])(uVar12 - 8) = auVar27;
      puVar15 = (undefined1 *)puVar14;
      if (iVar20 != 0) {
        if (auVar27._4_4_ < auVar27._12_4_) {
          *(undefined8 *)((longlong)puVar14 + -8) = 0;
          *(undefined8 *)((longlong)puVar14 + -0x10) = 0;
          *(ulonglong *)((longlong)puVar14 + -0x18) = uVar11;
          *(ulonglong *)((longlong)puVar14 + -0x20) = uVar12;
          puVar15 = (undefined1 *)((longlong)puVar14 + -0x28);
          *(ulonglong *)((longlong)puVar14 + -0x28) =
               (ulonglong)((longlong)puVar14 + 0x48) & 0xffffffff;
          *(undefined8 *)((longlong)puVar14 + -0x30) = 0x1407bbb15;
          FUN_1407e372a();
        }
      }
      puVar13 = (uint *)puVar15;
      if ((uVar19 != 0) &&
         (*(float *)(puVar15 + 0x4c) <= *(float *)(puVar15 + 0x54) &&
          *(float *)(puVar15 + 0x54) != *(float *)(puVar15 + 0x4c))) {
        *(undefined8 *)(puVar15 + -8) = 0;
        *(undefined8 *)(puVar15 + -0x10) = 0;
        *(ulonglong *)(puVar15 + -0x18) = (ulonglong)uVar19;
        *(ulonglong *)(puVar15 + -0x20) = uVar12;
        puVar13 = (uint *)(puVar15 + -0x28);
        *(ulonglong *)(puVar15 + -0x28) = (ulonglong)(puVar15 + 0x48) & 0xffffffff;
        *(undefined8 *)(puVar15 + -0x30) = 0x1407bbb3f;
        FUN_1407e372a();
      }
    }
    if ((-1 < *(short *)((longlong)puVar13 + 0x12)) && (-1 < *(short *)(uVar21 + 0x1e4))) {
      uVar10 = *(uint *)(uVar21 + 0x20);
      *(uint *)((longlong)puVar13 + 0xc) = uVar10 + *(short *)(uVar21 + 0x1e4) * 8;
      uVar19 = (uint)*(short *)((ulonglong)uVar10 + 4);
      uVar10 = *(uint *)(uVar21 + 0x10);
      *(ulonglong *)((longlong)puVar13 + -8) = (ulonglong)uVar19;
      *(ulonglong *)((longlong)puVar13 + -0x10) = uVar21;
      *(ulonglong *)((longlong)puVar13 + -0x18) = (ulonglong)((longlong)puVar13 + 0x40) & 0xffffffff
      ;
      *(undefined8 *)((longlong)puVar13 + -0x20) = 0x1407bbb7a;
      FUN_1407bd0c3();
      uVar16 = (ulonglong)((int)(undefined1 *)((longlong)puVar13 + -0x18) + 0xc);
      uVar22 = -(uint)(*(float *)(uVar21 + 0x104) <= *(float *)(uVar16 + 0x48));
      uVar23 = -(uint)(*(float *)(uVar21 + 0x108) <= *(float *)(uVar16 + 0x4c));
      uVar24 = -(uint)(*(float *)(uVar16 + 0x50) < *(float *)(uVar21 + 0x10c));
      uVar25 = -(uint)(*(float *)(uVar16 + 0x54) < *(float *)(uVar21 + 0x110));
      auVar28._0_4_ = ~uVar22 & (uint)*(float *)(uVar21 + 0x104);
      auVar28._4_4_ = ~uVar23 & (uint)*(float *)(uVar21 + 0x108);
      auVar28._8_4_ = ~uVar24 & (uint)*(float *)(uVar21 + 0x10c);
      auVar28._12_4_ = ~uVar25 & (uint)*(float *)(uVar21 + 0x110);
      auVar8._4_4_ = (uint)*(float *)(uVar16 + 0x4c) & uVar23;
      auVar8._0_4_ = (uint)*(float *)(uVar16 + 0x48) & uVar22;
      auVar8._8_4_ = (uint)*(float *)(uVar16 + 0x50) & uVar24;
      auVar8._12_4_ = (uint)*(float *)(uVar16 + 0x54) & uVar25;
      *(undefined1 (*) [16])(uVar16 + 0x48) = auVar28 | auVar8;
      puVar17 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar13 + -0x18) + 4);
      puVar17[1] = *(undefined4 *)((ulonglong)uVar10 + 0x24 + (ulonglong)(uVar19 * 0x74));
      *puVar17 = SUB164(auVar28 | auVar8,0);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar17 + -2) = &UNK_1407bbbc2;
      FUN_140755a9a();
    }
    fVar26 = *(float *)((longlong)puVar13 + 0x28);
    if ((*(int *)((longlong)puVar13 + 8) != 0) &&
       ((*(float *)(uVar21 + 0x108) <= fVar26 && (fVar26 < *(float *)(uVar21 + 0x110))))) {
      uVar2 = *(undefined4 *)(uVar21 + 0x80);
      uVar3 = *(undefined4 *)(uVar21 + 0x84);
      puVar13 = (uint *)(ulonglong)((int)puVar13 - 0x14);
      puVar13[3] = puVar13[7];
      puVar13[2] = (uint)fVar26;
      puVar13[1] = uVar3;
      *puVar13 = uVar2;
      puVar13[4] = 0x3f800000;
      *(undefined8 *)(puVar13 + -2) = 0x1407bbc8b;
      FUN_1407e331e();
    }
    uVar10 = *(uint *)((longlong)puVar13 + 0x14);
    fVar26 = *(float *)((longlong)puVar13 + 0x38);
    uVar19 = *(uint *)((longlong)puVar13 + 0x18);
    if (((uVar10 == *(uint *)((longlong)puVar13 + 0x1c)) && (*(float *)(uVar21 + 0x108) <= fVar26))
       && (fVar26 < *(float *)(uVar21 + 0x110))) {
      uVar2 = *(undefined4 *)(uVar21 + 0x84);
      uVar3 = *(undefined4 *)(uVar21 + 0x80);
      puVar13 = (uint *)(ulonglong)((int)puVar13 - 0x14);
      puVar13[3] = *(undefined4 *)(uVar21 + 0x78);
      puVar13[2] = (uint)fVar26;
      puVar13[1] = uVar2;
      *puVar13 = uVar3;
      puVar13[4] = 0x3f800000;
      *(undefined8 *)(puVar13 + -2) = 0x1407bbcf7;
      FUN_1407e331e();
      uVar10 = puVar13[5];
    }
  }
  uVar22 = (uint)puVar13;
  if (uVar10 == uVar19) {
    if (0 < *(int *)(uVar21 + 0x40)) {
      uVar4 = *(undefined1 *)(uVar21 + 0x1ec);
      do {
        *(undefined1 *)((ulonglong)*(uint *)(uVar21 + 0x10) + 0x6e) = uVar4;
      } while (0 < *(int *)(uVar21 + 0x40));
    }
    fVar26 = *(float *)(uVar21 + 0x54) + _DAT_150a4716e;
    pfVar18 = (float *)(ulonglong)(uVar22 - 8);
    pfVar18[1] = *(float *)(uVar21 + 0xf8);
    *pfVar18 = fVar26;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar18 + -2) = &UNK_1407bbd51;
    FUN_140755a9a();
  }
  if ((*(byte *)(uVar21 + 0x68) & 1) == 0) {
    *(int *)(uVar21 + 0x6c) = *(int *)(uVar21 + 0x6c) + 1;
  }
  *(undefined1 *)(uVar21 + 0x1ee) = 0;
  if (_DAT_150b44b8a == (*(uint *)((longlong)puVar13 + 0x58) ^ uVar22)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar13 + -8) = FUN_1407bbea1;
  FUN_1408802b0(*(uint *)((longlong)puVar13 + 0x58) ^ uVar22);
}


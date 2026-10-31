/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a62fd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407a62fd(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 unaff_RBX;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  
  puVar14 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x1c);
  uVar18 = (ulonglong)_DAT_150b43a61;
  uVar6 = *(uint *)(uVar18 + 0x14cc);
  cVar3 = *(char *)((ulonglong)uVar6 + 0xfe);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar3);
  puVar16 = puVar14;
  if (cVar3 != '\0') goto LAB_1407a6582;
  uVar11 = *(uint *)(puVar14 + 0x30);
  puVar17 = (uint *)(ulonglong)uVar11;
  if ((*(uint *)(puVar14 + 0x38) >> 0x14 & 1) == 0) {
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar17 + 5);
    *(undefined8 *)(puVar14 + -0x10) = 0x1407a633d;
    FUN_14076b2d6();
    puVar14 = (undefined1 *)(ulonglong)((int)(puVar14 + -8) + 4);
  }
  *(undefined8 *)(puVar14 + -8) = 0x1407a634b;
  FUN_1407a65aa((ulonglong)(puVar14 + 0x10) & 0xffffffff,puVar17);
  uVar8 = *(uint *)(uVar18 + 0x237c);
  uVar5 = *(uint *)(uVar18 + 0x2380);
  *(uint *)(puVar14 + 4) = uVar6;
  puVar14[3] = 0;
  if (uVar8 == uVar5) {
    if (uVar8 == 0) {
      uVar9 = 8;
    }
    else {
      uVar9 = (ulonglong)((int)uVar8 / 2 + uVar8);
    }
    uVar13 = (ulonglong)(uVar8 + 1);
    if ((int)(uVar8 + 1) < (int)uVar9) {
      uVar13 = uVar9;
    }
    *(ulonglong *)(puVar14 + -8) = (ulonglong)(uint)((int)uVar13 * 8);
    *(undefined8 *)(puVar14 + -0x10) = 0x1407a6394;
    uVar5 = FUN_1407520ca();
    puVar14 = (undefined1 *)(ulonglong)((int)(puVar14 + -8) + 4);
    uVar10 = (ulonglong)uVar5;
    uVar6 = *(uint *)(uVar18 + 0x2384);
    if (uVar6 != 0) {
      *(ulonglong *)(puVar14 + -8) = (ulonglong)(uint)(*(int *)(uVar18 + 0x237c) << 3);
      *(ulonglong *)(puVar14 + -0x10) = (ulonglong)uVar6;
      *(ulonglong *)(puVar14 + -0x18) = uVar10;
      *(undefined8 *)(puVar14 + -0x20) = 0x1407a63b4;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar14 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar18 + 0x2384);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar14 + -0x18) + 0xc) - 0x10) = &UNK_1407a63c2;
      FUN_14075219b();
    }
    *(uint *)(uVar18 + 0x2384) = uVar5;
    *(int *)(uVar18 + 0x2380) = (int)uVar13;
    uVar8 = *(uint *)(uVar18 + 0x237c);
    uVar9 = CONCAT71((int7)(uVar13 >> 8),puVar14[3]);
  }
  else {
    uVar10 = (ulonglong)*(uint *)(uVar18 + 0x2384);
  }
  *(undefined8 *)(uVar10 + (ulonglong)uVar8 * 8) = *(undefined8 *)(puVar14 + 0x10);
  *(int *)(uVar18 + 0x237c) = *(int *)(uVar18 + 0x237c) + 1;
  *(uint *)(uVar18 + 0x2358) = uVar11;
  uVar10 = (ulonglong)*(uint *)(puVar14 + 4);
  *puVar17 = *(uint *)(puVar14 + 4);
  *(undefined8 *)(puVar17 + 0x24) = *(undefined8 *)(uVar10 + 0x144);
  uVar6 = puVar17[10];
  uVar11 = *(uint *)(puVar14 + 0x38);
  if (uVar6 == *(uint *)(uVar18 + 4)) {
    fVar1 = (float)puVar17[0xf];
    fVar2 = (float)puVar17[0x21];
    *(uint *)(uVar10 + 0x144) = puVar17[0xc];
    *(float *)(uVar10 + 0x148) = fVar1 + fVar2;
    *(char *)((longlong)puVar17 + 0x7a) = *(char *)((longlong)puVar17 + 0x7a) + '\x01';
    puVar16 = puVar14;
    goto LAB_1407a6582;
  }
  uVar5 = *(uint *)(puVar14 + 0x34);
  if (((puVar17[4] ^ uVar11) & 1) == 0) {
    if (((uVar11 & 0x100001) == 0) && (*(char *)((longlong)puVar17 + 0x7d) != '\0')) {
LAB_1407a645f:
      uVar8 = puVar17[1];
      if (1 < uVar8) {
        *(undefined8 *)(puVar14 + -8) = 0x1014e718;
        *(undefined8 *)(puVar14 + -0x10) = 0x30;
        *(ulonglong *)(puVar14 + -0x18) = (ulonglong)uVar8;
        *(undefined8 *)(puVar14 + -0x20) = *(undefined8 *)(puVar17 + 3);
        *(undefined8 *)(puVar14 + -0x28) = 0x1407a6477;
        FUN_1408c79d0();
        uVar11 = *(uint *)(puVar14 + 0x28);
        puVar14 = (undefined1 *)(ulonglong)((int)(puVar14 + -0x20) + 0x10);
        uVar6 = puVar17[10];
      }
    }
  }
  else if ((uVar11 >> 0x14 & 1) == 0) goto LAB_1407a645f;
  *(undefined1 *)((longlong)puVar17 + 0x7d) = 0;
  uVar8 = uVar11 | 0x80;
  if ((uVar11 & 0x380) != 0) {
    uVar8 = uVar11;
  }
  puVar17[4] = uVar8;
  uVar7 = ((undefined8 *)(ulonglong)uVar5)[1];
  *(undefined8 *)(puVar17 + 0xc) = *(undefined8 *)(ulonglong)uVar5;
  *(undefined8 *)(puVar17 + 0xe) = uVar7;
  *(undefined1 *)((longlong)puVar17 + 0x7b) = 1;
  puVar17[0xb] = uVar6;
  puVar17[10] = *(uint *)(uVar18 + 4);
  puVar17[0x12] = puVar17[0x11];
  puVar17[0x11] = 0;
  fVar1 = *(float *)(uVar18 + 0xd20);
  puVar17[0x21] = (uint)fVar1;
  uVar6 = *(uint *)(uVar18 + 0xd0c);
  uVar11 = *(uint *)(uVar18 + 0xd10);
  puVar17[0x23] = uVar11;
  puVar17[0x22] = uVar6;
  puVar17[0x20] = 0xffff0000;
  *(undefined1 *)((longlong)puVar17 + 0x7a) = 1;
  fVar2 = (float)puVar17[0xf];
  uVar10 = (ulonglong)*(uint *)(puVar14 + 4);
  *(uint *)(uVar10 + 0x144) = puVar17[0xc];
  *(float *)(uVar10 + 0x148) = fVar1 + fVar2;
  *(undefined8 *)(puVar14 + -8) = 0x3f800000;
  *(ulonglong *)(puVar14 + -0x10) = (ulonglong)((uint)((uVar8 >> 0x15 & 1) == 0) * 3 + 0x25);
  *(undefined8 *)(puVar14 + -0x18) = 0x1407a6529;
  uVar7 = FUN_140754a09();
  puVar15 = (undefined1 *)(ulonglong)((int)(puVar14 + -0x10) + 8);
  fVar1 = *(float *)(uVar18 + 0xd7c);
  uVar9 = (ulonglong)CONCAT31((int3)(uVar11 >> 8),puVar15[3]);
  puVar16 = puVar15;
  if (0.0 < fVar1) {
    fVar2 = (float)puVar17[0xf];
    uVar4 = *(undefined4 *)(uVar10 + 0x2e8);
    *(uint *)(puVar15 + 0x10) = puVar17[0x1c];
    *(float *)(puVar15 + 0x14) = fVar2;
    puVar12 = (uint *)((ulonglong)(puVar15 + 8) & 0xffffffff);
    *puVar12 = puVar17[0x1b];
    puVar12[1] = (uint)(fVar2 - fVar1);
    *(undefined8 *)(puVar15 + -8) = 0;
    *(undefined8 *)(puVar15 + -0x10) = 0;
    *(undefined8 *)(puVar15 + -0x18) = uVar7;
    *(ulonglong *)(puVar15 + -0x20) = (ulonglong)(puVar15 + 4) & 0xffffffff;
    puVar16 = puVar15 + -0x28;
    *(uint **)(puVar15 + -0x28) = puVar12;
    *(undefined8 *)(puVar15 + -0x30) = 0x1407a6582;
    FUN_1407e372a(uVar4);
  }
LAB_1407a6582:
  if (_DAT_150b2f28e != (*(uint *)(puVar16 + 0x18) ^ (uint)puVar16)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar16 + -8) = FUN_1407a65aa;
    FUN_1408802b0(*(uint *)(puVar16 + 0x18) ^ (uint)puVar16);
  }
  return (uVar9 ^ 1) & 0xffffffff;
}


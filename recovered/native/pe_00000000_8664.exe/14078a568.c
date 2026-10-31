/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078a568 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14078a568(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  
  uVar10 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x50);
  puVar9 = (undefined8 *)(ulonglong)*(uint *)(uVar10 + 100);
  uVar18 = (ulonglong)_DAT_150b27cd0;
  uVar1 = *(undefined4 *)(uVar18 + 0x14cc);
  *(undefined8 *)(uVar10 - 8) = 2;
  *(undefined8 *)(uVar10 - 0x10) = 0;
  *(undefined8 *)(uVar10 - 0x18) = *(undefined8 *)(uVar10 + 0x60);
  *(undefined8 **)(uVar10 - 0x20) = puVar9;
  *(undefined8 *)(uVar10 - 0x28) = 0x14078a598;
  cVar5 = FUN_1407648a8();
  puVar11 = (undefined1 *)(ulonglong)((int)(uVar10 - 0x20) + 0x10);
  if (cVar5 != '\0') {
    fVar20 = *(float *)(puVar11 + 0x80);
    uVar6 = *(uint *)(puVar11 + 0x6c);
    uVar8 = puVar9[1];
    *(undefined8 *)(puVar11 + 0x38) = *puVar9;
    *(undefined8 *)(puVar11 + 0x40) = uVar8;
    *(undefined4 *)(puVar11 + 4) = uVar1;
    if (uVar6 == 1) {
      fVar19 = 0.0;
    }
    else {
      fVar19 = fVar20;
      fVar20 = 0.0;
    }
    pfVar7 = (float *)((longlong)puVar11 + 0x38U & 0xffffffff);
    *pfVar7 = *pfVar7 - fVar19;
    pfVar7[1] = pfVar7[1] - fVar20;
    pfVar7[2] = fVar19 + pfVar7[2];
    pfVar7[3] = fVar20 + pfVar7[3];
    *(undefined8 *)(puVar11 + -8) = 0x1800;
    *(ulonglong *)(puVar11 + -0x10) = (longlong)puVar11 + 0x4aU & 0xffffffff;
    *(char **)(puVar11 + -0x18) = (char *)((longlong)puVar11 + 0x4bU & 0xffffffff);
    *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + 0x5c);
    *(float **)(puVar11 + -0x28) = pfVar7;
    *(undefined8 *)(puVar11 + -0x30) = 0x14078a603;
    FUN_14078564e();
    puVar12 = (undefined1 *)(ulonglong)((int)((longlong)puVar11 - 0x28) + 0x14);
    cVar5 = *(char *)((longlong)puVar11 + 0x4bU & 0xffffffff);
    puVar12[3] = cVar5;
    if (cVar5 == '\x01') {
      *(byte *)(uVar18 + 0x1e88) = *(byte *)(uVar18 + 0x1e88) | 1;
      if (puVar12[0x4a] != '\0') {
LAB_14078a668:
        uVar2 = *(uint *)(puVar12 + 0x70);
        *(ulonglong *)(puVar12 + -8) = (ulonglong)((uVar6 != 1) + 3);
        *(undefined8 *)(puVar12 + -0x10) = 0x14078a67d;
        FUN_14076bfe5();
        uVar13 = (ulonglong)((int)(puVar12 + -8) + 4);
        uVar8 = puVar9[1];
        *(undefined8 *)(uVar13 + 0x28) = *puVar9;
        *(undefined8 *)(uVar13 + 0x30) = uVar8;
        *(ulonglong *)(uVar13 + 0x20) =
             CONCAT44(((float)((ulonglong)*(undefined8 *)(uVar18 + 0xe4) >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(uVar18 + 0x1540) >> 0x20)) -
                      (float)((ulonglong)*(undefined8 *)(uVar13 + 0x38) >> 0x20),
                      ((float)*(undefined8 *)(uVar18 + 0xe4) -
                      (float)*(undefined8 *)(uVar18 + 0x1540)) -
                      (float)*(undefined8 *)(uVar13 + 0x38));
        *(undefined4 *)(uVar13 + 0x10) = *(undefined4 *)(uVar13 + 0x20 + (ulonglong)uVar6 * 4);
        puVar14 = (undefined4 *)(ulonglong)((int)(puVar12 + -8) - 4);
        puVar14[1] = *(float *)(ulonglong)uVar2 - *(float *)(uVar13 + 0x78);
        *puVar14 = 0;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar14 + -2) = &UNK_14078a6d2;
        FUN_140755a9a();
      }
      if ((*(int *)(uVar18 + 0x1514) == *(int *)(puVar12 + 0x68)) &&
         (*(float *)(puVar12 + 0x84) <= *(float *)(uVar18 + 0x151c))) {
        *(ulonglong *)(puVar12 + -8) = (ulonglong)((uVar6 != 1) + 3);
        *(undefined8 *)(puVar12 + -0x10) = 0x14078a655;
        FUN_14076bfe5();
        puVar12 = (undefined1 *)(ulonglong)((int)(puVar12 + -8) + 4);
      }
    }
    else if (puVar12[0x4a] != '\0') goto LAB_14078a668;
    uVar1 = *(undefined4 *)((longlong)puVar9 + 4);
    uVar3 = *(undefined4 *)(puVar9 + 1);
    uVar4 = *(undefined4 *)((longlong)puVar9 + 0xc);
    *(undefined4 *)(puVar12 + 0x28) = *(undefined4 *)puVar9;
    *(undefined4 *)(puVar12 + 0x2c) = uVar1;
    *(undefined4 *)(puVar12 + 0x30) = uVar3;
    *(undefined4 *)(puVar12 + 0x34) = uVar4;
    uVar17 = (ulonglong)*(uint *)(puVar12 + 4);
    puVar15 = puVar12;
    if (0xffffff < *(uint *)(puVar12 + 0x88)) {
      uVar1 = *(undefined4 *)(uVar17 + 0x2e8);
      *(undefined8 *)(puVar12 + -8) = 0;
      *(undefined8 *)(puVar12 + -0x10) = 0;
      *(ulonglong *)(puVar12 + -0x18) = (ulonglong)*(uint *)(puVar12 + 0x88);
      *(ulonglong *)(puVar12 + -0x20) = (ulonglong)(puVar12 + 0x30) & 0xffffffff;
      puVar15 = puVar12 + -0x28;
      *(ulonglong *)(puVar12 + -0x28) = (ulonglong)(puVar12 + 0x28) & 0xffffffff;
      uVar17 = (ulonglong)*(uint *)(puVar12 + -0x10);
      *(undefined8 *)(puVar12 + -0x30) = 0x14078a81e;
      FUN_1407e372a(uVar1);
    }
    if (puVar15[3] == '\x01') {
      uVar6 = 0x1d - (*(float *)(uVar18 + 0x151c) < *(float *)(puVar15 + 0x84));
    }
    else {
      uVar6 = 0x1c;
    }
    *(undefined8 *)(puVar15 + -8) = 0x3f800000;
    *(ulonglong *)(puVar15 + -0x10) = (ulonglong)uVar6;
    *(undefined8 *)(puVar15 + -0x18) = 0x14078a857;
    uVar8 = FUN_140754a09();
    uVar16 = (ulonglong)((int)(puVar15 + -0x10) + 8);
    uVar1 = *(undefined4 *)(uVar17 + 0x2e8);
    *(undefined8 *)(uVar16 - 8) = 0;
    *(undefined8 *)(uVar16 - 0x10) = 0;
    *(undefined8 *)(uVar16 - 0x18) = uVar8;
    *(ulonglong *)(uVar16 - 0x20) = uVar16 + 0x30 & 0xffffffff;
    puVar11 = (undefined1 *)(uVar16 - 0x28);
    *(ulonglong *)(uVar16 - 0x28) = uVar16 + 0x28 & 0xffffffff;
    *(undefined8 *)(uVar16 - 0x30) = 0x14078a874;
    FUN_1407e372a(uVar1);
  }
  if (_DAT_150b13580 != (*(uint *)(puVar11 + 0x4c) ^ (uint)puVar11)) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar11 + -8) = FUN_14078a899;
    FUN_1408802b0(*(uint *)(puVar11 + 0x4c) ^ (uint)puVar11);
  }
  return 0;
}


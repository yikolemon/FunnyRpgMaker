/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140755813 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140755813(void)

{
  ulonglong uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  uint uVar13;
  float *pfVar15;
  float *pfVar16;
  undefined1 *puVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  undefined1 *puVar14;
  
  uVar13 = (int)&stack0xffffffffffffffe0 - 0x2c;
  puVar14 = (undefined1 *)(ulonglong)uVar13;
  uVar3 = *(uint *)(puVar14 + 0x5c);
  pfVar19 = (float *)(ulonglong)uVar3;
  uVar4 = *(uint *)(puVar14 + 0x54);
  pfVar18 = (float *)(ulonglong)*(uint *)(puVar14 + 0x44);
  *(uint *)(puVar14 + 0x28) = _DAT_150ade52c ^ uVar13;
  fVar5 = *pfVar18;
  fVar21 = pfVar18[1];
  *(float *)(puVar14 + 0x24) = pfVar18[1];
  *(float *)(puVar14 + 0x20) = fVar5;
  uVar13 = *(uint *)(puVar14 + 0x48);
  if (uVar4 == 0) {
    uVar1 = (longlong)puVar14 + 0x18;
    *(undefined8 *)(puVar14 + -8) = 0;
    *(undefined8 *)(puVar14 + -0x10) = 0;
    *(undefined8 *)(puVar14 + -0x18) = *(undefined8 *)(puVar14 + 0x48);
    *(undefined8 *)(puVar14 + -0x20) = *(undefined8 *)(puVar14 + 0x40);
    *(float **)(puVar14 + -0x28) = (float *)(uVar1 & 0xffffffff);
    *(float *)(puVar14 + -0x10) = fVar21;
    *(float *)(puVar14 + -0x14) = fVar5;
    *(undefined8 *)(puVar14 + -0x30) = 0x140755888;
    FUN_1407559fe();
    fVar5 = *(float *)(puVar14 + -0x14);
    fVar21 = *(float *)(puVar14 + -0x10);
    puVar14 = (undefined1 *)(ulonglong)((int)(puVar14 + -0x28) + 0x14);
    fVar6 = *(float *)(uVar1 & 0xffffffff);
  }
  else {
    fVar6 = *(float *)(ulonglong)uVar4;
    *(float *)(puVar14 + 0x1c) = ((float *)(ulonglong)uVar4)[1];
    *(float *)(puVar14 + 0x18) = fVar6;
  }
  pfVar11 = (float *)(ulonglong)uVar13;
  if (uVar3 != 0) {
    pfVar18 = pfVar19;
  }
  pfVar20 = (float *)(ulonglong)(uVar3 + 8);
  if (uVar3 == 0) {
    pfVar20 = pfVar11;
  }
  bVar8 = true;
  if (fVar6 + fVar5 < *pfVar20) {
    bVar8 = pfVar20[1] <= *(float *)(puVar14 + 0x1c) + fVar21;
  }
  bVar9 = bVar8;
  if ((uVar3 != 0) && (bVar9 = true, *pfVar19 <= fVar5)) {
    bVar9 = (bool)(bVar8 | fVar21 < pfVar19[1]);
  }
  fVar2 = *(float *)(ulonglong)*(uint *)(puVar14 + 0x58);
  if (0.0 < fVar2) {
    *(float *)(puVar14 + 4) = fVar21;
    fVar21 = *pfVar11;
    pfVar15 = (float *)(ulonglong)((int)puVar14 - 8);
    *pfVar15 = fVar5;
    pfVar15[1] = ((fVar21 - fVar5) - fVar6) * fVar2 + fVar5;
    *(bool *)(pfVar15 + 2) = bVar9;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar15 + -2) = &UNK_14075592f;
    FUN_140755a9a();
  }
  fVar5 = ((float *)(ulonglong)*(uint *)(puVar14 + 0x58))[1];
  if (0.0 < fVar5) {
    pfVar16 = (float *)(ulonglong)((int)puVar14 - 8);
    pfVar16[1] = ((pfVar11[1] - fVar21) - *(float *)(puVar14 + 0x1c)) * fVar5 + fVar21;
    *pfVar16 = fVar21;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar16 + -2) = &UNK_14075597b;
    FUN_140755a9a();
  }
  uVar7 = *(undefined4 *)(puVar14 + 0x40);
  if (bVar9 == false) {
    *(undefined8 *)(puVar14 + -8) = 0x3f800000;
    *(undefined8 *)(puVar14 + -0x10) = 0;
    *(undefined8 *)(puVar14 + -0x18) = 0x1407559bf;
    uVar10 = FUN_140754a09();
    puVar17 = (undefined1 *)(ulonglong)((int)(puVar14 + -0x10) + 8);
    *(undefined8 *)(puVar17 + -8) = 0;
  }
  else {
    uVar10 = *(undefined8 *)pfVar20;
    puVar12 = (undefined8 *)((ulonglong)(puVar14 + 8) & 0xffffffff);
    *puVar12 = *(undefined8 *)pfVar18;
    puVar12[1] = uVar10;
    *(undefined8 *)(puVar14 + -8) = 0x3f800000;
    *(undefined8 *)(puVar14 + -0x10) = 0;
    *(undefined8 *)(puVar14 + -0x18) = 0x1407559a6;
    uVar10 = FUN_140754a09();
    puVar17 = (undefined1 *)(ulonglong)((int)(puVar14 + -0x10) + 8);
    *(undefined8 **)(puVar17 + -8) = puVar12;
  }
  *(undefined8 *)(puVar17 + -0x10) = 0;
  *(undefined8 *)(puVar17 + -0x18) = *(undefined8 *)(puVar17 + 0x48);
  *(undefined8 *)(puVar17 + -0x20) = *(undefined8 *)(puVar17 + 0x40);
  *(undefined8 *)(puVar17 + -0x28) = uVar10;
  *(ulonglong *)(puVar17 + -0x30) = (ulonglong)(puVar17 + 0x20) & 0xffffffff;
  *(undefined8 *)(puVar17 + -0x38) = 0;
  *(undefined8 *)(puVar17 + -0x40) = 0;
  *(undefined8 *)(puVar17 + -0x48) = 0x1407559db;
  FUN_1407e456a(uVar7);
  if (_DAT_150ade6e7 != (*(uint *)(puVar17 + -0x18) ^ (uint)(puVar17 + -0x40))) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar17 + -0x48) = FUN_1407559fe;
    FUN_1408802b0(*(uint *)(puVar17 + -0x18) ^ (uint)(puVar17 + -0x40));
  }
  return;
}


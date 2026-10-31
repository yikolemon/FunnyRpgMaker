/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a1c40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a1c40(void)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  float *pfVar10;
  float *pfVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  
  uVar7 = _DAT_150b3f3a8;
  puVar12 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x28);
  pfVar10 = (float *)(ulonglong)puVar12[0xf];
  uVar17 = (ulonglong)_DAT_150b3f3a8;
  uVar2 = *(uint *)(uVar17 + 0x14cc);
  *(undefined1 *)(uVar17 + 0x23c0) = 0;
  fVar1 = *(float *)(uVar17 + 0xe8);
  fVar22 = pfVar10[1];
  if ((pfVar10[1] <= fVar1) && (fVar22 = pfVar10[3], fVar1 <= pfVar10[3])) {
    fVar22 = fVar1;
  }
  fVar1 = *(float *)(uVar17 + 0xe4);
  fVar23 = *pfVar10;
  if ((*pfVar10 <= fVar1) && (fVar23 = pfVar10[2], fVar1 <= pfVar10[2])) {
    fVar23 = fVar1;
  }
  uVar9 = *(undefined8 *)((ulonglong)uVar2 + 0x154);
  *(ulonglong *)(uVar17 + 0x23ac) =
       CONCAT44(fVar22 - (float)((ulonglong)uVar9 >> 0x20),fVar23 - (float)uVar9);
  uVar9 = *(undefined8 *)(uVar17 + 0x240c);
  pfVar11 = (float *)((ulonglong)(puVar12 + 7) & 0xffffffff);
  *(undefined8 *)(pfVar11 + -2) = *(undefined8 *)(uVar17 + 0x2404);
  *(undefined8 *)pfVar11 = uVar9;
  uVar18 = -(uint)(*pfVar10 <= pfVar11[-2]);
  uVar19 = -(uint)(pfVar10[1] <= pfVar11[-1]);
  uVar20 = -(uint)(*pfVar11 < pfVar10[2]);
  uVar21 = -(uint)(pfVar11[1] < pfVar10[3]);
  auVar24._0_4_ = ~uVar18 & (uint)*pfVar10;
  auVar24._4_4_ = ~uVar19 & (uint)pfVar10[1];
  auVar24._8_4_ = ~uVar20 & (uint)pfVar10[2];
  auVar24._12_4_ = ~uVar21 & (uint)pfVar10[3];
  auVar4._4_4_ = (uint)pfVar11[-1] & uVar19;
  auVar4._0_4_ = (uint)pfVar11[-2] & uVar18;
  auVar4._8_4_ = (uint)*pfVar11 & uVar20;
  auVar4._12_4_ = (uint)pfVar11[1] & uVar21;
  *(undefined1 (*) [16])(pfVar11 + -2) = auVar24 | auVar4;
  *puVar12 = uVar2;
  *(ulonglong *)(puVar12 + -2) = (ulonglong)uVar2;
  puVar12[-4] = 0x407a1cf1;
  puVar12[-3] = 1;
  uVar8 = FUN_140764a64();
  uVar13 = (ulonglong)((int)(puVar12 + -2) + 4);
  uVar3 = *(undefined4 *)(uVar8 + 0x2e8);
  *(undefined8 *)(uVar13 - 8) = 0x3e99999a;
  *(undefined8 *)(uVar13 - 0x10) = 0x1d;
  *(undefined8 *)(uVar13 - 0x18) = 0x1407a1d08;
  uVar9 = FUN_140754a09();
  uVar14 = (ulonglong)((int)(uVar13 - 0x10) + 8);
  *(undefined8 *)(uVar14 - 8) = 0;
  *(undefined8 *)(uVar14 - 0x10) = 0;
  *(undefined8 *)(uVar14 - 0x18) = uVar9;
  *(ulonglong *)(uVar14 - 0x20) = uVar14 + 0x10 & 0xffffffff;
  *(ulonglong *)(uVar14 - 0x28) = uVar14 + 0x14 & 0xffffffff;
  *(undefined8 *)(uVar14 - 0x30) = 0x1407a1d21;
  FUN_1407e372a(uVar3);
  uVar3 = *(undefined4 *)((uVar8 & 0xffffffff) + 0x2e8);
  *(undefined8 *)(uVar14 - 0x30) = 0x3f800000;
  *(undefined8 *)(uVar14 - 0x38) = 0x3b;
  *(undefined8 *)(uVar14 - 0x40) = 0x1407a1d34;
  uVar9 = FUN_140754a09();
  uVar15 = (ulonglong)((int)(uVar14 - 0x38) + 8);
  *(undefined8 *)(uVar15 - 8) = 0;
  *(undefined8 *)(uVar15 - 0x10) = 0x3f800000;
  *(undefined8 *)(uVar15 - 0x18) = 0;
  *(undefined8 *)(uVar15 - 0x20) = uVar9;
  *(ulonglong *)(uVar15 - 0x28) = uVar15 + 0xc & 0xffffffff;
  *(ulonglong *)(uVar15 - 0x30) = uVar15;
  *(undefined8 *)(uVar15 - 0x38) = 0x1407a1d4c;
  FUN_1407e3632(uVar3);
  puVar16 = (undefined1 *)(uVar15 - 0x30);
  if ((*(uint *)(uVar15 + 0x10) & 0x900) == 0x800) {
    uVar9 = ((undefined8 *)(ulonglong)*(uint *)(uVar15 + 0xc))[1];
    *(undefined8 *)(uVar15 - 0x2c) = *(undefined8 *)(ulonglong)*(uint *)(uVar15 + 0xc);
    *(undefined8 *)(uVar15 - 0x24) = uVar9;
    fVar22 = *(float *)(uVar15 - 0x2c);
    fVar23 = *(float *)(uVar15 - 0x28);
    fVar5 = *(float *)(uVar15 - 0x24);
    fVar6 = *(float *)(uVar15 - 0x20);
    fVar1 = *(float *)(uVar17 + 0x1228);
    *(float *)(uVar15 - 0x2c) = fVar22 + fVar1;
    *(float *)(uVar15 - 0x28) = fVar23 + fVar1;
    *(float *)(uVar15 - 0x24) = fVar5 - fVar1;
    *(float *)(uVar15 - 0x20) = fVar6 - fVar1;
    if ((((*(float *)(uVar17 + 0xe4) < fVar22 + fVar1) ||
         (*(float *)(uVar17 + 0xe8) < fVar23 + fVar1)) ||
        (fVar5 - fVar1 <= *(float *)(uVar17 + 0xe4))) ||
       (puVar16 = (undefined1 *)(uVar15 - 0x30), fVar6 - fVar1 <= *(float *)(uVar17 + 0xe8))) {
      uVar3 = *(undefined4 *)(uVar15 - 0x30);
      *(ulonglong *)(uVar15 - 0x38) = uVar15 - 0x2c & 0xffffffff;
      *(undefined8 *)(uVar15 - 0x40) = 0x1407a1db5;
      FUN_1407a1e03(uVar7 + 0x2394,uVar3);
      puVar16 = (undefined1 *)(ulonglong)((int)(uVar15 - 0x38) + 4);
    }
  }
  if (_DAT_150b2aaec == (*(uint *)(puVar16 + 0x24) ^ (uint)puVar16)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar16 + -8) = FUN_1407a1e03;
  FUN_1408802b0(*(uint *)(puVar16 + 0x24) ^ (uint)puVar16);
}


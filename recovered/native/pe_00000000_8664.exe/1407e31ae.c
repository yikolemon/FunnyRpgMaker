/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e31ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e31ae(uint param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pfVar8 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
  fVar1 = pfVar8[0xb];
  if (0xffffff < (uint)fVar1) {
    uVar10 = (ulonglong)param_1;
    fVar12 = (float)*(undefined8 *)(ulonglong)(uint)pfVar8[9] + _DAT_150a9bb96;
    fVar13 = (float)((ulonglong)*(undefined8 *)(ulonglong)(uint)pfVar8[9] >> 0x20) +
             fRam0000000150a9bb9a;
    fVar15 = fRam0000000150a9bb9e + 0.0;
    fVar16 = fRam0000000150a9bba2 + 0.0;
    fVar14 = pfVar8[10];
    uVar2 = *(uint *)(uVar10 + 0x38);
    if (uVar2 == *(uint *)(uVar10 + 0x3c)) {
      *pfVar8 = fVar12;
      pfVar8[1] = fVar13;
      pfVar8[2] = fVar15;
      pfVar8[3] = fVar16;
      if (uVar2 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = (int)uVar2 / 2 + uVar2;
      }
      iVar7 = uVar2 + 1;
      if ((int)(uVar2 + 1) < iVar6) {
        iVar7 = iVar6;
      }
      *(ulonglong *)(pfVar8 + -2) = (ulonglong)(uint)(iVar7 * 8);
      pfVar8[-4] = 3.971807;
      pfVar8[-3] = 1.4013e-45;
      uVar5 = FUN_1407520ca();
      pfVar8 = (float *)(ulonglong)((int)(pfVar8 + -2) + 4);
      uVar11 = (ulonglong)uVar5;
      uVar2 = *(uint *)(uVar10 + 0x40);
      if (uVar2 != 0) {
        *(ulonglong *)(pfVar8 + -2) = (ulonglong)(uint)(*(int *)(uVar10 + 0x38) << 3);
        *(ulonglong *)(pfVar8 + -4) = (ulonglong)uVar2;
        *(ulonglong *)(pfVar8 + -6) = uVar11;
        pfVar8[-8] = 3.9718132;
        pfVar8[-7] = 1.4013e-45;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(pfVar8 + -6) + 0xc) - 8) = *(undefined8 *)(uVar10 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(pfVar8 + -6) + 0xc) - 0x10) = &UNK_1407e323b;
        FUN_14075219b();
      }
      *(uint *)(uVar10 + 0x40) = uVar5;
      *(int *)(uVar10 + 0x3c) = iVar7;
      uVar2 = *(uint *)(uVar10 + 0x38);
      fVar14 = pfVar8[10];
      fVar12 = *pfVar8;
      fVar13 = pfVar8[1];
    }
    else {
      uVar11 = (ulonglong)*(uint *)(uVar10 + 0x40);
    }
    fVar15 = pfVar8[0xc];
    *(ulonglong *)(uVar11 + (ulonglong)uVar2 * 8) = CONCAT44(fVar13,fVar12);
    iVar6 = *(int *)(uVar10 + 0x38);
    uVar2 = iVar6 + 1;
    *(uint *)(uVar10 + 0x38) = uVar2;
    fVar12 = (float)*(undefined8 *)(ulonglong)(uint)fVar14 + _DAT_150a9bc2d;
    fVar14 = (float)((ulonglong)*(undefined8 *)(ulonglong)(uint)fVar14 >> 0x20) +
             fRam0000000150a9bc31;
    fVar13 = fRam0000000150a9bc35 + 0.0;
    fVar16 = fRam0000000150a9bc39 + 0.0;
    if (uVar2 == *(uint *)(uVar10 + 0x3c)) {
      iVar6 = iVar6 + 2;
      *pfVar8 = fVar12;
      pfVar8[1] = fVar14;
      pfVar8[2] = fVar13;
      pfVar8[3] = fVar16;
      if (uVar2 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = (int)uVar2 / 2 + uVar2;
      }
      if (iVar6 < iVar7) {
        iVar6 = iVar7;
      }
      *(ulonglong *)(pfVar8 + -2) = (ulonglong)(uint)(iVar6 * 8);
      pfVar8[-4] = 3.9718413;
      pfVar8[-3] = 1.4013e-45;
      uVar5 = FUN_1407520ca();
      pfVar8 = (float *)(ulonglong)((int)(pfVar8 + -2) + 4);
      uVar11 = (ulonglong)uVar5;
      uVar2 = *(uint *)(uVar10 + 0x40);
      if (uVar2 != 0) {
        *(ulonglong *)(pfVar8 + -2) = (ulonglong)(uint)(*(int *)(uVar10 + 0x38) << 3);
        *(ulonglong *)(pfVar8 + -4) = (ulonglong)uVar2;
        *(ulonglong *)(pfVar8 + -6) = uVar11;
        pfVar8[-8] = 3.9718475;
        pfVar8[-7] = 1.4013e-45;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(pfVar8 + -6) + 0xc) - 8) = *(undefined8 *)(uVar10 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(pfVar8 + -6) + 0xc) - 0x10) = &UNK_1407e32cb;
        FUN_14075219b();
      }
      *(uint *)(uVar10 + 0x40) = uVar5;
      *(int *)(uVar10 + 0x3c) = iVar6;
      uVar2 = *(uint *)(uVar10 + 0x38);
      fVar15 = pfVar8[0xc];
      fVar12 = *pfVar8;
      fVar14 = pfVar8[1];
    }
    else {
      uVar11 = (ulonglong)*(uint *)(uVar10 + 0x40);
    }
    *(ulonglong *)(uVar11 + (ulonglong)uVar2 * 8) = CONCAT44(fVar14,fVar12);
    uVar3 = *(undefined4 *)(uVar10 + 0x38);
    uVar4 = *(undefined4 *)(uVar10 + 0x40);
    *(undefined4 *)(uVar10 + 0x38) = uVar3;
    puVar9 = (undefined4 *)(ulonglong)((int)pfVar8 - 0x14);
    puVar9[4] = 0;
    puVar9[3] = fVar15;
    puVar9[2] = fVar1;
    puVar9[1] = uVar3;
    *puVar9 = uVar4;
    *(undefined8 *)(puVar9 + -2) = 0x1407e3310;
    FUN_1407e0774(uVar10);
    *(undefined4 *)(uVar10 + 0x38) = 0;
  }
  return;
}


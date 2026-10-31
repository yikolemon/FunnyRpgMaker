/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e2d14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e2d14(uint param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  float *pfVar13;
  float10 in_ST0;
  float10 in_ST1;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar3 = (int)&stack0xffffffffffffffe0;
  pfVar7 = (float *)(ulonglong)(iVar3 - 0x38U);
  uVar11 = (ulonglong)param_1;
  fVar2 = pfVar7[0x16];
  fVar14 = pfVar7[0x15];
  fVar16 = pfVar7[0x14];
  pfVar6 = (float *)(ulonglong)(uint)pfVar7[0x13];
  pfVar7[0xd] = (float)(_DAT_150b6ba35 ^ iVar3 - 0x38U);
  if (_DAT_150a99e22 <= fVar14) {
    fVar15 = (float)((uint)fVar2 | 0xf0);
    if (((uint)fVar2 & 0x1f0) != 0) {
      fVar15 = fVar2;
    }
    fVar2 = fVar15;
    uVar5 = ~(uint)fVar2;
    fVar15 = _DAT_150a99e50;
    if ((uVar5 & 0xc0) != 0) {
      fVar15 = _DAT_150a6e1a8;
    }
    fVar17 = _DAT_150a99e50;
    if ((uVar5 & 0x30) != 0) {
      fVar17 = fVar15;
    }
    fVar15 = (float)((uint)(*(float *)(ulonglong)(uint)fVar16 - *pfVar6) & _DAT_150a6e19d) * fVar17
             + _DAT_150a9b7f1;
    *pfVar7 = fVar14;
    pfVar7[1] = fVar15;
    pfVar7[-2] = 3.9715388;
    pfVar7[-1] = 1.4013e-45;
    FUN_14074225a();
    fVar14 = _DAT_150a99ea7;
    if ((uVar5 & 0xa0) != 0) {
      fVar14 = _DAT_150a6e20a;
    }
    fVar15 = _DAT_150a99ea7;
    if ((uVar5 & 0x50) != 0) {
      fVar15 = fVar14;
    }
    fVar14 = (float)((uint)(((float *)(ulonglong)(uint)fVar16)[1] -
                           *(float *)((ulonglong)(uint)pfVar7[0x13] + 4)) & _DAT_150a6e1f1) * fVar15
             + _DAT_150a9b845;
    *pfVar7 = (float)in_ST0;
    pfVar7[1] = fVar14;
    pfVar7[-2] = 3.9715583;
    pfVar7[-1] = 1.4013e-45;
    FUN_14074225a();
    pfVar7[6] = (float)in_ST1;
    fVar14 = pfVar7[6];
    pfVar6 = (float *)(ulonglong)(uint)pfVar7[0x13];
  }
  if ((fVar14 < _DAT_150a99efb) || (((uint)fVar2 & 0x1f0) == 0x100)) {
    uVar5 = *(uint *)(uVar11 + 0x38);
    if (uVar5 == *(uint *)(uVar11 + 0x3c)) {
      if (uVar5 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = (int)uVar5 / 2 + uVar5;
      }
      iVar4 = uVar5 + 1;
      if ((int)(uVar5 + 1) < iVar3) {
        iVar4 = iVar3;
      }
      *pfVar7 = (float)(iVar4 * 8);
      pfVar7[-2] = 3.97166;
      pfVar7[-1] = 1.4013e-45;
      uVar1 = FUN_1407520ca();
      fVar14 = *(float *)(uVar11 + 0x40);
      if (fVar14 != 0.0) {
        pfVar7[2] = (float)(*(int *)(uVar11 + 0x38) << 3);
        pfVar7[1] = fVar14;
        *pfVar7 = (float)uVar1;
        pfVar7[-2] = 3.9716673;
        pfVar7[-1] = 1.4013e-45;
        FUN_1408b31a0();
        *pfVar7 = (float)*(undefined4 *)(uVar11 + 0x40);
                    /* WARNING: Subroutine does not return */
        pfVar7[-2] = 3.97167;
        pfVar7[-1] = 1.4013e-45;
        FUN_14075219b();
      }
      *(uint *)(uVar11 + 0x40) = uVar1;
      *(int *)(uVar11 + 0x3c) = iVar4;
      uVar5 = *(uint *)(uVar11 + 0x38);
    }
    else {
      uVar1 = *(uint *)(uVar11 + 0x40);
    }
    *(undefined8 *)((ulonglong)uVar1 + (ulonglong)uVar5 * 8) = *(undefined8 *)pfVar6;
    iVar3 = *(int *)(uVar11 + 0x38);
    uVar5 = iVar3 + 1;
    *(uint *)(uVar11 + 0x38) = uVar5;
    fVar14 = pfVar6[1];
    uVar12 = *(undefined4 *)(ulonglong)(uint)pfVar7[0x14];
    if (uVar5 == *(uint *)(uVar11 + 0x3c)) {
      iVar3 = iVar3 + 2;
      pfVar7[7] = fVar14;
      if (uVar5 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = (int)uVar5 / 2 + uVar5;
      }
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
      }
      *pfVar7 = (float)(iVar3 * 8);
      pfVar7[-2] = 3.9716928;
      pfVar7[-1] = 1.4013e-45;
      uVar1 = FUN_1407520ca();
      fVar14 = *(float *)(uVar11 + 0x40);
      if (fVar14 != 0.0) {
        pfVar7[2] = (float)(*(int *)(uVar11 + 0x38) << 3);
        pfVar7[1] = fVar14;
        *pfVar7 = (float)uVar1;
        pfVar7[-2] = 3.9717002;
        pfVar7[-1] = 1.4013e-45;
        FUN_1408b31a0();
        *pfVar7 = (float)*(undefined4 *)(uVar11 + 0x40);
                    /* WARNING: Subroutine does not return */
        pfVar7[-2] = 3.9717028;
        pfVar7[-1] = 1.4013e-45;
        FUN_14075219b();
      }
      *(uint *)(uVar11 + 0x40) = uVar1;
      *(int *)(uVar11 + 0x3c) = iVar3;
      uVar5 = *(uint *)(uVar11 + 0x38);
      fVar14 = pfVar7[7];
    }
    else {
      uVar1 = *(uint *)(uVar11 + 0x40);
    }
    *(undefined4 *)((ulonglong)uVar1 + (ulonglong)uVar5 * 8) = uVar12;
    *(float *)((ulonglong)uVar1 + 4 + (ulonglong)uVar5 * 8) = fVar14;
    iVar3 = *(int *)(uVar11 + 0x38);
    uVar5 = iVar3 + 1;
    *(uint *)(uVar11 + 0x38) = uVar5;
    if (uVar5 == *(uint *)(uVar11 + 0x3c)) {
      iVar3 = iVar3 + 2;
      fVar14 = pfVar7[0x13];
      if (uVar5 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = (int)uVar5 / 2 + uVar5;
      }
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
      }
      *pfVar7 = (float)(iVar3 * 8);
      pfVar7[-2] = 3.9717247;
      pfVar7[-1] = 1.4013e-45;
      uVar1 = FUN_1407520ca();
      fVar2 = *(float *)(uVar11 + 0x40);
      if (fVar2 != 0.0) {
        pfVar7[2] = (float)(*(int *)(uVar11 + 0x38) << 3);
        pfVar7[1] = fVar2;
        *pfVar7 = (float)uVar1;
        pfVar7[-2] = 3.9717321;
        pfVar7[-1] = 1.4013e-45;
        FUN_1408b31a0();
        *pfVar7 = (float)*(undefined4 *)(uVar11 + 0x40);
                    /* WARNING: Subroutine does not return */
        pfVar7[-2] = 3.9717348;
        pfVar7[-1] = 1.4013e-45;
        FUN_14075219b();
      }
      *(uint *)(uVar11 + 0x40) = uVar1;
      *(int *)(uVar11 + 0x3c) = iVar3;
      uVar5 = *(uint *)(uVar11 + 0x38);
    }
    else {
      uVar1 = *(uint *)(uVar11 + 0x40);
      fVar14 = pfVar7[0x13];
    }
    fVar2 = pfVar7[0x14];
    *(undefined8 *)((ulonglong)uVar1 + (ulonglong)uVar5 * 8) = *(undefined8 *)(ulonglong)(uint)fVar2
    ;
    iVar3 = *(int *)(uVar11 + 0x38);
    uVar5 = iVar3 + 1;
    *(uint *)(uVar11 + 0x38) = uVar5;
    fVar2 = *(float *)((longlong)(ulonglong)(uint)fVar2 + 4);
    uVar12 = *(undefined4 *)(ulonglong)(uint)fVar14;
    if (uVar5 == *(uint *)(uVar11 + 0x3c)) {
      pfVar7[7] = fVar2;
      iVar3 = iVar3 + 2;
      if (uVar5 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = (int)uVar5 / 2 + uVar5;
      }
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
      }
      *pfVar7 = (float)(iVar3 * 8);
      pfVar7[-2] = 3.9717577;
      pfVar7[-1] = 1.4013e-45;
      uVar1 = FUN_1407520ca();
      fVar14 = *(float *)(uVar11 + 0x40);
      if (fVar14 != 0.0) {
        pfVar7[2] = (float)(*(int *)(uVar11 + 0x38) << 3);
        pfVar7[1] = fVar14;
        *pfVar7 = (float)uVar1;
        pfVar7[-2] = 3.971765;
        pfVar7[-1] = 1.4013e-45;
        FUN_1408b31a0();
        *pfVar7 = (float)*(undefined4 *)(uVar11 + 0x40);
                    /* WARNING: Subroutine does not return */
        pfVar7[-2] = 3.9717677;
        pfVar7[-1] = 1.4013e-45;
        FUN_14075219b();
      }
      *(uint *)(uVar11 + 0x40) = uVar1;
      *(int *)(uVar11 + 0x3c) = iVar3;
      uVar5 = *(uint *)(uVar11 + 0x38);
      fVar2 = pfVar7[7];
    }
    else {
      uVar1 = *(uint *)(uVar11 + 0x40);
    }
    *(undefined4 *)((ulonglong)uVar1 + (ulonglong)uVar5 * 8) = uVar12;
    *(float *)((ulonglong)uVar1 + 4 + (ulonglong)uVar5 * 8) = fVar2;
    *(int *)(uVar11 + 0x38) = *(int *)(uVar11 + 0x38) + 1;
  }
  else {
    fVar16 = 0.0;
    if (((uint)fVar2 & 0x10) != 0) {
      fVar16 = fVar14;
    }
    fVar15 = 0.0;
    if (((uint)fVar2 & 0x20) != 0) {
      fVar15 = fVar14;
    }
    pfVar7[4] = fVar15;
    fVar15 = 0.0;
    if (SUB41(fVar2,0) < '\0') {
      fVar15 = fVar14;
    }
    *(ulonglong *)(pfVar7 + 7) = (ulonglong)(uint)fVar15;
    pfVar7[9] = 0.0;
    pfVar7[10] = 0.0;
    fVar15 = 0.0;
    if (((uint)fVar2 & 0x40) != 0) {
      fVar15 = fVar14;
    }
    pfVar7[5] = fVar15;
    pfVar13 = (float *)((ulonglong)(pfVar7 + 0xb) & 0xffffffff);
    *(ulonglong *)pfVar13 =
         CONCAT44(fVar16 + (float)((ulonglong)*(undefined8 *)pfVar6 >> 0x20),
                  fVar16 + (float)*(undefined8 *)pfVar6);
    pfVar7[3] = 1.26117e-44;
    pfVar7[2] = 8.40779e-45;
    pfVar7[1] = fVar16;
    uVar12 = SUB84(pfVar7 + 0xb,0);
    *pfVar7 = (float)uVar12;
    pfVar7[-2] = 3.9715984;
    pfVar7[-1] = 1.4013e-45;
    FUN_1407e1af6(uVar11);
    puVar8 = (undefined4 *)(ulonglong)(iVar3 - 0x48);
    fVar14 = pfVar6[1];
    fVar2 = (float)puVar8[4];
    pfVar6 = (float *)(ulonglong)(uint)puVar8[0x14];
    *pfVar13 = *pfVar6 - fVar2;
    pfVar13[1] = fVar14 + fVar2;
    puVar8[2] = 9;
    puVar8[1] = fVar2;
    *puVar8 = uVar12;
    puVar8[3] = 0xc;
    *(undefined8 *)(puVar8 + -2) = 0x1407e2eee;
    FUN_1407e1af6(param_1);
    puVar9 = (undefined4 *)(ulonglong)(iVar3 - 0x58);
    fVar14 = (float)puVar9[7];
    *(ulonglong *)pfVar13 =
         CONCAT44((float)((ulonglong)*(undefined8 *)pfVar6 >> 0x20) - fVar14,
                  (float)*(undefined8 *)pfVar6 - fVar14);
    puVar9[3] = 3;
    puVar9[1] = fVar14;
    *puVar9 = uVar12;
    puVar9[2] = 0;
    *(undefined8 *)(puVar9 + -2) = 0x1407e2f27;
    FUN_1407e1af6(uVar11);
    puVar10 = (undefined4 *)(ulonglong)(iVar3 - 0x68);
    fVar14 = pfVar6[1];
    fVar2 = (float)puVar10[5];
    *pfVar13 = *(float *)(ulonglong)(uint)puVar10[0x13] + fVar2;
    pfVar13[1] = fVar14 - fVar2;
    puVar10[3] = 6;
    puVar10[2] = 3;
    puVar10[1] = fVar2;
    *puVar10 = uVar12;
    *(undefined8 *)(puVar10 + -2) = 0x1407e2f6b;
    FUN_1407e1af6(param_1);
    pfVar7 = (float *)(ulonglong)(iVar3 - 0x78);
  }
  if (_DAT_150b6be94 != (*(uint *)((longlong)pfVar7 + 0x34) ^ (uint)pfVar7)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)pfVar7 + -8) = &UNK_1407e31ad;
    FUN_1408802b0(*(uint *)((longlong)pfVar7 + 0x34) ^ (uint)pfVar7);
  }
  return;
}


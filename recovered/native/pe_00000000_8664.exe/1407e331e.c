/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e331e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e331e(ulonglong param_1)

{
  uint uVar1;
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
  
  pfVar8 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  uVar2 = *(uint *)((longlong)pfVar8 + 0x34);
  if (0xffffff < uVar2) {
    uVar10 = param_1 & 0xffffffff;
    fVar13 = *(float *)((longlong)pfVar8 + 0x28) + _DAT_150a9bd0d;
    fVar14 = *(float *)((longlong)pfVar8 + 0x30) + fRam0000000150a9bd11;
    fVar15 = fRam0000000150a9bd15 + 0.0;
    fVar16 = fRam0000000150a9bd19 + 0.0;
    fVar12 = *(float *)((longlong)pfVar8 + 0x2c);
    uVar5 = *(uint *)(param_1 + 0x38);
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(float *)((longlong)pfVar8 + 4) = fVar13;
    *(float *)((longlong)pfVar8 + 8) = fVar14;
    *(float *)((longlong)pfVar8 + 0xc) = fVar15;
    *(float *)((longlong)pfVar8 + 0x10) = fVar16;
    if (uVar5 == uVar1) {
      if (uVar5 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = (int)uVar5 / 2 + uVar5;
      }
      iVar7 = uVar5 + 1;
      if ((int)(uVar5 + 1) < iVar6) {
        iVar7 = iVar6;
      }
      *(ulonglong *)((longlong)pfVar8 + -8) = (ulonglong)(uint)(iVar7 * 8);
      *(undefined8 *)((longlong)pfVar8 + -0x10) = 0x1407e3390;
      uVar5 = FUN_1407520ca();
      pfVar8 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar8 + -8) + 4);
      uVar11 = (ulonglong)uVar5;
      uVar1 = *(uint *)(uVar10 + 0x40);
      if (uVar1 != 0) {
        *(ulonglong *)((longlong)pfVar8 + -8) = (ulonglong)(uint)(*(int *)(uVar10 + 0x38) << 3);
        *(ulonglong *)((longlong)pfVar8 + -0x10) = (ulonglong)uVar1;
        *(ulonglong *)((longlong)pfVar8 + -0x18) = uVar11;
        *(undefined8 *)((longlong)pfVar8 + -0x20) = 0x1407e33aa;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)pfVar8 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar10 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)pfVar8 + -0x18) + 0xc) - 0x10) =
             &UNK_1407e33b5;
        FUN_14075219b();
      }
      *(uint *)(uVar10 + 0x40) = uVar5;
      *(int *)(uVar10 + 0x3c) = iVar7;
      uVar5 = *(uint *)(uVar10 + 0x38);
      fVar13 = *(float *)((longlong)pfVar8 + 4);
      fVar14 = *(float *)((longlong)pfVar8 + 8);
      fVar12 = *(float *)((longlong)pfVar8 + 0x2c);
    }
    else {
      uVar11 = (ulonglong)*(uint *)(uVar10 + 0x40);
    }
    fVar15 = pfVar8[0xe];
    *(ulonglong *)(uVar11 + (ulonglong)uVar5 * 8) = CONCAT44(fVar14,fVar13);
    iVar6 = *(int *)(uVar10 + 0x38);
    uVar1 = iVar6 + 1;
    *(uint *)(uVar10 + 0x38) = uVar1;
    fVar12 = fVar12 + _DAT_150a9a4c7;
    if (uVar1 == *(uint *)(uVar10 + 0x3c)) {
      iVar6 = iVar6 + 2;
      *pfVar8 = fVar12;
      if (uVar1 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = (int)uVar1 / 2 + uVar1;
      }
      if (iVar6 < iVar7) {
        iVar6 = iVar7;
      }
      *(ulonglong *)(pfVar8 + -2) = (ulonglong)(uint)(iVar6 * 8);
      pfVar8[-4] = 3.9719317;
      pfVar8[-3] = 1.4013e-45;
      uVar5 = FUN_1407520ca();
      pfVar8 = (float *)(ulonglong)((int)(pfVar8 + -2) + 4);
      uVar11 = (ulonglong)uVar5;
      uVar1 = *(uint *)(uVar10 + 0x40);
      if (uVar1 != 0) {
        *(ulonglong *)(pfVar8 + -2) = (ulonglong)(uint)(*(int *)(uVar10 + 0x38) << 3);
        *(ulonglong *)(pfVar8 + -4) = (ulonglong)uVar1;
        *(ulonglong *)(pfVar8 + -6) = uVar11;
        pfVar8[-8] = 3.971938;
        pfVar8[-7] = 1.4013e-45;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(pfVar8 + -6) + 0xc) - 8) = *(undefined8 *)(uVar10 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(pfVar8 + -6) + 0xc) - 0x10) = &UNK_1407e3446;
        FUN_14075219b();
      }
      *(uint *)(uVar10 + 0x40) = uVar5;
      *(int *)(uVar10 + 0x3c) = iVar6;
      uVar1 = *(uint *)(uVar10 + 0x38);
      fVar14 = pfVar8[2];
      fVar12 = *pfVar8;
      fVar15 = pfVar8[0xe];
    }
    else {
      uVar11 = (ulonglong)*(uint *)(uVar10 + 0x40);
    }
    *(float *)(uVar11 + (ulonglong)uVar1 * 8) = fVar12;
    *(float *)(uVar11 + 4 + (ulonglong)uVar1 * 8) = fVar14;
    uVar3 = *(undefined4 *)(uVar10 + 0x38);
    uVar4 = *(undefined4 *)(uVar10 + 0x40);
    *(undefined4 *)(uVar10 + 0x38) = uVar3;
    puVar9 = (undefined4 *)(ulonglong)((int)pfVar8 - 0x14);
    puVar9[4] = 0;
    puVar9[3] = fVar15;
    puVar9[2] = uVar2;
    puVar9[1] = uVar3;
    *puVar9 = uVar4;
    *(undefined8 *)(puVar9 + -2) = 0x1407e349c;
    FUN_1407e0774(uVar10);
    *(undefined4 *)(uVar10 + 0x38) = 0;
  }
  return;
}


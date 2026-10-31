/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e157c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e157c(uint param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  
  puVar12 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  uVar16 = (ulonglong)param_1;
  uVar11 = *(uint *)((longlong)puVar12 + 0x28);
  if (_DAT_150a98671 < *(float *)((longlong)puVar12 + 0x2c) ||
      _DAT_150a98671 == *(float *)((longlong)puVar12 + 0x2c)) {
    uVar5 = (ulonglong)*(uint *)((longlong)puVar12 + 0x38);
    iVar6 = *(int *)((longlong)puVar12 + 0x34);
    uVar11 = *(uint *)((longlong)puVar12 + 0x30);
    if ((int)*(uint *)((longlong)puVar12 + 0x38) < 1) {
      puVar12 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x18);
      *puVar12 = puVar12[0xc];
      *(undefined8 *)(puVar12 + -2) = 0x1407e15e4;
      iVar2 = FUN_1407dffbe(uVar16);
      uVar5 = 0x30 / (longlong)iVar2 & 0xffffffff;
    }
    *(undefined8 *)((longlong)puVar12 + -8) = 0xc;
    *(undefined8 *)((longlong)puVar12 + -0x10) = 1;
    *(ulonglong *)((longlong)puVar12 + -0x18) = uVar5;
    *(undefined8 *)((longlong)puVar12 + -0x20) = 0x1407e15f9;
    uVar3 = FUN_14077dc6a();
    puVar13 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x18) + 0xc);
    uVar4 = uVar11 - iVar6;
    if ((int)uVar11 < iVar6) {
      uVar4 = iVar6 - uVar11;
    }
    puVar13[2] = uVar3;
    if ((int)uVar3 < 2) {
      puVar13[1] = 0;
      fVar17 = (float)puVar13[0xb];
    }
    else {
      uVar9 = uVar4 % uVar3;
      if (uVar9 == 0) {
        puVar13[1] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar4 = uVar4 / uVar3 + 2;
      iVar6 = uVar3 - uVar9;
      uVar3 = uVar3 - iVar6 / 2;
      puVar13[1] = (int)CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1);
      fVar17 = (float)puVar13[0xb];
    }
    iVar2 = *(int *)(uVar16 + 0x38);
    iVar6 = *(int *)(uVar16 + 0x3c);
    puVar13[4] = iVar2;
    iVar2 = uVar4 + iVar2;
    if (iVar6 < iVar2) {
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      *puVar13 = iVar2;
      if (iVar6 <= iVar2) {
        iVar6 = iVar2;
      }
      *(ulonglong *)(puVar13 + -2) = (ulonglong)(uint)(iVar6 * 8);
      puVar13[-4] = 0x407e16fb;
      puVar13[-3] = 1;
      uVar4 = FUN_1407520ca();
      puVar13 = (uint *)(ulonglong)((int)(puVar13 + -2) + 4);
      uVar9 = *(uint *)(uVar16 + 0x40);
      if (uVar9 != 0) {
        *(ulonglong *)(puVar13 + -2) = (ulonglong)(uint)(*(int *)(uVar16 + 0x38) << 3);
        *(ulonglong *)(puVar13 + -4) = (ulonglong)uVar9;
        *(ulonglong *)(puVar13 + -6) = (ulonglong)uVar4;
        *puVar13 = iVar6;
        puVar13[-8] = 0x407e171b;
        puVar13[-7] = 1;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar13 + -6) + 0xc) - 8) = *(undefined8 *)(uVar16 + 0x40)
        ;
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar13 + -6) + 0xc) - 0x10) = &UNK_1407e1726;
        FUN_14075219b();
      }
      *(uint *)(uVar16 + 0x40) = uVar4;
      *(int *)(uVar16 + 0x3c) = iVar6;
      fVar17 = (float)puVar13[0xb];
      iVar2 = *puVar13;
    }
    else {
      uVar4 = *(uint *)(uVar16 + 0x40);
    }
    uVar9 = puVar13[0xd];
    *(int *)(uVar16 + 0x38) = iVar2;
    uVar10 = uVar11;
    if (0x2f < uVar11) {
      iVar6 = ((uint)((int)uVar11 / 6 + ((int)uVar11 >> 0x1f)) >> 3) +
              (int)(((longlong)(int)uVar11 / 6 + ((longlong)(int)uVar11 >> 0x3f) & 0xffffffffU) >>
                   0x1f);
      uVar7 = uVar11 + iVar6 * -0x30;
      uVar10 = uVar11 + 0x30 + iVar6 * -0x30;
      if (-1 < (int)uVar7) {
        uVar10 = uVar7;
      }
    }
    *puVar13 = param_1;
    pfVar8 = (float *)(ulonglong)(uVar4 + puVar13[4] * 8);
    if ((int)uVar9 < (int)uVar11) {
      uVar4 = *puVar13;
      uVar9 = puVar13[2];
      do {
        uVar7 = uVar10 + 0x30;
        if (-1 < (int)uVar10) {
          uVar7 = uVar10;
        }
        fVar1 = *(float *)((ulonglong)*(uint *)((ulonglong)uVar4 + 0x2c) + 0x5c +
                          (ulonglong)uVar7 * 8);
        uVar10 = puVar13[10];
        *pfVar8 = *(float *)((ulonglong)*(uint *)((ulonglong)uVar4 + 0x2c) + 0x58 +
                            (ulonglong)uVar7 * 8) * fVar17 + *(float *)(ulonglong)uVar10;
        pfVar8[1] = fVar1 * fVar17 + ((float *)(ulonglong)uVar10)[1];
        pfVar8 = (float *)(ulonglong)((int)pfVar8 + 8);
        uVar11 = uVar11 - uVar3;
        uVar10 = uVar7 - uVar3;
        uVar3 = uVar9;
      } while ((int)puVar13[0xd] <= (int)uVar11);
    }
    else {
      uVar4 = puVar13[2];
      do {
        uVar9 = uVar10 - 0x30;
        if ((int)uVar10 < 0x30) {
          uVar9 = uVar10;
        }
        uVar10 = puVar13[10];
        fVar1 = *(float *)((ulonglong)*(uint *)((ulonglong)*puVar13 + 0x2c) + 0x5c +
                          (ulonglong)uVar9 * 8);
        *pfVar8 = *(float *)((ulonglong)*(uint *)((ulonglong)*puVar13 + 0x2c) + 0x58 +
                            (ulonglong)uVar9 * 8) * fVar17 + *(float *)(ulonglong)uVar10;
        pfVar8[1] = fVar1 * fVar17 + ((float *)(ulonglong)uVar10)[1];
        pfVar8 = (float *)(ulonglong)((int)pfVar8 + 8);
        uVar11 = uVar11 + uVar3;
        uVar10 = uVar9 + uVar3;
        uVar3 = uVar4;
      } while ((int)uVar11 <= (int)puVar13[0xd]);
    }
    if ((char)puVar13[1] != '\0') {
      uVar11 = puVar13[0xd];
      iVar6 = ((uint)((int)uVar11 / 6 + ((int)uVar11 >> 0x1f)) >> 3) +
              (int)(((longlong)(int)uVar11 / 6 + ((longlong)(int)uVar11 >> 0x3f) & 0xffffffffU) >>
                   0x1f);
      uVar3 = uVar11 + iVar6 * -0x30;
      uVar11 = uVar11 + 0x30 + iVar6 * -0x30;
      if (-1 < (int)uVar3) {
        uVar11 = uVar3;
      }
      uVar3 = puVar13[10];
      fVar1 = *(float *)((ulonglong)*(uint *)((ulonglong)*puVar13 + 0x2c) + 0x5c +
                        (ulonglong)uVar11 * 8);
      *pfVar8 = *(float *)((ulonglong)*(uint *)((ulonglong)*puVar13 + 0x2c) + 0x58 +
                          (ulonglong)uVar11 * 8) * fVar17 + *(float *)(ulonglong)uVar3;
      pfVar8[1] = fVar17 * fVar1 + ((float *)(ulonglong)uVar3)[1];
    }
  }
  else {
    uVar3 = *(uint *)(uVar16 + 0x38);
    if (uVar3 == *(uint *)(uVar16 + 0x3c)) {
      if (uVar3 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = (int)uVar3 / 2 + uVar3;
      }
      iVar2 = uVar3 + 1;
      if ((int)(uVar3 + 1) < iVar6) {
        iVar2 = iVar6;
      }
      *(ulonglong *)((longlong)puVar12 + -8) = (ulonglong)(uint)(iVar2 * 8);
      *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407e1667;
      uVar4 = FUN_1407520ca();
      uVar14 = (ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
      uVar5 = (ulonglong)uVar4;
      uVar3 = *(uint *)(uVar16 + 0x40);
      if (uVar3 != 0) {
        *(ulonglong *)(uVar14 - 8) = (ulonglong)(uint)(*(int *)(uVar16 + 0x38) << 3);
        *(ulonglong *)(uVar14 - 0x10) = (ulonglong)uVar3;
        *(ulonglong *)(uVar14 - 0x18) = uVar5;
        *(undefined8 *)(uVar14 - 0x20) = 0x1407e1681;
        FUN_1408b31a0();
        uVar15 = (ulonglong)((int)(uVar14 - 0x18) + 0xc);
        *(undefined8 *)(uVar15 - 8) = *(undefined8 *)(uVar16 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(uVar15 - 0x10) = &UNK_1407e168c;
        FUN_14075219b();
      }
      *(uint *)(uVar16 + 0x40) = uVar4;
      *(int *)(uVar16 + 0x3c) = iVar2;
      uVar3 = *(uint *)(uVar16 + 0x38);
    }
    else {
      uVar5 = (ulonglong)*(uint *)(uVar16 + 0x40);
    }
    *(undefined8 *)(uVar5 + (ulonglong)uVar3 * 8) = *(undefined8 *)(ulonglong)uVar11;
    *(int *)(uVar16 + 0x38) = *(int *)(uVar16 + 0x38) + 1;
  }
  return;
}


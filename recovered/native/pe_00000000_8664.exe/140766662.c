/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140766662 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_140766662(longlong param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint *puVar16;
  float10 in_ST0;
  float10 in_ST1;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar12 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x1c);
  puVar12[3] = param_2;
  uVar11 = (ulonglong)_DAT_150b03dc4;
  uVar13 = puVar12[0xe] | 1;
  uVar8 = (uint)param_1;
  puVar12[4] = uVar8;
  if (uVar8 != 0) {
    if ((*(uint *)(uVar11 + 0x14dc) != 0) &&
       (*(uint *)((ulonglong)*(uint *)(uVar11 + 0x14dc) + 0x3b0) == uVar8)) {
      uVar13 = puVar12[0xe] | 0xa1;
    }
    uVar8 = uVar13 | 0x80;
    if ((*(uint *)(param_1 + 0xc) & 0x10200) != 0x10200) {
      uVar8 = uVar13;
    }
    uVar13 = *(uint *)(param_1 + 0xc) >> 7 & 0x20 | uVar8;
  }
  uVar8 = puVar12[3];
  *puVar12 = uVar8;
  puVar12[-2] = 0x407666d3;
  puVar12[-1] = 1;
  uVar6 = FUN_140762bd3();
  if (uVar6 == 0) {
    *puVar12 = 0x120;
    puVar12[-2] = 0x40766797;
    puVar12[-1] = 1;
    uVar7 = FUN_1407520ca();
    puVar16 = (uint *)(ulonglong)uVar7;
    puVar12[-2] = 0x407667a0;
    puVar12[-1] = 1;
    FUN_1407595a2(uVar7);
    *puVar16 = uVar8;
    puVar16[0x17] = *(uint *)(uVar11 + 0x1fe0);
    uVar8 = *(uint *)(ulonglong)puVar12[0xc];
    uVar6 = ((uint *)(ulonglong)puVar12[0xc])[1];
    puVar16[0x1c] = uVar6;
    puVar16[0x1b] = uVar8;
    puVar16[3] = uVar6;
    puVar16[2] = uVar8;
    uVar8 = *(uint *)(ulonglong)puVar12[0xd];
    uVar6 = ((uint *)(ulonglong)puVar12[0xd])[1];
    puVar16[0x1d] = uVar8;
    puVar16[0x1e] = uVar6;
    puVar16[4] = uVar8;
    puVar16[5] = uVar6;
    puVar16[1] = uVar13;
    puVar12[-2] = 0x407667df;
    puVar12[-1] = 1;
    FUN_1407812c2(puVar16);
    uVar13 = *(uint *)(uVar11 + 0x1fe0);
    if (uVar13 == *(uint *)(uVar11 + 0x1fe4)) {
      if (uVar13 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = (int)uVar13 / 2 + uVar13;
      }
      iVar14 = uVar13 + 1;
      if ((int)(uVar13 + 1) < iVar9) {
        iVar14 = iVar9;
      }
      *puVar12 = iVar14 * 4;
      puVar12[-2] = 0x40766823;
      puVar12[-1] = 1;
      uVar8 = FUN_1407520ca();
      uVar13 = *(uint *)(uVar11 + 0x1fe8);
      if (uVar13 != 0) {
        puVar12[2] = *(int *)(uVar11 + 0x1fe0) << 2;
        puVar12[1] = uVar13;
        *puVar12 = uVar8;
        puVar12[-2] = 0x40766849;
        puVar12[-1] = 1;
        FUN_1408b31a0();
        *puVar12 = *(undefined4 *)(uVar11 + 0x1fe8);
                    /* WARNING: Subroutine does not return */
        puVar12[-2] = 0x40766857;
        puVar12[-1] = 1;
        FUN_14075219b();
      }
      *(uint *)(uVar11 + 0x1fe8) = uVar8;
      *(int *)(uVar11 + 0x1fe4) = iVar14;
      uVar13 = *(uint *)(uVar11 + 0x1fe0);
    }
    else {
      uVar8 = *(uint *)(uVar11 + 0x1fe8);
    }
    *(uint *)((ulonglong)uVar8 + (ulonglong)uVar13 * 4) = uVar7;
    *(int *)(uVar11 + 0x1fe0) = *(int *)(uVar11 + 0x1fe0) + 1;
    *(int *)(uVar11 + 0x2034) = *(int *)(uVar11 + 0x2034) + 1;
    if ((*(byte *)(uVar11 + 0x27b5) & 8) != 0) {
      if (puVar12[4] == 0) {
        uVar13 = 0x1033cfb8;
      }
      else {
        uVar13 = *(uint *)((ulonglong)puVar12[4] + 4);
      }
      puVar12[2] = uVar13;
      puVar12[1] = puVar12[3];
      *puVar12 = 0x10355bd8;
      puVar12[-2] = 0x407668b0;
      puVar12[-1] = 1;
      FUN_1407518b6();
    }
    uVar13 = *(uint *)(uVar11 + 0x203c);
    *(uint *)(uVar11 + 0x203c) = uVar13;
    puVar16[0x19] = uVar13;
    uVar3 = *(undefined4 *)(uVar11 + 0x1268);
    puVar12[1] = puVar16[2];
    *puVar12 = uVar3;
    puVar12[-2] = 0x407668de;
    puVar12[-1] = 1;
    FUN_14074225a();
    *(float *)(uVar11 + 0x1268) = (float)in_ST0;
    uVar3 = *(undefined4 *)(uVar11 + 0x126c);
    puVar12[1] = puVar16[3];
    *puVar12 = uVar3;
    puVar12[-2] = 0x40766901;
    puVar12[-1] = 1;
    FUN_14074225a();
    *(float *)(uVar11 + 0x126c) = (float)in_ST1;
    uVar3 = *(undefined4 *)(uVar11 + 0x1270);
    puVar12[1] = (uint)((float)puVar16[2] + (float)puVar16[4]);
    *puVar12 = uVar3;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar12 + -2) = &UNK_140766929;
    FUN_140755a9a();
  }
  piVar15 = (int *)(ulonglong)uVar6;
  uVar8 = puVar12[0xc];
  pfVar10 = (float *)(ulonglong)puVar12[0xd];
  fVar4 = (float)piVar15[2];
  fVar1 = (float)piVar15[3];
  if ((*(char *)((longlong)piVar15 + 0x55) != '\x01') ||
     (fVar17 = fVar1, fVar18 = fVar4, *piVar15 == 0x11111111)) {
    fVar18 = *(float *)(ulonglong)uVar8;
    fVar17 = *(float *)((ulonglong)uVar8 + 4);
    piVar15[3] = *(int *)((ulonglong)uVar8 + 4);
    piVar15[2] = (int)fVar18;
  }
  fVar5 = (float)piVar15[4];
  fVar2 = (float)piVar15[5];
  if ((*(char *)((longlong)piVar15 + 0x56) != '\x01') ||
     (fVar19 = fVar2, fVar20 = fVar5, *piVar15 == 0x11111111)) {
    fVar20 = *pfVar10;
    fVar19 = pfVar10[1];
    piVar15[5] = (int)pfVar10[1];
    piVar15[4] = (int)fVar20;
  }
  piVar15[1] = piVar15[1] & 0x3000U | uVar13;
  if (((((fVar4 == fVar18) && (!NAN(fVar4) && !NAN(fVar18))) && (fVar1 == fVar17)) &&
      ((!NAN(fVar1) && !NAN(fVar17) && (fVar5 == fVar20)))) && (!NAN(fVar5) && !NAN(fVar20))) {
    if ((fVar2 == fVar19) && (!NAN(fVar2) && !NAN(fVar19))) goto code_r0x00014076696a;
  }
  puVar12[-2] = 0x40766785;
  puVar12[-1] = 1;
  FUN_1407812c2(piVar15);
code_r0x00014076696a:
  uVar13 = puVar12[4];
  piVar15[0x16] = uVar13;
  piVar15[0x18] = *(int *)(uVar11 + 4);
  *(ulonglong *)(piVar15 + 8) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(piVar15 + 0x40) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(piVar15 + 2) >> 0x20),
                (float)*(undefined8 *)(piVar15 + 0x40) + (float)*(undefined8 *)(piVar15 + 2));
  puVar12[2] = uVar6 + 0x108;
  puVar12[1] = uVar6 + 0x100;
  *puVar12 = (int)(puVar12 + 5);
  puVar12[-2] = 0x407669af;
  puVar12[-1] = 1;
  FUN_14077df16(piVar15);
  *(undefined8 *)(piVar15 + 10) = *(undefined8 *)((ulonglong)(puVar12 + 5) & 0xffffffff);
  if (uVar13 != 0) {
    *(undefined1 *)((ulonglong)uVar13 + 0xf8) = 1;
  }
  return piVar15;
}


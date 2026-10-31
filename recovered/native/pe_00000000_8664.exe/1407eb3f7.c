/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eb3f7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407eb3f7(void)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar15;
  char *pcVar16;
  float fVar17;
  float fVar18;
  uint *puVar13;
  uint *puVar14;
  
  uVar11 = (int)&stack0xffffffffffffffe0 - 0x30;
  puVar13 = (uint *)(ulonglong)uVar11;
  uVar15 = puVar13[0x11];
  uVar7 = puVar13[0x18];
  uVar4 = puVar13[0x17];
  uVar10 = puVar13[0x16];
  pcVar16 = (char *)(ulonglong)uVar10;
  uVar12 = puVar13[0x13];
  uVar5 = puVar13[0x12];
  puVar13[0xb] = _DAT_150b7411e ^ uVar11;
  if (uVar7 == 0) {
    *puVar13 = uVar10;
    puVar13[-2] = 0x407eb430;
    puVar13[-1] = 1;
    iVar6 = FUN_1408c85c0();
    uVar12 = puVar13[0x13];
    uVar7 = iVar6 + uVar10;
  }
  puVar13[7] = uVar7;
  if (uVar4 == 0) {
    uVar4 = uVar7;
  }
  *puVar13 = uVar12;
  puVar13[1] = 0xbf800000;
  puVar13[-2] = 0x407eb455;
  puVar13[-1] = 1;
  lVar8 = FUN_1407e80f8(uVar5);
  uVar12 = (int)&stack0xffffffffffffffe0 - 0x38;
  puVar14 = (uint *)(ulonglong)uVar12;
  puVar14[9] = (uint)((float)puVar14[0x13] / *(float *)(lVar8 + 0x10));
  *(undefined8 *)(ulonglong)uVar15 = 0;
  fVar18 = 0.0;
  if (uVar10 < uVar4) {
    puVar14[8] = (uint)lVar8;
    uVar15 = 0;
    do {
      uVar7 = (uint)pcVar16;
      if ((float)puVar14[0x15] <= 0.0) {
LAB_1407eb4df:
        cVar3 = *pcVar16;
        uVar10 = (uint)cVar3;
        puVar14[10] = uVar10;
        if (cVar3 < '\0') {
          puVar14[2] = puVar14[7];
          puVar14[1] = uVar7;
          *puVar14 = (int)(puVar14 + 10);
          puVar14[6] = (uint)fVar18;
          puVar14[-2] = 0x407eb50d;
          puVar14[-1] = 1;
          iVar6 = FUN_140750fa5();
          fVar18 = (float)puVar14[6];
          uVar7 = iVar6 + uVar7;
          uVar10 = puVar14[10];
        }
        else {
          uVar7 = uVar7 + 1;
        }
        fVar2 = fVar18;
        if (uVar10 != 0xd) {
          if (uVar10 == 10) {
            uVar1 = *(undefined4 *)(ulonglong)puVar14[0x11];
            puVar14[1] = (uint)fVar18;
            *puVar14 = uVar1;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar14 + -2) = &UNK_1407eb541;
            FUN_140755a9a();
          }
          if ((*(uint *)(ulonglong)puVar14[8] <= uVar10) ||
             (fVar17 = *(float *)((ulonglong)((uint *)(ulonglong)puVar14[8])[2] +
                                 (ulonglong)uVar10 * 4), fVar17 < 0.0)) {
            puVar14[6] = (uint)fVar18;
            puVar14[-2] = 0x407eb5d8;
            puVar14[-1] = 1;
            fVar17 = (float)FUN_1407eb3ef();
            fVar18 = (float)puVar14[6];
          }
          fVar2 = fVar17 * (float)puVar14[9] + fVar18;
          if ((float)puVar14[0x14] <= fVar17 * (float)puVar14[9] + fVar18) goto LAB_1407eb603;
        }
      }
      else {
        if (uVar15 == 0) {
          puVar14[5] = puVar14[0x1b];
          puVar14[4] = (uint)((float)puVar14[0x15] - fVar18);
          puVar14[3] = puVar14[7];
          puVar14[2] = uVar7;
          puVar14[1] = puVar14[0x13];
          *puVar14 = puVar14[0x12];
          puVar14[6] = (uint)fVar18;
          puVar14[-2] = 0x407eb4cf;
          puVar14[-1] = 1;
          uVar15 = FUN_1407eb1a6();
          fVar18 = (float)puVar14[6];
        }
        if (uVar7 < uVar15) goto LAB_1407eb4df;
        pfVar9 = (float *)(ulonglong)puVar14[0x11];
        if (*pfVar9 <= fVar18 && fVar18 != *pfVar9) {
          *pfVar9 = fVar18;
        }
        pfVar9[1] = pfVar9[1] + (float)puVar14[0x13];
        puVar14[2] = puVar14[0x1b];
        puVar14[1] = puVar14[7];
        *puVar14 = uVar7;
        puVar14[-2] = 0x407eb5a4;
        puVar14[-1] = 1;
        uVar7 = FUN_1407eb06d();
        uVar15 = 0;
        fVar18 = 0.0;
        fVar2 = fVar18;
        if ((puVar14[0x1b] & 4) != 0) break;
      }
      fVar18 = fVar2;
      pcVar16 = (char *)(ulonglong)uVar7;
    } while (uVar7 < uVar4);
  }
  else {
LAB_1407eb603:
    uVar7 = (uint)pcVar16;
  }
  uVar15 = puVar14[0x1a];
  pfVar9 = (float *)(ulonglong)puVar14[0x11];
  if (*pfVar9 <= fVar18 && fVar18 != *pfVar9) {
    *pfVar9 = fVar18;
  }
  fVar2 = pfVar9[1];
  if (uVar15 != 0) {
    fVar17 = (float)puVar14[0x13];
    *(float *)(ulonglong)uVar15 = fVar18;
    ((float *)(ulonglong)uVar15)[1] = fVar17 + fVar2;
  }
  uVar15 = puVar14[0x19];
  if ((0.0 < fVar18) || ((fVar2 == 0.0 && (!NAN(fVar2))))) {
    pfVar9[1] = (float)puVar14[0x13] + fVar2;
  }
  if (uVar15 != 0) {
    *(uint *)(ulonglong)uVar15 = uVar7;
  }
  if (_DAT_150b74366 != (puVar14[0xb] ^ uVar12)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar14 + -2) = &UNK_1407eb67d;
    FUN_1408802b0(puVar14[0xb] ^ uVar12);
  }
  return;
}


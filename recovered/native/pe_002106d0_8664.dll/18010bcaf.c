/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010bcaf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18010bcaf(void)

{
  float *pfVar1;
  short *psVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  short *psVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  
  lVar6 = DAT_180419160;
  if (*(char *)(DAT_180419160 + 0x139) == '\x01') {
    bVar7 = *(byte *)(DAT_180419160 + 0x8d) ^ 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)(DAT_180419160 + 0xbaa) = bVar7;
  cVar8 = FUN_1801088d4(lVar6 + 0x118);
  if (cVar8 != '\0') {
    fVar19 = (float)*(undefined8 *)(lVar6 + 0x118);
    fVar21 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x118) >> 0x20);
    fVar19 = (float)(int)((int)fVar19 - (uint)((float)(int)fVar19 != fVar19 && fVar19 < 0.0));
    fVar21 = (float)(int)((int)fVar21 - (uint)((float)(int)fVar21 != fVar21 && fVar21 < 0.0));
    *(ulonglong *)(lVar6 + 0x26a0) = CONCAT44(fVar21,fVar19);
    *(ulonglong *)(lVar6 + 0x118) = CONCAT44(fVar21,fVar19);
  }
  cVar8 = FUN_1801088d4(lVar6 + 0x118);
  if (cVar8 != '\0') {
    cVar8 = FUN_1801088d4(lVar6 + 0xaf4);
    if (cVar8 != '\0') {
      fVar19 = (float)*(undefined8 *)(lVar6 + 0x118) - (float)*(undefined8 *)(lVar6 + 0xaf4);
      fVar21 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x118) >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(lVar6 + 0xaf4) >> 0x20);
      *(ulonglong *)(lVar6 + 0x104) = CONCAT44(fVar21,fVar19);
      uVar17 = -(uint)(fVar19 != 0.0);
      uVar18 = -(uint)(fVar21 != 0.0);
      fVar19 = fVar19 * fVar19 + fVar21 * fVar21;
      goto LAB_18010bda4;
    }
  }
  *(undefined8 *)(lVar6 + 0x104) = 0;
  uVar17 = 0;
  uVar18 = 0;
  fVar19 = 0.0;
LAB_18010bda4:
  bVar16 = *(int *)(lVar6 + 0x130) == 0;
  fVar21 = 0.0;
  if (fVar19 <= *(float *)(&DAT_1802de758 + (ulonglong)bVar16 * 4)) {
    fVar21 = *(float *)(lVar6 + 0x269c) + *(float *)(lVar6 + 0x48);
  }
  *(float *)(lVar6 + 0x269c) = fVar21;
  auVar5._8_4_ = 0;
  auVar5._0_8_ = (ulonglong)uVar17 << 0x3f;
  auVar5._12_4_ = (int)(((ulonglong)uVar18 << 0x3f) >> 0x20);
  iVar9 = movmskpd((uint)bVar16,auVar5);
  if (iVar9 != 0) {
    *(undefined1 *)(lVar6 + 0x21f5) = 0;
  }
  uVar17 = _DAT_1802b0ce0;
  lVar15 = 0xb50;
  lVar13 = 0xb6e;
  lVar14 = 0xb5a;
  lVar11 = 0;
  do {
    if (*(char *)(lVar6 + -0xa4e + lVar13) == '\0') {
      *(undefined1 *)(lVar6 + -0x1e + lVar13) = 0;
      *(undefined2 *)(lVar6 + -0xb46 + lVar15 * 2) = 0;
      bVar16 = 0.0 <= *(float *)(lVar6 + -0x2194 + lVar15 * 4);
      *(bool *)(lVar6 + lVar13) = bVar16;
      if (bVar16) {
        *(undefined8 *)(lVar6 + -0x4f08 + lVar15 * 8) = *(undefined8 *)(lVar6 + 0x18);
      }
      pcVar12 = (char *)(lVar6 + lVar15);
      psVar10 = (short *)(lVar6 + lVar14);
      *(undefined4 *)(lVar6 + -0x2180 + lVar15 * 4) = *(undefined4 *)(lVar6 + -0x2194 + lVar15 * 4);
      *(undefined4 *)(lVar6 + -0x2194 + lVar15 * 4) = 0xbf800000;
      if (*(char *)(lVar6 + -0x1e + lVar13) == '\x01') goto LAB_18010bfa4;
    }
    else {
      fVar21 = 0.0;
      pfVar1 = (float *)(lVar6 + -0x2194 + lVar15 * 4);
      *(bool *)(lVar6 + -0x1e + lVar13) = *pfVar1 <= 0.0 && *pfVar1 != 0.0;
      *(undefined2 *)(lVar6 + -0xb46 + lVar15 * 2) = 0;
      *(undefined1 *)(lVar6 + lVar13) = 0;
      fVar19 = *(float *)(lVar6 + -0x2194 + lVar15 * 4);
      *(float *)(lVar6 + -0x2180 + lVar15 * 4) = fVar19;
      if (0.0 <= fVar19) {
        fVar21 = fVar19 + *(float *)(lVar6 + 0x48);
      }
      pcVar12 = (char *)(lVar6 + 0xb50 + lVar11);
      psVar10 = (short *)(lVar6 + 0xb5a + lVar11 * 2);
      *(float *)(lVar6 + -0x2194 + lVar15 * 4) = fVar21;
      if (*(char *)(lVar6 + -0x1e + lVar13) == '\0') {
        cVar8 = FUN_1801088d4(lVar6 + 0x118);
        fVar19 = 0.0;
        fVar21 = 0.0;
        if (cVar8 != '\0') {
          uVar3 = *(undefined8 *)(lVar6 + -0x4f84 + lVar15 * 8);
          fVar19 = (float)*(undefined8 *)(lVar6 + 0x118) - (float)uVar3;
          fVar21 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x118) >> 0x20) -
                   (float)((ulonglong)uVar3 >> 0x20);
        }
        uVar20 = FUN_180102463(*(undefined4 *)(lVar6 + -0x2144 + lVar15 * 4),
                               fVar19 * fVar19 + fVar21 * fVar21);
        *(undefined4 *)(lVar6 + -0x2144 + lVar15 * 4) = uVar20;
        fVar22 = (float)((uint)fVar19 ^ uVar17);
        if (fVar22 <= fVar19) {
          fVar22 = fVar19;
        }
        uVar20 = FUN_180102463(*(undefined4 *)(lVar6 + -0x4eac + lVar15 * 8),fVar22);
        *(undefined4 *)(lVar6 + -0x4eac + lVar15 * 8) = uVar20;
        fVar19 = (float)((uint)fVar21 ^ uVar17);
        if (fVar19 <= fVar21) {
          fVar19 = fVar21;
        }
        uVar20 = FUN_180102463(*(undefined4 *)(lVar6 + -0x4ea8 + lVar15 * 8),fVar19);
        *(undefined4 *)(lVar6 + -0x4ea8 + lVar15 * 8) = uVar20;
      }
      else {
LAB_18010bfa4:
        dVar4 = *(double *)(lVar6 + 0x18);
        if (*(float *)(lVar6 + 0x9c) <= (float)(dVar4 - *(double *)(lVar6 + -0x4f58 + lVar15 * 8)))
        {
LAB_18010c029:
          *(undefined2 *)(lVar6 + -0xb3c + lVar15 * 2) = 1;
        }
        else {
          cVar8 = FUN_1801088d4(lVar6 + 0x118);
          fVar19 = 0.0;
          if (cVar8 != '\0') {
            fVar21 = *(float *)(lVar6 + 0x11c) - *(float *)(lVar6 + -0x4f80 + lVar15 * 8);
            fVar19 = *(float *)(lVar6 + 0x118) - *(float *)(lVar6 + -0x4f84 + lVar15 * 8);
            fVar19 = fVar19 * fVar19 + fVar21 * fVar21;
          }
          if (*(float *)(lVar6 + 0xa0) * *(float *)(lVar6 + 0xa0) <= fVar19) goto LAB_18010c029;
          psVar2 = (short *)(lVar6 + -0xb3c + lVar15 * 2);
          *psVar2 = *psVar2 + 1;
        }
        *(double *)(lVar6 + -0x4f58 + lVar15 * 8) = dVar4;
        *(undefined8 *)(lVar6 + -0x4f84 + lVar15 * 8) = *(undefined8 *)(lVar6 + 0x118);
        *psVar10 = *(short *)(lVar6 + -0xb3c + lVar15 * 2);
        *(undefined8 *)(lVar6 + -0x4eac + lVar15 * 8) = 0;
        *(undefined4 *)(lVar6 + -0x2144 + lVar15 * 4) = 0;
      }
    }
    *(bool *)(lVar6 + -0x19 + lVar13) = *psVar10 == 2;
    if (*pcVar12 == '\x01') {
      *(undefined1 *)(lVar6 + 0x21f5) = 0;
    }
    lVar11 = lVar11 + 1;
    lVar15 = lVar15 + 1;
    lVar13 = lVar13 + 1;
    lVar14 = lVar14 + 2;
    if (lVar15 == 0xb55) {
      return;
    }
  } while( true );
}


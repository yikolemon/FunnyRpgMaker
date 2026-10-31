/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c73bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c73bc(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar10 = DAT_140f2a910;
  fVar9 = DAT_14021169c;
  fVar8 = DAT_1402113b0;
  uVar7 = _DAT_1401ced40;
  fVar6 = DAT_1401c86c8;
  fVar5 = DAT_1401c86c0;
  uVar4 = DAT_1401c86a4;
  lVar12 = 0;
  bVar2 = true;
  do {
    fVar13 = *(float *)(lVar10 + 0x118 + lVar12 * 4);
    fVar14 = *(float *)(param_3 + 8 + lVar12 * 4);
    if ((fVar14 < fVar13) || (fVar14 = *(float *)(param_3 + lVar12 * 4), fVar13 < fVar14)) {
      fVar13 = fVar13 - fVar14;
      if (((fVar13 != 0.0) || (NAN(fVar13))) &&
         ((fVar14 = *(float *)(param_2 + 0xd4 + lVar12 * 4), 0.0 <= fVar13 || (0.0 <= fVar14)))) {
        fVar15 = 0.0;
        if (0.0 < fVar13) {
          fVar15 = fVar6;
          if (*(float *)(param_2 + 0xdc + lVar12 * 4) <= fVar14) goto LAB_1400c7586;
        }
        fVar1 = *(float *)(lVar10 + 0x1320);
        fVar16 = ((float)((uint)fVar13 & uVar7) - fVar1) / (fVar1 * fVar5 - fVar1);
        fVar17 = fVar6;
        if (fVar16 <= fVar6) {
          fVar17 = fVar16;
        }
        fVar13 = (float)(~-(uint)(fVar13 < 0.0) & (uint)fVar15 | -(uint)(fVar13 < 0.0) & uVar4) *
                 fVar1 * fVar9 *
                 (float)(-(uint)(fVar16 < 0.0) & (uint)fVar6 |
                        ~-(uint)(fVar16 < 0.0) & (uint)(fVar17 * fVar8 + fVar6)) *
                 *(float *)(lVar10 + 0x48) + *(float *)(param_1 + 0x20 + lVar12 * 4);
        *(float *)(param_1 + 0x20 + lVar12 * 4) = fVar13;
        iVar11 = (int)fVar13 - (uint)(fVar13 < 0.0 && (float)(int)fVar13 != fVar13);
        if (iVar11 != 0) {
          fVar13 = (float)iVar11;
          if (bVar2) {
            FUN_140093a13();
          }
          else {
            FUN_140093a2a(param_2,fVar14 + fVar13);
          }
          *(float *)(param_1 + 0x20 + lVar12 * 4) = *(float *)(param_1 + 0x20 + lVar12 * 4) - fVar13
          ;
        }
      }
    }
LAB_1400c7586:
    lVar12 = 1;
    bVar3 = !bVar2;
    bVar2 = false;
    if (bVar3) {
      return;
    }
  } while( true );
}


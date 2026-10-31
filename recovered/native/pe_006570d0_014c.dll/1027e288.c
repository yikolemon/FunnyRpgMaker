/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027e288 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_1027e288(double param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  uVar1 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar10 = (DAT_10325c90 * param_1 + DAT_10325c98) - DAT_10325c98;
    iVar3 = ((int)ROUND(DAT_10325c90 * param_1) + 0x1c7610U & 0x3f) * 0x20;
    dVar11 = _DAT_10325ca0 * dVar10;
    dVar5 = param_1 - DAT_10325cb0 * dVar10;
    param_1 = param_1 - DAT_10325cb0 * dVar10;
    dVar15 = param_1 - dVar11;
    dVar6 = dVar5 - dVar11;
    dVar8 = dVar5 - _UNK_10325ca8 * dVar10;
    dVar7 = dVar6 * dVar6;
    dVar9 = dVar8 * dVar8;
    dVar12 = *(double *)(&DAT_103287a0 + iVar3) + *(double *)(&DAT_103287b8 + iVar3);
    dVar13 = *(double *)(&DAT_103287b8 + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&DAT_103287a0 + iVar3);
    dVar14 = dVar13 + *(double *)(&DAT_103287a8 + iVar3);
    dVar17 = dVar16 + dVar14;
    return (float10)(dVar17 + (dVar10 * _DAT_10325cb8 - ((param_1 - dVar15) - dVar11)) *
                              (*(double *)(&DAT_103287a8 + iVar3) * dVar15 - dVar12) +
                              *(double *)(&DAT_103287b0 + iVar3) +
                              (*(double *)(&DAT_103287a8 + iVar3) - dVar14) + dVar13 +
                              (dVar14 - dVar17) + dVar16 +
                              (_DAT_10325c60 * dVar7 + _DAT_10325c50 +
                              (_DAT_10325c80 * dVar5 * dVar6 + _DAT_10325c70) * dVar7 * dVar7) *
                              dVar12 * dVar15 * dVar7 +
                              (_UNK_10325c68 * dVar9 + _UNK_10325c58 +
                              (_UNK_10325c88 * dVar5 * dVar8 + _UNK_10325c78) * dVar9 * dVar9) *
                              *(double *)(&DAT_103287a8 + iVar3) * dVar9);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(DAT_10325ce0 -
                    (double)((ulonglong)param_1 & 0xffffffffffff |
                            (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  fVar4 = (float10)FUN_1027e1cf();
  return fVar4;
}


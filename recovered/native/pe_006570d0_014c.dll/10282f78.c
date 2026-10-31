/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10282f78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10282f78(double param_1)

{
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
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
  
  uVar1 = ((ushort)((ulonglong)param_1 >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar9 = (DAT_10326160 * param_1 + DAT_10326168) - DAT_10326168;
    iVar2 = ((int)ROUND(DAT_10326160 * param_1) + 0x1c7600U & 0x3f) * 0x20;
    dVar10 = _DAT_10326170 * dVar9;
    dVar4 = param_1 - DAT_10326180 * dVar9;
    param_1 = param_1 - DAT_10326180 * dVar9;
    dVar14 = param_1 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - _UNK_10326178 * dVar9;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&DAT_103287a0 + iVar2) + *(double *)(&DAT_103287b8 + iVar2);
    dVar12 = *(double *)(&DAT_103287b8 + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&DAT_103287a0 + iVar2);
    dVar13 = dVar12 + *(double *)(&DAT_103287a8 + iVar2);
    dVar16 = dVar15 + dVar13;
    return (float10)(dVar16 + (dVar9 * _DAT_10326188 - ((param_1 - dVar14) - dVar10)) *
                              (*(double *)(&DAT_103287a8 + iVar2) * dVar14 - dVar11) +
                              *(double *)(&DAT_103287b0 + iVar2) +
                              (*(double *)(&DAT_103287a8 + iVar2) - dVar13) + dVar12 +
                              (dVar13 - dVar16) + dVar15 +
                              (_DAT_10326130 * dVar6 + _DAT_10326120 +
                              (_DAT_10326150 * dVar4 * dVar5 + _DAT_10326140) * dVar6 * dVar6) *
                              dVar11 * dVar14 * dVar6 +
                              (_UNK_10326138 * dVar8 + _UNK_10326128 +
                              (_UNK_10326158 * dVar4 * dVar7 + _UNK_10326148) * dVar8 * dVar8) *
                              *(double *)(&DAT_103287a8 + iVar2) * dVar8);
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(param_1 * _DAT_103261a0);
    }
    return (float10)param_1;
  }
  fVar3 = (float10)FUN_10282ebf();
  return fVar3;
}


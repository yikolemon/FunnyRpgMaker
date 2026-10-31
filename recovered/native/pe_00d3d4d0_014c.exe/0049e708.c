/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049e708 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0049e708(void *param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 extraout_ST0;
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
  double dVar17;
  
  dVar14 = (double)CONCAT44(param_3,param_2);
  uVar1 = (ushort)((uint)param_3 >> 0x10);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar9 = (DAT_004fa050 * dVar14 + DAT_004fa058) - DAT_004fa058;
    iVar3 = ((int)ROUND(DAT_004fa050 * dVar14) + 0x1c7610U & 0x3f) * 0x20;
    dVar10 = _DAT_004fa060 * dVar9;
    dVar4 = dVar14 - DAT_004fa070 * dVar9;
    dVar14 = dVar14 - DAT_004fa070 * dVar9;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - _UNK_004fa068 * dVar9;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&DAT_004fcb60 + iVar3) + *(double *)(&DAT_004fcb78 + iVar3);
    dVar12 = *(double *)(&DAT_004fcb78 + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&DAT_004fcb60 + iVar3);
    dVar13 = dVar12 + *(double *)(&DAT_004fcb68 + iVar3);
    dVar17 = dVar16 + dVar13;
    return (float10)(dVar17 + (dVar9 * _DAT_004fa078 - ((dVar14 - dVar15) - dVar10)) *
                              (*(double *)(&DAT_004fcb68 + iVar3) * dVar15 - dVar11) +
                              *(double *)(&DAT_004fcb70 + iVar3) +
                              (*(double *)(&DAT_004fcb68 + iVar3) - dVar13) + dVar12 +
                              (dVar13 - dVar17) + dVar16 +
                              (_DAT_004fa020 * dVar6 + _DAT_004fa010 +
                              (_DAT_004fa040 * dVar4 * dVar5 + _DAT_004fa030) * dVar6 * dVar6) *
                              dVar11 * dVar15 * dVar6 +
                              (_UNK_004fa028 * dVar8 + _UNK_004fa018 +
                              (_UNK_004fa048 * dVar4 * dVar7 + _UNK_004fa038) * dVar8 * dVar8) *
                              *(double *)(&DAT_004fcb68 + iVar3) * dVar8);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(DAT_004fa0a0 -
                    (double)((ulonglong)dVar14 & 0xffffffffffff |
                            (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  FUN_0049e64f(param_1,param_2,param_3);
  return extraout_ST0;
}


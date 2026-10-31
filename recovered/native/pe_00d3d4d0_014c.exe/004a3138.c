/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a3138 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_004a3138(void *param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  float10 extraout_ST0;
  double dVar3;
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
  
  dVar13 = (double)CONCAT44(param_3,param_2);
  uVar1 = ((ushort)((uint)param_3 >> 0x10) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar8 = (DAT_004fa520 * dVar13 + DAT_004fa528) - DAT_004fa528;
    iVar2 = ((int)ROUND(DAT_004fa520 * dVar13) + 0x1c7600U & 0x3f) * 0x20;
    dVar9 = _DAT_004fa530 * dVar8;
    dVar3 = dVar13 - DAT_004fa540 * dVar8;
    dVar13 = dVar13 - DAT_004fa540 * dVar8;
    dVar14 = dVar13 - dVar9;
    dVar4 = dVar3 - dVar9;
    dVar6 = dVar3 - _UNK_004fa538 * dVar8;
    dVar5 = dVar4 * dVar4;
    dVar7 = dVar6 * dVar6;
    dVar10 = *(double *)(&DAT_004fcb60 + iVar2) + *(double *)(&DAT_004fcb78 + iVar2);
    dVar11 = *(double *)(&DAT_004fcb78 + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&DAT_004fcb60 + iVar2);
    dVar12 = dVar11 + *(double *)(&DAT_004fcb68 + iVar2);
    dVar16 = dVar15 + dVar12;
    return (float10)(dVar16 + (dVar8 * _DAT_004fa548 - ((dVar13 - dVar14) - dVar9)) *
                              (*(double *)(&DAT_004fcb68 + iVar2) * dVar14 - dVar10) +
                              *(double *)(&DAT_004fcb70 + iVar2) +
                              (*(double *)(&DAT_004fcb68 + iVar2) - dVar12) + dVar11 +
                              (dVar12 - dVar16) + dVar15 +
                              (_DAT_004fa4f0 * dVar5 + _DAT_004fa4e0 +
                              (_DAT_004fa510 * dVar3 * dVar4 + _DAT_004fa500) * dVar5 * dVar5) *
                              dVar10 * dVar14 * dVar5 +
                              (_UNK_004fa4f8 * dVar7 + _UNK_004fa4e8 +
                              (_UNK_004fa518 * dVar3 * dVar6 + _UNK_004fa508) * dVar7 * dVar7) *
                              *(double *)(&DAT_004fcb68 + iVar2) * dVar7);
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(dVar13 * _DAT_004fa560);
    }
    return (float10)dVar13;
  }
  FUN_004a307f(param_1,param_2,param_3);
  return extraout_ST0;
}


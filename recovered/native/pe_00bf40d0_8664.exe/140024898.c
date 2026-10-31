/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140024898 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140024898(double *param_1,uint param_2,longlong param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
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
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  dVar8 = FUN_140024fad(param_2 >> 0x10 & 0xff);
  dVar9 = FUN_140024fad(param_2 >> 8 & 0xff);
  dVar10 = FUN_140024fad(param_2 & 0xff);
  dVar15 = DAT_1400e7248;
  uVar5 = _DAT_1400b6b00;
  dVar11 = DAT_1400e74c8 * dVar10 + DAT_1400e74c0 * dVar8 + DAT_1400e74b8 * dVar9;
  dVar16 = DAT_1400e72c8 * dVar10 + DAT_1400e72e0 * dVar8 + DAT_1400e72d8 * dVar9;
  dVar8 = dVar10 * _DAT_1400e74e0 + dVar8 * _DAT_1400e74d8 + dVar9 * _DAT_1400e74d0;
  dVar10 = (DAT_1400e74f8 * dVar8 + DAT_1400e74f0 * dVar11 + DAT_1400e74e8 * dVar16) *
           *(double *)(param_3 + 0x80);
  dVar19 = (DAT_1400e7510 * dVar8 + DAT_1400e7508 * dVar11 + DAT_1400e7500 * dVar16) *
           *(double *)(param_3 + 0x88);
  dVar9 = (dVar8 * _DAT_1400e7528 + dVar11 * _DAT_1400e7520 + dVar16 * _DAT_1400e7518) *
          *(double *)(param_3 + 0x90);
  dVar8 = *(double *)(param_3 + 0x50);
  dVar11 = FUN_14009a2b0(((double)((ulonglong)dVar10 & _DAT_1400b6b00) * dVar8) / DAT_1400e7248);
  dVar16 = FUN_14009a2b0(((double)((ulonglong)dVar19 & uVar5) * dVar8) / dVar15);
  dVar8 = FUN_14009a2b0(((double)(uVar5 & (ulonglong)dVar9) * dVar8) / dVar15);
  uVar6 = FUN_14002516e(dVar10);
  uVar7 = FUN_14002516e(dVar19);
  auVar20._0_8_ = (double)(int)uVar6 * _DAT_1400e7530 * dVar11;
  auVar20._8_8_ = (double)(int)uVar7 * _UNK_1400e7538 * dVar16;
  auVar21._8_4_ = SUB84(dVar16 + _UNK_1400e7548,0);
  auVar21._0_8_ = dVar11 + _DAT_1400e7540;
  auVar21._12_4_ = (int)((ulonglong)(dVar16 + _UNK_1400e7548) >> 0x20);
  auVar21 = divpd(auVar20,auVar21);
  uVar6 = FUN_14002516e(dVar9);
  dVar8 = ((double)(int)uVar6 * DAT_1400e7288 * dVar8) / (dVar8 + DAT_1400e7290);
  dVar9 = auVar21._0_8_;
  dVar11 = auVar21._8_8_;
  dVar16 = (dVar9 * DAT_1400e72a0 + DAT_1400e7298 * dVar11 + dVar8) / DAT_1400e72a0;
  dVar19 = ((dVar9 + dVar11) - (dVar8 + dVar8)) / _DAT_1400e72a8;
  dVar10 = (DAT_1400e7558 * dVar8 + dVar9 * DAT_1400e7550 + dVar11 * DAT_1400e7550) / DAT_1400e7550;
  dVar11 = (dVar9 * DAT_1400e7560 + dVar11 * DAT_1400e7550 + dVar8) / DAT_1400e7550;
  dVar8 = FUN_140096d50();
  dVar18 = DAT_1400e73d0;
  dVar12 = FUN_1400250fb((dVar8 * _DAT_1400e73c8) / DAT_1400e73d0);
  dVar8 = *(double *)(param_3 + 0x28);
  dVar9 = *(double *)(param_3 + 0x40);
  dVar13 = FUN_14009a2b0((dVar11 * *(double *)(param_3 + 0x30)) / dVar8);
  dVar13 = dVar13 * dVar15;
  dVar4 = DAT_1400e7480 / dVar9;
  dVar15 = dVar13 / dVar15;
  dVar11 = SQRT(dVar15);
  dVar14 = dVar11;
  if (dVar15 < 0.0) {
    dVar14 = FUN_14009ba00(dVar15);
  }
  dVar8 = dVar8 + DAT_1400e7480;
  dVar1 = *(double *)(param_3 + 0x58);
  dVar17 = (double)((ulonglong)(DAT_1400e7478 + dVar12) & -(ulonglong)(dVar12 < DAT_1400e7568));
  dVar17 = FUN_1400974b0(((double)(~-(ulonglong)(dVar12 < DAT_1400e7568) & (ulonglong)dVar12 |
                                  (ulonglong)dVar17) * DAT_1400e73d0) / _DAT_1400e73c8 +
                         DAT_1400e7308,dVar17);
  dVar10 = FUN_14009a2b0(((dVar17 + _DAT_1400e7310) * _DAT_1400e7318 * _DAT_1400e7320 *
                          *(double *)(param_3 + 0x48) * *(double *)(param_3 + 0x38) *
                         SQRT(dVar16 * dVar16 + dVar19 * dVar19)) / (dVar10 + _DAT_1400e7350));
  dVar16 = FUN_14009a2b0(DAT_1400e7578);
  dVar16 = FUN_14009a2b0(DAT_1400e7580 - dVar16);
  if (dVar15 < 0.0) {
    dVar11 = FUN_14009ba00(dVar15);
  }
  dVar19 = (dVar18 * dVar12) / _DAT_1400e73c8;
  dVar11 = dVar11 * dVar16 * dVar10;
  dVar9 = (dVar9 * dVar16 * dVar10) / dVar8;
  if (dVar9 < 0.0) {
    dVar9 = FUN_14009ba00(dVar9);
  }
  else {
    dVar9 = SQRT(dVar9);
  }
  dVar18 = DAT_1400e7490 * dVar13 + DAT_1400b6b38;
  dVar10 = (DAT_1400e7488 * dVar13) / dVar18;
  dVar9 = _UNK_1400e74a8 * dVar9;
  dVar16 = FUN_140099d70();
  dVar16 = dVar16 * _DAT_1400e74b0;
  dVar15 = FUN_1400974b0(dVar19,dVar18);
  dVar19 = FUN_14009b490(dVar19,dVar18);
  *param_1 = dVar12;
  param_1[1] = dVar11;
  param_1[2] = dVar13;
  param_1[3] = dVar4 * dVar14 * dVar8 * dVar1;
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = dVar11 * dVar1;
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 4) = auVar3;
  param_1[6] = dVar10;
  dVar19 = dVar19 * dVar16;
  auVar2._8_4_ = SUB84(dVar19,0);
  auVar2._0_8_ = dVar15 * dVar16;
  auVar2._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 7) = auVar2;
  return param_1;
}


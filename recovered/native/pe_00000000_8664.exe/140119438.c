/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140119438 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140119438(double *param_1,uint param_2,longlong param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
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
  
  dVar9 = (double)FUN_140119b4d(param_2 >> 0x10 & 0xff);
  dVar10 = (double)FUN_140119b4d(param_2 >> 8 & 0xff);
  dVar11 = (double)FUN_140119b4d(param_2 & 0xff);
  dVar4 = DAT_140e8e0e8;
  uVar6 = _DAT_1401ced50;
  dVar12 = DAT_140e8e358 * dVar11 + DAT_140e8e350 * dVar9 + DAT_140e8e348 * dVar10;
  dVar18 = DAT_140e8e168 * dVar11 + DAT_140e8e180 * dVar9 + DAT_140e8e178 * dVar10;
  dVar9 = dVar11 * _DAT_140e8e370 + dVar9 * _DAT_140e8e368 + dVar10 * _DAT_140e8e360;
  dVar11 = (DAT_140e8e388 * dVar9 + DAT_140e8e380 * dVar12 + DAT_140e8e378 * dVar18) *
           *(double *)(param_3 + 0x80);
  dVar19 = (DAT_140e8e3a0 * dVar9 + DAT_140e8e398 * dVar12 + DAT_140e8e390 * dVar18) *
           *(double *)(param_3 + 0x88);
  dVar10 = (dVar9 * _DAT_140e8e3b8 + dVar12 * _DAT_140e8e3b0 + dVar18 * _DAT_140e8e3a8) *
           *(double *)(param_3 + 0x90);
  dVar9 = *(double *)(param_3 + 0x50);
  dVar12 = (double)FUN_1401a5d60(((double)((ulonglong)dVar11 & _DAT_1401ced50) * dVar9) /
                                 DAT_140e8e0e8);
  dVar18 = (double)FUN_1401a5d60(((double)((ulonglong)dVar19 & uVar6) * dVar9) / dVar4);
  dVar9 = (double)FUN_1401a5d60(((double)(uVar6 & (ulonglong)dVar10) * dVar9) / dVar4);
  iVar7 = FUN_140119d0e(dVar11);
  iVar8 = FUN_140119d0e(dVar19);
  auVar20._0_8_ = (double)iVar7 * _DAT_140e8e3c0 * dVar12;
  auVar20._8_8_ = (double)iVar8 * _UNK_140e8e3c8 * dVar18;
  auVar21._8_4_ = SUB84(dVar18 + _UNK_140e8e3d8,0);
  auVar21._0_8_ = dVar12 + _DAT_140e8e3d0;
  auVar21._12_4_ = (int)((ulonglong)(dVar18 + _UNK_140e8e3d8) >> 0x20);
  auVar21 = divpd(auVar20,auVar21);
  iVar7 = FUN_140119d0e(dVar10);
  dVar9 = ((double)iVar7 * DAT_140e8e128 * dVar9) / (dVar9 + DAT_140e8e130);
  dVar10 = auVar21._0_8_;
  dVar12 = auVar21._8_8_;
  dVar18 = (dVar10 * DAT_140e8e140 + DAT_140e8e138 * dVar12 + dVar9) / DAT_140e8e140;
  dVar19 = ((dVar10 + dVar12) - (dVar9 + dVar9)) / _DAT_140e8e148;
  dVar11 = (DAT_140e8e3e8 * dVar9 + dVar10 * DAT_140e8e3e0 + dVar12 * DAT_140e8e3e0) / DAT_140e8e3e0
  ;
  dVar12 = (dVar10 * DAT_140e8e3f0 + dVar12 * DAT_140e8e3e0 + dVar9) / DAT_140e8e3e0;
  dVar9 = (double)FUN_1401a09f0(dVar19,dVar18);
  dVar17 = DAT_140e8e270;
  dVar13 = (double)FUN_140119c9b((dVar9 * _DAT_140e8e268) / DAT_140e8e270);
  dVar9 = *(double *)(param_3 + 0x28);
  dVar10 = *(double *)(param_3 + 0x40);
  dVar14 = (double)FUN_1401a5d60((dVar12 * *(double *)(param_3 + 0x30)) / dVar9,
                                 *(double *)(param_3 + 0x60) * dVar10);
  dVar14 = dVar14 * dVar4;
  dVar5 = DAT_140e8d478 / dVar10;
  dVar4 = dVar14 / dVar4;
  dVar12 = SQRT(dVar4);
  dVar15 = dVar12;
  if (dVar4 < 0.0) {
    dVar15 = (double)FUN_1401a8a30(dVar4);
  }
  dVar9 = dVar9 + DAT_140e8d478;
  dVar1 = *(double *)(param_3 + 0x58);
  dVar16 = (double)FUN_1401a1fb0(((double)(~-(ulonglong)(dVar13 < DAT_140e8e3f8) & (ulonglong)dVar13
                                          | (ulonglong)(DAT_140e8e318 + dVar13) &
                                            -(ulonglong)(dVar13 < DAT_140e8e3f8)) * DAT_140e8e270) /
                                 _DAT_140e8e268 + DAT_140e8e1a8);
  dVar11 = (double)FUN_1401a5d60(((dVar16 + _DAT_140e8e1b0) * _DAT_140e8e1b8 * _DAT_140e8e1c0 *
                                  *(double *)(param_3 + 0x48) * *(double *)(param_3 + 0x38) *
                                 SQRT(dVar18 * dVar18 + dVar19 * dVar19)) /
                                 (dVar11 + _DAT_140e8e1f0),DAT_140e8e400);
  dVar18 = (double)FUN_1401a5d60(DAT_140e8e408,*(undefined8 *)(param_3 + 0x20));
  dVar18 = (double)FUN_1401a5d60(DAT_140e8e410 - dVar18,DAT_140e8e418);
  if (dVar4 < 0.0) {
    dVar12 = (double)FUN_1401a8a30(dVar4);
  }
  dVar19 = (dVar17 * dVar13) / _DAT_140e8e268;
  dVar12 = dVar12 * dVar18 * dVar11;
  dVar10 = (dVar10 * dVar18 * dVar11) / dVar9;
  if (dVar10 < 0.0) {
    dVar10 = (double)FUN_1401a8a30(dVar10);
  }
  else {
    dVar10 = SQRT(dVar10);
  }
  dVar11 = DAT_140e8e320 * dVar14;
  dVar16 = DAT_140e8e328 * dVar14 + DAT_1401ced60;
  dVar4 = dVar12 * dVar1;
  dVar10 = _UNK_140e8e338 * dVar10;
  dVar18 = (double)FUN_1401a5490(DAT_140e8e310 * dVar4 + DAT_1401ced60);
  dVar18 = dVar18 * _DAT_140e8e340;
  dVar17 = (double)FUN_1401a1fb0(dVar19);
  dVar19 = (double)FUN_1401a7e00(dVar19);
  *param_1 = dVar13;
  param_1[1] = dVar12;
  param_1[2] = dVar14;
  param_1[3] = dVar5 * dVar15 * dVar9 * dVar1;
  auVar3._8_4_ = SUB84(dVar10,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 4) = auVar3;
  param_1[6] = dVar11 / dVar16;
  dVar19 = dVar19 * dVar18;
  auVar2._8_4_ = SUB84(dVar19,0);
  auVar2._0_8_ = dVar17 * dVar18;
  auVar2._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 7) = auVar2;
  return param_1;
}


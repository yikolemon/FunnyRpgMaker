/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2704 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1801d2704(double *param_1,uint param_2,longlong param_3)

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
  
  dVar9 = (double)FUN_1801d2e19(param_2 >> 0x10 & 0xff);
  dVar10 = (double)FUN_1801d2e19(param_2 >> 8 & 0xff);
  dVar11 = (double)FUN_1801d2e19(param_2 & 0xff);
  dVar4 = DAT_18032a0f8;
  uVar6 = _DAT_1802ac560;
  dVar12 = DAT_18032a368 * dVar11 + DAT_18032a360 * dVar9 + DAT_18032a358 * dVar10;
  dVar18 = DAT_18032a178 * dVar11 + DAT_18032a190 * dVar9 + DAT_18032a188 * dVar10;
  dVar9 = dVar11 * _DAT_18032a380 + dVar9 * _DAT_18032a378 + dVar10 * _DAT_18032a370;
  dVar11 = (DAT_18032a398 * dVar9 + DAT_18032a390 * dVar12 + DAT_18032a388 * dVar18) *
           *(double *)(param_3 + 0x80);
  dVar19 = (DAT_18032a3b0 * dVar9 + DAT_18032a3a8 * dVar12 + DAT_18032a3a0 * dVar18) *
           *(double *)(param_3 + 0x88);
  dVar10 = (dVar9 * _DAT_18032a3c8 + dVar12 * _DAT_18032a3c0 + dVar18 * _DAT_18032a3b8) *
           *(double *)(param_3 + 0x90);
  dVar9 = *(double *)(param_3 + 0x50);
  dVar12 = (double)FUN_180287e70(((double)((ulonglong)dVar11 & _DAT_1802ac560) * dVar9) /
                                 DAT_18032a0f8);
  dVar18 = (double)FUN_180287e70(((double)((ulonglong)dVar19 & uVar6) * dVar9) / dVar4);
  dVar9 = (double)FUN_180287e70(((double)(uVar6 & (ulonglong)dVar10) * dVar9) / dVar4);
  iVar7 = FUN_1801d2fda(dVar11);
  iVar8 = FUN_1801d2fda(dVar19);
  auVar20._0_8_ = (double)iVar7 * _DAT_18032a3d0 * dVar12;
  auVar20._8_8_ = (double)iVar8 * _UNK_18032a3d8 * dVar18;
  auVar21._8_4_ = SUB84(dVar18 + _UNK_18032a3e8,0);
  auVar21._0_8_ = dVar12 + _DAT_18032a3e0;
  auVar21._12_4_ = (int)((ulonglong)(dVar18 + _UNK_18032a3e8) >> 0x20);
  auVar21 = divpd(auVar20,auVar21);
  iVar7 = FUN_1801d2fda(dVar10);
  dVar9 = ((double)iVar7 * DAT_18032a138 * dVar9) / (dVar9 + DAT_18032a140);
  dVar10 = auVar21._0_8_;
  dVar12 = auVar21._8_8_;
  dVar18 = (dVar10 * DAT_18032a150 + DAT_18032a148 * dVar12 + dVar9) / DAT_18032a150;
  dVar19 = ((dVar10 + dVar12) - (dVar9 + dVar9)) / _DAT_18032a158;
  dVar11 = (DAT_18032a3f8 * dVar9 + dVar10 * DAT_18032a3f0 + dVar12 * DAT_18032a3f0) / DAT_18032a3f0
  ;
  dVar12 = (dVar10 * DAT_18032a400 + dVar12 * DAT_18032a3f0 + dVar9) / DAT_18032a3f0;
  dVar9 = (double)FUN_180282710(dVar19,dVar18);
  dVar17 = DAT_18032a280;
  dVar13 = (double)FUN_1801d2f67((dVar9 * _DAT_18032a278) / DAT_18032a280);
  dVar9 = *(double *)(param_3 + 0x28);
  dVar10 = *(double *)(param_3 + 0x40);
  dVar14 = (double)FUN_180287e70((dVar12 * *(double *)(param_3 + 0x30)) / dVar9,
                                 *(double *)(param_3 + 0x60) * dVar10);
  dVar14 = dVar14 * dVar4;
  dVar5 = DAT_1803290d8 / dVar10;
  dVar4 = dVar14 / dVar4;
  dVar12 = SQRT(dVar4);
  dVar15 = dVar12;
  if (dVar4 < 0.0) {
    dVar15 = (double)FUN_18028ab80(dVar4);
  }
  dVar9 = dVar9 + DAT_1803290d8;
  dVar1 = *(double *)(param_3 + 0x58);
  dVar16 = (double)FUN_180283d70(((double)(~-(ulonglong)(dVar13 < DAT_18032a408) & (ulonglong)dVar13
                                          | (ulonglong)(DAT_18032a328 + dVar13) &
                                            -(ulonglong)(dVar13 < DAT_18032a408)) * DAT_18032a280) /
                                 _DAT_18032a278 + DAT_18032a1b8);
  dVar11 = (double)FUN_180287e70(((dVar16 + _DAT_18032a1c0) * _DAT_18032a1c8 * _DAT_18032a1d0 *
                                  *(double *)(param_3 + 0x48) * *(double *)(param_3 + 0x38) *
                                 SQRT(dVar18 * dVar18 + dVar19 * dVar19)) /
                                 (dVar11 + _DAT_18032a200),DAT_18032a410);
  dVar18 = (double)FUN_180287e70(DAT_18032a418,*(undefined8 *)(param_3 + 0x20));
  dVar18 = (double)FUN_180287e70(DAT_18032a420 - dVar18,DAT_18032a428);
  if (dVar4 < 0.0) {
    dVar12 = (double)FUN_18028ab80(dVar4);
  }
  dVar19 = (dVar17 * dVar13) / _DAT_18032a278;
  dVar12 = dVar12 * dVar18 * dVar11;
  dVar10 = (dVar10 * dVar18 * dVar11) / dVar9;
  if (dVar10 < 0.0) {
    dVar10 = (double)FUN_18028ab80(dVar10);
  }
  else {
    dVar10 = SQRT(dVar10);
  }
  dVar11 = DAT_18032a330 * dVar14;
  dVar16 = DAT_18032a338 * dVar14 + DAT_1802ac578;
  dVar4 = dVar12 * dVar1;
  dVar10 = _UNK_18032a348 * dVar10;
  dVar18 = (double)FUN_1802875a0(DAT_18032a320 * dVar4 + DAT_1802ac578);
  dVar18 = dVar18 * _DAT_18032a350;
  dVar17 = (double)FUN_180283d70(dVar19);
  dVar19 = (double)FUN_180289f50(dVar19);
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


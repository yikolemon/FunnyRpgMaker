/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140024339 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140024339(double param_1,double param_2,double param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
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
  undefined1 auStack_148 [40];
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14012ea80 ^ (ulonglong)auStack_148;
  dVar11 = param_2;
  local_120 = param_3;
  if (param_3 < 0.0) {
    dVar5 = FUN_14009ba00(param_3);
  }
  else {
    dVar5 = SQRT(param_3);
  }
  dVar5 = dVar5 * DAT_1400e72a0;
  dVar6 = FUN_1400974b0(DAT_1400e7308 + param_1,dVar11);
  dVar6 = (dVar6 + _DAT_1400e7310) * _DAT_1400e7318 * _DAT_1400e7320 * _DAT_1400e7328;
  dVar7 = FUN_14009b490(param_1,dVar11);
  dVar8 = FUN_1400974b0(param_1,dVar11);
  dVar11 = DAT_1400e7380;
  iVar3 = 4;
  dVar6 = dVar6 * _DAT_1400e7358;
  while( true ) {
    dVar9 = 0.0;
    dVar10 = dVar5 / DAT_1400e7248;
    if (((param_2 != 0.0) || (NAN(param_2))) && ((dVar5 != 0.0 || (NAN(dVar5))))) {
      if (dVar10 < 0.0) {
        dVar9 = FUN_14009ba00(dVar10);
      }
      else {
        dVar9 = SQRT(dVar10);
      }
      dVar9 = (param_2 / dVar9) * _DAT_1400e7330;
    }
    dVar9 = FUN_14009a2b0(dVar9);
    dVar10 = FUN_14009a2b0(dVar10);
    dVar10 = (dVar10 * _DAT_1400e7348) / _DAT_1400e7328;
    dVar12 = ((dVar10 + _DAT_1400e7350) * _DAT_1400e7358 * dVar9) /
             (dVar9 * _DAT_1400e7360 * dVar7 + dVar9 * DAT_1400e72a0 * dVar8 + dVar6);
    dVar14 = dVar8 * dVar12;
    dVar12 = dVar12 * dVar7;
    dVar10 = dVar10 * _DAT_1400e7370;
    dVar16 = dVar14 * _DAT_1400e7388;
    dVar9 = dVar12 * _DAT_1400e7390;
    dVar15 = dVar14 * _DAT_1400e7398;
    dVar13 = dVar12 * _DAT_1400e73a0;
    dVar12 = FUN_1400242cb((dVar12 * _DAT_1400e7378 + dVar14 * _DAT_1400e7368 + dVar10) / dVar11);
    dVar9 = FUN_1400242cb((dVar9 + dVar16 + dVar10) / dVar11);
    local_f0 = FUN_1400242cb((dVar10 + dVar15 + dVar13) / dVar11);
    local_100 = dVar12;
    local_f8 = dVar9;
    FUN_1400251a9((undefined1 (*) [16])&local_e8,&local_100,(double *)&DAT_1400e71f0);
    iVar1 = 0;
    iVar2 = 0;
    if ((((local_e8 < 0.0) || (iVar2 = iVar1, dStack_e0 < 0.0)) || (local_d8 < 0.0)) ||
       (dVar10 = local_d8 * DAT_1400e72c8 + local_e8 * DAT_1400e72e0 + dStack_e0 * DAT_1400e72d8,
       dVar10 <= 0.0)) goto LAB_1400246f0;
    bVar4 = iVar3 == 0;
    iVar3 = iVar3 + -1;
    if ((bVar4) || ((double)((ulonglong)(dVar10 - local_120) & _DAT_1400b6b00) < DAT_1400e73a8))
    break;
    dVar5 = dVar5 - ((dVar10 - local_120) * dVar5) / (dVar10 + dVar10);
  }
  if ((local_e8 <= _DAT_1400e73b0) &&
     ((dStack_e0 <= _DAT_1400e73b0 && (local_d8 <= _DAT_1400e73b0)))) {
    local_108 = local_d8;
    local_118 = local_e8;
    dStack_110 = dStack_e0;
    iVar2 = FUN_140024f03(&local_118);
  }
LAB_1400246f0:
  if (DAT_14012ea80 == (local_d0 ^ (ulonglong)auStack_148)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_d0 ^ (ulonglong)auStack_148);
}


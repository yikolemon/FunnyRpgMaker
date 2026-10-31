/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140118ed9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140118ed9(double param_1,double param_2,double param_3)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_148 [40];
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_140f17b40 ^ (ulonglong)auStack_148;
  local_120 = param_3;
  if (param_3 < 0.0) {
    param_3 = (double)FUN_1401a8a30(param_3);
  }
  else {
    param_3 = SQRT(param_3);
  }
  param_3 = param_3 * DAT_140e8e140;
  dVar4 = (double)FUN_1401a1fb0(DAT_140e8e1a8 + param_1);
  dVar4 = (dVar4 + _DAT_140e8e1b0) * _DAT_140e8e1b8 * _DAT_140e8e1c0 * _DAT_140e8e1c8;
  dVar5 = (double)FUN_1401a7e00(param_1);
  dVar6 = (double)FUN_1401a1fb0(param_1);
  dVar1 = DAT_140e8e220;
  iVar2 = 4;
  dVar4 = dVar4 * _DAT_140e8e1f8;
  while( true ) {
    dVar7 = 0.0;
    dVar8 = param_3 / DAT_140e8e0e8;
    if (((param_2 != 0.0) || (NAN(param_2))) && ((param_3 != 0.0 || (NAN(param_3))))) {
      if (dVar8 < 0.0) {
        dVar7 = (double)FUN_1401a8a30(dVar8);
      }
      else {
        dVar7 = SQRT(dVar8);
      }
      dVar7 = (param_2 / dVar7) * _DAT_140e8e1d0;
    }
    dVar7 = (double)FUN_1401a5d60(dVar7,DAT_140e8e1d8);
    dVar8 = (double)FUN_1401a5d60(dVar8,DAT_140e8e1e0);
    dVar8 = (dVar8 * _DAT_140e8e1e8) / _DAT_140e8e1c8;
    dVar11 = ((dVar8 + _DAT_140e8e1f0) * _DAT_140e8e1f8 * dVar7) /
             (dVar7 * _DAT_140e8e200 * dVar5 + dVar7 * DAT_140e8e140 * dVar6 + dVar4);
    dVar13 = dVar6 * dVar11;
    dVar11 = dVar11 * dVar5;
    dVar8 = dVar8 * _DAT_140e8e210;
    dVar15 = dVar13 * _DAT_140e8e228;
    dVar7 = dVar11 * _DAT_140e8e230;
    dVar14 = dVar13 * _DAT_140e8e238;
    dVar12 = dVar11 * _DAT_140e8e240;
    uVar9 = FUN_140118e6b((dVar11 * _DAT_140e8e218 + dVar13 * _DAT_140e8e208 + dVar8) / dVar1);
    uVar10 = FUN_140118e6b((dVar7 + dVar15 + dVar8) / dVar1);
    local_f0 = FUN_140118e6b((dVar8 + dVar14 + dVar12) / dVar1);
    local_100 = uVar9;
    local_f8 = uVar10;
    FUN_140119d49(&local_e8,&local_100,&DAT_140e8e090);
    uVar9 = 0;
    uVar10 = 0;
    if ((((local_e8 < 0.0) || (dStack_e0 < 0.0)) || (local_d8 < 0.0)) ||
       (dVar8 = local_d8 * DAT_140e8e168 + local_e8 * DAT_140e8e180 + dStack_e0 * DAT_140e8e178,
       uVar9 = uVar10, dVar8 <= 0.0)) goto LAB_140119290;
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if ((bVar3) || ((double)((ulonglong)(dVar8 - local_120) & _DAT_1401ced50) < DAT_140e8e248))
    break;
    param_3 = param_3 - ((dVar8 - local_120) * param_3) / (dVar8 + dVar8);
  }
  if ((local_e8 <= _DAT_140e8e250) &&
     ((dStack_e0 <= _DAT_140e8e250 && (local_d8 <= _DAT_140e8e250)))) {
    local_108 = local_d8;
    local_118 = local_e8;
    dStack_110 = dStack_e0;
    uVar9 = FUN_140119aa3();
  }
LAB_140119290:
  if (DAT_140f17b40 == (local_d0 ^ (ulonglong)auStack_148)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_d0 ^ (ulonglong)auStack_148);
}


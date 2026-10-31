/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d21a5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801d21a5(double param_1,double param_2,double param_3)

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
  
  local_d0 = DAT_180402640 ^ (ulonglong)auStack_148;
  local_120 = param_3;
  if (param_3 < 0.0) {
    param_3 = (double)FUN_18028ab80(param_3);
  }
  else {
    param_3 = SQRT(param_3);
  }
  param_3 = param_3 * DAT_18032a150;
  dVar4 = (double)FUN_180283d70(DAT_18032a1b8 + param_1);
  dVar4 = (dVar4 + _DAT_18032a1c0) * _DAT_18032a1c8 * _DAT_18032a1d0 * _DAT_18032a1d8;
  dVar5 = (double)FUN_180289f50(param_1);
  dVar6 = (double)FUN_180283d70(param_1);
  dVar1 = DAT_18032a230;
  iVar2 = 4;
  dVar4 = dVar4 * _DAT_18032a208;
  while( true ) {
    dVar7 = 0.0;
    dVar8 = param_3 / DAT_18032a0f8;
    if (((param_2 != 0.0) || (NAN(param_2))) && ((param_3 != 0.0 || (NAN(param_3))))) {
      if (dVar8 < 0.0) {
        dVar7 = (double)FUN_18028ab80(dVar8);
      }
      else {
        dVar7 = SQRT(dVar8);
      }
      dVar7 = (param_2 / dVar7) * _DAT_18032a1e0;
    }
    dVar7 = (double)FUN_180287e70(dVar7,DAT_18032a1e8);
    dVar8 = (double)FUN_180287e70(dVar8,DAT_18032a1f0);
    dVar8 = (dVar8 * _DAT_18032a1f8) / _DAT_18032a1d8;
    dVar11 = ((dVar8 + _DAT_18032a200) * _DAT_18032a208 * dVar7) /
             (dVar7 * _DAT_18032a210 * dVar5 + dVar7 * DAT_18032a150 * dVar6 + dVar4);
    dVar13 = dVar6 * dVar11;
    dVar11 = dVar11 * dVar5;
    dVar8 = dVar8 * _DAT_18032a220;
    dVar15 = dVar13 * _DAT_18032a238;
    dVar7 = dVar11 * _DAT_18032a240;
    dVar14 = dVar13 * _DAT_18032a248;
    dVar12 = dVar11 * _DAT_18032a250;
    uVar9 = FUN_1801d2137((dVar11 * _DAT_18032a228 + dVar13 * _DAT_18032a218 + dVar8) / dVar1);
    uVar10 = FUN_1801d2137((dVar7 + dVar15 + dVar8) / dVar1);
    local_f0 = FUN_1801d2137((dVar8 + dVar14 + dVar12) / dVar1);
    local_100 = uVar9;
    local_f8 = uVar10;
    FUN_1801d3015(&local_e8,&local_100,&DAT_18032a0a0);
    uVar9 = 0;
    uVar10 = 0;
    if ((((local_e8 < 0.0) || (dStack_e0 < 0.0)) || (local_d8 < 0.0)) ||
       (dVar8 = local_d8 * DAT_18032a178 + local_e8 * DAT_18032a190 + dStack_e0 * DAT_18032a188,
       uVar9 = uVar10, dVar8 <= 0.0)) goto LAB_1801d255c;
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if ((bVar3) || ((double)((ulonglong)(dVar8 - local_120) & _DAT_1802ac560) < DAT_18032a258))
    break;
    param_3 = param_3 - ((dVar8 - local_120) * param_3) / (dVar8 + dVar8);
  }
  if ((local_e8 <= _DAT_18032a260) &&
     ((dStack_e0 <= _DAT_18032a260 && (local_d8 <= _DAT_18032a260)))) {
    local_108 = local_d8;
    local_118 = local_e8;
    dStack_110 = dStack_e0;
    uVar9 = FUN_1801d2d6f();
  }
LAB_1801d255c:
  if (DAT_180402640 == (local_d0 ^ (ulonglong)auStack_148)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_d0 ^ (ulonglong)auStack_148);
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009b490 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_14009b490(double param_1,double param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (DAT_140143820 == 0) {
    dVar3 = ABS(param_1);
    if ((ulonglong)dVar3 < (ulonglong)DAT_14010f1d8) {
      if ((longlong)dVar3 <= DAT_14010f1c8) {
        return param_1;
      }
      dVar3 = param_1 * param_1;
      dVar3 = param_1 + param_1 * dVar3 *
                        (((DAT_140111530 * dVar3 + DAT_140111520) * dVar3 + DAT_140111510) *
                         dVar3 * dVar3 * dVar3 +
                        (DAT_140111500 * dVar3 + DAT_1401114f0) * dVar3 + DAT_1401114e0);
    }
    else {
      if ((ulonglong)dVar3 < (ulonglong)DAT_14010f1e0) {
        uVar2 = (ulonglong)dVar3 >> 0x34;
        uVar5 = (uint)(dVar3 * _DAT_14010f1b0 + DAT_14010f1b8);
        dVar7 = (double)(int)uVar5;
        dVar8 = dVar3 - DAT_14010f120 * dVar7;
        dVar6 = DAT_14010f130 * dVar7;
        dVar3 = dVar8 - dVar6;
        dVar9 = dVar8;
        if (0xf < (longlong)(uVar2 - ((ulonglong)ABS(dVar3) >> 0x34))) {
          dVar9 = dVar8 - DAT_14010f140 * dVar7;
          dVar6 = DAT_14010f150 * dVar7 - ((dVar8 - dVar9) - DAT_14010f140 * dVar7);
          dVar3 = dVar9 - dVar6;
        }
        param_2 = (dVar9 - dVar3) - dVar6;
      }
      else {
        if ((ulonglong)DAT_14010f1f0 <= (ulonglong)dVar3) {
          dVar3 = (double)FUN_1400aac70((ulonglong)param_1);
          return dVar3;
        }
        uVar2 = FUN_1400aa740((ulonglong)dVar3);
        uVar5 = (uint)uVar2;
      }
      dVar9 = dVar3 * dVar3;
      if ((uVar5 & 1) == 0) {
        dVar3 = param_2 + (dVar3 * dVar9 *
                           (((DAT_140111530 * dVar9 + DAT_140111520) * dVar9 + DAT_140111510) *
                            dVar9 * dVar9 * dVar9 +
                           (DAT_140111500 * dVar9 + DAT_1401114f0) * dVar9 + DAT_1401114e0) -
                          dVar9 * DAT_14010f1b8 * param_2) + dVar3;
      }
      else {
        dVar3 = (((DAT_1401114a0 * dVar9 + DAT_140111490) * dVar9 + DAT_140111480 +
                 ((DAT_1401114d0 * dVar9 + DAT_1401114c0) * dVar9 + DAT_1401114b0) *
                 dVar9 * dVar9 * dVar9) * dVar9 * dVar9 +
                ((((DAT_14010f1b8 * dVar9 - DAT_14010f160) + DAT_14010f160) - dVar9 * DAT_14010f1b8)
                - param_2 * dVar3)) - (dVar9 * DAT_14010f1b8 - DAT_14010f160);
      }
      uVar4 = (uint)((ulonglong)param_1 >> 0x3f);
      if ((uVar5 >> 1 & uVar4) == 0 && (~(uVar5 >> 1) & ~uVar4 & 1) == 0) {
        dVar3 = 0.0 - dVar3;
      }
    }
    return dVar3;
  }
  dVar3 = ABS(param_1);
  if ((ulonglong)DAT_14010f1d8 <= (ulonglong)dVar3) {
    if ((ulonglong)dVar3 < (ulonglong)DAT_14010f1f0) {
      if ((ulonglong)dVar3 < (ulonglong)DAT_14010f1e8) {
        uVar5 = FUN_1400aab40(dVar3);
        uVar2 = (ulonglong)uVar5;
      }
      else {
        uVar2 = FUN_1400aa950((ulonglong)dVar3);
      }
      dVar9 = dVar3 * dVar3;
      if ((uVar2 & 1) == 0) {
        dVar3 = dVar3 - (-(dVar3 * dVar9 * DAT_1401114e0) +
                        (dVar9 * (param_2 * DAT_14010f1b8 -
                                 dVar3 * dVar9 *
                                 (dVar9 * (dVar9 * (dVar9 * (dVar9 * DAT_140111530 + DAT_140111520)
                                                   + DAT_140111510) + DAT_140111500) + DAT_1401114f0
                                 )) - param_2));
      }
      else {
        dVar6 = DAT_14010f160 - dVar9 * DAT_14010f1b8;
        dVar3 = dVar9 * dVar9 *
                (dVar9 * (dVar9 * (dVar9 * (dVar9 * (dVar9 * DAT_1401114d0 + DAT_1401114c0) +
                                           DAT_1401114b0) + DAT_1401114a0) + DAT_140111490) +
                DAT_140111480) +
                -(dVar3 * param_2) + ((DAT_14010f160 - dVar6) - dVar9 * DAT_14010f1b8) + dVar6;
      }
      uVar1 = 0;
      if (((uint)uVar2 >> 1 & 1) != 0) {
        uVar1 = DAT_14010f170;
      }
      return (double)((ulonglong)dVar3 ^ uVar1 ^ (ulonglong)param_1 & DAT_14010f170);
    }
    dVar3 = (double)FUN_1400aac70((ulonglong)param_1);
    return dVar3;
  }
  if ((longlong)dVar3 < DAT_14010f1d0) {
    if ((longlong)dVar3 < DAT_14010f1c8) {
      return param_1;
    }
    return -(param_1 * param_1 * param_1 * DAT_14010f1c0) + param_1;
  }
  dVar3 = param_1 * param_1;
  return param_1 * dVar3 *
         (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * DAT_140111530 + DAT_140111520) + DAT_140111510
                                    ) + DAT_140111500) + DAT_1401114f0) + DAT_1401114e0) + param_1;
}


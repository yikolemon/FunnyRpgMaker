/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400974b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1400974b0(double param_1,double param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (DAT_140143820 != 0) {
    dVar3 = (double)((ulonglong)param_1 & _DAT_14010e1e0);
    if ((longlong)DAT_14010e1c8 < (longlong)dVar3) {
      if ((double)((ulonglong)param_1 & (ulonglong)DAT_14010e1e8) != DAT_14010e1e8) {
        if ((ulonglong)dVar3 < (ulonglong)DAT_14010e1d8) {
          uVar4 = FUN_1400aab40(dVar3);
          uVar2 = (ulonglong)uVar4;
        }
        else {
          uVar2 = FUN_1400aa950((ulonglong)dVar3);
        }
        if ((uVar2 & 1) == 0) {
          dVar5 = dVar3 * dVar3;
          dVar8 = DAT_14010e160 - dVar5 * DAT_14010e1a8;
          dVar8 = dVar5 * dVar5 *
                  (dVar5 * (dVar5 * (dVar5 * (dVar5 * (dVar5 * DAT_1401114d0 + DAT_1401114c0) +
                                             DAT_1401114b0) + DAT_1401114a0) + DAT_140111490) +
                  DAT_140111480) +
                  -(dVar3 * param_2) + ((DAT_14010e160 - dVar8) - dVar5 * DAT_14010e1a8) + dVar8;
        }
        else {
          dVar8 = dVar3 * dVar3;
          dVar8 = dVar3 - (-(dVar3 * dVar8 * DAT_1401114e0) +
                          (dVar8 * (param_2 * DAT_14010e1a8 -
                                   dVar3 * dVar8 *
                                   (dVar8 * (dVar8 * (dVar8 * (dVar8 * DAT_140111530 + DAT_140111520
                                                              ) + DAT_140111510) + DAT_140111500) +
                                   DAT_1401114f0)) - param_2));
        }
        uVar1 = 0;
        if (((int)uVar2 + 1U & 2) != 0) {
          uVar1 = DAT_14010e170;
        }
        return (double)((ulonglong)dVar8 ^ uVar1);
      }
      dVar3 = (double)FUN_1400aac90((ulonglong)param_1);
      return dVar3;
    }
    if ((longlong)dVar3 < (longlong)DAT_14010e1c0) {
      if ((longlong)dVar3 < (longlong)DAT_14010e1b8) {
        return DAT_14010e160;
      }
      return -(param_1 * DAT_14010e1a8 * param_1) + DAT_14010e160;
    }
    dVar3 = param_1 * param_1;
    return dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * DAT_1401114d0 +
                                                                DAT_1401114c0) + DAT_1401114b0) +
                                              DAT_1401114a0) + DAT_140111490) + DAT_140111480) -
                   DAT_14010e1a8) + DAT_14010e160;
  }
  dVar3 = ABS(param_1);
  if ((ulonglong)DAT_14010e1c8 <= (ulonglong)dVar3) {
    if ((ulonglong)dVar3 < (ulonglong)DAT_14010e1d0) {
      uVar2 = (ulonglong)dVar3 >> 0x34;
      uVar4 = (uint)(dVar3 * _DAT_14010e1a0 + DAT_14010e1a8);
      dVar6 = (double)(int)uVar4;
      dVar7 = dVar3 - DAT_14010e120 * dVar6;
      dVar5 = DAT_14010e130 * dVar6;
      dVar3 = dVar7 - dVar5;
      dVar8 = dVar7;
      if (0xf < (longlong)(uVar2 - ((ulonglong)ABS(dVar3) >> 0x34))) {
        dVar8 = dVar7 - DAT_14010e140 * dVar6;
        dVar5 = DAT_14010e150 * dVar6 - ((dVar7 - dVar8) - DAT_14010e140 * dVar6);
        dVar3 = dVar8 - dVar5;
      }
      param_2 = (dVar8 - dVar3) - dVar5;
    }
    else {
      if ((ulonglong)DAT_14010e1e8 <= (ulonglong)dVar3) {
        dVar3 = (double)FUN_1400aac90((ulonglong)param_1);
        return dVar3;
      }
      uVar2 = FUN_1400aa740((ulonglong)dVar3);
      uVar4 = (uint)uVar2;
    }
    dVar8 = dVar3 * dVar3;
    if ((uVar4 & 1) == 0) {
      dVar3 = (((DAT_1401114a0 * dVar8 + DAT_140111490) * dVar8 + DAT_140111480 +
               ((DAT_1401114d0 * dVar8 + DAT_1401114c0) * dVar8 + DAT_1401114b0) *
               dVar8 * dVar8 * dVar8) * dVar8 * dVar8 +
              ((((DAT_14010e1a8 * dVar8 - DAT_14010e160) + DAT_14010e160) - dVar8 * DAT_14010e1a8) -
              param_2 * dVar3)) - (dVar8 * DAT_14010e1a8 - DAT_14010e160);
    }
    else {
      dVar3 = param_2 + (dVar3 * dVar8 *
                         (((DAT_140111530 * dVar8 + DAT_140111520) * dVar8 + DAT_140111510) *
                          dVar8 * dVar8 * dVar8 +
                         (DAT_140111500 * dVar8 + DAT_1401114f0) * dVar8 + DAT_1401114e0) -
                        dVar8 * DAT_14010e1a8 * param_2) + dVar3;
    }
    if ((uVar4 + 1 & 2) != 0) {
      dVar3 = 0.0 - dVar3;
    }
    return dVar3;
  }
  if ((ulonglong)DAT_14010e1c0 <= (ulonglong)dVar3) {
    dVar3 = param_1 * param_1;
    dVar5 = dVar3 * dVar3;
    dVar8 = dVar3 * _DAT_14010e1b0 + DAT_14010e160;
    return (DAT_14010e160 - dVar8) + dVar3 * _DAT_14010e1b0 +
           (DAT_140111490 * dVar3 + DAT_140111480) * dVar5 +
           (DAT_1401114b0 * dVar3 + DAT_1401114a0) * dVar5 * dVar5 +
           dVar5 * dVar5 * dVar5 * (DAT_1401114d0 * dVar3 + DAT_1401114c0) + dVar8;
  }
  if ((ulonglong)DAT_14010e1b8 <= (ulonglong)dVar3) {
    return DAT_14010e160 - param_1 * param_1 * DAT_14010e1a8;
  }
  return DAT_14010e160;
}


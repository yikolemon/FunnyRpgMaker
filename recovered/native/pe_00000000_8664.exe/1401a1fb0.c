/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a1fb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1401a1fb0(double param_1,double param_2)

{
  ulonglong uVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (DAT_140f33260 != 0) {
    uVar1 = (ulonglong)param_1 & _DAT_140eb5d30;
    if ((longlong)DAT_140eb5d18 < (longlong)uVar1) {
      if ((double)((ulonglong)param_1 & (ulonglong)DAT_140eb5d38) != DAT_140eb5d38) {
        if (uVar1 < DAT_140eb5d28) {
          uVar3 = FUN_1401ba9a0(uVar1);
          dVar2 = extraout_XMM0_Qa_00;
        }
        else {
          uVar3 = FUN_1401ba7b0();
          dVar2 = extraout_XMM0_Qa_01;
        }
        if ((uVar3 & 1) == 0) {
          dVar7 = dVar2 * dVar2;
          dVar4 = DAT_140eb5cb0 - dVar7 * DAT_140eb5cf8;
          dVar4 = dVar7 * dVar7 *
                  (dVar7 * (dVar7 * (dVar7 * (dVar7 * (dVar7 * DAT_140eb9870 + DAT_140eb9860) +
                                             DAT_140eb9850) + DAT_140eb9840) + DAT_140eb9830) +
                  DAT_140eb9820) +
                  -(dVar2 * param_2) + ((DAT_140eb5cb0 - dVar4) - dVar7 * DAT_140eb5cf8) + dVar4;
        }
        else {
          dVar4 = dVar2 * dVar2;
          dVar4 = dVar2 - (-(dVar2 * dVar4 * DAT_140eb9880) +
                          (dVar4 * (param_2 * DAT_140eb5cf8 -
                                   dVar2 * dVar4 *
                                   (dVar4 * (dVar4 * (dVar4 * (dVar4 * DAT_140eb98d0 + DAT_140eb98c0
                                                              ) + DAT_140eb98b0) + DAT_140eb98a0) +
                                   DAT_140eb9890)) - param_2));
        }
        uVar1 = 0;
        if ((uVar3 + 1 & 2) != 0) {
          uVar1 = DAT_140eb5cc0;
        }
        return (double)((ulonglong)dVar4 ^ uVar1);
      }
      dVar2 = (double)FUN_1401bac10();
      return dVar2;
    }
    if ((longlong)uVar1 < (longlong)DAT_140eb5d10) {
      if ((longlong)uVar1 < (longlong)DAT_140eb5d08) {
        return DAT_140eb5cb0;
      }
      return -(param_1 * DAT_140eb5cf8 * param_1) + DAT_140eb5cb0;
    }
    param_1 = param_1 * param_1;
    return param_1 * (param_1 * (param_1 * (param_1 * (param_1 * (param_1 * (param_1 * DAT_140eb9870
                                                                            + DAT_140eb9860) +
                                                                 DAT_140eb9850) + DAT_140eb9840) +
                                           DAT_140eb9830) + DAT_140eb9820) - DAT_140eb5cf8) +
           DAT_140eb5cb0;
  }
  dVar2 = ABS(param_1);
  if ((ulonglong)DAT_140eb5d18 <= (ulonglong)dVar2) {
    if ((ulonglong)dVar2 < (ulonglong)DAT_140eb5d20) {
      uVar3 = (uint)(dVar2 * _DAT_140eb5cf0 + DAT_140eb5cf8);
      dVar5 = (double)(int)uVar3;
      dVar6 = dVar2 - DAT_140eb5c70 * dVar5;
      param_2 = DAT_140eb5c80 * dVar5;
      dVar4 = dVar6 - param_2;
      dVar7 = dVar6;
      if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - ((ulonglong)ABS(dVar4) >> 0x34))) {
        dVar7 = dVar6 - DAT_140eb5c90 * dVar5;
        param_2 = DAT_140eb5ca0 * dVar5 - ((dVar6 - dVar7) - DAT_140eb5c90 * dVar5);
        dVar4 = dVar7 - param_2;
      }
      param_2 = (dVar7 - dVar4) - param_2;
    }
    else {
      if ((ulonglong)DAT_140eb5d38 <= (ulonglong)dVar2) {
        dVar2 = (double)FUN_1401bac10();
        return dVar2;
      }
      uVar3 = FUN_1401ba5a0();
      dVar4 = extraout_XMM0_Qa;
    }
    dVar2 = dVar4 * dVar4;
    if ((uVar3 & 1) == 0) {
      dVar4 = (((DAT_140eb9840 * dVar2 + DAT_140eb9830) * dVar2 + DAT_140eb9820 +
               ((DAT_140eb9870 * dVar2 + DAT_140eb9860) * dVar2 + DAT_140eb9850) *
               dVar2 * dVar2 * dVar2) * dVar2 * dVar2 +
              ((((DAT_140eb5cf8 * dVar2 - DAT_140eb5cb0) + DAT_140eb5cb0) - dVar2 * DAT_140eb5cf8) -
              param_2 * dVar4)) - (dVar2 * DAT_140eb5cf8 - DAT_140eb5cb0);
    }
    else {
      dVar4 = param_2 + (dVar4 * dVar2 *
                         (((DAT_140eb98d0 * dVar2 + DAT_140eb98c0) * dVar2 + DAT_140eb98b0) *
                          dVar2 * dVar2 * dVar2 +
                         (DAT_140eb98a0 * dVar2 + DAT_140eb9890) * dVar2 + DAT_140eb9880) -
                        dVar2 * DAT_140eb5cf8 * param_2) + dVar4;
    }
    if ((uVar3 + 1 & 2) != 0) {
      dVar4 = 0.0 - dVar4;
    }
    return dVar4;
  }
  if ((ulonglong)DAT_140eb5d10 <= (ulonglong)dVar2) {
    param_1 = param_1 * param_1;
    dVar4 = param_1 * param_1;
    dVar2 = param_1 * _DAT_140eb5d00 + DAT_140eb5cb0;
    return (DAT_140eb5cb0 - dVar2) + param_1 * _DAT_140eb5d00 +
           (DAT_140eb9830 * param_1 + DAT_140eb9820) * dVar4 +
           (DAT_140eb9850 * param_1 + DAT_140eb9840) * dVar4 * dVar4 +
           dVar4 * dVar4 * dVar4 * (DAT_140eb9870 * param_1 + DAT_140eb9860) + dVar2;
  }
  if ((ulonglong)DAT_140eb5d08 <= (ulonglong)dVar2) {
    return DAT_140eb5cb0 - param_1 * param_1 * DAT_140eb5cf8;
  }
  return DAT_140eb5cb0;
}


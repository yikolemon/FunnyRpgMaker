/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180283d70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180283d70(double param_1,double param_2)

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
  
  if (DAT_1804218b4 != 0) {
    uVar1 = (ulonglong)param_1 & _DAT_180351a50;
    if ((longlong)DAT_180351a38 < (longlong)uVar1) {
      if ((double)((ulonglong)param_1 & (ulonglong)DAT_180351a58) != DAT_180351a58) {
        if (uVar1 < DAT_180351a48) {
          uVar3 = FUN_18029d5a0(uVar1);
          dVar2 = extraout_XMM0_Qa_00;
        }
        else {
          uVar3 = FUN_18029d3b0();
          dVar2 = extraout_XMM0_Qa_01;
        }
        if ((uVar3 & 1) == 0) {
          dVar7 = dVar2 * dVar2;
          dVar4 = DAT_1803519d0 - dVar7 * DAT_180351a18;
          dVar4 = dVar7 * dVar7 *
                  (dVar7 * (dVar7 * (dVar7 * (dVar7 * (dVar7 * DAT_1803555a0 + DAT_180355590) +
                                             DAT_180355580) + DAT_180355570) + DAT_180355560) +
                  DAT_180355550) +
                  -(dVar2 * param_2) + ((DAT_1803519d0 - dVar4) - dVar7 * DAT_180351a18) + dVar4;
        }
        else {
          dVar4 = dVar2 * dVar2;
          dVar4 = dVar2 - (-(dVar2 * dVar4 * DAT_1803555b0) +
                          (dVar4 * (param_2 * DAT_180351a18 -
                                   dVar2 * dVar4 *
                                   (dVar4 * (dVar4 * (dVar4 * (dVar4 * DAT_180355600 + DAT_1803555f0
                                                              ) + DAT_1803555e0) + DAT_1803555d0) +
                                   DAT_1803555c0)) - param_2));
        }
        uVar1 = 0;
        if ((uVar3 + 1 & 2) != 0) {
          uVar1 = DAT_1803519e0;
        }
        return (double)((ulonglong)dVar4 ^ uVar1);
      }
      dVar2 = (double)FUN_18029d810();
      return dVar2;
    }
    if ((longlong)uVar1 < (longlong)DAT_180351a30) {
      if ((longlong)uVar1 < (longlong)DAT_180351a28) {
        return DAT_1803519d0;
      }
      return -(param_1 * DAT_180351a18 * param_1) + DAT_1803519d0;
    }
    param_1 = param_1 * param_1;
    return param_1 * (param_1 * (param_1 * (param_1 * (param_1 * (param_1 * (param_1 * DAT_1803555a0
                                                                            + DAT_180355590) +
                                                                 DAT_180355580) + DAT_180355570) +
                                           DAT_180355560) + DAT_180355550) - DAT_180351a18) +
           DAT_1803519d0;
  }
  dVar2 = ABS(param_1);
  if ((ulonglong)DAT_180351a38 <= (ulonglong)dVar2) {
    if ((ulonglong)dVar2 < (ulonglong)DAT_180351a40) {
      uVar3 = (uint)(dVar2 * _DAT_180351a10 + DAT_180351a18);
      dVar5 = (double)(int)uVar3;
      dVar6 = dVar2 - DAT_180351990 * dVar5;
      param_2 = DAT_1803519a0 * dVar5;
      dVar4 = dVar6 - param_2;
      dVar7 = dVar6;
      if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - ((ulonglong)ABS(dVar4) >> 0x34))) {
        dVar7 = dVar6 - DAT_1803519b0 * dVar5;
        param_2 = DAT_1803519c0 * dVar5 - ((dVar6 - dVar7) - DAT_1803519b0 * dVar5);
        dVar4 = dVar7 - param_2;
      }
      param_2 = (dVar7 - dVar4) - param_2;
    }
    else {
      if ((ulonglong)DAT_180351a58 <= (ulonglong)dVar2) {
        dVar2 = (double)FUN_18029d810();
        return dVar2;
      }
      uVar3 = FUN_18029d1a0();
      dVar4 = extraout_XMM0_Qa;
    }
    dVar2 = dVar4 * dVar4;
    if ((uVar3 & 1) == 0) {
      dVar4 = (((DAT_180355570 * dVar2 + DAT_180355560) * dVar2 + DAT_180355550 +
               ((DAT_1803555a0 * dVar2 + DAT_180355590) * dVar2 + DAT_180355580) *
               dVar2 * dVar2 * dVar2) * dVar2 * dVar2 +
              ((((DAT_180351a18 * dVar2 - DAT_1803519d0) + DAT_1803519d0) - dVar2 * DAT_180351a18) -
              param_2 * dVar4)) - (dVar2 * DAT_180351a18 - DAT_1803519d0);
    }
    else {
      dVar4 = param_2 + (dVar4 * dVar2 *
                         (((DAT_180355600 * dVar2 + DAT_1803555f0) * dVar2 + DAT_1803555e0) *
                          dVar2 * dVar2 * dVar2 +
                         (DAT_1803555d0 * dVar2 + DAT_1803555c0) * dVar2 + DAT_1803555b0) -
                        dVar2 * DAT_180351a18 * param_2) + dVar4;
    }
    if ((uVar3 + 1 & 2) != 0) {
      dVar4 = 0.0 - dVar4;
    }
    return dVar4;
  }
  if ((ulonglong)DAT_180351a30 <= (ulonglong)dVar2) {
    param_1 = param_1 * param_1;
    dVar4 = param_1 * param_1;
    dVar2 = param_1 * _DAT_180351a20 + DAT_1803519d0;
    return (DAT_1803519d0 - dVar2) + param_1 * _DAT_180351a20 +
           (DAT_180355560 * param_1 + DAT_180355550) * dVar4 +
           (DAT_180355580 * param_1 + DAT_180355570) * dVar4 * dVar4 +
           dVar4 * dVar4 * dVar4 * (DAT_1803555a0 * param_1 + DAT_180355590) + dVar2;
  }
  if ((ulonglong)DAT_180351a28 <= (ulonglong)dVar2) {
    return DAT_1803519d0 - param_1 * param_1 * DAT_180351a18;
  }
  return DAT_1803519d0;
}


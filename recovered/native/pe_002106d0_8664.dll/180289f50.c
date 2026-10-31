/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180289f50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180289f50(double param_1,double param_2)

{
  ulonglong uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (DAT_1804218b4 == 0) {
    dVar2 = ABS(param_1);
    if ((ulonglong)dVar2 < (ulonglong)DAT_180352a48) {
      if ((longlong)dVar2 <= DAT_180352a38) {
        return param_1;
      }
      dVar2 = param_1 * param_1;
      dVar5 = param_1 + param_1 * dVar2 *
                        (((DAT_180355600 * dVar2 + DAT_1803555f0) * dVar2 + DAT_1803555e0) *
                         dVar2 * dVar2 * dVar2 +
                        (DAT_1803555d0 * dVar2 + DAT_1803555c0) * dVar2 + DAT_1803555b0);
    }
    else {
      if ((ulonglong)dVar2 < (ulonglong)DAT_180352a50) {
        uVar4 = (uint)(dVar2 * _DAT_180352a20 + DAT_180352a28);
        dVar6 = (double)(int)uVar4;
        dVar7 = dVar2 - DAT_180352990 * dVar6;
        param_2 = DAT_1803529a0 * dVar6;
        dVar5 = dVar7 - param_2;
        dVar8 = dVar7;
        if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - ((ulonglong)ABS(dVar5) >> 0x34))) {
          dVar8 = dVar7 - DAT_1803529b0 * dVar6;
          param_2 = DAT_1803529c0 * dVar6 - ((dVar7 - dVar8) - DAT_1803529b0 * dVar6);
          dVar5 = dVar8 - param_2;
        }
        param_2 = (dVar8 - dVar5) - param_2;
      }
      else {
        if ((ulonglong)DAT_180352a60 <= (ulonglong)dVar2) {
          dVar2 = (double)FUN_18029d760();
          return dVar2;
        }
        uVar4 = FUN_18029d1a0();
        dVar5 = extraout_XMM0_Qa;
      }
      dVar2 = dVar5 * dVar5;
      if ((uVar4 & 1) == 0) {
        dVar5 = param_2 + (dVar5 * dVar2 *
                           (((DAT_180355600 * dVar2 + DAT_1803555f0) * dVar2 + DAT_1803555e0) *
                            dVar2 * dVar2 * dVar2 +
                           (DAT_1803555d0 * dVar2 + DAT_1803555c0) * dVar2 + DAT_1803555b0) -
                          dVar2 * DAT_180352a28 * param_2) + dVar5;
      }
      else {
        dVar5 = (((DAT_180355570 * dVar2 + DAT_180355560) * dVar2 + DAT_180355550 +
                 ((DAT_1803555a0 * dVar2 + DAT_180355590) * dVar2 + DAT_180355580) *
                 dVar2 * dVar2 * dVar2) * dVar2 * dVar2 +
                ((((DAT_180352a28 * dVar2 - DAT_1803529d0) + DAT_1803529d0) - dVar2 * DAT_180352a28)
                - param_2 * dVar5)) - (dVar2 * DAT_180352a28 - DAT_1803529d0);
      }
      uVar3 = (uint)((ulonglong)param_1 >> 0x3f);
      if ((uVar4 >> 1 & uVar3) == 0 && (~(uVar4 >> 1) & ~uVar3 & 1) == 0) {
        dVar5 = 0.0 - dVar5;
      }
    }
    return dVar5;
  }
  dVar2 = ABS(param_1);
  if ((ulonglong)DAT_180352a48 <= (ulonglong)dVar2) {
    if ((ulonglong)dVar2 < (ulonglong)DAT_180352a60) {
      if ((ulonglong)dVar2 < (ulonglong)DAT_180352a58) {
        uVar4 = FUN_18029d5a0(dVar2);
        dVar2 = extraout_XMM0_Qa_00;
      }
      else {
        uVar4 = FUN_18029d3b0();
        dVar2 = extraout_XMM0_Qa_01;
      }
      dVar5 = dVar2 * dVar2;
      if ((uVar4 & 1) == 0) {
        dVar2 = dVar2 - (-(dVar2 * dVar5 * DAT_1803555b0) +
                        (dVar5 * (param_2 * DAT_180352a28 -
                                 dVar2 * dVar5 *
                                 (dVar5 * (dVar5 * (dVar5 * (dVar5 * DAT_180355600 + DAT_1803555f0)
                                                   + DAT_1803555e0) + DAT_1803555d0) + DAT_1803555c0
                                 )) - param_2));
      }
      else {
        dVar8 = DAT_1803529d0 - dVar5 * DAT_180352a28;
        dVar2 = dVar5 * dVar5 *
                (dVar5 * (dVar5 * (dVar5 * (dVar5 * (dVar5 * DAT_1803555a0 + DAT_180355590) +
                                           DAT_180355580) + DAT_180355570) + DAT_180355560) +
                DAT_180355550) +
                -(dVar2 * param_2) + ((DAT_1803529d0 - dVar8) - dVar5 * DAT_180352a28) + dVar8;
      }
      uVar1 = 0;
      if ((uVar4 >> 1 & 1) != 0) {
        uVar1 = DAT_1803529e0;
      }
      return (double)((ulonglong)dVar2 ^ uVar1 ^ (ulonglong)param_1 & DAT_1803529e0);
    }
    dVar2 = (double)FUN_18029d760();
    return dVar2;
  }
  if ((longlong)dVar2 < DAT_180352a40) {
    if ((longlong)dVar2 < DAT_180352a38) {
      return param_1;
    }
    return -(param_1 * param_1 * param_1 * DAT_180352a30) + param_1;
  }
  dVar2 = param_1 * param_1;
  return param_1 * dVar2 *
         (dVar2 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * DAT_180355600 + DAT_1803555f0) + DAT_1803555e0
                                    ) + DAT_1803555d0) + DAT_1803555c0) + DAT_1803555b0) + param_1;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a7e00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1401a7e00(double param_1,double param_2)

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
  
  if (DAT_140f33260 == 0) {
    dVar2 = ABS(param_1);
    if ((ulonglong)dVar2 < (ulonglong)DAT_140eb6d28) {
      if ((longlong)dVar2 <= DAT_140eb6d18) {
        return param_1;
      }
      dVar2 = param_1 * param_1;
      dVar5 = param_1 + param_1 * dVar2 *
                        (((DAT_140eb98d0 * dVar2 + DAT_140eb98c0) * dVar2 + DAT_140eb98b0) *
                         dVar2 * dVar2 * dVar2 +
                        (DAT_140eb98a0 * dVar2 + DAT_140eb9890) * dVar2 + DAT_140eb9880);
    }
    else {
      if ((ulonglong)dVar2 < (ulonglong)DAT_140eb6d30) {
        uVar4 = (uint)(dVar2 * _DAT_140eb6d00 + DAT_140eb6d08);
        dVar6 = (double)(int)uVar4;
        dVar7 = dVar2 - DAT_140eb6c70 * dVar6;
        param_2 = DAT_140eb6c80 * dVar6;
        dVar5 = dVar7 - param_2;
        dVar8 = dVar7;
        if (0xf < (longlong)(((ulonglong)dVar2 >> 0x34) - ((ulonglong)ABS(dVar5) >> 0x34))) {
          dVar8 = dVar7 - DAT_140eb6c90 * dVar6;
          param_2 = DAT_140eb6ca0 * dVar6 - ((dVar7 - dVar8) - DAT_140eb6c90 * dVar6);
          dVar5 = dVar8 - param_2;
        }
        param_2 = (dVar8 - dVar5) - param_2;
      }
      else {
        if ((ulonglong)DAT_140eb6d40 <= (ulonglong)dVar2) {
          dVar2 = (double)FUN_1401bab60();
          return dVar2;
        }
        uVar4 = FUN_1401ba5a0();
        dVar5 = extraout_XMM0_Qa;
      }
      dVar2 = dVar5 * dVar5;
      if ((uVar4 & 1) == 0) {
        dVar5 = param_2 + (dVar5 * dVar2 *
                           (((DAT_140eb98d0 * dVar2 + DAT_140eb98c0) * dVar2 + DAT_140eb98b0) *
                            dVar2 * dVar2 * dVar2 +
                           (DAT_140eb98a0 * dVar2 + DAT_140eb9890) * dVar2 + DAT_140eb9880) -
                          dVar2 * DAT_140eb6d08 * param_2) + dVar5;
      }
      else {
        dVar5 = (((DAT_140eb9840 * dVar2 + DAT_140eb9830) * dVar2 + DAT_140eb9820 +
                 ((DAT_140eb9870 * dVar2 + DAT_140eb9860) * dVar2 + DAT_140eb9850) *
                 dVar2 * dVar2 * dVar2) * dVar2 * dVar2 +
                ((((DAT_140eb6d08 * dVar2 - DAT_140eb6cb0) + DAT_140eb6cb0) - dVar2 * DAT_140eb6d08)
                - param_2 * dVar5)) - (dVar2 * DAT_140eb6d08 - DAT_140eb6cb0);
      }
      uVar3 = (uint)((ulonglong)param_1 >> 0x3f);
      if ((uVar4 >> 1 & uVar3) == 0 && (~(uVar4 >> 1) & ~uVar3 & 1) == 0) {
        dVar5 = 0.0 - dVar5;
      }
    }
    return dVar5;
  }
  dVar2 = ABS(param_1);
  if ((ulonglong)DAT_140eb6d28 <= (ulonglong)dVar2) {
    if ((ulonglong)dVar2 < (ulonglong)DAT_140eb6d40) {
      if ((ulonglong)dVar2 < (ulonglong)DAT_140eb6d38) {
        uVar4 = FUN_1401ba9a0(dVar2);
        dVar2 = extraout_XMM0_Qa_00;
      }
      else {
        uVar4 = FUN_1401ba7b0();
        dVar2 = extraout_XMM0_Qa_01;
      }
      dVar5 = dVar2 * dVar2;
      if ((uVar4 & 1) == 0) {
        dVar2 = dVar2 - (-(dVar2 * dVar5 * DAT_140eb9880) +
                        (dVar5 * (param_2 * DAT_140eb6d08 -
                                 dVar2 * dVar5 *
                                 (dVar5 * (dVar5 * (dVar5 * (dVar5 * DAT_140eb98d0 + DAT_140eb98c0)
                                                   + DAT_140eb98b0) + DAT_140eb98a0) + DAT_140eb9890
                                 )) - param_2));
      }
      else {
        dVar8 = DAT_140eb6cb0 - dVar5 * DAT_140eb6d08;
        dVar2 = dVar5 * dVar5 *
                (dVar5 * (dVar5 * (dVar5 * (dVar5 * (dVar5 * DAT_140eb9870 + DAT_140eb9860) +
                                           DAT_140eb9850) + DAT_140eb9840) + DAT_140eb9830) +
                DAT_140eb9820) +
                -(dVar2 * param_2) + ((DAT_140eb6cb0 - dVar8) - dVar5 * DAT_140eb6d08) + dVar8;
      }
      uVar1 = 0;
      if ((uVar4 >> 1 & 1) != 0) {
        uVar1 = DAT_140eb6cc0;
      }
      return (double)((ulonglong)dVar2 ^ uVar1 ^ (ulonglong)param_1 & DAT_140eb6cc0);
    }
    dVar2 = (double)FUN_1401bab60();
    return dVar2;
  }
  if ((longlong)dVar2 < DAT_140eb6d20) {
    if ((longlong)dVar2 < DAT_140eb6d18) {
      return param_1;
    }
    return -(param_1 * param_1 * param_1 * DAT_140eb6d10) + param_1;
  }
  dVar2 = param_1 * param_1;
  return param_1 * dVar2 *
         (dVar2 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * DAT_140eb98d0 + DAT_140eb98c0) + DAT_140eb98b0
                                    ) + DAT_140eb98a0) + DAT_140eb9890) + DAT_140eb9880) + param_1;
}


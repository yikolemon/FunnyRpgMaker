/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10155b61 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10155b61(uint param_1,float param_2,double param_3,double param_4,float param_5,
                    float param_6)

{
  double dVar1;
  double dVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double local_30;
  double local_28;
  uint local_1c;
  
  local_1c = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  dVar6 = param_3;
  if (0.0 < param_2) {
    if (((param_3 != param_4) || (NAN(param_3) || NAN(param_4))) &&
       (dVar6 = param_4, param_2 < DAT_1028b430)) {
      if (param_5 <= 0.0) {
        if ((param_1 & 0xfffffffe) == 8) {
          fVar3 = (float10)FUN_10156011(param_3,param_4,param_2);
          goto LAB_10155c4e;
        }
        dVar6 = 0.0;
        if (param_2 < DAT_1028b430) {
          dVar6 = (param_4 - param_3) * (double)param_2 +
                  *(double *)(&DAT_102b96a0 + (uint)(param_4 < param_3) * 8) + param_3;
        }
      }
      else {
        dVar1 = (double)param_5;
        local_28 = param_3;
        if ((double)(_DAT_1028b420 & (ulonglong)param_3) < dVar1) {
          fVar4 = param_5;
          if (param_3 < 0.0) {
            fVar4 = (float)(_DAT_1028f620 ^ (uint)param_5);
          }
          local_28 = (double)fVar4;
        }
        local_30 = param_4;
        if ((double)(_DAT_1028b420 & (ulonglong)param_4) < dVar1) {
          fVar4 = param_5;
          if (param_4 < 0.0) {
            fVar4 = (float)(_DAT_1028f620 ^ (uint)param_5);
          }
          local_30 = (double)fVar4;
        }
        if (param_4 < param_3) {
          FUN_1015466a(&local_28,&local_30);
        }
        dVar6 = local_28;
        if (((param_3 < 0.0) && (param_4 == 0.0)) && (!NAN(param_4))) {
          local_30 = (double)(float)((uint)param_5 ^ _DAT_1028f620);
        }
        dVar2 = local_30;
        if (param_4 < param_3) {
          param_2 = DAT_1028b430 - param_2;
        }
        if (0.0 <= param_3 * param_4) {
          if ((param_3 < 0.0) || (param_4 < 0.0)) {
            fVar3 = (float10)FUN_1026fab0(local_28 / local_30,(double)(DAT_1028b430 - param_2));
            dVar6 = dVar2 * (double)fVar3;
          }
          else {
            fVar3 = (float10)FUN_1026fab0(local_30 / local_28,(double)param_2);
            dVar6 = dVar6 * (double)fVar3;
          }
        }
        else {
          fVar3 = (float10)FUN_10155ff2(param_3,param_4);
          fVar4 = (float)((uint)(float)fVar3 ^ _DAT_1028f620) /
                  (float)((uint)((float)param_4 - (float)param_3) & _DAT_1028b410);
          fVar5 = param_6 + fVar4;
          if ((param_2 < fVar4 - param_6) || (dVar6 = 0.0, fVar5 < param_2)) {
            if (fVar4 <= param_2) {
              fVar3 = (float10)FUN_1026fab0(local_30 / dVar1,
                                            (double)((param_2 - fVar5) / (DAT_1028b430 - fVar5)));
              dVar6 = dVar1 * (double)fVar3;
            }
            else {
              fVar3 = (float10)FUN_1026fab0((double)((ulonglong)local_28 ^ _DAT_1028f730) / dVar1,
                                            (double)(DAT_1028b430 - param_2 / (fVar4 - param_6)));
              dVar6 = (double)((ulonglong)dVar1 ^ _DAT_1028f730) * (double)fVar3;
            }
          }
        }
      }
    }
  }
  fVar3 = (float10)dVar6;
LAB_10155c4e:
  if (DAT_10388d00 != (local_1c ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return fVar3;
}


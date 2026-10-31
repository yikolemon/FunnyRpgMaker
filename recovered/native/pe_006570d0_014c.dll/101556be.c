/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101556be */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101556be(undefined4 param_1,double param_2,double param_3,double param_4,float param_5,
                    float param_6)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 local_c0;
  double local_30;
  double local_28;
  uint local_20;
  
  local_20 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_28 = param_4;
  local_30 = param_3;
  fVar5 = 0.0;
  if ((param_3 != param_4) || (NAN(param_3) || NAN(param_4))) {
    if (param_4 <= param_3) {
      fVar1 = (float10)FUN_10155fb5(param_2,param_4,param_3);
    }
    else {
      fVar1 = (float10)FUN_10155fb5(param_2,param_3,param_4);
    }
    dVar7 = (double)fVar1;
    if (param_5 <= 0.0) {
      fVar5 = (float)((dVar7 - param_3) / (param_4 - param_3));
    }
    else {
      uVar3 = SUB84(param_3,0);
      uVar4 = (undefined4)((ulonglong)param_3 >> 0x20);
      if (param_4 < param_3) {
        FUN_1015466a(&local_30,&local_28);
        uVar3 = SUB84(local_30,0);
        uVar4 = (undefined4)((ulonglong)local_30 >> 0x20);
      }
      dVar6 = (double)param_5;
      local_c0 = (double)CONCAT44(uVar4,uVar3);
      if ((double)(_DAT_1028b420 & CONCAT44(uVar4,uVar3)) < dVar6) {
        fVar5 = param_5;
        if ((double)CONCAT44(uVar4,uVar3) <= 0.0 && (double)CONCAT44(uVar4,uVar3) != 0.0) {
          fVar5 = (float)(_DAT_1028f620 ^ (uint)param_5);
        }
        local_c0 = (double)fVar5;
      }
      dVar8 = local_28;
      if ((double)(_DAT_1028b420 & (ulonglong)local_28) < dVar6) {
        fVar5 = param_5;
        if (local_28 < 0.0) {
          fVar5 = (float)(_DAT_1028f620 ^ (uint)param_5);
        }
        dVar8 = (double)fVar5;
      }
      if (((double)CONCAT44(uVar4,uVar3) != 0.0) || (0.0 <= local_28)) {
        if (((double)CONCAT44(uVar4,uVar3) <= 0.0 && (double)CONCAT44(uVar4,uVar3) != 0.0) &&
           ((local_28 == 0.0 && (!NAN(local_28))))) {
          dVar8 = (double)(float)((uint)param_5 ^ _DAT_1028f620);
        }
      }
      else {
        local_c0 = (double)(float)((uint)param_5 ^ _DAT_1028f620);
      }
      fVar5 = 0.0;
      if ((local_c0 < dVar7) && (fVar5 = DAT_1028b430, dVar7 < dVar8)) {
        if (0.0 <= (double)CONCAT44(uVar4,uVar3) * local_28) {
          if (((double)CONCAT44(uVar4,uVar3) <= 0.0 && (double)CONCAT44(uVar4,uVar3) != 0.0) ||
             (local_28 < 0.0)) {
            fVar1 = (float10)FUN_1026fa50(dVar7 / dVar8);
            fVar2 = (float10)FUN_1026fa50(local_c0 / dVar8);
            fVar5 = DAT_1028b430 - (float)((double)fVar1 / (double)fVar2);
          }
          else {
            fVar1 = (float10)FUN_1026fa50(dVar7 / local_c0);
            fVar2 = (float10)FUN_1026fa50(dVar8 / local_c0);
            fVar5 = (float)((double)fVar1 / (double)fVar2);
          }
        }
        else {
          fVar5 = (float)(_DAT_1028f620 ^ (uint)(float)(double)CONCAT44(uVar4,uVar3)) /
                  ((float)local_28 - (float)(double)CONCAT44(uVar4,uVar3));
          if ((param_2 != 0.0) || (NAN(param_2))) {
            if (0.0 <= param_2) {
              fVar1 = (float10)FUN_1026fa50(dVar7 / dVar6);
              fVar2 = (float10)FUN_1026fa50(dVar8 / dVar6);
              fVar5 = (DAT_1028b430 - (param_6 + fVar5)) * (float)((double)fVar1 / (double)fVar2) +
                      param_6 + fVar5;
            }
            else {
              fVar1 = (float10)FUN_1026fa50((double)((ulonglong)dVar7 ^ _DAT_1028f730) / dVar6);
              fVar2 = (float10)FUN_1026fa50((double)((ulonglong)local_c0 ^ _DAT_1028f730) / dVar6);
              fVar5 = (fVar5 - param_6) * (DAT_1028b430 - (float)((double)fVar1 / (double)fVar2));
            }
          }
        }
      }
      if (param_4 < param_3) {
        fVar5 = DAT_1028b430 - fVar5;
      }
    }
  }
  if (DAT_10388d00 == (local_20 ^ (uint)&stack0xfffffffc)) {
    return (float10)fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


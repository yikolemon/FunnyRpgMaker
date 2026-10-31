/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10155274 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10155274(uint param_1,float param_2,float param_3,float param_4,float param_5,
                    float param_6)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_44;
  double local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float local_c;
  float local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_44;
  fVar3 = param_3;
  if (0.0 < param_2) {
    if (((param_3 != param_4) || (NAN(param_3) || NAN(param_4))) &&
       (fVar3 = param_4, param_2 < DAT_1028b430)) {
      if (param_5 <= 0.0) {
        if ((param_1 & 0xfffffffe) == 8) {
          local_3c = (double)CONCAT44(local_3c._4_4_,param_2);
          local_44 = (double)CONCAT44(param_4,param_3);
          fVar1 = (float10)FUN_100ea365();
          goto LAB_10155491;
        }
        fVar3 = 0.0;
        if (param_2 < DAT_1028b430) {
          fVar3 = param_2 * (param_4 - param_3) +
                  *(float *)(&DAT_102b9698 + (uint)(param_4 < param_3) * 4) + param_3;
        }
      }
      else {
        local_8 = param_3;
        if ((float)(_DAT_1028b410 & (uint)param_3) < param_5) {
          local_8 = (float)(~-(uint)(param_3 < 0.0) & (uint)param_5 |
                           (_DAT_1028f620 ^ (uint)param_5) & -(uint)(param_3 < 0.0));
        }
        local_c = param_4;
        if ((float)(_DAT_1028b410 & (uint)param_4) < param_5) {
          local_c = (float)(~-(uint)(param_4 < 0.0) & (uint)param_5 |
                           (_DAT_1028f620 ^ (uint)param_5) & -(uint)(param_4 < 0.0));
        }
        if (param_4 < param_3) {
          local_44 = (double)CONCAT44(&local_c,&local_8);
          FUN_100faec4();
        }
        if (((param_3 < 0.0) && (param_4 == 0.0)) && (!NAN(param_4))) {
          local_c = (float)(_DAT_1028f620 ^ (uint)param_5);
        }
        fVar3 = (float)(~-(uint)(param_4 < param_3) & (uint)param_2 |
                       (uint)(DAT_1028b430 - param_2) & -(uint)(param_4 < param_3));
        if (0.0 <= param_3 * param_4) {
          if ((param_3 < 0.0) || (param_4 < 0.0)) {
            local_1c = local_c;
            uStack_18 = 0;
            uStack_14 = 0;
            uStack_10 = 0;
            local_3c = (double)(DAT_1028b430 - fVar3);
            local_44 = (double)(local_8 / local_c);
            fVar1 = (float10)FUN_1026fab0();
            local_24 = (float)fVar1;
            fVar3 = local_1c * local_24;
          }
          else {
            local_1c = local_8;
            uStack_18 = 0;
            uStack_14 = 0;
            uStack_10 = 0;
            local_3c = (double)fVar3;
            local_44 = (double)(local_c / local_8);
            fVar1 = (float10)FUN_1026fab0();
            local_20 = (float)fVar1;
            fVar3 = local_1c * local_20;
          }
        }
        else {
          local_44 = (double)CONCAT44(param_4,param_3);
          uStack_18 = 0;
          uStack_14 = 0;
          uStack_10 = 0;
          local_1c = fVar3;
          fVar1 = (float10)FUN_100ea38a();
          local_28 = (float)fVar1;
          fVar2 = (float)((uint)local_28 ^ _DAT_1028f620) /
                  (float)((uint)(param_4 - param_3) & _DAT_1028b410);
          fVar4 = param_6 + fVar2;
          if ((local_1c < fVar2 - param_6) || (fVar3 = 0.0, fVar4 < local_1c)) {
            if (fVar2 <= local_1c) {
              local_3c = (double)((local_1c - fVar4) / (DAT_1028b430 - fVar4));
              local_44 = (double)(local_c / param_5);
              fVar1 = (float10)FUN_1026fab0();
              local_2c = (float)fVar1;
              fVar3 = param_5 * local_2c;
            }
            else {
              local_3c = (double)(DAT_1028b430 - local_1c / (fVar2 - param_6));
              local_44 = (double)((float)((uint)local_8 ^ _DAT_1028f620) / param_5);
              fVar1 = (float10)FUN_1026fab0();
              local_30 = (float)fVar1;
              fVar3 = (float)((uint)local_30 ^ _DAT_1028f620) * param_5;
            }
          }
        }
      }
    }
  }
  fVar1 = (float10)fVar3;
  local_34 = fVar3;
LAB_10155491:
  if (DAT_10388d00 != (local_4 ^ (uint)&local_44)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return fVar1;
}


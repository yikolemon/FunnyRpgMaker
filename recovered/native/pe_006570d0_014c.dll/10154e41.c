/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10154e41 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10154e41(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
                    float param_6)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 local_84;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_84;
  local_44 = 0.0;
  if ((param_3 != param_4) || (NAN(param_3) || NAN(param_4))) {
    local_54 = param_4;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_78 = param_3;
    if (param_4 <= param_3) {
      local_7c = param_3;
      local_84 = (double)CONCAT44(param_4,param_2);
      fVar1 = (float10)FUN_10112cc4();
      fVar8 = (float)fVar1;
      local_1c = fVar8;
    }
    else {
      local_7c = param_4;
      local_84 = (double)CONCAT44(param_3,param_2);
      fVar1 = (float10)FUN_10112cc4();
      fVar8 = (float)fVar1;
      local_20 = fVar8;
    }
    if (param_5 <= 0.0) {
      local_44 = (fVar8 - local_78) / (local_54 - local_78);
    }
    else {
      fVar2 = local_78;
      if (local_54 < local_78) {
        local_84 = (double)CONCAT44(&param_4,&param_3);
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        local_74 = fVar8;
        FUN_100faec4();
        fVar2 = param_3;
        fVar8 = local_74;
      }
      fVar4 = fVar2;
      if ((float)(_DAT_1028b410 & (uint)fVar2) < param_5) {
        fVar4 = (float)(~-(uint)(fVar2 < 0.0) & (uint)param_5 |
                       (_DAT_1028f620 ^ (uint)param_5) & -(uint)(fVar2 < 0.0));
      }
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      local_74 = param_4;
      if ((float)(_DAT_1028b410 & (uint)param_4) < param_5) {
        local_74 = (float)(~-(uint)(param_4 < DAT_102b96ec) & (uint)param_5 |
                          (_DAT_1028f620 ^ (uint)param_5) & -(uint)(param_4 < DAT_102b96ec));
      }
      uStack_68 = 0;
      uStack_6c = 0;
      uStack_70 = 0;
      if (((fVar2 != 0.0) || (NAN(fVar2))) || (0.0 <= param_4)) {
        if (((fVar2 < 0.0) && (param_4 == 0.0)) && (!NAN(param_4))) {
          local_74 = (float)(_DAT_1028f620 ^ (uint)param_5);
          uStack_70 = _UNK_1028f624;
          uStack_6c = _UNK_1028f628;
          uStack_68 = _UNK_1028f62c;
        }
      }
      else {
        fVar4 = (float)(_DAT_1028f620 ^ (uint)param_5);
        uVar5 = _UNK_1028f624;
        uVar6 = _UNK_1028f628;
        uVar7 = _UNK_1028f62c;
      }
      fVar3 = 0.0;
      if ((fVar4 < fVar8) && (fVar3 = DAT_1028b430, fVar8 < local_74)) {
        local_18 = fVar4;
        uStack_14 = uVar5;
        uStack_10 = uVar6;
        uStack_c = uVar7;
        if (0.0 <= fVar2 * param_4) {
          if ((fVar2 < 0.0) || (param_4 < 0.0)) {
            local_84 = (double)(fVar8 / local_74);
            fVar1 = (float10)FUN_1026fa50();
            local_64 = (float)fVar1;
            local_84 = (double)(local_18 / local_74);
            local_2c = local_64;
            fVar1 = (float10)FUN_1026fa50();
            local_30 = (float)fVar1;
            fVar3 = DAT_1028b430 - local_64 / local_30;
          }
          else {
            local_84 = (double)(fVar8 / fVar4);
            fVar1 = (float10)FUN_1026fa50();
            local_64 = (float)fVar1;
            uStack_60 = 0;
            uStack_5c = 0;
            uStack_58 = 0;
            local_84 = (double)(local_74 / local_18);
            local_24 = local_64;
            fVar1 = (float10)FUN_1026fa50();
            local_28 = (float)fVar1;
            fVar3 = local_64 / local_28;
          }
        }
        else {
          fVar3 = (float)((uint)fVar2 ^ _DAT_1028f620) / (param_4 - fVar2);
          if ((param_2 != 0.0) || (NAN(param_2))) {
            if (0.0 <= param_2) {
              local_18 = param_6 + fVar3;
              local_84 = (double)(fVar8 / param_5);
              fVar1 = (float10)FUN_1026fa50();
              local_64 = (float)fVar1;
              local_84 = (double)(local_74 / param_5);
              local_34 = local_64;
              fVar1 = (float10)FUN_1026fa50();
              local_38 = (float)fVar1;
              fVar3 = (DAT_1028b430 - local_18) * (local_64 / local_38) + local_18;
            }
            else {
              local_64 = fVar3 - param_6;
              uStack_60 = _UNK_1028f624;
              uStack_5c = _UNK_1028f628;
              uStack_58 = _UNK_1028f62c;
              local_84 = (double)((float)((uint)fVar8 ^ _DAT_1028f620) / param_5);
              fVar1 = (float10)FUN_1026fa50();
              local_74 = (float)fVar1;
              local_84 = (double)((float)((uint)local_18 ^ _DAT_1028f620) / param_5);
              local_3c = local_74;
              fVar1 = (float10)FUN_1026fa50();
              local_40 = (float)fVar1;
              fVar3 = local_64 * (DAT_1028b430 - local_74 / local_40);
            }
          }
        }
      }
      local_44 = (float)(~-(uint)(local_54 < local_78) & (uint)fVar3 |
                        (uint)(DAT_1028b430 - fVar3) & -(uint)(local_54 < local_78));
    }
  }
  if (DAT_10388d00 != (local_8 ^ (uint)&local_84)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (float10)local_44;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10194f91 */

void FUN_10194f91(undefined4 param_1,float param_2,float param_3,undefined4 ***param_4,
                 undefined4 ***param_5,undefined4 ***param_6,float param_7,float param_8,
                 float param_9,undefined4 param_10,uint param_11)

{
  undefined4 ***pppuVar1;
  undefined4 ***pppuVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  float10 fVar6;
  float *pfVar7;
  float *local_74;
  undefined4 **local_70;
  undefined4 **local_6c;
  undefined4 local_68;
  uint local_64;
  float *local_60;
  float local_5c;
  float local_58;
  undefined4 *local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 *local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 *local_2c;
  float local_28;
  undefined4 **local_24;
  undefined4 **local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_74;
  local_1c = param_2;
  local_18 = param_3;
  local_24 = param_4;
  local_20 = param_5;
  uVar5 = 0xf0;
  if ((param_11 & 0x1f0) != 0) {
    uVar5 = param_11;
  }
  local_64 = uVar5;
  if (param_6 < (undefined4 ***)0xff000000) {
    local_70 = param_6;
    local_74 = (float *)0xffcccccc;
    local_74 = (float *)FUN_100fac20();
    local_70 = (undefined4 **)0x3f800000;
    pppuVar1 = (undefined4 ***)FUN_100fcc12();
    local_70 = param_6;
    local_74 = (float *)0xff808080;
    local_74 = (float *)FUN_100fac20();
    local_70 = (undefined4 **)0x3f800000;
    pppuVar2 = (undefined4 ***)FUN_100fcc12();
    local_68 = param_10;
    local_70 = &local_24;
    local_74 = &local_1c;
    local_6c = pppuVar1;
    FUN_1018b85a();
    if (param_9 + param_3 < (float)param_5) {
      local_50 = param_8 + param_2;
      bVar4 = 0;
      local_4c = param_7 + param_7;
      local_60 = (float *)(param_9 + param_3);
      do {
        local_6c = param_5;
        local_70 = (undefined4 **)param_3;
        local_74 = local_60;
        fVar6 = (float10)FUN_10112cc4();
        local_5c = (float)fVar6;
        local_74 = (float *)((float)local_60 + param_7);
        local_70 = param_5;
        local_60 = local_74;
        local_38 = local_5c;
        fVar6 = (float10)FUN_100ea38a();
        local_58 = (float)fVar6;
        local_3c = local_58;
        if (local_5c < local_58) {
          pfVar7 = (float *)((float)bVar4 * param_7 + local_50);
          while ((float)pfVar7 < (float)param_4) {
            local_6c = param_4;
            local_70 = (undefined4 **)param_2;
            local_74 = pfVar7;
            local_54 = pfVar7;
            fVar6 = (float10)FUN_10112cc4();
            local_48 = (float)fVar6;
            local_74 = (float *)(param_7 + (float)local_54);
            local_70 = param_4;
            local_40 = local_48;
            fVar6 = (float10)FUN_100ea38a();
            local_44 = (undefined4 *)(float)fVar6;
            if (local_48 < (float)local_44) {
              uVar3 = 0x100;
              if ((local_5c <= param_3) &&
                 (uVar3 = (local_48 <= param_2 | 0x10) << 4, (float)param_4 <= (float)local_44)) {
                uVar3 = uVar3 | 0x20;
              }
              if ((float)param_5 <= local_58) {
                if (local_48 <= param_2) {
                  uVar3 = uVar3 | 0x40;
                }
                if ((float)param_4 <= (float)local_44) {
                  uVar3 = uVar3 | 0x80;
                }
              }
              local_64 = uVar3 & uVar5;
              if (uVar3 == 0x100) {
                local_64 = 0x100;
              }
              if (uVar5 == 0x100) {
                local_64 = uVar5;
              }
              local_28 = local_58;
              local_34 = local_48;
              local_30 = local_5c;
              local_68 = param_10;
              local_70 = &local_2c;
              local_74 = &local_34;
              local_6c = pppuVar2;
              local_2c = local_44;
              FUN_1018b85a();
            }
            pfVar7 = (float *)((float)local_54 + local_4c);
          }
        }
        bVar4 = bVar4 ^ 1;
      } while ((float)local_60 < (float)param_5);
    }
  }
  else {
    local_68 = param_10;
    local_6c = param_6;
    local_70 = &local_24;
    local_74 = &local_1c;
    FUN_1018b85a();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_74)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


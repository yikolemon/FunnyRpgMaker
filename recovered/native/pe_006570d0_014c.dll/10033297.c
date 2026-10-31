/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10033297 */

undefined4 FUN_10033297(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined4 local_38;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  uint local_10;
  
  uVar4 = CONCAT44(param_2,param_1);
  local_10 = DAT_10388d00 ^ (uint)&local_40;
  uVar2 = param_3[2];
  if ((int)uVar2 < 0x22) {
    if (uVar2 == 9) {
      uVar2 = 0x74;
    }
    else if (uVar2 == 10) {
      uVar2 = 0x6e;
    }
    else {
      if (uVar2 != 0xd) goto LAB_100332db;
      uVar2 = 0x72;
    }
  }
  else if (((uVar2 != 0x22) && (uVar2 != 0x27)) && (uVar2 != 0x5c)) {
LAB_100332db:
    if (uVar2 < 0x100) {
      local_40 = CONCAT44(param_2,param_1);
      local_38 = 0x78;
      local_34 = uVar2;
      local_18 = local_40;
      param_1 = FUN_100333e8();
    }
    else if (uVar2 < 0x10000) {
      local_40 = CONCAT44(param_2,param_1);
      local_38 = 0x75;
      local_34 = uVar2;
      local_20 = local_40;
      param_1 = FUN_100334ab();
    }
    else if (uVar2 < 0x110000) {
      local_40 = CONCAT44(param_2,param_1);
      local_38 = 0x55;
      local_34 = uVar2;
      local_28 = local_40;
      param_1 = FUN_10033566();
    }
    else {
      pbVar1 = (byte *)param_3[1];
      for (pbVar3 = (byte *)*param_3; param_1 = (undefined4)uVar4, pbVar3 != pbVar1;
          pbVar3 = pbVar3 + 1) {
        local_34 = (uint)*pbVar3;
        local_38 = 0x78;
        local_40 = uVar4;
        local_30 = uVar4;
        uVar4 = FUN_100333e8();
      }
    }
    goto LAB_10033331;
  }
  local_40._0_4_ = 0x5c;
  FUN_1003325a();
  local_40 = CONCAT44(local_40._4_4_,(int)(char)uVar2);
  FUN_1003325a();
LAB_10033331:
  if (DAT_10388d00 == (local_10 ^ (uint)&local_40)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


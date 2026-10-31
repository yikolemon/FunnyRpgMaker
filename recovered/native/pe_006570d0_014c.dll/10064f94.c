/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10064f94 */

void FUN_10064f94(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *local_5c;
  int *local_58;
  uint local_54;
  undefined1 local_50;
  undefined1 local_4c;
  undefined1 local_48;
  undefined1 local_44;
  undefined1 local_40;
  undefined1 local_3c;
  int local_30;
  int *local_2c;
  undefined1 local_28;
  undefined1 local_20;
  undefined1 local_1c;
  undefined1 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_5c;
  iVar2 = param_2 - (int)param_1;
  local_50 = local_1c;
  do {
    local_54._1_3_ = (undefined3)(local_54 >> 8);
    local_5c = param_1;
    local_58 = (int *)param_2;
    if (iVar2 < 0x18c) {
      local_54 = CONCAT31(local_54._1_3_,local_20);
      FUN_100650fb();
LAB_100650d8:
      if (DAT_10388d00 == (local_14 ^ (uint)&local_5c)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    if ((int)param_3 < 1) {
      local_54 = CONCAT31(local_54._1_3_,local_28);
      FUN_10065194();
      iVar2 = param_2 - (int)param_1;
      do {
        local_50 = (undefined1)local_30;
        local_54 = CONCAT31(local_54._1_3_,local_18);
        local_5c = param_1;
        local_58 = (int *)param_2;
        FUN_10065440();
        param_2 = param_2 + -0xc;
        iVar2 = iVar2 + -0xc;
      } while (0xc < iVar2);
      goto LAB_100650d8;
    }
    local_5c = &local_30;
    local_58 = param_1;
    local_54 = param_2;
    local_1c = local_50;
    FUN_10065243();
    piVar1 = local_2c;
    iVar3 = local_30;
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    local_54 = param_3;
    if (local_30 - (int)param_1 < param_2 - (int)local_2c) {
      local_4c = local_3c;
      local_50 = local_40;
      local_58 = (int *)local_30;
      local_5c = param_1;
      FUN_10064f94();
      iVar3 = param_2;
      param_1 = piVar1;
    }
    else {
      local_4c = local_44;
      local_50 = local_48;
      local_5c = local_2c;
      local_58 = (int *)param_2;
      FUN_10064f94();
    }
    iVar2 = iVar3 - (int)param_1;
    param_2 = iVar3;
    local_50 = local_1c;
  } while( true );
}


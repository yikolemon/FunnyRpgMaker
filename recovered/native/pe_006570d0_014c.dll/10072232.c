/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10072232 */

undefined4 FUN_10072232(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_90 [48];
  uint local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined *local_44;
  undefined4 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_90;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2840;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10001f66(param_2[3]);
  local_14 = 0;
  local_60 = param_2[2];
  FUN_1006ab0e(&local_60,0);
  local_14 = 1;
  FUN_1006ad36(&local_38);
  local_14 = 2;
  FUN_10005a0c();
  local_14 = 0xffffffff;
  FUN_10001f04();
  FUN_10001f04();
  local_14 = 3;
  iVar1 = FUN_100728f0(0x28,0);
  if (iVar1 != -1) {
    FUN_100729e8();
    local_14 = 4;
    FUN_10004e60();
    local_4c = CONCAT44(uStack_24,local_28);
    local_5c = local_38;
    uStack_58 = uStack_34;
    uStack_54 = uStack_30;
    uStack_50 = uStack_2c;
    local_28 = 0;
    uStack_24 = 0xf;
    local_38 = local_38 & 0xffffff00;
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  iVar1 = FUN_10072936(0x20,0xffffffff);
  local_14 = 3;
  if (iVar1 != -1) {
    FUN_100729e8();
    local_14 = 5;
    FUN_10004e60();
    local_4c = CONCAT44(uStack_24,local_28);
    local_5c = local_38;
    uStack_58 = uStack_34;
    uStack_54 = uStack_30;
    uStack_50 = uStack_2c;
    local_28 = 0;
    uStack_24 = 0xf;
    local_38 = local_38 & 0xffffff00;
    local_14 = 0xffffffff;
    FUN_10001fee();
  }
  local_38 = *param_2;
  local_44 = &DAT_1034bab2;
  uStack_40 = 0xf;
  local_14 = 3;
  FUN_10072982(param_1,0xf1034bab2,local_90,&local_38,&local_5c);
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}


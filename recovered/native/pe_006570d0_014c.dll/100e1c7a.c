/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1c7a */

undefined4 * __thiscall FUN_100e1c7a(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int *unaff_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_58;
  local_18 = &LAB_100ea990;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  local_44 = param_2;
  local_3c = param_3;
  local_58 = CONCAT44(&local_3c,&local_44);
  local_24 = param_1;
  cVar1 = FUN_100e1d6e();
  if (cVar1 == '\0') {
    uStack_30 = local_3c._4_4_;
    local_34 = (undefined4)local_3c;
    uStack_28 = local_44._4_4_;
    local_2c = (undefined4)local_44;
    local_50 = local_3c;
    local_58 = local_44;
    local_48 = 0;
    FUN_100e1d7c();
  }
  else {
    local_24[4] = 0;
    local_24[5] = 0xf;
    *(undefined1 *)local_24 = 0;
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}


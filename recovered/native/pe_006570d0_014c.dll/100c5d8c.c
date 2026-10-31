/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c5d8c */

undefined4 * FUN_100c5d8c(undefined4 *param_1,undefined4 param_2)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 ***pppuVar3;
  undefined4 **local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 **local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7de0;
  local_1c = ExceptionList;
  local_28 = 0;
  local_38 = (undefined4 ***)0x0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  ExceptionList = &local_1c;
  FUN_10005b1e(0,0x104);
  local_14 = 0;
  while( true ) {
    local_44 = local_38;
    local_40 = (int)local_28;
    local_3c = local_28._4_4_;
    pvVar1 = GetCurrentProcess();
    pppuVar3 = (undefined4 ***)local_44;
    if (local_3c < 8) {
      pppuVar3 = &local_38;
    }
    uVar2 = K32GetMappedFileNameW(pvVar1,param_2,pppuVar3,local_40);
    if (uVar2 == 0) break;
    if (uVar2 < (int)local_28 - 1U) {
      FUN_10004c42(uVar2,0);
      *(undefined8 *)(param_1 + 4) = local_28;
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
      local_28 = 0x700000000;
      local_38 = (undefined4 **)((uint)local_38 & 0xffff0000);
LAB_100c5e86:
      local_14 = 0xffffffff;
      FUN_10001134();
      ExceptionList = local_1c;
      return param_1;
    }
    FUN_10004c42((int)local_28 * 2,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 7;
  goto LAB_100c5e86;
}


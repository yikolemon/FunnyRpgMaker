/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100eba78 */

undefined4 __fastcall FUN_100eba78(undefined4 param_1,int param_2,int param_3)

{
  undefined4 ***pppuVar1;
  undefined4 **local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined *local_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ec050;
  local_1c = ExceptionList;
  local_38 = &DAT_1034729e;
  uStack_34 = 0x10;
  ExceptionList = &local_1c;
  local_30 = param_2;
  local_24 = param_1;
  FUN_100ebf8e(param_1,0x101034729e,&local_30,&param_3);
  local_2c = DAT_1039d4fc;
  for (local_28 = DAT_1039d4f8; local_28 != local_2c; local_28 = local_28 + 0x20) {
    if ((*(int *)(local_28 + 0x18) == local_30) && (*(int *)(local_28 + 0x1c) == param_3)) {
      local_14 = 0;
      FUN_10015f8f();
      local_14 = 1;
      pppuVar1 = local_50;
      if (0xf < local_3c) {
        pppuVar1 = (undefined4 ***)local_50[0];
      }
      FUN_1000347e(pppuVar1,local_40);
      local_14 = 0xffffffff;
      FUN_10001fee();
    }
  }
  ExceptionList = local_1c;
  return local_24;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e926b */

undefined8 *
FUN_100e926b(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54 [24];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 *local_2c;
  uint local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_100eadd0;
  local_1c = ExceptionList;
  local_2c = param_1;
  local_3c = param_2;
  local_38 = param_3;
  local_30 = param_4;
  local_64 = param_5;
  local_60 = param_6;
  local_58 = param_7;
  local_24 = param_8;
  ExceptionList = &local_1c;
  cVar1 = FUN_10051c02(&local_64);
  while (cVar1 == '\0') {
    FUN_100dc366();
    FUN_100173ea(local_54,local_28 & 0xff);
    local_14 = 0;
    FUN_100e9510(&local_28,param_9,local_54);
    local_14 = 0xffffffff;
    param_9 = local_28 + 0x18;
    FUN_10001fee();
    FUN_10051ba0();
    cVar1 = FUN_10051c02(&local_64);
  }
  *local_2c = CONCAT44(param_9,local_24);
  ExceptionList = local_1c;
  return param_1;
}


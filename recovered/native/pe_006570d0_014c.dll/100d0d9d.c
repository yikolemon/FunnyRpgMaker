/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d0d9d */

void __fastcall FUN_100d0d9d(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined1 *local_68;
  undefined8 local_64;
  undefined1 *local_5c;
  char **local_58;
  char *local_54;
  undefined4 uStack_50;
  char *local_4c;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_68;
  local_18 = 0xffffffff;
  local_1c = &LAB_100ddb30;
  local_20 = ExceptionList;
  local_5c = local_48;
  local_4c = "Set to false";
  if (param_3 != '\0') {
    local_4c = "Set to true";
  }
  local_4c = local_4c + 7;
  local_58 = &local_4c;
  local_54 = "$gameSwitches._data[{}] = {};";
  uStack_50 = 0x1d;
  local_64 = 0x1d1033d49d;
  ExceptionList = &local_20;
  local_68 = local_40;
  local_44 = param_2;
  FUN_100d1f79();
  local_18 = 0;
  local_68 = local_40;
  FUN_10014730();
  local_18 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_20;
  return;
}


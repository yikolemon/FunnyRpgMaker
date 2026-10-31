/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100221fe */

undefined4 * __thiscall
FUN_100221fe(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_58;
  local_18 = &LAB_100596a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = spdlog::formatter::vftable;
  local_14 = 1;
  *param_1 = spdlog::pattern_formatter::vftable;
  local_40 = param_1 + 1;
  local_58._0_4_ = (undefined4 **)&DAT_103471b6;
  local_24 = param_1;
  FUN_10001f66();
  local_3c = local_24 + 7;
  *(undefined8 *)(local_24 + 0xb) = 0;
  local_24[7] = 0;
  local_24[8] = 0;
  local_24[9] = 0;
  local_24[10] = 0;
  local_24[7] = param_3;
  local_24[8] = param_4;
  local_24[9] = param_5;
  local_24[10] = param_6;
  *(ulonglong *)(local_24 + 0xb) = CONCAT44(param_8,param_7);
  local_24[0xd] = param_2;
  *(undefined1 *)(local_24 + 0xe) = 1;
  local_30 = local_24 + 0x1a;
  local_24[0x18] = 0;
  local_24[0x19] = 0;
  local_24[0x1a] = 0;
  local_24[0x1b] = 0;
  local_24[0x1c] = 0;
  local_14 = 4;
  local_38 = local_24 + 0x1d;
  FUN_10022d74();
  local_14 = 5;
  local_24[0x17] = 0;
  local_24[0x13] = 0;
  local_24[0x14] = 0;
  local_24[0x15] = 0;
  local_24[0x16] = 0;
  local_24[0xf] = 0;
  local_24[0x10] = 0;
  local_24[0x11] = 0;
  local_24[0x12] = 0;
  local_44 = 0;
  local_4c = 0;
  local_58 = CONCAT44(local_58._4_4_,0x138);
  local_28 = (undefined4 *)FUN_10228350();
  local_14 = 6;
  local_50 = local_44;
  local_58 = local_4c;
  FUN_1002372c();
  local_34 = 0;
  local_2c = local_28;
  local_14 = 8;
  local_58._0_4_ = &local_2c;
  FUN_1002349a();
  local_14 = 0xffffffff;
  if (local_2c != (undefined4 *)0x0) {
    local_58._0_4_ = (undefined4 **)0x1;
    (**(code **)*local_2c)();
  }
  puVar1 = local_24;
  FUN_10001fee();
  ExceptionList = local_1c;
  return puVar1;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c9542 */

undefined4 * __thiscall
FUN_100c9542(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc340;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[1] = 0;
  *param_1 = spdlog::sinks::base_sink<std::mutex>::vftable;
  FUN_10041404(&local_2c);
  uVar1 = local_2c;
  local_2c = 0;
  param_1[2] = uVar1;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0xffffffff;
  param_1[3] = 2;
  param_1[0xe] = 0;
  *param_1 = spdlog::sinks::basic_file_sink<std::mutex>::vftable;
  param_1[0x10] = 5;
  param_1[0x11] = 10;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0xf;
  local_14 = 3;
  local_24 = param_1 + 0x1a;
  local_28 = param_1;
  FUN_100ca3ce(param_4);
  local_24 = local_28 + 0x10;
  local_14 = 5;
  FUN_100c98ae(param_2,param_3);
  ExceptionList = local_1c;
  return local_28;
}


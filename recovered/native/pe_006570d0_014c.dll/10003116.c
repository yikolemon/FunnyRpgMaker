/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003116 */

undefined4 * FUN_10003116(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 local_40 [24];
  undefined1 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  local_18 = &LAB_100050b0;
  local_1c = ExceptionList;
  puStack_44 = (undefined1 *)param_3;
  local_20 = (undefined1 *)&local_64;
  local_28 = local_58;
  ExceptionList = &local_1c;
  FUN_1000334a(param_3);
  local_60 = param_1;
  local_5c = param_2;
  local_14 = 0xffffffff;
  local_64 = local_40;
  FUN_10003234();
  local_14 = 1;
  uStack_48 = 0x1000319d;
  puStack_44 = local_40;
  local_20 = local_40;
  FUN_100033d0();
  local_14 = 0xffffffff;
  puStack_44 = (undefined1 *)0x100031ad;
  FUN_10001fee();
  *local_24 = std::_System_error::vftable;
  local_24[3] = param_1;
  local_24[4] = param_2;
  ExceptionList = local_1c;
  return local_24;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c8a82 */

undefined4 * FUN_100c8a82(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc290;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_24 = (undefined4 *)FUN_10228350(0xc0);
  local_24[1] = 1;
  local_24[2] = 1;
  *local_24 = std::_Ref_count_obj2<spdlog::logger>::vftable;
  local_28 = local_24 + 4;
  local_14 = 0;
  FUN_100cb2a2(local_28,param_2,param_3);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = local_28;
  param_1[1] = local_24;
  ExceptionList = local_1c;
  return param_1;
}


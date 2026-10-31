/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073d60 */

undefined4 * FUN_10073d60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_3c [24];
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c29d0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10001f66(param_3);
  local_14 = 0;
  FUN_10003116(param_1,param_2,local_3c);
  local_14 = 0xffffffff;
  FUN_10001fee();
  *local_24 = std::system_error::vftable;
  ExceptionList = local_1c;
  return local_24;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10002db2 */

undefined4 * FUN_10002db2(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_10005070;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10003116(param_1,param_2,param_3);
  *local_24 = std::system_error::vftable;
  ExceptionList = local_1c;
  return local_24;
}


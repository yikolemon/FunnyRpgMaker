/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003996 */

undefined4 * FUN_10003996(undefined4 param_1,undefined4 param_2)

{
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_10005120;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_10003a24(param_1,param_2);
  *local_20 = std::system_error::vftable;
  ExceptionList = local_18;
  return local_20;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003a24 */

undefined4 * FUN_10003a24(undefined4 param_1,int *param_2)

{
  undefined1 local_3c [24];
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10005130;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  (**(code **)(*param_2 + 8))(local_3c,param_1);
  local_14 = 0;
  FUN_100033d0(local_3c);
  local_14 = 0xffffffff;
  FUN_10001fee();
  *local_24 = std::_System_error::vftable;
  local_24[3] = param_1;
  local_24[4] = param_2;
  ExceptionList = local_1c;
  return local_24;
}


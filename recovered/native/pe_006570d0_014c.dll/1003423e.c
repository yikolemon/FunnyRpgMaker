/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003423e */

undefined4 FUN_1003423e(undefined4 param_1)

{
  undefined4 local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_10059b20;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10034536(param_1);
  ExceptionList = local_14;
  return local_1c;
}


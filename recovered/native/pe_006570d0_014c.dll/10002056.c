/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10002056 */

undefined4 FUN_10002056(undefined4 param_1)

{
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_20;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_2c;
  local_c = 0xffffffff;
  local_10 = &LAB_10004fd0;
  local_14 = ExceptionList;
  local_28 = param_1;
  ExceptionList = &local_14;
  FUN_100021d4();
  ExceptionList = local_14;
  return local_20;
}


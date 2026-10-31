/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10002e46 */

undefined4 FUN_10002e46(undefined4 param_1)

{
  undefined4 local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_10005080;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10003728(param_1);
  ExceptionList = local_14;
  return local_1c;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100611f8 */

undefined4 FUN_100611f8(undefined4 param_1)

{
  undefined4 local_20;
  undefined1 local_19;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_20;
  local_c = 0xffffffff;
  local_10 = &LAB_100c1fa0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1006126e(param_1,&local_19);
  ExceptionList = local_14;
  return local_20;
}


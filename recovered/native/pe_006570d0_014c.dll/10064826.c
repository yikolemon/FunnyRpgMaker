/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10064826 */

undefined4 FUN_10064826(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2160;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10065b34(param_1,param_2,param_3);
  local_14 = 0;
  FUN_1001fca8(param_1);
  ExceptionList = local_1c;
  return local_24;
}


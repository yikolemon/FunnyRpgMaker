/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015df72 */

undefined4 __thiscall FUN_1015df72(undefined4 param_1,undefined4 param_2)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_1015f5f0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10055ef0();
  local_14 = 0;
  FUN_1015dff1(param_1,param_2);
  ExceptionList = local_1c;
  return param_2;
}


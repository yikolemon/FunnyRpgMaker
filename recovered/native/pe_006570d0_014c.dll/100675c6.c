/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100675c6 */

int FUN_100675c6(undefined4 *param_1,undefined4 param_2)

{
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2290;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_10001f66(*param_1);
  local_14 = 0;
  local_28 = local_24 + 0x18;
  FUN_1000334a(param_2);
  ExceptionList = local_1c;
  return local_24;
}


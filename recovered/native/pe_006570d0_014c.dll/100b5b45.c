/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5b45 */

int FUN_100b5b45(int param_1,int param_2)

{
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c49a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1000334a(param_2);
  local_14 = 0;
  local_24 = param_1 + 0x18;
  FUN_1000334a(param_2 + 0x18);
  ExceptionList = local_1c;
  return param_1;
}


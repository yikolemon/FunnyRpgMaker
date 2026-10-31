/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10086fca */

int FUN_10086fca(int param_1)

{
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c32e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1000334a(param_1);
  local_14 = 0;
  local_28 = local_24 + 0x18;
  FUN_100868a4(param_1 + 0x18);
  ExceptionList = local_1c;
  return local_24;
}


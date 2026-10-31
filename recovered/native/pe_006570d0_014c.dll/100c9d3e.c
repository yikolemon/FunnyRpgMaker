/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c9d3e */

void __thiscall FUN_100c9d3e(int *param_1,undefined4 param_2)

{
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc390;
  local_1c = ExceptionList;
  local_24 = param_1 + 3;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  (**(code **)(*param_1 + 0x14))(param_2);
  local_14 = 0xffffffff;
  FUN_1022c200(local_24);
  ExceptionList = local_1c;
  return;
}


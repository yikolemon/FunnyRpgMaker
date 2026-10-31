/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e329a */

void FUN_100e329a(undefined4 param_1)

{
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100eaa20;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  FUN_100e4ec0(param_1);
  local_14 = 0xffffffff;
  FUN_1022c200(local_24);
  ExceptionList = local_1c;
  return;
}


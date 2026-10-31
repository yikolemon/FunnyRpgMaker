/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f20c2 */

void FUN_100f20c2(undefined4 param_1)

{
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f5510;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  FUN_100f4e66(param_1);
  local_14 = 0xffffffff;
  FUN_1022c200(local_24);
  FUN_100f4de2();
  ExceptionList = local_1c;
  return;
}


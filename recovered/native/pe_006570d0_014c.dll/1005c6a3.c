/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c6a3 */

void FUN_1005c6a3(undefined4 param_1)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c19d0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  FUN_1005c810(param_1);
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_1039c968);
  ExceptionList = local_1c;
  return;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100148b1 */

void FUN_100148b1(undefined4 param_1)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_10058da0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  FUN_1001841a(param_1);
  FUN_1022c7c0(&DAT_1039c788);
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_10384390);
  ExceptionList = local_1c;
  return;
}


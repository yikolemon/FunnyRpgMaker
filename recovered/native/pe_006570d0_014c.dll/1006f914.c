/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006f914 */

void __fastcall FUN_1006f914(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c27a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CommonEvents::vftable;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_1008d8fe();
  FUN_10070120();
  ExceptionList = local_10;
  return;
}


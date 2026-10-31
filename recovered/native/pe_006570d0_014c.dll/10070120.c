/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10070120 */

void __fastcall FUN_10070120(undefined4 *param_1)

{
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_1c;
  local_c = &LAB_100c27e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = WolfDataBase::vftable;
  local_1c = param_1 + 7;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_10004eae();
  FUN_10001f04();
  ExceptionList = local_10;
  return;
}


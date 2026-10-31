/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a33ea */

void __fastcall FUN_100a33ea(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c4100;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = Map::vftable;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_100a4970();
  FUN_10004eae();
  FUN_10001134();
  FUN_10070120();
  ExceptionList = local_10;
  return;
}


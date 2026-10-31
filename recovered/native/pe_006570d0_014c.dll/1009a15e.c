/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009a15e */

void __fastcall FUN_1009a15e(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_100c3c20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = Command::CommandSpecialClasses::Move::vftable;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_100999ba();
  FUN_10004eae();
  *local_18 = Command::Command::vftable;
  local_8 = 0xffffffff;
  FUN_10004eae();
  FUN_1006dc58();
  FUN_10004eae();
  ExceptionList = local_10;
  return;
}


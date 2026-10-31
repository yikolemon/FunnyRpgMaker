/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005b22e */

void __fastcall FUN_1005b22e(int param_1)

{
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_1c;
  local_c = &LAB_100c1e60;
  local_10 = ExceptionList;
  local_1c = param_1 + 4;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_10004eae();
  FUN_10001fee();
  ExceptionList = local_10;
  return;
}


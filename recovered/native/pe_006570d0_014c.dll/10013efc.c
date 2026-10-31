/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013efc */

void __fastcall FUN_10013efc(undefined1 *param_1)

{
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_10058ed0;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_10016770(*param_1);
  ExceptionList = local_10;
  return;
}


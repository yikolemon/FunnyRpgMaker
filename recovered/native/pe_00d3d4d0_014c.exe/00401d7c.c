/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00401d7c */

void __fastcall FUN_00401d7c(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_00406d90;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_0040226e(param_1);
  ExceptionList = local_10;
  return;
}


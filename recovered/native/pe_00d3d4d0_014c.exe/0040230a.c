/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040230a */

void __fastcall FUN_0040230a(int *param_1)

{
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_00406de0;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_00404c20(param_1);
  ExceptionList = local_10;
  return;
}


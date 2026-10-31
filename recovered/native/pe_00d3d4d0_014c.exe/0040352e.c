/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040352e */

void __fastcall FUN_0040352e(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_00406ef0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = std::filesystem::filesystem_error::vftable;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_0040230a(param_1 + 0x11);
  FUN_00401d7c(local_18 + 0xb);
  FUN_00401d7c(local_18 + 5);
  *local_18 = std::exception::vftable;
  FUN_004857b0(local_18 + 1);
  ExceptionList = local_10;
  return;
}


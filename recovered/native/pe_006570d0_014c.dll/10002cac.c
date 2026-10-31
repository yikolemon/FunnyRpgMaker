/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10002cac */

void __fastcall FUN_10002cac(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_10005060;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = std::filesystem::filesystem_error::vftable;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_10001fee();
  FUN_10001f04();
  FUN_10001f04();
  *local_18 = std::exception::vftable;
  FUN_10259020(local_18 + 1);
  ExceptionList = local_10;
  return;
}


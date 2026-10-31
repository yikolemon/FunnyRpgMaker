/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005852c */

void __fastcall FUN_1005852c(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_1005ada0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  local_8 = 0xffffffff;
  param_1[4] = std::exception::vftable;
  local_18 = param_1;
  FUN_10259020(param_1 + 5);
  *local_18 = std::exception::vftable;
  FUN_10259020(local_18 + 1);
  ExceptionList = local_10;
  return;
}


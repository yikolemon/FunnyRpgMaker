/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100541de */

undefined4 * __thiscall FUN_100541de(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_1005ab30;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  local_c = 0xffffffff;
  param_1[4] = std::exception::vftable;
  local_1c = param_1;
  FUN_10259020(param_1 + 5);
  *local_1c = std::exception::vftable;
  FUN_10259020(local_1c + 1);
  puVar1 = local_1c;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x20);
  }
  ExceptionList = local_14;
  return puVar1;
}


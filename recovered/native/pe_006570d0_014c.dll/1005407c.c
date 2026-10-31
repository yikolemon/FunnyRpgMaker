/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005407c */

undefined4 * __thiscall FUN_1005407c(undefined4 *param_1,int param_2)

{
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005ab20;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = std::exception::vftable;
  local_2c = param_1 + 1;
  param_1[2] = 0;
  param_1[1] = 0;
  local_24 = param_1;
  FUN_10258fb0(param_2 + 4,local_2c);
  local_14 = 1;
  *local_24 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  local_24[3] = *(undefined4 *)(param_2 + 0xc);
  local_24[4] = std::exception::vftable;
  local_28 = local_24 + 5;
  local_24[6] = 0;
  local_24[5] = 0;
  FUN_10258fb0(param_2 + 0x14,local_28);
  local_24[4] = std::runtime_error::vftable;
  *local_24 = nlohmann::json_abi_v3_12_0::detail::parse_error::vftable;
  local_24[7] = *(undefined4 *)(param_2 + 0x1c);
  ExceptionList = local_1c;
  return local_24;
}


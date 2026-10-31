/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180052a5c */

undefined8 * FUN_180052a5c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_18026e9f0(param_2 + 8);
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = std::exception::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_18026e9f0(param_2 + 0x28);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = nlohmann::json_abi_v3_12_0::detail::out_of_range::vftable;
  return param_1;
}


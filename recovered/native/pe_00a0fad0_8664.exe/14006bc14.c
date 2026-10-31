/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006bc14 */

undefined8 * FUN_14006bc14(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140107d50(param_2 + 8);
  *param_1 = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = std::exception::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_140107d50(param_2 + 0x28);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = nlohmann::json_abi_v3_11_2::detail::invalid_iterator::vftable;
  return param_1;
}


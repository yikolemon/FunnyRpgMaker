/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006803a */

void FUN_14006803a(undefined8 *param_1)

{
  *param_1 = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
  param_1[4] = std::exception::vftable;
  FUN_140107df0(param_1 + 5);
  *param_1 = std::exception::vftable;
  FUN_140107df0(param_1 + 1);
  return;
}


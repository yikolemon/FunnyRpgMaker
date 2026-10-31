/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180059918 */

void FUN_180059918(undefined8 *param_1)

{
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  param_1[4] = std::exception::vftable;
  FUN_18026ea90(param_1 + 5);
  *param_1 = std::exception::vftable;
  FUN_18026ea90(param_1 + 1);
  return;
}


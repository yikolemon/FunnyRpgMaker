/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000a054 */

void FUN_14000a054(undefined8 *param_1)

{
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  param_1[4] = std::exception::vftable;
  FUN_1401905b0(param_1 + 5);
  *param_1 = std::exception::vftable;
  FUN_1401905b0(param_1 + 1);
  return;
}


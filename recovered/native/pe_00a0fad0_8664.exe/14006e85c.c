/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006e85c */

undefined8 * FUN_14006e85c(undefined8 *param_1,uint param_2)

{
  *param_1 = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
  param_1[4] = std::exception::vftable;
  FUN_140107df0(param_1 + 5);
  *param_1 = std::exception::vftable;
  FUN_140107df0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x40);
  }
  return param_1;
}


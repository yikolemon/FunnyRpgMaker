/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400061e0 */

undefined8 * FUN_1400061e0(undefined8 *param_1,uint param_2)

{
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  param_1[4] = std::exception::vftable;
  FUN_1401905b0(param_1 + 5);
  *param_1 = std::exception::vftable;
  FUN_1401905b0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x38);
  }
  return param_1;
}


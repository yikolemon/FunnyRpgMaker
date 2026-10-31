/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180017ba0 */

undefined8 * FUN_180017ba0(undefined8 *param_1,uint param_2)

{
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  param_1[4] = std::exception::vftable;
  FUN_18026ea90(param_1 + 5);
  *param_1 = std::exception::vftable;
  FUN_18026ea90(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x38);
  }
  return param_1;
}


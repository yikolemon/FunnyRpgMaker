/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180055a72 */

undefined8 *
FUN_180055a72(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180017ad8(param_1,param_2,param_4);
  *param_1 = nlohmann::json_abi_v3_12_0::detail::parse_error::vftable;
  param_1[7] = param_3;
  return param_1;
}


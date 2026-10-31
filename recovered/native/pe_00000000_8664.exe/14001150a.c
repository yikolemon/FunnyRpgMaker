/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001150a */

undefined8 *
FUN_14001150a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14000608e(param_1,param_2,param_4);
  *param_1 = nlohmann::json_abi_v3_12_0::detail::parse_error::vftable;
  param_1[7] = param_3;
  return param_1;
}


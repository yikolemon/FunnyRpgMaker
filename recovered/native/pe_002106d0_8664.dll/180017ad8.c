/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180017ad8 */

undefined8 * FUN_180017ad8(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = nlohmann::json_abi_v3_12_0::detail::exception::vftable;
  *(undefined4 *)(param_1 + 3) = param_2;
  FUN_1800061ea(param_1 + 4,param_3);
  return param_1;
}


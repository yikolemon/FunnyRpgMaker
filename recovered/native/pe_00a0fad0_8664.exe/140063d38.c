/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140063d38 */

undefined8 * FUN_140063d38(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = nlohmann::json_abi_v3_11_2::detail::exception::vftable;
  *(undefined4 *)(param_1 + 3) = param_2;
  FUN_140008fe8(param_1 + 4,param_3);
  return param_1;
}


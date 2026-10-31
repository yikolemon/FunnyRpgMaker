/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ce726 */

undefined8 * FUN_1800ce726(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_18026e9f0(param_2 + 8);
  *param_1 = spdlog::spdlog_ex::vftable;
  FUN_180003216(param_1 + 3,param_2 + 0x18);
  return param_1;
}


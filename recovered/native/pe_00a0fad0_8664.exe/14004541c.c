/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004541c */

undefined8 * FUN_14004541c(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140107d50(param_2 + 8,param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  *param_1 = std::format_error::vftable;
  return param_1;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800773da */

undefined8 * FUN_1800773da(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_18026e9f0(param_2 + 8,param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  *param_1 = std::range_error::vftable;
  return param_1;
}


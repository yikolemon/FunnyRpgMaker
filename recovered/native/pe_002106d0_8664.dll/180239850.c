/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180239850 */

undefined8 * FUN_180239850(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_18026e9f0(param_2 + 8);
  *param_1 = std::bad_function_call::vftable;
  return param_1;
}


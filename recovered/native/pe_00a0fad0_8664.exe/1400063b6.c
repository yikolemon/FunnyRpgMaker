/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400063b6 */

undefined8 * FUN_1400063b6(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140107d50(param_2 + 8,param_1 + 1);
  *param_1 = std::bad_alloc::vftable;
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}


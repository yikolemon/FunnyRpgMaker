/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140002032 */

undefined8 * FUN_140002032(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_alloc::vftable;
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}


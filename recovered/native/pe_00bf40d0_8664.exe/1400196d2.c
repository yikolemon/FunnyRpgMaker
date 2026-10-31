/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400196d2 */

undefined8 * FUN_1400196d2(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}


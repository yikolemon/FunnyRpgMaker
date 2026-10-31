/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018d32 */

undefined8 * FUN_180018d32(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}


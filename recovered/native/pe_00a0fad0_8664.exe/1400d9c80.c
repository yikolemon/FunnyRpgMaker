/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d9c80 */

undefined8 * FUN_1400d9c80(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011ece0 */

undefined8 * FUN_14011ece0(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}


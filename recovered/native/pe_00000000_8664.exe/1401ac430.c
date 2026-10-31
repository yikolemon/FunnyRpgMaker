/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ac430 */

undefined8 * FUN_1401ac430(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}


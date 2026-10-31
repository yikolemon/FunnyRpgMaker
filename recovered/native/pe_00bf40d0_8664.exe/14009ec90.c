/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009ec90 */

undefined8 * FUN_14009ec90(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012856c */

undefined8 * FUN_14012856c(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = std::bad_optional_access::vftable;
  return param_1;
}


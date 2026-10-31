/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e1838 */

undefined8 * FUN_1801e1838(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = std::bad_optional_access::vftable;
  return param_1;
}


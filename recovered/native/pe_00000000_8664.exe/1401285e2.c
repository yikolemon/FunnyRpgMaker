/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401285e2 */

undefined8 * FUN_1401285e2(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140190510(param_2 + 8,param_1 + 1);
  *param_1 = std::bad_optional_access::vftable;
  return param_1;
}


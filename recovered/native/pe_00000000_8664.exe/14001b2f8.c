/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001b2f8 */

undefined8 * FUN_14001b2f8(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140190510(param_2 + 8,param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  *param_1 = fmt::v12::format_error::vftable;
  return param_1;
}


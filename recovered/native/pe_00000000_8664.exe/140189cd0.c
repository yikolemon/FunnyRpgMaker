/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189cd0 */

undefined8 * FUN_140189cd0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140190510(param_2 + 8);
  *param_1 = std::regex_error::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}


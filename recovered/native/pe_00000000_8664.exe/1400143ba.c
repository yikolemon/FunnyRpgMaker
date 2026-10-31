/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400143ba */

undefined8 * FUN_1400143ba(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140190510(param_2 + 8,param_1 + 1);
  *param_1 = std::bad_cast::vftable;
  return param_1;
}


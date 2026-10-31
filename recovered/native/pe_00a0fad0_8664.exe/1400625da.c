/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400625da */

undefined8 * FUN_1400625da(undefined8 *param_1)

{
  *param_1 = std::ios_base::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::vftable;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  return param_1;
}


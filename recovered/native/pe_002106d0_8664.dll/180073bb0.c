/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073bb0 */

undefined8 * FUN_180073bb0(undefined8 *param_1)

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
  *param_1 = std::basic_ios<char,std::char_traits<char>_>::vftable;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return param_1;
}


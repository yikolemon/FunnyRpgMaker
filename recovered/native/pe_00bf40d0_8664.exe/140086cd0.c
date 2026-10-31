/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086cd0 */

undefined8 * FUN_140086cd0(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14008db00((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::length_error::vftable;
  return param_1;
}


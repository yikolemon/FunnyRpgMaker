/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008cc42 */

undefined8 * FUN_14008cc42(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = FileWriterException::vftable;
  FUN_140006874();
  return param_1;
}


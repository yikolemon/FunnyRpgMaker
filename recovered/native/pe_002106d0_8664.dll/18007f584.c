/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007f584 */

undefined8 * FUN_18007f584(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = FileWriterException::vftable;
  FUN_180003216();
  return param_1;
}


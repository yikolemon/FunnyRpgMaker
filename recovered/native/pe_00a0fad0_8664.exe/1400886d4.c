/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400886d4 */

undefined8 * FUN_1400886d4(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = WolfRPGException::vftable;
  FUN_140006874();
  return param_1;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089a24 */

undefined8 * FUN_140089a24(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140107d50(param_2 + 8);
  *param_1 = FileWalkerException::vftable;
  FUN_140006874(param_1 + 3,param_2 + 0x18);
  return param_1;
}


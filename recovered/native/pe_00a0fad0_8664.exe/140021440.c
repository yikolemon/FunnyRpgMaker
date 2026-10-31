/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140021440 */

undefined8 * FUN_140021440(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140107d50(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  *param_1 = CLI::Error::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  FUN_140006874(param_1 + 4,param_2 + 0x20);
  *param_1 = CLI::ParseError::vftable;
  *param_1 = CLI::ValidationError::vftable;
  return param_1;
}


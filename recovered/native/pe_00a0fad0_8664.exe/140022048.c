/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140022048 */

undefined8 * FUN_140022048(undefined8 *param_1,uint param_2)

{
  *param_1 = CLI::Error::vftable;
  FUN_1400017de(param_1 + 4);
  *param_1 = std::exception::vftable;
  FUN_140107df0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x40);
  }
  return param_1;
}


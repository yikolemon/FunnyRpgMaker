/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002a3d0 */

undefined8 * FUN_14002a3d0(undefined8 *param_1,uint param_2)

{
  *param_1 = CLI::ConfigBase::vftable;
  FUN_1400017de(param_1 + 6);
  FUN_14001a738(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x50);
  }
  return param_1;
}


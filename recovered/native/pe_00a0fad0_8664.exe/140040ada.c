/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140040ada */

void FUN_140040ada(undefined8 *param_1)

{
  *param_1 = CLI::Error::vftable;
  FUN_1400017de(param_1 + 4);
  *param_1 = std::exception::vftable;
  FUN_140107df0(param_1 + 1);
  return;
}


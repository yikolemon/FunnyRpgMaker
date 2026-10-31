/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140087d8c */

void FUN_140087d8c(undefined8 *param_1)

{
  *param_1 = WolfRPGException::vftable;
  FUN_1400017de(param_1 + 3);
  *param_1 = std::exception::vftable;
  FUN_140107df0(param_1 + 1);
  return;
}


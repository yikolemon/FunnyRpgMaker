/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089ae2 */

void FUN_140089ae2(undefined8 *param_1)

{
  *param_1 = FileWalkerException::vftable;
  FUN_1400017de(param_1 + 3);
  *param_1 = std::exception::vftable;
  FUN_140107df0(param_1 + 1);
  return;
}


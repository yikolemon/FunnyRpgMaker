/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008c564 */

void FUN_14008c564(undefined8 *param_1)

{
  *param_1 = FileWriterException::vftable;
  FUN_1400017de(param_1 + 3);
  *param_1 = std::exception::vftable;
  FUN_140107df0(param_1 + 1);
  return;
}


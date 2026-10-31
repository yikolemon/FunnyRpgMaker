/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007ec14 */

void FUN_18007ec14(undefined8 *param_1)

{
  *param_1 = FileWriterException::vftable;
  FUN_180001ef2(param_1 + 3);
  *param_1 = std::exception::vftable;
  FUN_18026ea90(param_1 + 1);
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180076090 */

void FUN_180076090(undefined8 *param_1)

{
  *param_1 = FileReaderException::vftable;
  FUN_180001ef2(param_1 + 3);
  *param_1 = std::exception::vftable;
  FUN_18026ea90(param_1 + 1);
  return;
}


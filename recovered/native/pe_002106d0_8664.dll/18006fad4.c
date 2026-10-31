/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006fad4 */

void FUN_18006fad4(undefined8 *param_1)

{
  *param_1 = WolfRPGException::vftable;
  FUN_180001ef2(param_1 + 3);
  *param_1 = std::exception::vftable;
  FUN_18026ea90(param_1 + 1);
  return;
}


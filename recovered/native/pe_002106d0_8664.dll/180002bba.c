/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180002bba */

void FUN_180002bba(undefined8 *param_1)

{
  *param_1 = std::filesystem::filesystem_error::vftable;
  FUN_180001ef2(param_1 + 0xd);
  FUN_180001e4c(param_1 + 9);
  FUN_180001e4c(param_1 + 5);
  *param_1 = std::exception::vftable;
  FUN_18026ea90(param_1 + 1);
  return;
}


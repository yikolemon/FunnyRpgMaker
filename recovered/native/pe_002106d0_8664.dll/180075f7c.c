/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075f7c */

void Unwind_180075f7c(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0xa8) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x98));
  return;
}


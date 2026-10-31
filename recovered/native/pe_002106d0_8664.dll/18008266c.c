/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008266c */

void Unwind_18008266c(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x1a0) = std::exception::vftable;
  FUN_18026ea90();
  return;
}


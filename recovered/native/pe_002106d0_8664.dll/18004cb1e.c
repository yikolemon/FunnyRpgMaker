/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004cb1e */

void Unwind_18004cb1e(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x180) = std::exception::vftable;
  FUN_18026ea90();
  return;
}


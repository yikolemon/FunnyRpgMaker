/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005159e */

void Unwind_18005159e(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x70) = std::exception::vftable;
  FUN_18026ea90();
  return;
}


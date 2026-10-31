/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ce92e */

void Unwind_1800ce92e(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x48) = std::exception::vftable;
  FUN_18026ea90();
  return;
}


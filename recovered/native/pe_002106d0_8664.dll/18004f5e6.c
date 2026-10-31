/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004f5e6 */

void Unwind_18004f5e6(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x70) = std::exception::vftable;
  FUN_18026ea90();
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004c8f4 */

void Unwind_18004c8f4(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x250) = std::exception::vftable;
  FUN_18026ea90();
  return;
}


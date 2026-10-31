/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180086a22 */

void Unwind_180086a22(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x70) = std::exception::vftable;
  FUN_18026ea90();
  return;
}


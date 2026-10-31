/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180002906 */

void Unwind_180002906(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x48) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x40));
  return;
}


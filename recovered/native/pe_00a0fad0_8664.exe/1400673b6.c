/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400673b6 */

void Unwind_1400673b6(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x90) = std::exception::vftable;
  FUN_140107df0();
  return;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400673f8 */

void Unwind_1400673f8(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x70) = std::exception::vftable;
  FUN_140107df0();
  return;
}


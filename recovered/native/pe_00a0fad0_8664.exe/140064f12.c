/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140064f12 */

void Unwind_140064f12(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x168) = std::exception::vftable;
  FUN_140107df0();
  return;
}


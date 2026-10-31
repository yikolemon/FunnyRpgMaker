/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140064ed8 */

void Unwind_140064ed8(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x188) = std::exception::vftable;
  FUN_140107df0();
  return;
}


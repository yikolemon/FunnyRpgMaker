/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140068f7a */

void Unwind_140068f7a(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x70) = std::exception::vftable;
  FUN_140107df0();
  return;
}


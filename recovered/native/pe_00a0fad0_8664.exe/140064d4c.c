/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140064d4c */

void Unwind_140064d4c(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x218) = std::exception::vftable;
  FUN_140107df0();
  return;
}


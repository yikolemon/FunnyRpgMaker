/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006909c */

void Unwind_14006909c(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x90) = std::exception::vftable;
  FUN_140107df0();
  return;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140076b8a */

void Unwind_140076b8a(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x1e0) = std::exception::vftable;
  FUN_140107df0(param_2 + 0x1e8);
  return;
}


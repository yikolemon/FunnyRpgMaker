/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400053be */

void Unwind_1400053be(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x180) = std::exception::vftable;
  FUN_1401905b0();
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400093d0 */

void Unwind_1400093d0(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x90) = std::exception::vftable;
  FUN_1401905b0();
  return;
}


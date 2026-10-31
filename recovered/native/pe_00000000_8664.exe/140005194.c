/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005194 */

void Unwind_140005194(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x250) = std::exception::vftable;
  FUN_1401905b0();
  return;
}


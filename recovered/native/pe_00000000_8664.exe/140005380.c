/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140005380 */

void Unwind_140005380(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x1a0) = std::exception::vftable;
  FUN_1401905b0();
  return;
}


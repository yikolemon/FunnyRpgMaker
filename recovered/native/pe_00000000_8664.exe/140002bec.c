/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140002bec */

void Unwind_140002bec(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x48) = std::exception::vftable;
  FUN_1401905b0(*(undefined8 *)(param_2 + 0x40));
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140002b8e */

void Unwind_140002b8e(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x48) = std::exception::vftable;
  FUN_1401905b0(*(undefined8 *)(param_2 + 0x40));
  return;
}


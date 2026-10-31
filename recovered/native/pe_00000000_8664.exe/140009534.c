/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140009534 */

void Unwind_140009534(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x90) = std::exception::vftable;
  FUN_1401905b0();
  return;
}


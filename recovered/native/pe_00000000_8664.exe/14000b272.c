/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000b272 */

void Unwind_14000b272(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x70) = std::exception::vftable;
  FUN_1401905b0();
  return;
}


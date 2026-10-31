/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000b230 */

void Unwind_14000b230(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x90) = std::exception::vftable;
  FUN_1401905b0();
  return;
}


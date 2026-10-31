/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400899ce */

void Unwind_1400899ce(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0xa8) = std::exception::vftable;
  FUN_140107df0(*(undefined8 *)(param_2 + 0x98));
  return;
}


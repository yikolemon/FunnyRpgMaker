/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ee3a */

void Unwind_14000ee3a(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x40) = std::exception::vftable;
  FUN_140107df0(*(undefined8 *)(param_2 + 0x38));
  return;
}


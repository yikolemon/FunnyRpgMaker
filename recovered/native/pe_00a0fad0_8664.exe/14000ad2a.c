/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ad2a */

void Unwind_14000ad2a(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x28) = std::exception::vftable;
  FUN_140107df0(*(undefined8 *)(param_2 + 0x20));
  return;
}


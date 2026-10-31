/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140041726 */

void Unwind_140041726(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x48) = std::exception::vftable;
  FUN_140107df0(*(undefined8 *)(param_2 + 0x40));
  return;
}


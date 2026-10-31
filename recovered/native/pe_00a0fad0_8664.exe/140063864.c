/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140063864 */

void Unwind_140063864(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(*(longlong *)(param_2 + 0x30) + 0x20) = std::exception::vftable;
  FUN_140107df0(*(undefined8 *)(param_2 + 0x28));
  return;
}


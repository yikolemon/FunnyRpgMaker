/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400638d8 */

void Unwind_1400638d8(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(*(longlong *)(param_2 + 0x30) + 0x20) = std::exception::vftable;
  FUN_140107df0(*(undefined8 *)(param_2 + 0x28));
  return;
}


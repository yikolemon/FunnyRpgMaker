/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008874a */

void Unwind_14008874a(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x30) = std::exception::vftable;
  FUN_140107df0(*(undefined8 *)(param_2 + 0x20));
  return;
}


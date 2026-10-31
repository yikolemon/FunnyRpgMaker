/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000abf4 */

void Unwind_14000abf4(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x28) = std::exception::vftable;
  FUN_140107df0(*(undefined8 *)(param_2 + 0x20));
  return;
}


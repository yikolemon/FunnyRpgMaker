/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140013858 */

void Unwind_140013858(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x28) = std::exception::vftable;
  FUN_1401905b0(*(undefined8 *)(param_2 + 0x20));
  return;
}


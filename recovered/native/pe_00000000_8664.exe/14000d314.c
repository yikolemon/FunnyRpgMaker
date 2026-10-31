/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000d314 */

void Unwind_14000d314(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x30) = std::exception::vftable;
  FUN_1401905b0(*(undefined8 *)(param_2 + 0x20));
  return;
}


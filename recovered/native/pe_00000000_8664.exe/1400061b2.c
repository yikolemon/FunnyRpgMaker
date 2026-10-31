/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400061b2 */

void Unwind_1400061b2(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x40) = std::exception::vftable;
  FUN_1401905b0(*(undefined8 *)(param_2 + 0x38));
  return;
}


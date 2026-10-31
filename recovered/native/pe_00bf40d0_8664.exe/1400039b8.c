/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400039b8 */

void Unwind_1400039b8(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x40) = std::exception::vftable;
  FUN_14008dba0(*(undefined8 **)(param_2 + 0x38));
  return;
}


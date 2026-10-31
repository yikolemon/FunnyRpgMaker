/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005d06 */

void Unwind_140005d06(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x30) = std::exception::vftable;
  FUN_14008dba0(*(undefined8 **)(param_2 + 0x28));
  return;
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005f0a */

void Unwind_140005f0a(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x28) = std::exception::vftable;
  FUN_14008dba0(*(undefined8 **)(param_2 + 0x20));
  return;
}


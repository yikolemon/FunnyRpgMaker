/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140003084 */

void Unwind_140003084(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x48) = std::exception::vftable;
  FUN_14008dba0(*(undefined8 **)(param_2 + 0x40));
  return;
}


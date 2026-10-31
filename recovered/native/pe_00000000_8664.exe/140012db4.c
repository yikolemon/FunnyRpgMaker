/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140012db4 */

void Unwind_140012db4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined ***)(lVar1 + 0xb0) = std::ios_base::vftable;
  FUN_140188f70(lVar1 + 0xb0);
  return;
}


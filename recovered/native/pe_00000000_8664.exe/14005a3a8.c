/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005a3a8 */

void Unwind_14005a3a8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(undefined ***)(lVar1 + 0x20) = std::ios_base::vftable;
  FUN_140188f70(lVar1 + 0x20);
  return;
}


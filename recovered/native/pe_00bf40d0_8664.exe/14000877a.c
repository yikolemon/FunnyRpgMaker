/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000877a */

void Unwind_14000877a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(undefined ***)(lVar1 + 0x20) = std::ios_base::vftable;
  FUN_1400895d0(lVar1 + 0x20);
  return;
}


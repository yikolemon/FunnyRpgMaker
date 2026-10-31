/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400086a0 */

void Unwind_1400086a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(undefined ***)(lVar1 + 0x10) = std::ios_base::vftable;
  FUN_1400895d0(lVar1 + 0x10);
  return;
}


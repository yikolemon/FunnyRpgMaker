/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140006f66 */

void Unwind_140006f66(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined ***)(lVar1 + 0x98) = std::ios_base::vftable;
  FUN_1400895d0(lVar1 + 0x98);
  return;
}


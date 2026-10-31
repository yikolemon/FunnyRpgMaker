/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140006cfc */

void Unwind_140006cfc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    *(undefined ***)(lVar1 + 0x98) = std::ios_base::vftable;
    FUN_1400895d0(lVar1 + 0x98);
  }
  return;
}


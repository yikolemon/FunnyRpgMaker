/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140056180 */

void Unwind_140056180(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined ***)(lVar1 + 0x98) = std::ios_base::vftable;
  FUN_140188f70(lVar1 + 0x98);
  return;
}


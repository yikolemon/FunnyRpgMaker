/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073b7a */

void Unwind_180073b7a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined ***)(lVar1 + 0xb8) = std::ios_base::vftable;
  FUN_18023ef00(lVar1 + 0xb8);
  return;
}


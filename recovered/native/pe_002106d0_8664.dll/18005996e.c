/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005996e */

void Unwind_18005996e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined ***)(lVar1 + 0x20) = std::exception::vftable;
  FUN_18026ea90(lVar1 + 0x28);
  return;
}


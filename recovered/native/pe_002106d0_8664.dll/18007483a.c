/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007483a */

void Unwind_18007483a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(undefined ***)(lVar1 + 0x20) = std::ios_base::vftable;
  FUN_18023ef00(lVar1 + 0x20);
  return;
}


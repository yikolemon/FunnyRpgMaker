/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800818e6 */

void Unwind_1800818e6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined ***)(lVar1 + 0xb0) = std::ios_base::vftable;
  FUN_18023ef00(lVar1 + 0xb0);
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007f914 */

void Unwind_18007f914(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined ***)(lVar1 + 0xa8) = std::ios_base::vftable;
  FUN_18023ef00(lVar1 + 0xa8);
  return;
}


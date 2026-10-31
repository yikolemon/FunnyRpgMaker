/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180017b30 */

void Unwind_180017b30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(undefined ***)(lVar1 + 0x20) = std::exception::vftable;
  FUN_18026ea90(lVar1 + 0x28);
  return;
}


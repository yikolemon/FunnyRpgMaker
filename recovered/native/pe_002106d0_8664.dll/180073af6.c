/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073af6 */

void Unwind_180073af6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    *(undefined ***)(lVar1 + 0xb8) = std::ios_base::vftable;
    FUN_18023ef00(lVar1 + 0xb8);
  }
  return;
}


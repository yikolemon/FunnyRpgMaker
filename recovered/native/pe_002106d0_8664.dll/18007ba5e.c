/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007ba5e */

void Unwind_18007ba5e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    *(undefined ***)(lVar1 + 0x98) = std::ios_base::vftable;
    FUN_18023ef00(lVar1 + 0x98);
  }
  return;
}


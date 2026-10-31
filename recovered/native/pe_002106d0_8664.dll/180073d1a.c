/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180073d1a */

void Unwind_180073d1a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    *(undefined ***)(lVar1 + 0x20) = std::ios_base::vftable;
    FUN_18023ef00(lVar1 + 0x20);
  }
  return;
}


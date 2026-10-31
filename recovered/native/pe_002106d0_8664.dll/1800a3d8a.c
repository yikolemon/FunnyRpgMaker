/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a3d8a */

void Unwind_1800a3d8a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    *(undefined ***)(lVar1 + 0x20) = std::ios_base::vftable;
    FUN_18023ef00(lVar1 + 0x20);
  }
  return;
}


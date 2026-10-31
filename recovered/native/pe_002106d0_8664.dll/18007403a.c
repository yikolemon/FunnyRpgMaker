/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007403a */

void Unwind_18007403a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(undefined ***)(lVar1 + 0x18) = std::ios_base::vftable;
    FUN_18023ef00(lVar1 + 0x18);
  }
  return;
}


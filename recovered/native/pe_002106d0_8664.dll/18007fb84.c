/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007fb84 */

void Unwind_18007fb84(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(undefined ***)(lVar1 + 0x10) = std::ios_base::vftable;
    FUN_18023ef00(lVar1 + 0x10);
  }
  return;
}


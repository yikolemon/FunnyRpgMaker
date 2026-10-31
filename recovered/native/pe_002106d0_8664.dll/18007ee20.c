/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007ee20 */

void Unwind_18007ee20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0xa0) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    *(undefined ***)(lVar1 + 0xb8) = std::ios_base::vftable;
    FUN_18023ef00(lVar1 + 0xb8);
  }
  return;
}


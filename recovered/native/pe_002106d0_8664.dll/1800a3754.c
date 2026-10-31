/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a3754 */

void Unwind_1800a3754(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    *(undefined ***)(lVar1 + 0x98) = std::ios_base::vftable;
    FUN_18023ef00(lVar1 + 0x98);
  }
  return;
}


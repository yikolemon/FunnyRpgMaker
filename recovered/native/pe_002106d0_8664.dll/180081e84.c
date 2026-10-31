/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180081e84 */

void Unwind_180081e84(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0xa0) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    *(undefined ***)(lVar1 + 0xb0) = std::ios_base::vftable;
    FUN_18023ef00(lVar1 + 0xb0);
  }
  return;
}


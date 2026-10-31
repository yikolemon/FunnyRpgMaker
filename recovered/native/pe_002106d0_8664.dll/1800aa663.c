/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aa663 */

void Unwind_1800aa663(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  for (lVar2 = *(longlong *)(param_2 + 0x20); lVar2 != lVar1; lVar2 = lVar2 + 0xa0) {
    FUN_1800a850c(lVar2);
  }
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a3552 */

void Unwind_1800a3552(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  for (lVar2 = *(longlong *)(param_2 + 0x20); lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    FUN_18009ffb5(lVar2);
  }
  return;
}


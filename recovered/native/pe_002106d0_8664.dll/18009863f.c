/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009863f */

void Unwind_18009863f(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  for (lVar2 = *(longlong *)(param_2 + 0x20); lVar2 != lVar1; lVar2 = lVar2 + 0xde0) {
    FUN_18008ea3e(lVar2);
  }
  return;
}


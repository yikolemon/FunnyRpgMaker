/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006c9ac */

void Unwind_18006c9ac(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1802464a0(lVar1,0x50);
  }
  return;
}


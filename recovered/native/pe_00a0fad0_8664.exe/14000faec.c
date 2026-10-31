/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000faec */

void Unwind_14000faec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1400ddcd0(lVar1,0x70);
  }
  return;
}


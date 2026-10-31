/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140071084 */

void Unwind_140071084(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1400ddcd0(lVar1,0x50);
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400727bc */

void Unwind_1400727bc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
  if (lVar1 != 0) {
    thunk_FUN_14018e090(lVar1,0x30);
  }
  return;
}


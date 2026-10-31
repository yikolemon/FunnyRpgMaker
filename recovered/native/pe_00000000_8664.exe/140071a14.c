/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140071a14 */

void Unwind_140071a14(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 8);
  if (lVar1 != 0) {
    thunk_FUN_14018e090(lVar1,0x20);
  }
  return;
}


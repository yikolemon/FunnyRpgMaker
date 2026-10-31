/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000f598 */

void Unwind_14000f598(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 8);
  if (lVar1 != 0) {
    thunk_FUN_14018e090(lVar1,0x50);
  }
  return;
}


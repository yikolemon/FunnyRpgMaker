/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140042152 */

void Unwind_140042152(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
  if (lVar1 != 0) {
    thunk_FUN_14018e090(lVar1,0x50);
  }
  return;
}


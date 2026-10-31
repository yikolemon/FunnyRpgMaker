/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001868e */

void FUN_14001868e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x20) != lVar1 + 0x40) {
      thunk_FUN_1401aea30();
    }
    thunk_FUN_14018e090(lVar1,0x158);
    return;
  }
  return;
}


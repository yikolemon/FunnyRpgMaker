/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002f4fe */

void FUN_14002f4fe(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14000109c(lVar1 + 0x18);
    thunk_FUN_14018e090(lVar1,0x38);
    return;
  }
  return;
}


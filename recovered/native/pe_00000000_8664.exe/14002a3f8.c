/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002a3f8 */

void FUN_14002a3f8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14002a120(lVar1);
    thunk_FUN_14018e090(lVar1,0xd8);
    return;
  }
  return;
}


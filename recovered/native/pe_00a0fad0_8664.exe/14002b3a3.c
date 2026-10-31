/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002b3a3 */

void FUN_14002b3a3(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14002ac68(lVar1);
    thunk_FUN_1400ddcd0(lVar1,0x270);
    return;
  }
  return;
}


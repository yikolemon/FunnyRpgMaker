/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f5804 */

void FUN_1800f5804(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1800f56b4(lVar1);
    thunk_FUN_1802464a0(lVar1,0x18);
    return;
  }
  return;
}


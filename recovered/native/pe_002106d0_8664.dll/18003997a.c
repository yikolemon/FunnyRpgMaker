/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003997a */

void FUN_18003997a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_180001ef2(lVar1 + 0x18);
    thunk_FUN_1802464a0(lVar1,0x38);
    return;
  }
  return;
}


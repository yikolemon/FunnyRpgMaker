/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2d33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a2d33(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1801a2dd8();
  if (DAT_180420d20 != 0) {
    thunk_FUN_1801c68b0();
    FUN_18019ff7a();
    FUN_1801092ec();
    (*DAT_18041f1a0)();
    FUN_180110262();
    uVar1 = FUN_180107f0e();
    FUN_1801c6300(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001801a2d79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_18041f1a8)(param_1);
  return;
}


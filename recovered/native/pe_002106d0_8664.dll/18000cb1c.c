/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000cb1c */

longlong * FUN_18000cb1c(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  lVar1 = param_1[2];
  *param_1 = lVar1;
  if (lVar1 != param_1[1]) {
    FUN_18000a56f(local_28,lVar1,param_1[1],param_1 + 3);
    param_1[2] = local_28[0];
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}


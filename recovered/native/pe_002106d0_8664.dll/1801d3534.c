/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d3534 */

longlong * FUN_1801d3534(longlong param_1,longlong *param_2,double *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_38 = ~-(ulonglong)(*param_3 == 0.0) & (ulonglong)*param_3;
  uVar1 = FUN_1800dbb7b();
  FUN_1801d35ca(param_1,&local_38,param_3,uVar1);
  if (local_30 == 0) {
    local_30 = *(longlong *)(param_1 + 8);
  }
  *param_2 = local_30;
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}


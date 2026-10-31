/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180052e03 */

undefined8 FUN_180052e03(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39 [22];
  undefined1 local_23 [11];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar1 = FUN_180052e67(local_23);
  FUN_180017a78(param_1,uVar1,local_23,local_39);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_68);
}


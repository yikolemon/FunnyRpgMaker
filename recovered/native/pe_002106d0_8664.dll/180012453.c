/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180012453 */

undefined8 FUN_180012453(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_1800124af(local_28);
  FUN_180004933(param_1,local_28);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}


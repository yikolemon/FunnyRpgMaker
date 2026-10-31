/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b68d */

void FUN_18005b68d(undefined4 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined8 *local_20;
  undefined4 local_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_20 = &local_10;
  local_28 = &local_14;
  local_14 = param_1;
  local_10 = param_2;
  FUN_18005b6e7();
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}


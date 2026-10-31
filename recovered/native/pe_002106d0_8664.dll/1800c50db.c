/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c50db */

void FUN_1800c50db(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  FUN_1800c51e1(local_18,param_1);
  FUN_1800c5150(local_18);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}


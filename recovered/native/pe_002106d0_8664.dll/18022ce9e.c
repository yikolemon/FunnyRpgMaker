/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022ce9e */

undefined8 FUN_18022ce9e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1802246b0(param_1,param_2,&local_18);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}


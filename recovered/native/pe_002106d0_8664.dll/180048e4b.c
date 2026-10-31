/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180048e4b */

undefined2 FUN_180048e4b(undefined1 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_14;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_14 = 0;
  local_20 = 0;
  local_28 = param_2;
  local_11 = param_1;
  FUN_18023ec80(&local_14,&local_11,1);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_48)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
}


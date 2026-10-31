/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016fc8d */

void FUN_18016fc8d(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_128 [40];
  undefined1 local_100 [224];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_128;
  FUN_180173a71(local_100,param_1,param_2);
  FUN_180173aa7(local_100,param_3,param_4);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_128)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_128);
}


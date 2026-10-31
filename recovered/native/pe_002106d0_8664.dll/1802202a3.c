/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802202a3 */

void FUN_1802202a3(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_18021fa65();
  FUN_18022005c(param_1 + 0x10,param_3,local_20);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}


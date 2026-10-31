/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ff1a5 */

void FUN_1800ff1a5(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  FUN_1800fd699(local_c,param_1,param_2);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


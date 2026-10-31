/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cf476 */

void FUN_1801cf476(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  local_c = param_2;
  FUN_1801cf3b8(&local_10);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180019924 */

void FUN_180019924(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_180019d5a(*(undefined8 *)(param_1 + 200),&local_9,&local_8,*(uint *)(param_1 + 0xe0) >> 8 & 1)
  ;
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


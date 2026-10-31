/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009103c */

void FUN_18009103c(longlong param_1,undefined2 param_2)

{
  undefined1 auStack_38 [46];
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_a = param_2;
  FUN_1800910a4(*(undefined8 *)(param_1 + 200),&local_a,&local_8,*(uint *)(param_1 + 0xe0) >> 8 & 1)
  ;
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


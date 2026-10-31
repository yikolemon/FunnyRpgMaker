/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001672c */

void FUN_18001672c(longlong *param_1,ulonglong param_2)

{
  undefined1 auStack_38 [40];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((ulonglong)(param_1[2] - *param_1 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_180016790(param_1,&local_10);
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


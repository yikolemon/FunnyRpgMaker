/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ecf0e */

void FUN_1800ecf0e(longlong *param_1,ulonglong param_2)

{
  undefined1 auStack_38 [40];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((ulonglong)((param_1[2] - *param_1 >> 4) * -0x3333333333333333) < param_2) {
    if (0x333333333333333 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    FUN_1800ed168(param_1,&local_10);
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


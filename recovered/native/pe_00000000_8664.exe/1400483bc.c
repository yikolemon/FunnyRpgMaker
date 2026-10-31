/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400483bc */

void FUN_1400483bc(longlong *param_1,ulonglong param_2)

{
  undefined1 auStack_38 [40];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((ulonglong)(param_1[2] - *param_1 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400066bc();
    }
    FUN_140048644(param_1,&local_10);
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}


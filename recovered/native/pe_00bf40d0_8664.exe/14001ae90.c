/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001ae90 */

void FUN_14001ae90(int param_1,undefined8 param_2,undefined *param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14001aedf(param_1,1,(longlong)&local_10,param_3);
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_38);
}


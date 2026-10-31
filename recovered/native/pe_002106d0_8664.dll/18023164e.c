/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023164e */

void FUN_18023164e(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_38 [32];
  int local_18;
  int iStack_14;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  if (0x8000 < *param_1) {
    if (param_1[(longlong)(param_4 * param_3) * 4 + (longlong)param_2 * 4] + -0x10000 < *param_1) {
      local_18 = param_2 * 0x10000 +
                 (int)*(undefined8 *)
                       (param_1 + (longlong)(param_4 * param_3) * 4 + (longlong)param_2 * 4 + 1);
      iStack_14 = (int)((ulonglong)
                        *(undefined8 *)
                         (param_1 + (longlong)(param_4 * param_3) * 4 + (longlong)param_2 * 4 + 1)
                       >> 0x20) + param_3 * 0x10000;
      iVar1 = FUN_1801cf3b8();
      if (iVar1 < *param_1) {
        *param_1 = iVar1;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iStack_14,local_18);
      }
    }
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}


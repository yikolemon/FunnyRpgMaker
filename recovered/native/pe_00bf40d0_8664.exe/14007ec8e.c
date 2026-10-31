/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007ec8e */

void FUN_14007ec8e(int *param_1,int param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 auStack_38 [32];
  int local_18;
  int iStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  if (0x8000 < *param_1) {
    if (param_1[(longlong)(param_4 * param_3) * 4 + (longlong)param_2 * 4] + -0x10000 < *param_1) {
      local_18 = param_2 * 0x10000 +
                 (int)*(undefined8 *)
                       (param_1 + (longlong)(param_4 * param_3) * 4 + (longlong)param_2 * 4 + 1);
      iStack_14 = (int)((ulonglong)
                        *(undefined8 *)
                         (param_1 + (longlong)(param_4 * param_3) * 4 + (longlong)param_2 * 4 + 1)
                       >> 0x20) + param_3 * 0x10000;
      uVar1 = FUN_1400217bb((ulonglong *)&local_18);
      if ((int)uVar1 < *param_1) {
        *param_1 = (int)uVar1;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iStack_14,local_18);
      }
    }
  }
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_38);
}


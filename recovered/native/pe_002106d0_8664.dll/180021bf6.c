/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180021bf6 */

void FUN_180021bf6(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 1) != 0) {
    local_28 = *(undefined4 *)param_1;
    uStack_24 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_20 = *(undefined4 *)(param_1 + 1);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0xc);
    iVar1 = FUN_18023e480();
    if (iVar1 == 0) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_48)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_18023e720(1);
}


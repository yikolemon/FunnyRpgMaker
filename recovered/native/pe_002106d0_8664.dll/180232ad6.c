/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180232ad6 */

void FUN_180232ad6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((param_1 != 0) && (lVar2 = *param_2, lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar2 = *(longlong *)(lVar2 + 8);
      do {
        lVar1 = *(longlong *)(lVar2 + 0x28);
        local_30 = lVar2;
        FUN_180232c7e(param_1,&local_30);
        lVar2 = lVar1;
      } while (lVar1 != 0);
      lVar2 = *param_2;
    }
    FUN_1801c9b65(param_1,lVar2);
    *param_2 = 0;
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d09b0 */

longlong FUN_1800d09b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = 0;
  local_38 = lVar1;
  if (lVar1 != lVar2) {
    do {
      lVar3 = lVar3 + 1;
      FUN_180016c4c(&local_38);
    } while (local_38 != lVar2);
  }
  FUN_1800d0b20(param_1,lVar1,lVar2);
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}


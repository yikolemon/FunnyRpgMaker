/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800af504 */

void FUN_1800af504(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
      FUN_1800af590(param_1,lVar1,param_2);
      return;
    }
  }
  else {
    FUN_1800ad7ca(lVar1,param_2,&local_11);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}


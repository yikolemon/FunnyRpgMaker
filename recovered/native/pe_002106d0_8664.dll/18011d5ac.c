/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d5ac */

void FUN_18011d5ac(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = FUN_1800ff032(param_1,&DAT_18036b632,&local_18,0);
  if (lVar1 != 0) {
    if (local_18 != 0) {
      FUN_18011d625(lVar1);
    }
    FUN_1800fe8d4(lVar1);
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}


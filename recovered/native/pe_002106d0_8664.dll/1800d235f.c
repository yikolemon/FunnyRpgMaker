/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d235f */

undefined8 FUN_1800d235f(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  lVar1 = FUN_1800d2131(&DAT_1802bb8e4,&local_14);
  if (local_14 == 0 || lVar1 == 0) {
    SetLastError(0x7e);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1800d21a2(lVar1);
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180173aa7 */

longlong FUN_180173aa7(undefined8 param_1,uint *param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  lVar1 = FUN_180173b2a();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else if (local_24 != 8) {
    uVar2 = (ulonglong)*param_2;
    if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
      lVar1 = FUN_180173cb4(lVar1,(ulonglong)*param_2,*param_3);
      return lVar1;
    }
    goto LAB_180173b1c;
  }
  uVar2 = DAT_180402640;
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return lVar1;
  }
LAB_180173b1c:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48,uVar2);
}


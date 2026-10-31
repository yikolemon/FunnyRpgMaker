/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006c624 */

undefined8 FUN_18006c624(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_298 [40];
  undefined1 local_270 [44];
  short local_244;
  short local_242;
  short local_240;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_298;
  lVar1 = *param_1;
  do {
    uVar2 = FUN_18023a590(*(undefined8 *)(lVar1 + 0x40),local_270);
    if ((int)uVar2 != 0) {
      if ((int)uVar2 != 0x12) goto LAB_18006c697;
      FUN_18006c6ca(param_1);
      goto LAB_18006c695;
    }
  } while ((local_244 == 0x2e) && ((local_242 == 0 || ((local_242 == 0x2e && (local_240 == 0))))));
  FUN_18006c246(lVar1,local_270);
LAB_18006c695:
  uVar2 = 0;
LAB_18006c697:
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_298)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_298);
}


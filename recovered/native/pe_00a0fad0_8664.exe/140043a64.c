/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140043a64 */

undefined8 FUN_140043a64(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_298 [40];
  undefined1 local_270 [44];
  short local_244;
  short local_242;
  short local_240;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_298;
  lVar1 = *param_1;
  do {
    uVar2 = FUN_1400dcef0(*(undefined8 *)(lVar1 + 0x40),local_270);
    if ((int)uVar2 != 0) {
      if ((int)uVar2 != 0x12) goto LAB_140043ad7;
      FUN_140043b8c(param_1);
      goto LAB_140043ad5;
    }
  } while ((local_244 == 0x2e) && ((local_242 == 0 || ((local_242 == 0x2e && (local_240 == 0))))));
  FUN_1400432ac(lVar1,local_270);
LAB_140043ad5:
  uVar2 = 0;
LAB_140043ad7:
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_298)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_298);
}


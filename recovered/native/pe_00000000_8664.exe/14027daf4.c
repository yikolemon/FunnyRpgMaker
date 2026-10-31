/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027daf4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14027daf4(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_298 [40];
  undefined1 local_270 [44];
  short local_244;
  short local_242;
  short local_240;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_298;
  lVar1 = *param_1;
  do {
    uVar2 = FUN_14044ba60(*(undefined8 *)(lVar1 + 0x40),local_270);
    if ((int)uVar2 != 0) {
      if ((int)uVar2 != 0x12) goto LAB_14027db67;
      FUN_14027db9a(param_1);
      goto LAB_14027db65;
    }
  } while ((local_244 == 0x2e) && ((local_242 == 0 || ((local_242 == 0x2e && (local_240 == 0))))));
  FUN_14027d716(lVar1,local_270);
LAB_14027db65:
  uVar2 = 0;
LAB_14027db67:
  if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_298)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_20 ^ (ulonglong)auStack_298);
}


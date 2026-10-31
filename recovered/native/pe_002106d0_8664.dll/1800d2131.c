/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d2131 */

longlong FUN_1800d2131(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  do {
    lVar1 = FUN_1800d1b10(lVar1);
    if (lVar1 == 0) {
      SetLastError(0x7e);
      return 0;
    }
    lVar2 = FUN_1800d1fc4(lVar1,param_1,param_2);
  } while (lVar2 == 0);
  return lVar2;
}


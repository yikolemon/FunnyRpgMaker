/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800013e0 */

ulonglong FUN_1800013e0(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 0x1000) {
    uVar1 = FUN_180239630();
    return uVar1;
  }
  if (param_1 < 0xffffffffffffffd9) {
    lVar2 = FUN_180239630(param_1 + 0x27);
    uVar1 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar1 - 8) = lVar2;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}


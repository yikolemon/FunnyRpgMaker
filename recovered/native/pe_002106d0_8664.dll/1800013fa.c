/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800013fa */

ulonglong FUN_1800013fa(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 < 0xffffffffffffffd9) {
    lVar1 = FUN_180239630(param_1 + 0x27);
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}


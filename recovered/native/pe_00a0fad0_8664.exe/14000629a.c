/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000629a */

ulonglong FUN_14000629a(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 < 0xffffffffffffffd9) {
    lVar1 = FUN_1400d3680(param_1 + 0x27);
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400062c7();
}


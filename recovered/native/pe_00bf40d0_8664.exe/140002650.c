/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002650 */

ulonglong FUN_140002650(ulonglong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 0x1000) {
    uVar1 = FUN_1400863a0(param_1);
    return uVar1;
  }
  if (param_1 < 0xffffffffffffffd9) {
    lVar2 = FUN_1400863a0(param_1 + 0x27);
    uVar1 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar1 - 8) = lVar2;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002697();
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001fd4 */

ulonglong FUN_140001fd4(ulonglong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 < 0xffffffffffffffd9) {
    lVar1 = FUN_1401887b0(param_1 + 0x27);
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002001();
}


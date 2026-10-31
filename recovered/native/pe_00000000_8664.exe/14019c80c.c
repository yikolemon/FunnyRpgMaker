/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c80c */

longlong FUN_14019c80c(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (((param_1 == 0) || (uVar2 = FUN_1401aa820(param_1,0x55), 0x54 < uVar2)) ||
     (lVar3 = _malloc_base(uVar2 * 2 + 2), lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_1401b5630();
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return lVar3;
}


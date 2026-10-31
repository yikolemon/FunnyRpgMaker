/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140491db0 */

longlong FUN_140491db0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (*(short *)(param_1 + lVar2 * 2) != 0);
    lVar2 = _malloc_base((lVar3 + 2) * 2);
    if (lVar2 != 0) {
      iVar1 = FUN_1404a2c50();
      if (iVar1 == 0) {
        return lVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return 0;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180298250 */

longlong FUN_180298250(void)

{
  WCHAR WVar1;
  LPWCH pWVar2;
  longlong lVar3;
  longlong lVar5;
  WCHAR *pWVar6;
  longlong lVar4;
  
  pWVar2 = GetEnvironmentStringsW();
  lVar3 = 0;
  if (pWVar2 != (LPWCH)0x0) {
    WVar1 = *pWVar2;
    pWVar6 = pWVar2;
    while (WVar1 != L'\0') {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (pWVar6[lVar3] != L'\0');
      pWVar6 = pWVar6 + lVar4 + 2;
      WVar1 = *pWVar6;
    }
    lVar4 = ((longlong)pWVar6 + (2 - (longlong)pWVar2) >> 1) * 2;
    lVar5 = _malloc_base(lVar4);
    lVar3 = 0;
    if (lVar5 != 0) {
      FUN_1802a82f0(lVar5,pWVar2,lVar4);
      lVar3 = lVar5;
    }
    FUN_180290e40(0);
    FreeEnvironmentStringsW(pWVar2);
  }
  return lVar3;
}


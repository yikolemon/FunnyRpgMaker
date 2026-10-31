/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011d6e0 */

PVOID FUN_14011d6e0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID lpFlsData;
  
  if (DAT_1401ca630 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_1401ca630);
    if (lpFlsData != (PVOID)0xffffffffffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_14011d778:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_1401ca630,(PVOID)0xffffffffffffffff);
      if (BVar1 != 0) {
        lpFlsData = (PVOID)_calloc_base(1,0x80);
        if (lpFlsData == (PVOID)0x0) {
          FlsSetValue(DAT_1401ca630,(PVOID)0x0);
          lpFlsData = (PVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_1401ca630,lpFlsData);
          if (BVar1 != 0) {
            *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
            thunk_FUN_1401212e0(0);
            goto LAB_14011d778;
          }
          FlsSetValue(DAT_1401ca630,(PVOID)0x0);
        }
        thunk_FUN_1401212e0(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140115938();
}


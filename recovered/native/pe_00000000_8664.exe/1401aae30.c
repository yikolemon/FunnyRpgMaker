/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aae30 */

PVOID FUN_1401aae30(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID lpFlsData;
  
  if (DAT_140f29620 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_140f29620);
    if (lpFlsData != (PVOID)0xffffffffffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_1401aaec8:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_140f29620,(PVOID)0xffffffffffffffff);
      if (BVar1 != 0) {
        lpFlsData = (PVOID)_calloc_base(1,0x80);
        if (lpFlsData == (PVOID)0x0) {
          FlsSetValue(DAT_140f29620,(PVOID)0x0);
          lpFlsData = (PVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_140f29620,lpFlsData);
          if (BVar1 != 0) {
            *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
            thunk_FUN_1401aea30(0);
            goto LAB_1401aaec8;
          }
          FlsSetValue(DAT_140f29620,(PVOID)0x0);
        }
        thunk_FUN_1401aea30(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1401a0758();
}

